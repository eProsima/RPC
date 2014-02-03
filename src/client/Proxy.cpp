/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/client/Proxy.h"
#include "rpcdds/exceptions/InitializeException.h"
#include "rpcdds/transports/ProxyTransport.h"
#include "rpcdds/protocols/Protocol.h"

static const char* const CLASS_NAME ="eprosima::rpcdds::proxy::Proxy";

using namespace eprosima::rpcdds;
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
