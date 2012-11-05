#include "ServerExceptionProxy.h"
#include "ServerExceptionAsyncSupport.h"
#include "ServerExceptionRequestReplyPlugin.h"


ServerException_sendExceptionTask::ServerException_sendExceptionTask(ServerException_sendException &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

ServerException_sendExceptionTask::~ServerException_sendExceptionTask()
{
}

ServerException_sendException& ServerException_sendExceptionTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sendExceptionReplyUtils::extractTypeData(m_reply, retcode);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().sendException();
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


ServerException_sendExceptionTwoTask::ServerException_sendExceptionTwoTask(ServerException_sendExceptionTwo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

ServerException_sendExceptionTwoTask::~ServerException_sendExceptionTwoTask()
{
}

ServerException_sendExceptionTwo& ServerException_sendExceptionTwoTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionTwoTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionTwoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    char*  message2 = NULL;    
    char*  message3 = NULL;    
    char*  sendExceptionTwo_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sendExceptionTwoReplyUtils::extractTypeData(m_reply, retcode, message2, message3, sendExceptionTwo_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().sendExceptionTwo(message2, message3, sendExceptionTwo_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


ServerException_sendExceptionThreeTask::ServerException_sendExceptionThreeTask(ServerException_sendExceptionThree &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

ServerException_sendExceptionThreeTask::~ServerException_sendExceptionThreeTask()
{
}

ServerException_sendExceptionThree& ServerException_sendExceptionThreeTask::getObject()
{
    return m_obj;
}

void* ServerException_sendExceptionThreeTask::getReplyInstance()
{
    return &m_reply;
}

void ServerException_sendExceptionThreeTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Estructura es2;
        
    Estructura es3;
        
    Estructura sendExceptionThree_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sendExceptionThreeReplyUtils::extractTypeData(m_reply, retcode, es2, es3, sendExceptionThree_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().sendExceptionThree(es2, es3, sendExceptionThree_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
