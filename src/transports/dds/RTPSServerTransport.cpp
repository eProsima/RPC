/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_FASTRTPS

#include <transports/dds/RTPSServerTransport.h>
#include <transports/dds/components/RTPSServerProcedureEndpoint.h>
#include <protocols/Protocol.h>
#include <exceptions/InitializeException.h>

using namespace eprosima::rpc;
using namespace ::transport::dds;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSServerTransport";

RTPSServerTransport::RTPSServerTransport(const char* const serviceName, const char* const instanceName, int domainId) :
    ::transport::dds::RTPSTransport(domainId),
    m_serviceName(serviceName), m_instanceName(instanceName)
{
    if(serviceName != NULL)
        m_serviceName = serviceName;
    else
        m_serviceName = "Service";

    if(instanceName != NULL)
        m_instanceName = instanceName;
}

RTPSServerTransport::RTPSServerTransport(eprosima::fastrtps::Participant *participant, const char* const serviceName, const char* const instanceName) :
    ::transport::dds::RTPSTransport(participant),
    m_serviceName(serviceName), m_instanceName(instanceName)
{
    if(serviceName != NULL)
        m_serviceName = serviceName;
    else
        m_serviceName = "Service";

    if(instanceName != NULL)
        m_instanceName = instanceName;
}

RTPSServerTransport::~RTPSServerTransport()
{
    std::map<const char*, RTPSServerProcedureEndpoint*>::iterator it = m_procedureEndpoints.begin();

    for(; it != m_procedureEndpoints.end(); ++it)
    {
        delete(it->second);
    }

    m_procedureEndpoints.erase(m_procedureEndpoints.begin(), m_procedureEndpoints.end());
}

const char* RTPSServerTransport::getType() const
{
    return "DDS";
}

::transport::Endpoint* RTPSServerTransport::createProcedureEndpoint(const char *name, const char *writertypename,
        const char *writertopicname, const char *readertypename, const char *readertopicname,
        RTPSTransport::Create_data create_data, RTPSTransport::Copy_data /*copy_data*/, RTPSTransport::Destroy_data destroy_data,
        RTPSTransport::ProcessFunc processFunc, size_t dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    RTPSServerProcedureEndpoint *pe = new RTPSServerProcedureEndpoint(*this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, writertopicname, readertypename, readertopicname, create_data, destroy_data, processFunc, dataSize) == 0)
        {
            std::pair<std::map<const char*, RTPSServerProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, RTPSServerProcedureEndpoint*>(name, pe));

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

void RTPSServerTransport::process(RTPSServerProcedureEndpoint *endpoint, void *data)
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

void RTPSServerTransport::sendReply(void *data, size_t /*dataLength*/, ::transport::Endpoint *endpoint)
{
    RTPSServerProcedureEndpoint *procedure = dynamic_cast<RTPSServerProcedureEndpoint*>(endpoint);

    if(procedure != NULL)
    {
        procedure->sendReply(data);
    }
    // TODO Launch exception
}

void RTPSServerTransport::run()
{
    const char* const METHOD_NAME = "run";
    std::map<const char*, RTPSServerProcedureEndpoint*>::iterator it;

    for(it = m_procedureEndpoints.begin(); it != m_procedureEndpoints.end(); ++it)
    {
        // TODO Launch exception
        if((*it).second->start(m_serviceName.c_str(), m_instanceName.c_str()) != 0)
            printf("ERROR<%s::%s>: The procedure endpoint %s cannot be started\n", CLASS_NAME, METHOD_NAME, (*it).first);
    }
}

void RTPSServerTransport::stop()
{
    std::map<const char*, RTPSServerProcedureEndpoint*>::iterator it;

    for(it = m_procedureEndpoints.begin(); it != m_procedureEndpoints.end(); ++it)
    {
        (*it).second->stop();
    }
}

int RTPSServerTransport::receive(char* /*buffer*/, size_t /*bufferLength*/, size_t& /*dataToRead*/, ::transport::Endpoint* /*endpoint*/)
{
    // EMPTY. Not used.
    return -1;
}

const char* RTPSServerTransport::getRemoteServiceName() const
{
    return m_serviceName.c_str();
}

#endif // RPC_WITH_FASTRTPS
