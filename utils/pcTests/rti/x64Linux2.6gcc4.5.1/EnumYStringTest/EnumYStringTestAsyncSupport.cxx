#include "EnumYStringTestProxy.h"
#include "EnumYStringTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "EnumYStringTestRequestReplyPlugin.h"


EnumYStringTest_getEnumTask::EnumYStringTest_getEnumTask(EnumYStringTest_getEnumCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    EnumYStringTest_getEnumReply_initialize(&m_reply);
}

EnumYStringTest_getEnumTask::~EnumYStringTest_getEnumTask()
{
    EnumYStringTest_getEnumReply_finalize(&m_reply);
}

EnumYStringTest_getEnumCallbackHandler& EnumYStringTest_getEnumTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getEnumTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getEnumTask::execute()
{  
    Valores  v2 = VALOR1;    
    Valores  v3 = VALOR1;    
    Valores  getEnum_ret = VALOR1;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getEnumReplyUtils::extractTypeData(m_reply, retcode, v2, v3, getEnum_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getEnum(v2, v3, getEnum_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void EnumYStringTest_getEnumTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


EnumYStringTest_getStringTask::EnumYStringTest_getStringTask(EnumYStringTest_getStringCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    EnumYStringTest_getStringReply_initialize(&m_reply);
}

EnumYStringTest_getStringTask::~EnumYStringTest_getStringTask()
{
    EnumYStringTest_getStringReply_finalize(&m_reply);
}

EnumYStringTest_getStringCallbackHandler& EnumYStringTest_getStringTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringTask::execute()
{  
    char*  s2 = NULL;    
    char*  s3 = NULL;    
    char*  getString_ret = NULL;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getStringReplyUtils::extractTypeData(m_reply, retcode, s2, s3, getString_ret);
		
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

void EnumYStringTest_getStringTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


EnumYStringTest_getStringBoundedTask::EnumYStringTest_getStringBoundedTask(EnumYStringTest_getStringBoundedCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    EnumYStringTest_getStringBoundedReply_initialize(&m_reply);
}

EnumYStringTest_getStringBoundedTask::~EnumYStringTest_getStringBoundedTask()
{
    EnumYStringTest_getStringBoundedReply_finalize(&m_reply);
}

EnumYStringTest_getStringBoundedCallbackHandler& EnumYStringTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void* EnumYStringTest_getStringBoundedTask::getReplyInstance()
{
    return &m_reply;
}

void EnumYStringTest_getStringBoundedTask::execute()
{  
    char*  sb2 = NULL;    
    char*  sb3 = NULL;    
    char*  getStringBounded_ret = NULL;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	EnumYStringTest_getStringBoundedReplyUtils::extractTypeData(m_reply, retcode, sb2, sb3, getStringBounded_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getStringBounded(sb2, sb3, getStringBounded_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void EnumYStringTest_getStringBoundedTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
