/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/HttpServerTransport.h"
#include "transports/components/TCPEndpoint.h"
#include "strategies/ServerStrategy.h"
#include "transports/messages/HttpMessage.h"
#include "utils/Utilities.h"

#include <boost/bind.hpp>

using namespace eprosima::rpcdds;
using namespace transport;

HttpServerTransport::HttpServerTransport(const std::string &to_connect) : m_tcptransport(to_connect)
{
    m_tcptransport.onBossProcess = boost::bind(&HttpServerTransport::worker, this, _1);
}

HttpServerTransport::~HttpServerTransport()
{
}

void HttpServerTransport::run()
{
    // TODO Will have to verify that a protocol and a strategy was set.
    m_tcptransport.run();
}

void HttpServerTransport::stop()
{
    m_tcptransport.stop();
}

void HttpServerTransport::sendReply(void *data, size_t dataLength, Endpoint *connection)
{
    TCPEndpoint *conn = dynamic_cast<TCPEndpoint*>(connection);
    const HttpMessage *httpMessage = reinterpret_cast<const HttpMessage*>(data);

    if(conn != NULL && httpMessage != NULL)
    {
        conn->resetWriteBuffer();

        if(conn->write("HTTP/1.1 ") &&
                    conn->write(httpMessage->getResponseCode()) &&
                    conn->write(" ") &&
                    conn->write(httpMessage->getResponseStatus()) &&
                    conn->write("\r\n"))
        {
            if(!httpMessage->getBodyData().empty())
            {
                if(conn->write("Content-Length: ") &&
                        conn->write(httpMessage->getBodyData().size()) &&
                        conn->write("\r\nContent-Type: ") &&
                        conn->write(httpMessage->getBodyContentType()) &&
                        conn->write("\r\n\r\n") &&
                        conn->write(httpMessage->getBodyData()))
                {
                    return m_tcptransport.sendReply(conn->getWriteBuffer(), conn->getWriteBufferUsage(), connection);
                }
                else
                {
                    // TODO error.
                }
            }
            else
            {
                if(conn->write("\r\n"))
                {
                    return m_tcptransport.sendReply(conn->getWriteBuffer(), conn->getWriteBufferUsage(), connection);
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
}

int HttpServerTransport::receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint)
{
    // EMPTY Not used.
    return -1;
}

void HttpServerTransport::bossProcess(TCPEndpoint* connection)
{
    getStrategy().schedule(boost::bind(&HttpServerTransport::worker, this, connection));
}

void HttpServerTransport::worker(TCPEndpoint* connection)
{
    int retCode = 0;

    // Initialize buffers.
    if(connection->initializeBuffers())
    {
        do
        {
            HttpMessage httpMessage;

            //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
            while(retCode == 0 && (retCode = readHeaders(connection, httpMessage)) == 1)
            {
                size_t dataToRead = 0;

                // TODO change: first use read in tcp (using 0 in dataToRead, but if the buffer was resized, then use read_some pasing >0 in dataToRead
                // Podria haber un bucle si mientras intenta ser un buffer grande alguien le satura a llamadas.
                while((retCode = m_tcptransport.receive(&connection->getReadBuffer()[connection->getReadBufferFillUse()],
                                connection->getReadBufferEmptySpace(), dataToRead, connection)) > 0)
                {
                    retCode = connection->resizeReadBuffer(retCode);
                }

                if((retCode == 0 || retCode == -2) && dataToRead > 0)
                {
                    connection->increaseReadBufferFillUse(dataToRead);
                }

                // If there is not any data, sleep 100 milliseconds.
                // TODO Mirar si boost tiene espera pasiva como eselect de linux.
                if(dataToRead == 0)
                    sleep(10);
            }

            // If connection close, try read headers.
            if(retCode == -2)
                retCode = readHeaders(connection, httpMessage);

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
                            size_t dataToRead = 0;
                            do
                            {
                                // Read the rest of data that it is needed (content length - the data that was readed an was not processed).
                                dataToRead = httpMessage.getBodyContentLength() - connection->getReadBufferLeaveUsedSpace();

                                retCode = m_tcptransport.receive(&connection->getReadBuffer()[connection->getReadBufferFillUse()],
                                        dataToRead, dataToRead, connection);

                                if((retCode == -2 || retCode == 0) && dataToRead > 0)
                                {
                                    connection->increaseReadBufferFillUse(dataToRead);
                                }
                            }
                            while((retCode == 0) && (dataToRead < (httpMessage.getBodyContentLength() - connection->getReadBufferLeaveUsedSpace())));
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
        } while(retCode == 0); // TODO Keep alive.
    }
    else
    {
        // TODO print error
    }

    connection->finalizeBuffers();
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readMethod(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    const char* const _METHOD_GET = "GET";
    const char* const _METHOD_PUT = "PUT";
    const char* const _METHOD_POST = "POST";
    const char* const _METHOD_DELETE = "DELETE";

    if(connection->getReadBufferLeaveUsedSpace() >= 4)
    {
        if(memcmp(connection->getReadBufferCurrentPointer(), _METHOD_GET, 3) == 0)
        {
            httpMessage.setMethod(HttpMessage::HTTP_METHOD_GET);
            connection->increaseReadBufferCurrentPointer(4);
            return 0;
        }
        else if(memcmp(connection->getReadBufferCurrentPointer(), _METHOD_PUT, 3) == 0)
        {
            httpMessage.setMethod(HttpMessage::HTTP_METHOD_PUT);
            connection->increaseReadBufferCurrentPointer(4);
            return 0;
        }
        else if(connection->getReadBufferLeaveUsedSpace() >= 5)
        {
            if(memcmp(connection->getReadBufferCurrentPointer(), _METHOD_POST, 4) == 0)
            {
                httpMessage.setMethod(HttpMessage::HTTP_METHOD_POST);
                connection->increaseReadBufferCurrentPointer(5);
                return 0;
            }
            else if(connection->getReadBufferLeaveUsedSpace() >= 6)
            {
                if(memcmp(connection->getReadBufferCurrentPointer(), _METHOD_DELETE, 6) == 0)
                {
                    httpMessage.setMethod(HttpMessage::HTTP_METHOD_DELETE);
                    connection->increaseReadBufferCurrentPointer(7);
                    return 0;
                }
            }
            else
                return 1;
        }
        else
            return 1;
    }
    else
        return 1;

    return -1;
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readUri(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    // Find \r.
    char *ptr = (char*)memchr(connection->getReadBufferCurrentPointer(), ' ', connection->getReadBufferLeaveUsedSpace());

    if(ptr != NULL)
    {
            httpMessage.setUri(std::string(connection->getReadBufferCurrentPointer(), ptr - connection->getReadBufferCurrentPointer()));
            connection->increaseReadBufferCurrentPointer(ptr + 1 - connection->getReadBufferCurrentPointer());
            return 0;
    }
    else
    {
        // Check the line is not incorrect.
        if(memchr(connection->getReadBufferCurrentPointer(), '\r', connection->getReadBufferLeaveUsedSpace()) == NULL)
            return 1;
        else
        {
            // TODO Print error.
        }
    }

    return -1;
}

int HttpServerTransport::readVersion(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    if(connection->getReadBufferLeaveUsedSpace() >=  10)
    {
        if(memcmp(connection->getReadBufferCurrentPointer(), "HTTP/1.1\r\n", 10) == 0)
        {
            httpMessage.setVersionCompatible(true);
            connection->increaseReadBufferCurrentPointer(10);
            return 0;
        }
    }
    else
        return 1;

    return -1;
}

int HttpServerTransport::readHeaderLines(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    char *ptr = NULL;

    while((ptr = (char*)memchr(connection->getReadBufferCurrentPointer(), '\r', connection->getReadBufferLeaveUsedSpace())) != NULL)
    {
        if(ptr[1] == '\n')
        {
            // Check if it is the last line.
            if(connection->getReadBufferCurrentPointer() == ptr)
            {
                connection->increaseReadBufferCurrentPointer(2);
                return 0;
            }
            else
            {
                ptrdiff_t length = ptr - connection->getReadBufferCurrentPointer();

                if((length >= 6) && (memcmp(connection->getReadBufferCurrentPointer(), "Host: ", 6) == 0))
                {
                    httpMessage.setHost(std::string(&connection->getReadBufferCurrentPointer()[6], length - 6));
                    connection->increaseReadBufferCurrentPointer(length);
                }
                else if((length >= 16) && (memcmp(connection->getReadBufferCurrentPointer(), "Content-Length: ", 16) == 0))
                {
                    httpMessage.setBodyContentLength(std::string(&connection->getReadBufferCurrentPointer()[16], length - 16));
                    connection->increaseReadBufferCurrentPointer(length);
                }
                else if((length >= 14) && (memcmp(connection->getReadBufferCurrentPointer(), "Content-Type: ", 14) == 0))
                {
                    httpMessage.setBodyContentType(std::string(&connection->getReadBufferCurrentPointer()[14], length - 14));
                    connection->increaseReadBufferCurrentPointer(length);
                }
                else
                {
                    // TODO warning not supported
                }

                connection->increaseReadBufferCurrentPointer(ptr + 2 - connection->getReadBufferCurrentPointer());
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

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readHeaders(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    int retCode = 0;

    // Read HTTP Method
    if(httpMessage.getMethod() == HttpMessage::HTTP_METHOD_INVALID)
    {
        if((retCode = readMethod(connection, httpMessage)) != 0)
            return retCode;
    }

    // Read HTTP URI
    if(httpMessage.getUri().empty())
    {
        if((retCode = readUri(connection, httpMessage)) != 0)
            return retCode;
    }

    // Read Version.
    if(!httpMessage.getVersionCompatible())
    {
        if((retCode = readVersion(connection, httpMessage)) != 0)
            return retCode;
    }

    // Process lines.
    return  readHeaderLines(connection, httpMessage);
}
