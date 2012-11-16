#include "SequenceTestProxy.h"
#include "SequenceTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "SequenceTestRequestReplyPlugin.h"


SequenceTest_getSLongTask::SequenceTest_getSLongTask(SequenceTest_getSLongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    SequenceTest_getSLongReply_initialize(&m_reply);
}

SequenceTest_getSLongTask::~SequenceTest_getSLongTask()
{
    SequenceTest_getSLongReply_finalize(&m_reply);
}

SequenceTest_getSLongCallbackHandler& SequenceTest_getSLongTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getSLongTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getSLongTask::execute()
{  
    largo l2;
        
    largo l3;
        
    largo getSLong_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	SequenceTest_getSLongReplyUtils::extractTypeData(m_reply, retcode, l2, l3, getSLong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getSLong(l2, l3, getSLong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void SequenceTest_getSLongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


SequenceTest_getStringTask::SequenceTest_getStringTask(SequenceTest_getStringCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    SequenceTest_getStringReply_initialize(&m_reply);
}

SequenceTest_getStringTask::~SequenceTest_getStringTask()
{
    SequenceTest_getStringReply_finalize(&m_reply);
}

SequenceTest_getStringCallbackHandler& SequenceTest_getStringTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getStringTask::execute()
{  
    cadena s2;
        
    cadena s3;
        
    cadena getString_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	SequenceTest_getStringReplyUtils::extractTypeData(m_reply, retcode, s2, s3, getString_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getString(s2, s3, getString_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void SequenceTest_getStringTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


SequenceTest_getStringBoundedTask::SequenceTest_getStringBoundedTask(SequenceTest_getStringBoundedCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    SequenceTest_getStringBoundedReply_initialize(&m_reply);
}

SequenceTest_getStringBoundedTask::~SequenceTest_getStringBoundedTask()
{
    SequenceTest_getStringBoundedReply_finalize(&m_reply);
}

SequenceTest_getStringBoundedCallbackHandler& SequenceTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getStringBoundedTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getStringBoundedTask::execute()
{  
    dattos sb2;
        
    dattos sb3;
        
    dattos getStringBounded_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	SequenceTest_getStringBoundedReplyUtils::extractTypeData(m_reply, retcode, sb2, sb3, getStringBounded_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getStringBounded(sb2, sb3, getStringBounded_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void SequenceTest_getStringBoundedTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
