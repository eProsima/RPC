/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/ServerTransport.h"
#include "exceptions/InitializeException.h"

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
    // TODO Delete map
}

const char* ServerTransport::getType() const
{
    return "DDS";
}

TransportBehaviour ServerTransport::getBehaviour()
{
    return SERVER_BEHAVIOUR;
}

int ServerTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
        ::transport::dds::Transport::Copy_data copy_data, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ServerProcedureEndpoint *pe = new ServerProcedureEndpoint(this);

    if(pe != NULL)
    {
        if(pe->initialize(writertypename, readertypename, copy_data, dataSize) == 0)
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
}
