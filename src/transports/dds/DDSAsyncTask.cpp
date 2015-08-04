/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <transports/dds/DDSAsyncTask.h>
#include <transports/dds/components/ProxyProcedureEndpoint.h>
#include <exceptions/ClientInternalException.h>
#include <exceptions/ServerTimeoutException.h>
#include <utils/dds/Middleware.h>

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::DDSAsyncTask";

DDSAsyncTask::DDSAsyncTask() : eprosima::rpc::transport::AsyncTask(), m_pe(NULL)
{
}

void DDSAsyncTask::setProcedureEndpoint(ProxyProcedureEndpoint *pe)
{
    m_pe = pe;
}

ProxyProcedureEndpoint* DDSAsyncTask::getProcedureEndpoint()
{
    return m_pe;
}

void DDSAsyncTask::execute(DDSQueryCondition *query)
{
    const char* const METHOD_NAME = "execute";

    if(query != NULL)
    {
        ReturnMessage retCode = m_pe->takeReply(getReplyInstance(), query);

        if(retCode == OK)
        {
            this->execute();
        }
        else if(retCode == CLIENT_INTERNAL_ERROR)
        {
            this->on_exception(ClientInternalException("Error taking the reply"));
        }
        else if(retCode == TIMEOUT)
        {
            this->on_exception(ServerTimeoutException("Error taking the reply"));
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}

#endif // RPC_WITH_RTIDDS
