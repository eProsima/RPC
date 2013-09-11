/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/ProxyTransport.h"
#include "exceptions/InitializeException.h"

#include <string>

using namespace eprosima::rpcdds;
using namespace ::transport::dds;
using namespace ::util::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ProxyTransport";

typedef struct encapsulation
{
    const char *name;
    void *data;
} encapsulation;

ProxyTransport::ProxyTransport(std::string &remoteServiceName, int domainId, long milliseconds) :
    m_remoteServiceName(remoteServiceName), m_timeout(milliseconds), ::transport::ProxyTransport(),
    ::transport::dds::Transport(domainId)
{
}

ProxyTransport::~ProxyTransport()
{
    // TODO Delete map
}

const char* ProxyTransport::getType() const
{
    return "DDS";
}

TransportBehaviour ProxyTransport::getBehaviour()
{
    return PROXY_BEHAVIOUR;
}

int ProxyTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
        ::transport::dds::Transport::Copy_data copy_data, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ProxyProcedureEndpoint *pe = new ProxyProcedureEndpoint(this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, readertypename, copy_data, dataSize) == 0)
        {
            std::pair<std::map<const char*, ProxyProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, ProxyProcedureEndpoint*>(name, pe));

            if(retmap.second == true)
            {
                return 0;
            }
            else
            {
                printf("ERROR<%s::%s>: A procedure endpoint with the same name exists\n", CLASS_NAME, METHOD_NAME);
            }
        }

        delete pe;
    }

    return -1;
}

ReturnMessage ProxyTransport::send(void *request, void* reply)
{
    const char* const METHOD_NAME = "send";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
    encapsulation *encap = (encapsulation*)request;
    std::map<const char*, ProxyProcedureEndpoint*>::iterator it;

    if(request != NULL && reply != NULL)
    {
        it = m_procedureEndpoints.find(encap->name);

        if(it != m_procedureEndpoints.end())
        {
            returnedValue = (*it).second->send(encap->data, reply, m_remoteServiceName.c_str(), m_timeout);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}
