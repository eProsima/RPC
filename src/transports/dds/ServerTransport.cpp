/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/transports/dds/ServerTransport.h"
#include "rpcdds/transports/dds/components/ServerProcedureEndpoint.h"
#include "rpcdds/protocols/Protocol.h"
#include "rpcdds/exceptions/InitializeException.h"

using namespace eprosima::rpcdds;
using namespace ::transport::dds;

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ServerTransport";

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

::transport::Endpoint* ServerTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
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
