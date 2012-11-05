#include "StructTestProxy.h"
#include "StructTestAsyncSupport.h"
#include "StructTestRequestReplyPlugin.h"


StructTest_duplicateTask::StructTest_duplicateTask(StructTest_duplicate &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

StructTest_duplicateTask::~StructTest_duplicateTask()
{
}

StructTest_duplicate& StructTest_duplicateTask::getObject()
{
    return m_obj;
}

void* StructTest_duplicateTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_duplicateTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Recepcion duplicate_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		duplicateReplyUtils::extractTypeData(m_reply, retcode, duplicate_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().duplicate(duplicate_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


StructTest_sumaTask::StructTest_sumaTask(StructTest_suma &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

StructTest_sumaTask::~StructTest_sumaTask()
{
}

StructTest_suma& StructTest_sumaTask::getObject()
{
    return m_obj;
}

void* StructTest_sumaTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_sumaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Recepcion suma_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sumaReplyUtils::extractTypeData(m_reply, retcode, suma_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().suma(suma_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
