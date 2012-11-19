#include "AsyncCallTestProxy.h"
#include "AsyncCallTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "AsyncCallTestRequestReplyPlugin.h"


AsyncCallTest_getLongTask::AsyncCallTest_getLongTask(AsyncCallTest_getLongCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    AsyncCallTest_getLongReply_initialize(&m_reply);
}

AsyncCallTest_getLongTask::~AsyncCallTest_getLongTask()
{
    AsyncCallTest_getLongReply_finalize(&m_reply);
}

AsyncCallTest_getLongCallbackHandler& AsyncCallTest_getLongTask::getObject()
{
    return m_obj;
}

void* AsyncCallTest_getLongTask::getReplyInstance()
{
    return &m_reply;
}

void AsyncCallTest_getLongTask::execute()
{  
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	AsyncCallTest_getLongReplyUtils::extractTypeData(m_reply, retcode, lo2, lo3, getLong_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getLong(lo2, lo3, getLong_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void AsyncCallTest_getLongTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


AsyncCallTest_getBooleanTask::AsyncCallTest_getBooleanTask(AsyncCallTest_getBooleanCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    AsyncCallTest_getBooleanReply_initialize(&m_reply);
}

AsyncCallTest_getBooleanTask::~AsyncCallTest_getBooleanTask()
{
    AsyncCallTest_getBooleanReply_finalize(&m_reply);
}

AsyncCallTest_getBooleanCallbackHandler& AsyncCallTest_getBooleanTask::getObject()
{
    return m_obj;
}

void* AsyncCallTest_getBooleanTask::getReplyInstance()
{
    return &m_reply;
}

void AsyncCallTest_getBooleanTask::execute()
{  
    DDS_Boolean  bo2 = RTI_FALSE;    
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	AsyncCallTest_getBooleanReplyUtils::extractTypeData(m_reply, retcode, bo2, bo3, getBoolean_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getBoolean(bo2, bo3, getBoolean_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void AsyncCallTest_getBooleanTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


AsyncCallTest_getStringTask::AsyncCallTest_getStringTask(AsyncCallTest_getStringCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    AsyncCallTest_getStringReply_initialize(&m_reply);
}

AsyncCallTest_getStringTask::~AsyncCallTest_getStringTask()
{
    AsyncCallTest_getStringReply_finalize(&m_reply);
}

AsyncCallTest_getStringCallbackHandler& AsyncCallTest_getStringTask::getObject()
{
    return m_obj;
}

void* AsyncCallTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void AsyncCallTest_getStringTask::execute()
{  
    char*  s2 = NULL;    
    char*  s3 = NULL;    
    char*  getString_ret = NULL;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	AsyncCallTest_getStringReplyUtils::extractTypeData(m_reply, retcode, s2, s3, getString_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getString(s2, s3, getString_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void AsyncCallTest_getStringTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


AsyncCallTest_duplicateTask::AsyncCallTest_duplicateTask(AsyncCallTest_duplicateCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    AsyncCallTest_duplicateReply_initialize(&m_reply);
}

AsyncCallTest_duplicateTask::~AsyncCallTest_duplicateTask()
{
    AsyncCallTest_duplicateReply_finalize(&m_reply);
}

AsyncCallTest_duplicateCallbackHandler& AsyncCallTest_duplicateTask::getObject()
{
    return m_obj;
}

void* AsyncCallTest_duplicateTask::getReplyInstance()
{
    return &m_reply;
}

void AsyncCallTest_duplicateTask::execute()
{  
    Structure duplicate_ret;
        
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	AsyncCallTest_duplicateReplyUtils::extractTypeData(m_reply, retcode, duplicate_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().duplicate(duplicate_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void AsyncCallTest_duplicateTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
