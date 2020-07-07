/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <transports/HttpProxyTransport.h>
#include <transports/messages/HttpMessage.h>
#include <utils/Utilities.h>

#include <string.h>
#include <stdexcept>

const size_t BUFFER_INITIAL_LENGTH = 1024;
const size_t MAX_INT64_CHARS = 20;

using namespace eprosima::rpc;
using namespace ::transport;

std::string getAddress(const char* const &serverAddress)
{
	// Check protocol
	std::string serverAddress_s(serverAddress);
	std::string address = serverAddress_s;

	size_t index;
	index = address.find("://");
	if(index != std::string::npos) {
		std::string protocol = serverAddress_s.substr(0, index);
		if(protocol.compare("http")==0) {
			address += ":80";
		} else if(protocol.compare("https")==0) {
			address += ":443";
		} else {
			throw std::invalid_argument("Unknown HTTP protocol: " + protocol);
		}
		address = address.substr(index + 3, address.size());		
	}

    return address;
}

HttpProxyTransport::HttpProxyTransport(const char* const &serverAddress) : m_tcptransport(getAddress(serverAddress).c_str()),
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

bool HttpProxyTransport::send(const void* buffer, const size_t /*bufferSize*/)
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

int HttpProxyTransport::receive(void *buffer, const size_t /*bufferSize*/, size_t& /*dataToRead*/)
{
    if(buffer != NULL)
    {
        HttpMessage *httpMessage = reinterpret_cast<HttpMessage*>(buffer);
        int retCode = 0;

        //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
        while(retCode == 0 && (retCode = readHeaders(*httpMessage)) == -1)
        {
            size_t dataToRead = 0;

            // if there are less than 100 bytes. Increase buffer.
            if(getReadBufferEmptySpace() < 100)
            {
                retCode = resizeReadBuffer(100);

                if(retCode != 0)
                {
                    // TODO Error resizing buffer..
                    return -1;
                }
            }

            // Read TCP buffer.
            retCode = m_tcptransport.receive(&m_readBuffer[m_readBufferUse],
                            getReadBufferEmptySpace(), dataToRead);

            if(retCode >= 0)
            {
                if(dataToRead > 0)
                    increaseReadBufferFillUse(dataToRead);
                else
                    sleep(10);
            }
        }

        // If connection close, try read headers.
        if(retCode == 1)
            retCode = readHeaders(*httpMessage);

        // If process headers was successful.
        if(retCode >= 0)
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
                        // Read the rest of data that it is needed (content length - the data that was readed an was not processed).
                        size_t dataToRead = httpMessage->getBodyContentLength() - getReadBufferLeaveUsedSpace();

                        retCode = m_tcptransport.receive(&m_readBuffer[m_readBufferUse],
                                dataToRead, dataToRead);

                        if(retCode >= 0)
                        {
                            increaseReadBufferFillUse(dataToRead);
                        }
                    }
                }

                // Get Body
                if(retCode >= 0 && getReadBufferLeaveUsedSpace() >= httpMessage->getBodyContentLength())
                {
                    httpMessage->setBodyData(std::string(&m_readBuffer[m_readBufferCurrentPointer], httpMessage->getBodyContentLength()));
                    increaseReadBufferCurrentPointer(httpMessage->getBodyContentLength());
                }
                else
                {
                    // TODO Error.
                }
            }
            else if(httpMessage->getBodyContentLength() > 0)
            {
                // TODO Process Error. Jump message. Print error.
                retCode = -1;
            }

            // Send to protocol
            if(retCode >= 0)
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

    return -1;
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
        return true;
    }

    return false;
}

bool HttpProxyTransport::write(const uint64_t uint64)
{
    if((MAX_INT64_CHARS + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(MAX_INT64_CHARS))
    {
        m_writeBufferUse += sprintf(&m_writeBuffer[m_writeBufferUse], "%lu", uint64);
        return true;
    }

    return false;
}

// 0 OK
// -1 Error.
int HttpProxyTransport::resizeReadBuffer(size_t minSize)
{
    if((m_readBufferLength + minSize) <= (2 * m_readBufferLength))
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
        m_readBuffer = (char*)realloc(m_readBuffer, m_readBufferLength + minSize);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength = m_readBufferLength + minSize;
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

// 0 OK
// -1 Error Faltan datos en el buffer. Leer mas.
// -2 Other error
int HttpProxyTransport::readHeaders(HttpMessage &httpMessage)
{
    int retCode = -2;

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
        return -1;

    return -2;
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
        return -1;

    return -2;
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

//printf("Processing : %s\n", getReadBufferCurrentPointer());

                if((length >= 16) && (memcmp(getReadBufferCurrentPointer(), "Content-Length: ", 16) == 0))
                {
//printf("OK Content length\n");
                    httpMessage.setBodyContentLength(std::string(&getReadBufferCurrentPointer()[16], length - 16));
                    increaseReadBufferCurrentPointer(length);
                }
                else if((length >= 14) && (memcmp(getReadBufferCurrentPointer(), "Content-Type: ", 14) == 0))
                {

                    httpMessage.setBodyContentType(std::string(&getReadBufferCurrentPointer()[14], length - 14));
                    increaseReadBufferCurrentPointer(length);
//printf("OK Content type %s\n", httpMessage.getBodyContentType().c_str()); 
                }
                else
                {
//printf("MIERDA\n");
                    // TODO warning not supported
                }

                increaseReadBufferCurrentPointer(ptr + 2 - getReadBufferCurrentPointer());
            }
        }
        else
        {
            // TODO print error. mal formed.
            return -2;
        }
    }

    return -1;
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
                //httpMessage.setContainsResponseStatus(true);
                increaseReadBufferCurrentPointer(length);
            }

            increaseReadBufferCurrentPointer(2);
            return 0;
        }
        else
        {
            // TODO print error. mal formed.
            return -2;
        }
    }

    return -1;
}
