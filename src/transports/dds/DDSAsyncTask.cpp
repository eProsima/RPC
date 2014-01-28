/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/transports/dds/DDSAsyncTask.h"
#include "rpcdds/transports/dds/components/ProxyProcedureEndpoint.h"
#include "rpcdds/exceptions/ClientInternalException.h"
#include "rpcdds/exceptions/ServerTimeoutException.h"

using namespace eprosima::rpcdds;
using namespace ::transport::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::DDSAsyncTask";

DDSAsyncTask::DDSAsyncTask() : m_pe(NULL), eprosima::rpcdds::transport::AsyncTask()
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

void DDSAsyncTask::execute(DDS::QueryCondition *query)
{
    const char* const METHOD_NAME = "execute";

    if(query != NULL)
    {
        ReturnMessage retCode = m_pe->takeReply(getReplyInstance(), query);

        if(retCode == OPERATION_SUCCESSFUL)
        {
            this->execute();
        }
        else if(retCode == CLIENT_INTERNAL_ERROR)
        {
            this->on_exception(ClientInternalException("Error taking the reply"));
        }
        else if(retCode == SERVER_TIMEOUT)
        {
            this->on_exception(ServerTimeoutException("Error taking the reply"));
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}
