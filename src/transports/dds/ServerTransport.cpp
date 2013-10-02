/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/ServerTransport.h"
#include "transports/dds/components/ServerProcedureEndpoint.h"
#include "protocols/Protocol.h"
#include "exceptions/InitializeException.h"

using namespace eprosima::rpcdds;
using namespace ::transport::dds;

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ServerTransport";

typedef struct encapsulation
{
    ServerProcedureEndpoint *endpoint;
    void *data;
} encapsulation;

ServerTransport::ServerTransport(std::string &serviceName, int domainId) :
    m_serviceName(serviceName), ::transport::ServerTransport(),
    ::transport::dds::Transport(domainId)
{
}

ServerTransport::~ServerTransport()
{
    // TODO Delete map
}

const char* ServerTransport::getType() const
{
    return "DDS";
}

int ServerTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
        Transport::Initialize_data initialize_data, Transport::Copy_data copy_data,
        Transport::Finalize_data finalize_data, Transport::ProcessFunc processFunc, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ServerProcedureEndpoint *pe = new ServerProcedureEndpoint(*this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, readertypename, initialize_data, finalize_data, processFunc, dataSize) == 0)
        {
            std::pair<std::map<const char*, ServerProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, ServerProcedureEndpoint*>(name, pe));

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

void ServerTransport::process(eprosima::rpcdds::transport::ServerTransport &transport, void *data)
{
    const char* const METHOD_NAME = "process";
    encapsulation *encap = (encapsulation*)data;

    if(encap != NULL)
    {
        encap->endpoint->getProcessFunc()(transport.getLinkedProtocol(), encap->data, encap->endpoint); 
        free(encap);
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter\n", CLASS_NAME, METHOD_NAME);
    }
}

void ServerTransport::sendReply(void *data, Endpoint *endpoint)
{
    ServerProcedureEndpoint *procedure = dynamic_cast<ServerProcedureEndpoint*>(endpoint);

    if(procedure != NULL)
    {
        procedure->sendReply(data);
    }
    // TODO Launch exception
}

void ServerTransport::run()
{
    const char* const METHOD_NAME = "run";
    std::map<const char*, ServerProcedureEndpoint*>::iterator it;

    for(it = m_procedureEndpoints.begin(); it != m_procedureEndpoints.end(); ++it)
    {
        // TODO Launch exception
        if((*it).second->start(m_serviceName) != 0)
            printf("ERROR<%s::%s>: The procedure endpoint %s cannot be started\n", CLASS_NAME, METHOD_NAME, (*it).first);
    }
}

void ServerTransport::stop()
{
    //TODO
}
