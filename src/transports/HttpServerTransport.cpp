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
    
    //TODO Pensar en poner un time out que se sincronice con el del transporte TCP or solamente es necesario el del transporte TCP.
    while(retCode == 0 && (retCode = readHeaders(httpMessage)) == 1)
    {
        size_t dataToRead = 0;

        // TODO change: first use read in tcp (using 0 in dataToRead, but if the buffer was resized, then use read_some pasing >0 in dataToRead
        // Podria haber un bucle si mientras intenta ser un buffer grande alguien le satura a llamadas.
        while((retCode = m_tcptransport.receive(&getReadBuffer()[getReadBufferUsage()], getReadBufferLength() - getReadBufferUsage(), dataToRead, connection)) > 0)
        {
            retCode = resizeReadBuffer(retCode);
        }

        // Retcode will never be -2 from receive because we said to read 0 bytes.
        if(retCode == 0)
        {
            increaseReadBufferUsage(dataToRead);
        }

    }
}

int HttpServerTransport::readMethod(HttpMessage &httpMessage)
{
    
}

// 1 Faltan datos en el buffer. Leer mas.
int HttpServerTransport::readHeaders(HttpMessage &httpMessage)
{
    if(httpMessage.getMethod().empty())
    {
        readMethod(httpMessage);
    }
    if(getReadBufferUsage() > 0)
    {
        printf("%s\n", getReadBuffer());
        return 0;
    }

    return 1;
}
