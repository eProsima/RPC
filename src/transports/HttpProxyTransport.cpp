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
    m_writeBuffer(NULL), m_writeBufferLength(0), m_writeBufferUse(0), m_readBuffer(NULL), m_readBufferLength(0),
    m_readBufferUse(0), m_readBufferCurrentPointer(0)
{
    m_writeBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

    if(m_writeBuffer != NULL)
    {
        m_readBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

        if(m_readBuffer != NULL)
        {
            m_readBufferLength = BUFFER_INITIAL_LENGTH;
            m_writeBufferLength = BUFFER_INITIAL_LENGTH;
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
size_t HttpProxyTransport::receive(void *buffer, const size_t bufferSize, size_t &dataToRead)
{
    if(buffer != NULL)
    {
        HttpMessage *httpMessage = reinterpret_cast<HttpMessage*>(buffer);
        int retCode = 0;

        //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
        while(retCode == 0 && (retCode = readHeaders(*httpMessage)) == 1)
        {
            size_t dataToRead = 0;

            // TODO change: first use read in tcp (using 0 in dataToRead, but if the buffer was resized, then use read_some pasing >0 in dataToRead
            // Podria haber un bucle si mientras intenta ser un buffer grande alguien le satura a llamadas.
            while((retCode = m_tcptransport.receive(&m_readBuffer[m_readBufferUse],
                            getReadBufferEmptySpace(), dataToRead)) > 0)
            {
                retCode = resizeReadBuffer(retCode);
            }

            // Retcode will never be -2 from receive because we said to read 0 bytes.
            if((retCode == 0 || retCode == -2) && dataToRead > 0)
            {
                increaseReadBufferFillUse(dataToRead);
            }

            // If there is not any data, sleep 100 milliseconds.
            // TODO Mirar si boost tiene espera pasiva como eselect de linux.
            if(dataToRead == 0)
                sleep(10);
        }

        // If connection close, try read headers.
        if(retCode == -2)
            retCode = readHeaders(*httpMessage);

        // If process headers was successful.
        if(retCode == 0)
        {
            // Get body.
            if(httpMessage->getBodyContentLength() > 0 && !httpMessage->getBodyContentType().empty())
            {
                if(getReadBufferLeaveUsedSpace() < httpMessage->getBodyContentLength())
                {
                    // Check space in buffer to read.
                    if(getReadBufferLeaveSpace() >= httpMessage->getBodyContentLength() ||
                            (retCode = resizeReadBuffer(httpMessage->getBodyContentLength() - getReadBufferLeaveSpace())) == 0)
                    {
                        // TODO Timeout
                        do
                        {
                            // Read the rest of data that it is needed (content length - the data that was readed an was not processed).
                            size_t dataToRead = httpMessage->getBodyContentLength() - getReadBufferLeaveUsedSpace();

                            retCode = m_tcptransport.receive(&m_readBuffer[m_readBufferUse],
                                    dataToRead, dataToRead);

                            if((retCode == -2 || retCode == 0) && dataToRead > 0)
                            {
                                increaseReadBufferFillUse(dataToRead);
                            }
                        }
                        while((retCode == 0) && (dataToRead < (httpMessage->getBodyContentLength() - getReadBufferLeaveUsedSpace())));
                    }
                }

                // Get Body
                if(retCode == 0)
                {
                    httpMessage->setBodyData(std::string(&m_readBuffer[m_readBufferCurrentPointer], httpMessage->getBodyContentLength()));
                    increaseReadBufferCurrentPointer(httpMessage->getBodyContentLength());
                }
            }
            else if(httpMessage->getBodyContentLength() > 0)
            {
                // TODO Process Error. Jump message. Print error.
                retCode = -1;
            }

            // Send to protocol
            if(retCode == 0)
            {
                refillReadBuffer();
                return 1;
            }
        }
    }
    else
    {
        // TODO print error.
    }

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

// 0 OK
// -1 Error.
int HttpProxyTransport::resizeReadBuffer(size_t minSize)
{
    if((m_readBufferUse + minSize) <= (2 * m_readBufferLength))
    {
        m_readBuffer = (char*)realloc(m_readBuffer, 2 * m_readBufferLength);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength *= 2;
            return 0;
        }
    }
    else
    {
        m_readBuffer = (char*)realloc(m_readBuffer, m_readBufferUse + minSize);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength = m_readBufferUse + minSize;
            return 0;
        }
    }

    return -1;
}

void HttpProxyTransport::refillReadBuffer()
{
    if(getReadBufferLeaveUsedSpace() > 0)
    {
        memmove(m_readBuffer, &m_readBuffer[m_readBufferCurrentPointer], getReadBufferLeaveUsedSpace());
    }

    m_readBufferUse = getReadBufferLeaveUsedSpace();
    m_readBufferCurrentPointer = 0;
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpProxyTransport::readHeaders(HttpMessage &httpMessage)
{
    int retCode = 0;

    // Read Version.
    if(!httpMessage.getVersionCompatible())
    {
        if((retCode = readVersion(httpMessage)) != 0)
            return retCode;
    }

    // Read response code
    if(httpMessage.getResponseCode() == 0)
    {
        if((retCode = readResponseCode(httpMessage)) != 0)
            return retCode;
    }

    // Read response code
    if(!httpMessage.getContainsResponseStatus())
    {
        if((retCode = readResponseStatus(httpMessage)) != 0)
            return retCode;
    }

    // Process lines.
    return  readHeaderLines(httpMessage);
}

int HttpProxyTransport::readVersion(HttpMessage &httpMessage)
{
    if(getReadBufferLeaveUsedSpace() >=  9)
    {
        if(memcmp(getReadBufferCurrentPointer(), "HTTP/1.1 ", 9) == 0)
        {
            httpMessage.setVersionCompatible(true);
            increaseReadBufferCurrentPointer(9);
            return 0;
        }
    }
    else
        return 1;

    return -1;
}

int HttpProxyTransport::readResponseCode(HttpMessage &httpMessage)
{
    if(getReadBufferLeaveUsedSpace() >=  6)
    {
        char *p = NULL;
        int code = strtol(getReadBufferCurrentPointer(), &p, 10);

        if(p != NULL)
        {
            httpMessage.setResponseCode(code);
            increaseReadBufferCurrentPointer(p  + 1 - getReadBufferCurrentPointer());
            return 0;
        }
    }
    else
        return 1;

    return -1;
}

int HttpProxyTransport::readHeaderLines(HttpMessage &httpMessage)
{
    char *ptr = NULL;

    while((ptr = (char*)memchr(getReadBufferCurrentPointer(), '\r', getReadBufferLeaveUsedSpace())) != NULL)
    {
        if(ptr[1] == '\n')
        {
            // Check if it is the last line.
            if(getReadBufferCurrentPointer() == ptr)
            {
                increaseReadBufferCurrentPointer(2);
                return 0;
            }
            else
            {
                ptrdiff_t length = ptr - getReadBufferCurrentPointer();

                if((length >= 16) && (memcmp(getReadBufferCurrentPointer(), "Content-Length: ", 16) == 0))
                {
                    httpMessage.setBodyContentLength(std::string(&getReadBufferCurrentPointer()[16], length - 16));
                    increaseReadBufferCurrentPointer(length);
                }
                else if((length >= 14) && (memcmp(getReadBufferCurrentPointer(), "Content-Type: ", 14) == 0))
                {
                    httpMessage.setBodyContentType(std::string(&getReadBufferCurrentPointer()[14], length - 14));
                    increaseReadBufferCurrentPointer(length);
                }
                else
                {
                    // TODO warning not supported
                }

                increaseReadBufferCurrentPointer(ptr + 2 - getReadBufferCurrentPointer());
            }
        }
        else
        {
            // TODO print error. mal formed.
            return -1;
        }
    }

    return 1;
}

int HttpProxyTransport::readResponseStatus(HttpMessage &httpMessage)
{
    char *ptr = (char*)memchr(getReadBufferCurrentPointer(), '\r', getReadBufferLeaveUsedSpace());

    if(ptr != NULL)
    {
        if(ptr[1] == '\n')
        {
            ptrdiff_t length = ptr - getReadBufferCurrentPointer();

            if(length > 0)
            {
                httpMessage.setResponseStatus(std::string(getReadBufferCurrentPointer(), length));
                httpMessage.setContainsResponseStatus(true);
                increaseReadBufferCurrentPointer(length);
            }

            increaseReadBufferCurrentPointer(2);
            return 0;
        }
        else
        {
            // TODO print error. mal formed.
            return -1;
        }
    }

    return 1;
}
