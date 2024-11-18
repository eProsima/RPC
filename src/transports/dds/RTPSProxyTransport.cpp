/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#include <config.h>

#if RPC_WITH_FASTDDS

#include <transports/dds/RTPSProxyTransport.h>
#include <transports/dds/components/RTPSProxyProcedureEndpoint.h>
#include "AsyncThread.h"
#include <exceptions/InitializeException.h>

#include <string>

namespace eprosima {
namespace rpc {

using namespace transport::dds;
using namespace exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSProxyTransport";

typedef struct encapsulation
{
    const char* name;
    void* data;
} encapsulation;

RTPSProxyTransport::RTPSProxyTransport(
        const char* const remoteServiceName,
        const char* const instanceName,
        int domainId,
        long milliseconds)
    : ProxyTransport()
    , RTPSTransport(domainId)
    , m_timeout(milliseconds)
{
    if (remoteServiceName != NULL)
    {
        m_remoteServiceName = remoteServiceName;
    }
    else
    {
        m_remoteServiceName = "Service";
    }

    if (instanceName != NULL)
    {
        m_instanceName = instanceName;
    }
}

RTPSProxyTransport::RTPSProxyTransport(
        fastdds::dds::DomainParticipant* participant,
        const char* const remoteServiceName,
        const char* const instanceName,
        long milliseconds)
    : ProxyTransport()
    , RTPSTransport(participant)
    , m_timeout(milliseconds)
{
    if (remoteServiceName != NULL)
    {
        m_remoteServiceName = remoteServiceName;
    }
    else
    {
        m_remoteServiceName = "Service";
    }

    if (instanceName != NULL)
    {
        m_instanceName = instanceName;
    }
}

RTPSProxyTransport::~RTPSProxyTransport()
{
    std::map<const char*, RTPSProxyProcedureEndpoint*>::iterator it = m_procedureEndpoints.begin();

    for (; it != m_procedureEndpoints.end(); ++it)
    {
        delete(it->second);
    }
    m_procedureEndpoints.erase(m_procedureEndpoints.begin(), m_procedureEndpoints.end());
}

const char* RTPSProxyTransport::getType() const
{
    return "DDS";
}

const char* RTPSProxyTransport::getRemoteServiceName() const
{
    return m_remoteServiceName.c_str();
}

const char* RTPSProxyTransport::getInstanceName() const
{
    return m_instanceName.c_str();
}

long RTPSProxyTransport::getTimeout()
{
    return m_timeout;
}

transport::Endpoint* RTPSProxyTransport::createProcedureEndpoint(
        const char* name,
        const char* writertypename,
        const char* writertopicname,
        const char* readertypename,
        const char* readertopicname,
        RTPSTransport::Create_data create_data,
        RTPSTransport::Copy_data copy_data,
        RTPSTransport::Destroy_data destroy_data,
        RTPSTransport::ProcessFunc /*processFunc*/,
        size_t dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    RTPSProxyProcedureEndpoint* pe = new RTPSProxyProcedureEndpoint(*this);

    if (pe != NULL)
    {
        if (pe->initialize(name, writertypename, writertopicname, readertypename, readertopicname, create_data,
                copy_data, destroy_data, dataSize) == 0)
        {
            std::pair<std::map<const char*, RTPSProxyProcedureEndpoint*>::iterator,
                    bool> retmap = m_procedureEndpoints.insert(std::pair<const char*,
                            RTPSProxyProcedureEndpoint*>(name, pe));

            if (retmap.second == true)
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

} // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS
