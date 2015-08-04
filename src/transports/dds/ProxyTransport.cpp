/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <transports/dds/ProxyTransport.h>
#include <transports/dds/components/ProxyProcedureEndpoint.h>
#include "AsyncThread.h"
#include <exceptions/InitializeException.h>
#include <utils/dds/Middleware.h>

#include <string>

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::util::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::ProxyTransport";

typedef struct encapsulation
{
    const char *name;
    void *data;
} encapsulation;

ProxyTransport::ProxyTransport(const char* const remoteServiceName, const char* const instanceName, int domainId, long milliseconds) :
    ::transport::ProxyTransport(), ::transport::dds::Transport(domainId),
    m_timeout(milliseconds), m_asyncThread(NULL)
{
    const char* const METHOD_NAME = "ProxyTransport";

    if(remoteServiceName != NULL)
        m_remoteServiceName = remoteServiceName;
    else
        m_remoteServiceName = "Service";

    if(instanceName != NULL)
        m_instanceName = instanceName;

    m_asyncThread = new AsyncThread();

    if(m_asyncThread != NULL)
    {
    // TODO Send exception
        if(m_asyncThread->init() != 0)
            printf("ERROR<%s::%s>: Cannot initialize the asynchronous thread\n", CLASS_NAME, METHOD_NAME);
    }
}

ProxyTransport::~ProxyTransport()
{
    std::map<const char*, ProxyProcedureEndpoint*>::iterator it = m_procedureEndpoints.begin();

    for(; it != m_procedureEndpoints.end(); ++it)
    {
        delete(it->second);
    }

    m_procedureEndpoints.erase(m_procedureEndpoints.begin(), m_procedureEndpoints.end());

    m_asyncThread->exit();
    delete m_asyncThread;
}

const char* ProxyTransport::getType() const
{
    return "DDS";
}

const char* ProxyTransport::getRemoteServiceName() const
{
    return m_remoteServiceName.c_str();
}

const char* ProxyTransport::getInstanceName() const
{
    return m_instanceName.c_str();
}

long ProxyTransport::getTimeout()
{
    return m_timeout;
}

::transport::Endpoint* ProxyTransport::createProcedureEndpoint(const char *name, const char *writertypename,
        const char *writertopicname, const char *readertypename,
        const char *readertopicname, bool eprosima_types,
        Transport::Create_data create_data, Transport::Copy_data copy_data,
        Transport::Destroy_data destroy_data, Transport::ProcessFunc processFunc, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ProxyProcedureEndpoint *pe = new ProxyProcedureEndpoint(*this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, writertopicname, readertypename, readertopicname,
                    eprosima_types, copy_data, dataSize) == 0)
        {
            std::pair<std::map<const char*, ProxyProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, ProxyProcedureEndpoint*>(name, pe));

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

int ProxyTransport::addAsyncTask(DDS::QueryCondition *query, DDSAsyncTask *task, long timeout)
{
    return m_asyncThread->addTask(query, task, timeout);
}

void ProxyTransport::deleteAssociatedAsyncTasks(ProxyProcedureEndpoint *pe)
{
    const char* const METHOD_NAME = "deleteAssociatedAsyncTasks";

    if(pe != NULL)
    {
        m_asyncThread->deleteAssociatedAsyncTasks(pe);
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}

#endif // RPC_WITH_RTIDDS
