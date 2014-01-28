/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/transports/dds/ProxyTransport.h"
#include "rpcdds/transports/dds/components/ProxyProcedureEndpoint.h"
#include "rpcdds/exceptions/InitializeException.h"

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
    const char* const METHOD_NAME = "ProxyTransport";
    // TODO Send exception
    if(m_asyncThread.init() != 0)
        printf("ERROR<%s::%s>: Cannot initialize the asynchronous thread\n", CLASS_NAME, METHOD_NAME);
}

ProxyTransport::~ProxyTransport()
{
    std::map<const char*, ProxyProcedureEndpoint*>::iterator it = m_procedureEndpoints.begin();

    for(; it != m_procedureEndpoints.end(); ++it)
    {
        delete(it->second);
    }

    m_procedureEndpoints.erase(m_procedureEndpoints.begin(), m_procedureEndpoints.end());

    m_asyncThread.exit();
}

const char* ProxyTransport::getType() const
{
    return "DDS";
}

std::string& ProxyTransport::getRemoteServiceName()
{
    return m_remoteServiceName;
}

long ProxyTransport::getTimeout()
{
    return m_timeout;
}

::transport::Endpoint* ProxyTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
        Transport::Initialize_data initialize_data, Transport::Copy_data copy_data,
        Transport::Finalize_data finalize_data, Transport::ProcessFunc processFunc, int dataSize)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ProxyProcedureEndpoint *pe = new ProxyProcedureEndpoint(*this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, readertypename, copy_data, dataSize) == 0)
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
    return m_asyncThread.addTask(query, task, timeout);
}

void ProxyTransport::deleteAssociatedAsyncTasks(ProxyProcedureEndpoint *pe)
{
    const char* const METHOD_NAME = "deleteAssociatedAsyncTasks";

    if(pe != NULL)
    {
        m_asyncThread.deleteAssociatedAsyncTasks(pe);
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}
