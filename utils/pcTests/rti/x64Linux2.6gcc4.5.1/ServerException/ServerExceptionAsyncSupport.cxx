#include "ServerExceptionProxy.h"
#include "ServerExceptionAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "ServerExceptionRequestReplyPlugin.h"


ServerException_sendExceptionTask::ServerException_sendExceptionTask(ServerException_sendExceptionCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    ServerException_sendExceptionReply_initialize(&m_reply);
}

ServerException_sendExceptionTask::~ServerException_sendExceptionTask()
{
    ServerException_sendExceptionReply_finalize(&m_reply);
}

ServerException_sendExceptionCallbackHandler& ServerException_sendExceptionTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionTask::execute()
{  
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	ServerException_sendExceptionReplyUtils::extractTypeData(m_reply, retcode);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().sendException();
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void ServerException_sendExceptionTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


ServerException_sendExceptionTwoTask::ServerException_sendExceptionTwoTask(ServerException_sendExceptionTwoCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    ServerException_sendExceptionTwoReply_initialize(&m_reply);
}

ServerException_sendExceptionTwoTask::~ServerException_sendExceptionTwoTask()
{
    ServerException_sendExceptionTwoReply_finalize(&m_reply);
}

ServerException_sendExceptionTwoCallbackHandler& ServerException_sendExceptionTwoTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionTwoTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionTwoTask::execute()
{  
    char*  message2 = NULL;    
    char*  message3 = NULL;    
    char*  sendExceptionTwo_ret = NULL;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	ServerException_sendExceptionTwoReplyUtils::extractTypeData(m_reply, retcode, message2, message3, sendExceptionTwo_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().sendExceptionTwo(message2, message3, sendExceptionTwo_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void ServerException_sendExceptionTwoTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


ServerException_sendExceptionThreeTask::ServerException_sendExceptionThreeTask(ServerException_sendExceptionThreeCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    ServerException_sendExceptionThreeReply_initialize(&m_reply);
}

ServerException_sendExceptionThreeTask::~ServerException_sendExceptionThreeTask()
{
    ServerException_sendExceptionThreeReply_finalize(&m_reply);
}

ServerException_sendExceptionThreeCallbackHandler& ServerException_sendExceptionThreeTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionThreeTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionThreeTask::execute()
{  
    Estructura es2;
        
    Estructura es3;
        
    Estructura sendExceptionThree_ret;
        
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	ServerException_sendExceptionThreeReplyUtils::extractTypeData(m_reply, retcode, es2, es3, sendExceptionThree_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().sendExceptionThree(es2, es3, sendExceptionThree_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void ServerException_sendExceptionThreeTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
