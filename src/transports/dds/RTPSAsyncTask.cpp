#include "fastrpc/transports/dds/RTPSAsyncTask.h"
#include "fastrpc/exceptions/ClientInternalException.h"
#include "fastrpc/exceptions/ServerTimeoutException.h"

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSAsyncTask";

RTPSAsyncTask::RTPSAsyncTask() : eprosima::rpc::transport::AsyncTask()
{
}
