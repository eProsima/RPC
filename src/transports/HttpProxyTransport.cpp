/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/HttpProxyTransport.h"
#include "transports/messages/HttpMessage.h"

const size_t BUFFER_INITIAL_LENGTH = 1024;
const size_t MAX_INT64_CHARS = 20;

using namespace eprosima::rpcdds;
using namespace ::transport;

HttpProxyTransport::HttpProxyTransport(const std::string &serverAddress) : m_tcptransport(serverAddress),
    m_writeBuffer(NULL), m_writeBufferLength(0), m_writeBufferUse(NULL), m_readBuffer(NULL), m_readBufferLength(0),
    m_readBufferUse(0), m_readBufferCurrentPointer(0)
{
    m_writeBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

    if(m_writeBuffer != NULL)
    {
        m_readBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

        if(m_readBuffer != NULL)
        {
            return;
        }

        free(m_writeBuffer);
        m_writeBuffer = NULL;
    }
    // TODO throw initialization exception.
}

HttpProxyTransport::~HttpProxyTransport()
{
    if(m_writeBuffer != NULL)
        free(m_writeBuffer);
}

bool HttpProxyTransport::connect()
{
    return m_tcptransport.connect();
}

bool HttpProxyTransport::send(const void* buffer, const size_t bufferSize)
{
    const HttpMessage *httpMessage = reinterpret_cast<const HttpMessage*>(buffer);

    if(httpMessage != NULL)
    {
        resetWriteBuffer();
        if(write(httpMessage->getMethodStr()) &&
                    write(" ") &&
                    write(httpMessage->getUri()) &&
                    write(" HTTP/1.1\r\nHost: ") &&
                    write(httpMessage->getHost()) &&
                    write("\r\nConnection: close\r\n"))
        {
            if(!httpMessage->getBodyData().empty())
            {
                if(write("Content-Length: ") &&
                        write(httpMessage->getBodyData().size()) &&
                        write("\r\nContent-Type: ") &&
                        write(httpMessage->getBodyContentType()) &&
                        write("\r\n\r\n") &&
                        write(httpMessage->getBodyData()))
                {
                    return m_tcptransport.send(m_writeBuffer, m_writeBufferUse);
                }
                else
                {
                    // TODO error.
                }
            }
            else
            {
                if(write("\r\n"))
                {
                    return m_tcptransport.send(m_writeBuffer, m_writeBufferUse);
                }
            }

        }
        else
        {
            // TODO print error
        }
    }
    else
    {
        // TODO Error
    }

    return false;
}
size_t HttpProxyTransport::receive(void *buffer, const size_t bufferSize)
{
    /*if(buffer != NULL)
    {
        HttpMessage *httpMessage = reinterpret_cast<HttpMessage*>(buffer);
        int retCode = 0;

        //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
        while(retCode == 0 && (retCode = readHeaders(httpMessage)) == 1)
        {
            size_t dataToRead = 0;

            // TODO change: first use read in tcp (using 0 in dataToRead, but if the buffer was resized, then use read_some pasing >0 in dataToRead
            // Podria haber un bucle si mientras intenta ser un buffer grande alguien le satura a llamadas.
            while((retCode = m_tcptransport.receive(&connection->getReadBuffer()[connection->getReadBufferFillUse()],
                            connection->getReadBufferEmptySpace(), dataToRead, connection)) > 0)
            {
                retCode = connection->resizeReadBuffer(retCode);
            }

            // Retcode will never be -2 from receive because we said to read 0 bytes.
            if(retCode == 0)
            {
                connection->increaseReadBufferFillUse(dataToRead);
            }

        }

            // If process headers was successful.
            if(retCode == 0)
            {
                // Get body.
                if(httpMessage.getBodyContentLength() > 0 && !httpMessage.getBodyContentType().empty())
                {
                    if(connection->getReadBufferLeaveUsedSpace() < httpMessage.getBodyContentLength())
                    {
                        // Check space in buffer to read.
                        if(connection->getReadBufferLeaveSpace() >= httpMessage.getBodyContentLength() ||
                                (retCode = connection->resizeReadBuffer(httpMessage.getBodyContentLength() - connection->getReadBufferLeaveSpace())) == 0)
                        {
                            // TODO Timeout
                            do
                            {
                                // Read the rest of data that it is needed (content length - the data that was readed an was not processed).
                                size_t dataToRead = httpMessage.getBodyContentLength() - connection->getReadBufferLeaveUsedSpace();

                                retCode = m_tcptransport.receive(&connection->getReadBuffer()[connection->getReadBufferFillUse()],
                                        dataToRead, dataToRead, connection);

                                if(retCode == -2 || retCode == 0)
                                {
                                    connection->increaseReadBufferFillUse(dataToRead);
                                }
                            }
                            while(retCode == -2);
                        }
                    }

                    // Get Body
                    if(retCode == 0)
                    {
                        httpMessage.setBodyData(std::string(connection->getReadBufferCurrentPointer(), httpMessage.getBodyContentLength()));
                        connection->increaseReadBufferCurrentPointer(httpMessage.getBodyContentLength());
                    }
                }
                else if(httpMessage.getBodyContentLength() > 0)
                {
                    // TODO Process Error. Jump message. Print error.
                    retCode = -1;
                }

                // Send to protocol
                if(retCode == 0)
                {
                    getCallback()(getLinkedProtocol(), &httpMessage, 0, connection);
                    connection->refillReadBuffer();
                }
            }
    }
    else
    {
        // TODO print error.
    }*/

    return 0;
}

bool HttpProxyTransport::resizeWriteBuffer(size_t minSize)
{
    if((m_writeBufferUse + minSize) <= (2 * m_writeBufferLength))
    {
        m_writeBuffer = (char*)realloc(m_writeBuffer, 2 * m_writeBufferLength);

        if(m_writeBuffer != NULL)
        {
            m_writeBufferLength *= 2;
            return true;
        }
    }
    else
    {
        m_writeBuffer = (char*)realloc(m_writeBuffer, m_writeBufferUse + minSize);

        if(m_writeBuffer != NULL)
        {
            m_writeBufferLength = m_writeBufferUse + minSize;
            return true;
        }
    }

    return false;
}

bool HttpProxyTransport::write(const std::string &str)
{
    if((str.size() + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(str.size()))
    {
        memcpy(&m_writeBuffer[m_writeBufferUse], str.c_str(), str.size());
        m_writeBufferUse += str.size();
        printf("Buffer = %s\n", m_writeBuffer);
        return true;
    }

    return false;
}

bool HttpProxyTransport::write(const uint64_t uint64)
{
    if((MAX_INT64_CHARS + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(MAX_INT64_CHARS))
    {
        m_writeBufferUse += sprintf(&m_writeBuffer[m_writeBufferUse], "%lu", uint64);
        printf("Buffer = %s\n", m_writeBuffer);
        return true;
    }

    return false;
}
