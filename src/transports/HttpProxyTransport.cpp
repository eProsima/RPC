/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/HttpProxyTransport.h"
#include "transports/messages/HttpMessage.h"

using namespace eprosima::rpcdds;
using namespace ::transport;

HttpProxyTransport::HttpProxyTransport(const std::string &serverAddress) : m_tcptransport(serverAddress)
{
}

HttpProxyTransport::~HttpProxyTransport()
{
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
        HttpTransport::resetWriteBuffer();
        if(HttpTransport::write(httpMessage->getMethodStr()) &&
                    HttpTransport::write(" ") &&
                    HttpTransport::write(httpMessage->getUri()) &&
                    HttpTransport::write(" HTTP/1.1\r\nHost: ") &&
                    HttpTransport::write(httpMessage->getHost()) &&
                    HttpTransport::write("\r\nConnection: close\r\n"))
        {
            if(!httpMessage->getBodyData().empty())
            {
                if(HttpTransport::write("Content-Length: ") &&
                        HttpTransport::write(httpMessage->getBodyData().size()) &&
                        HttpTransport::write("\r\nContent-Type: ") &&
                        HttpTransport::write(httpMessage->getBodyContentType()) &&
                        HttpTransport::write("\r\n\r\n") &&
                        HttpTransport::write(httpMessage->getBodyData()))
                {
                    return m_tcptransport.send(getWriteBuffer(), getWriteBufferUsage());
                }
                else
                {
                    // TODO error.
                }
            }
            else
            {
                if(HttpTransport::write("\r\n"))
                {
                    return m_tcptransport.send(getWriteBuffer(), getWriteBufferUsage());
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
size_t HttpProxyTransport::receive(char *buffer, const size_t bufferSize)
{
    return 0;
}
