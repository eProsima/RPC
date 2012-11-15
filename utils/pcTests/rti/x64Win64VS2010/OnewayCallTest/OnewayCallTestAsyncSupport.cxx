#include "OnewayCallTestProxy.h"
#include "OnewayCallTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "OnewayCallTestRequestReplyPlugin.h"


OnewayCallTest_getLongTask::OnewayCallTest_getLongTask(OnewayCallTest_getLongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    OnewayCallTest_getLongReply_initialize(&m_reply);
}

OnewayCallTest_getLongTask::~OnewayCallTest_getLongTask()
{
    OnewayCallTest_getLongReply_finalize(&m_reply);
}

OnewayCallTest_getLongCallbackHandler& OnewayCallTest_getLongTask::getObject()
{
    return m_obj;
}

void* OnewayCallTest_getLongTask::getReplyInstance()
{
    return &m_reply;
}

void OnewayCallTest_getLongTask::execute()
{  
    DDS_Long  getLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	OnewayCallTest_getLongReplyUtils::extractTypeData(m_reply, retcode, getLong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getLong(getLong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void OnewayCallTest_getLongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


OnewayCallTest_getBooleanTask::OnewayCallTest_getBooleanTask(OnewayCallTest_getBooleanCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    OnewayCallTest_getBooleanReply_initialize(&m_reply);
}

OnewayCallTest_getBooleanTask::~OnewayCallTest_getBooleanTask()
{
    OnewayCallTest_getBooleanReply_finalize(&m_reply);
}

OnewayCallTest_getBooleanCallbackHandler& OnewayCallTest_getBooleanTask::getObject()
{
    return m_obj;
}

void* OnewayCallTest_getBooleanTask::getReplyInstance()
{
    return &m_reply;
}

void OnewayCallTest_getBooleanTask::execute()
{  
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	OnewayCallTest_getBooleanReplyUtils::extractTypeData(m_reply, retcode, getBoolean_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getBoolean(getBoolean_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void OnewayCallTest_getBooleanTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


OnewayCallTest_getStringTask::OnewayCallTest_getStringTask(OnewayCallTest_getStringCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    OnewayCallTest_getStringReply_initialize(&m_reply);
}

OnewayCallTest_getStringTask::~OnewayCallTest_getStringTask()
{
    OnewayCallTest_getStringReply_finalize(&m_reply);
}

OnewayCallTest_getStringCallbackHandler& OnewayCallTest_getStringTask::getObject()
{
    return m_obj;
}

void* OnewayCallTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void OnewayCallTest_getStringTask::execute()
{  
    char*  getString_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	OnewayCallTest_getStringReplyUtils::extractTypeData(m_reply, retcode, getString_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getString(getString_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void OnewayCallTest_getStringTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


OnewayCallTest_getStructTask::OnewayCallTest_getStructTask(OnewayCallTest_getStructCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    OnewayCallTest_getStructReply_initialize(&m_reply);
}

OnewayCallTest_getStructTask::~OnewayCallTest_getStructTask()
{
    OnewayCallTest_getStructReply_finalize(&m_reply);
}

OnewayCallTest_getStructCallbackHandler& OnewayCallTest_getStructTask::getObject()
{
    return m_obj;
}

void* OnewayCallTest_getStructTask::getReplyInstance()
{
    return &m_reply;
}

void OnewayCallTest_getStructTask::execute()
{  
    Structure getStruct_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	OnewayCallTest_getStructReplyUtils::extractTypeData(m_reply, retcode, getStruct_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getStruct(getStruct_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void OnewayCallTest_getStructTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
