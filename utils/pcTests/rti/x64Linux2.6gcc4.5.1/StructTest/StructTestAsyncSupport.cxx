#include "StructTestProxy.h"
#include "StructTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "StructTestRequestReplyPlugin.h"


StructTest_duplicateTask::StructTest_duplicateTask(StructTest_duplicateCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

StructTest_duplicateTask::~StructTest_duplicateTask()
{
}

StructTest_duplicateCallbackHandler& StructTest_duplicateTask::getObject()
{
    return m_obj;
}

void* StructTest_duplicateTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_duplicateTask::execute()
{  
    Recepcion duplicate_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	StructTest_duplicateReplyUtils::extractTypeData(m_reply, retcode, duplicate_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().duplicate(duplicate_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void StructTest_duplicateTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


StructTest_sumaTask::StructTest_sumaTask(StructTest_sumaCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

StructTest_sumaTask::~StructTest_sumaTask()
{
}

StructTest_sumaCallbackHandler& StructTest_sumaTask::getObject()
{
    return m_obj;
}

void* StructTest_sumaTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_sumaTask::execute()
{  
    Recepcion suma_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	StructTest_sumaReplyUtils::extractTypeData(m_reply, retcode, suma_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().suma(suma_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void StructTest_sumaTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
