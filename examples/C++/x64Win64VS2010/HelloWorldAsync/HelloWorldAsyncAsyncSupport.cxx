#include "HelloWorldAsyncProxy.h"
#include "HelloWorldAsyncAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "HelloWorldAsyncRequestReplyPlugin.h"


HelloWorldAsync_sayHelloTask::HelloWorldAsync_sayHelloTask(HelloWorldAsync_sayHelloCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    HelloWorldAsync_sayHelloReply_initialize(&m_reply);
}

HelloWorldAsync_sayHelloTask::~HelloWorldAsync_sayHelloTask()
{
    HelloWorldAsync_sayHelloReply_finalize(&m_reply);
}

HelloWorldAsync_sayHelloCallbackHandler& HelloWorldAsync_sayHelloTask::getObject()
{
    return m_obj;
}

void* HelloWorldAsync_sayHelloTask::getReplyInstance()
{
    return &m_reply;
}

void HelloWorldAsync_sayHelloTask::execute()
{  
    char*  sayHello_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	HelloWorldAsync_sayHelloReplyUtils::extractTypeData(m_reply, retcode, sayHello_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().sayHello(sayHello_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void HelloWorldAsync_sayHelloTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
