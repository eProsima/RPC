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
    HttpMessage httpMessage;
    int retCode = 0;

    // Initialize buffers.
    if(connection->initializeBuffers())
    {
        //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
        while(retCode == 0 && (retCode = readHeaders(connection, httpMessage)) == 1)
        {
            size_t dataToRead = 0;

            // TODO change: first use read in tcp (using 0 in dataToRead, but if the buffer was resized, then use read_some pasing >0 in dataToRead
            // Podria haber un bucle si mientras intenta ser un buffer grande alguien le satura a llamadas.
            while((retCode = m_tcptransport.receive(&connection->getReadBuffer()[connection->getReadBufferFillUse()],
                            connection->getReadBufferLength() - connection->getReadBufferFillUse(), dataToRead, connection)) > 0)
            {
                retCode = connection->resizeReadBuffer(retCode);
            }

            // Retcode will never be -2 from receive because we said to read 0 bytes.
            if(retCode == 0)
            {
                connection->increaseReadBufferFillUse(dataToRead);
            }

        }
    }
    else
    {
        // TODO print error
    }
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readMethod(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    const char* const GET = "GET";
    const char* const PUT = "PUT";
    const char* const POST = "POST";
    const char* const DELETE = "DELETE";
    if(connection->getReadBufferLeaveSpace() >= 4)
    {
        if(memcmp(connection->getReadBufferCurrentPointer(), GET, 3) == 0)
        {
            httpMessage.setMethod(GET);
            connection->increaseReadBufferCurrentPointer(4);
            return 0;
        }
        else if(memcmp(connection->getReadBufferCurrentPointer(), PUT, 3) == 0)
        {
            httpMessage.setMethod(PUT);
            connection->increaseReadBufferCurrentPointer(4);
            return 0;
        }
        else if(connection->getReadBufferLeaveSpace() >= 5)
        {
            if(memcmp(connection->getReadBufferCurrentPointer(), POST, 4) == 0)
            {
                httpMessage.setMethod(POST);
                connection->increaseReadBufferCurrentPointer(5);
                return 0;
            }
            else if(connection->getReadBufferLeaveSpace() >= 6)
            {
                if(memcmp(connection->getReadBufferCurrentPointer(), DELETE, 6) == 0)
                {
                    httpMessage.setMethod(DELETE);
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
    char *ptr = (char*)memchr(connection->getReadBufferCurrentPointer(), ' ', connection->getReadBufferLeaveSpace());

    if(ptr != NULL)
    {
            httpMessage.setUri(std::string(connection->getReadBufferCurrentPointer(), ptr - connection->getReadBufferCurrentPointer()));
            connection->increaseReadBufferCurrentPointer(ptr + 1 - connection->getReadBufferCurrentPointer());
            return 0;
    }
    else
        return 1;

    return -1;
}

int HttpServerTransport::readVersion(TCPEndpoint *connection)
{
    /*char *ptr = (char*)memchr(connection->getReadBufferCurrentPointer(), '\r', connection->getReadBufferLeaveSpace());

    if(ptr != NULL)
    {
        if(
            httpMessage.setUri(std::string(connection->getReadBufferCurrentPointer(), ptr - connection->getReadBufferCurrentPointer()));
            connection->increaseReadBufferCurrentPointer(ptr + 1 - connection->getReadBufferCurrentPointer());
            return 0;
    }
    else
        return 1;*/
    return -1;
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readHeaders(TCPEndpoint *connection, HttpMessage &httpMessage)
{
    int retCode = 0;

    // Read HTTP Method
    if(httpMessage.getMethod().empty())
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

    if((retCode = readVersion(connection)) != 0)
        return retCode;

    return retCode;
}
