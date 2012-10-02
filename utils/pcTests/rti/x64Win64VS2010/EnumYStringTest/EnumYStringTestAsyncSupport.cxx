#include "EnumYStringTestProxy.h"
#include "EnumYStringTestAsyncSupport.h"
#include "EnumYStringTestRequestReplyPlugin.h"


EnumYStringTest_getEnumTask::EnumYStringTest_getEnumTask(EnumYStringTest_getEnum &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getEnumReplyTypeSupport::create_data();
}

EnumYStringTest_getEnumTask::~EnumYStringTest_getEnumTask()
{
getEnumReplyTypeSupport::delete_data((getEnumReply*)m_reply);
}

EnumYStringTest_getEnum& EnumYStringTest_getEnumTask::getObject()
{
    return m_obj;
}

void EnumYStringTest_getEnumTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Valores  v2 = VALOR1;    
    Valores  v3 = VALOR1;    
    Valores  getEnum_ret = VALOR1;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getEnumReplyUtils::extractTypeData((getEnumReply*)m_reply, v2  , v3  , getEnum_ret  );
		getObject().getEnum(v2  , v3  , getEnum_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


EnumYStringTest_getStringTask::EnumYStringTest_getStringTask(EnumYStringTest_getString &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getStringReplyTypeSupport::create_data();
}

EnumYStringTest_getStringTask::~EnumYStringTest_getStringTask()
{
getStringReplyTypeSupport::delete_data((getStringReply*)m_reply);
}

EnumYStringTest_getString& EnumYStringTest_getStringTask::getObject()
{
    return m_obj;
}

void EnumYStringTest_getStringTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    char*  s2 = NULL;    
    char*  s3 = NULL;    
    char*  getString_ret = NULL;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getStringReplyUtils::extractTypeData((getStringReply*)m_reply, s2  , s3  , getString_ret  );
		getObject().getString(s2  , s3  , getString_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


EnumYStringTest_getStringBoundedTask::EnumYStringTest_getStringBoundedTask(EnumYStringTest_getStringBounded &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getStringBoundedReplyTypeSupport::create_data();
}

EnumYStringTest_getStringBoundedTask::~EnumYStringTest_getStringBoundedTask()
{
getStringBoundedReplyTypeSupport::delete_data((getStringBoundedReply*)m_reply);
}

EnumYStringTest_getStringBounded& EnumYStringTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void EnumYStringTest_getStringBoundedTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    char*  sb2 = NULL;    
    char*  sb3 = NULL;    
    char*  getStringBounded_ret = NULL;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getStringBoundedReplyUtils::extractTypeData((getStringBoundedReply*)m_reply, sb2  , sb3  , getStringBounded_ret  );
		getObject().getStringBounded(sb2  , sb3  , getStringBounded_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
