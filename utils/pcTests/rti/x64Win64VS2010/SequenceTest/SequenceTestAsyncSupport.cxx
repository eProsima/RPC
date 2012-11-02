#include "SequenceTestProxy.h"
#include "SequenceTestAsyncSupport.h"
#include "SequenceTestRequestReplyPlugin.h"


SequenceTest_getSLongTask::SequenceTest_getSLongTask(SequenceTest_getSLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

SequenceTest_getSLongTask::~SequenceTest_getSLongTask()
{
}

SequenceTest_getSLong& SequenceTest_getSLongTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getSLongTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getSLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    largo l2;
        
    largo l3;
        
    largo getSLong_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getSLongReplyUtils::extractTypeData(m_reply, retcode, l2, l3, getSLong_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getSLong(l2, l3, getSLong_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


SequenceTest_getStringTask::SequenceTest_getStringTask(SequenceTest_getString &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

SequenceTest_getStringTask::~SequenceTest_getStringTask()
{
}

SequenceTest_getString& SequenceTest_getStringTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getStringTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    cadena s2;
        
    cadena s3;
        
    cadena getString_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getStringReplyUtils::extractTypeData(m_reply, retcode, s2, s3, getString_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getString(s2, s3, getString_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


SequenceTest_getStringBoundedTask::SequenceTest_getStringBoundedTask(SequenceTest_getStringBounded &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

SequenceTest_getStringBoundedTask::~SequenceTest_getStringBoundedTask()
{
}

SequenceTest_getStringBounded& SequenceTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void* SequenceTest_getStringBoundedTask::getReplyInstance()
{
    return &m_reply;
}

void SequenceTest_getStringBoundedTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    dattos sb2;
        
    dattos sb3;
        
    dattos getStringBounded_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getStringBoundedReplyUtils::extractTypeData(m_reply, retcode, sb2, sb3, getStringBounded_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getStringBounded(sb2, sb3, getStringBounded_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
