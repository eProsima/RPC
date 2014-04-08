/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/client/Proxy.h"
#include "fastrpc/exceptions/InitializeException.h"
#include "fastrpc/transports/ProxyTransport.h"
#include "fastrpc/protocols/Protocol.h"

static const char* const CLASS_NAME ="eprosima::fastrpc::proxy::Proxy";

using namespace eprosima::fastrpc;
using namespace ::proxy;
using namespace ::transport;
using namespace ::protocol;
using namespace ::exception;

Proxy::Proxy(ProxyTransport &transport, Protocol &protocol) :
    m_transport(transport), m_protocol(protocol)
{
    const char* const METHOD_NAME ="Proxy";
    std::string errorMessage;

    if(protocol.setTransport(transport))
    {
        return;
    }
    else
        errorMessage = "Cannot bind protocol with the transport";

    printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
    throw InitializeException(std::move(errorMessage));
}

Proxy::~Proxy()
{
}
