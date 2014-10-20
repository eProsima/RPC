/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/transports/dds/ServerTransport.h"
#include "fastrpc/transports/dds/components/ServerProcedureEndpoint.h"
#include "fastrpc/protocols/Protocol.h"
#include "fastrpc/exceptions/InitializeException.h"
#include "fastrpc/utils/dds/Middleware.h"

using namespace eprosima::rpc;
using namespace ::transport::dds;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::ServerTransport";

ServerTransport::ServerTransport(std::string &serviceName, int domainId) :
    m_serviceName(serviceName), ::transport::ServerTransport(),
    ::transport::dds::Transport(domainId)
{
}

ServerTransport::~ServerTransport()
{
    std::map<const char*, ServerProcedureEndpoint*>::iterator it = m_procedureEndpoints.begin();

    for(; it != m_procedureEndpoints.end(); ++it)
    {
        delete(it->second);
    }

    m_procedureEndpoints.erase(m_procedureEndpoints.begin(), m_procedureEndpoints.end());
}

const char* ServerTransport::getType() const
{
    return "DDS";
}

::transport::Endpoint* ServerTransport::createProcedureEndpoint(const char *name, const char *writertypename,
        const char *readertypename, bool eprosima_types,
        Transport::Create_data create_data, Transport::Copy_data copy_data,
        Transport::Destroy_data destroy_data, Transport::ProcessFunc processFunc, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ServerProcedureEndpoint *pe = new ServerProcedureEndpoint(*this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, readertypename, create_data, destroy_data, processFunc, dataSize) == 0)
        {
            std::pair<std::map<const char*, ServerProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, ServerProcedureEndpoint*>(name, pe));

            if(retmap.second == true)
            {
                return pe;
            }
            else
            {
                printf("ERROR<%s::%s>: A procedure endpoint with the same name exists\n", CLASS_NAME, METHOD_NAME);
            }
        }

        delete pe;
    }

    return NULL;
}

void ServerTransport::process(ServerProcedureEndpoint *endpoint, void *data)
{
    const char* const METHOD_NAME = "process";

    if(data != NULL)
    {
        endpoint->getProcessFunc()(getLinkedProtocol(), data, endpoint); 
        free(data);
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter\n", CLASS_NAME, METHOD_NAME);
    }
}

void ServerTransport::sendReply(void *data, size_t dataLength, ::transport::Endpoint *endpoint)
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

int ServerTransport::receive(char *buffer, size_t bufferLength, size_t &dataToRead, ::transport::Endpoint *endpoint)
{
    // EMPTY. Not used.
    return -1;
}
