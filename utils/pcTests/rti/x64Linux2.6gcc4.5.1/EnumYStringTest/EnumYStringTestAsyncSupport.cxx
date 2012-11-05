#include "EnumYStringTestProxy.h"
#include "EnumYStringTestAsyncSupport.h"
#include "EnumYStringTestRequestReplyPlugin.h"


EnumYStringTest_getEnumTask::EnumYStringTest_getEnumTask(EnumYStringTest_getEnum &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getEnumTask::~EnumYStringTest_getEnumTask()
{
}

EnumYStringTest_getEnum& EnumYStringTest_getEnumTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getEnumTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getEnumTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Valores  v2 = VALOR1;    
    Valores  v3 = VALOR1;    
    Valores  getEnum_ret = VALOR1;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getEnumReplyUtils::extractTypeData(m_reply, retcode, v2, v3, getEnum_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getEnum(v2, v3, getEnum_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


EnumYStringTest_getStringTask::EnumYStringTest_getStringTask(EnumYStringTest_getString &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getStringTask::~EnumYStringTest_getStringTask()
{
}

EnumYStringTest_getString& EnumYStringTest_getStringTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    char*  s2 = NULL;    
    char*  s3 = NULL;    
    char*  getString_ret = NULL;    
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


EnumYStringTest_getStringBoundedTask::EnumYStringTest_getStringBoundedTask(EnumYStringTest_getStringBounded &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

EnumYStringTest_getStringBoundedTask::~EnumYStringTest_getStringBoundedTask()
{
}

EnumYStringTest_getStringBounded& EnumYStringTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringBoundedTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringBoundedTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    char*  sb2 = NULL;    
    char*  sb3 = NULL;    
    char*  getStringBounded_ret = NULL;    
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
