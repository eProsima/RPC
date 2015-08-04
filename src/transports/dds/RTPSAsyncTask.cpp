/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_FASTRTPS

#include <transports/dds/RTPSAsyncTask.h>
#include <exceptions/ClientInternalException.h>
#include <exceptions/ServerTimeoutException.h>

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSAsyncTask";

RTPSAsyncTask::RTPSAsyncTask() : eprosima::rpc::transport::AsyncTask()
{
}

#endif // RPC_WITH_FASTRTPS
