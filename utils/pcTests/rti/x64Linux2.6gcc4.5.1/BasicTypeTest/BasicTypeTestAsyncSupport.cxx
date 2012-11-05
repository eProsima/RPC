#include "BasicTypeTestProxy.h"
#include "BasicTypeTestAsyncSupport.h"
#include "BasicTypeTestRequestReplyPlugin.h"


BasicTypeTest_getOctetTask::BasicTypeTest_getOctetTask(BasicTypeTest_getOctet &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getOctetTask::~BasicTypeTest_getOctetTask()
{
}

BasicTypeTest_getOctet& BasicTypeTest_getOctetTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getOctetTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getOctetTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Octet  oc2 = 0;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctet_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getOctetReplyUtils::extractTypeData(m_reply, retcode, oc2, oc3, getOctet_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getOctet(oc2, oc3, getOctet_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getCharTask::BasicTypeTest_getCharTask(BasicTypeTest_getChar &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getCharTask::~BasicTypeTest_getCharTask()
{
}

BasicTypeTest_getChar& BasicTypeTest_getCharTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getCharTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getCharTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Char  ch2 = 0;    
    DDS_Char  ch3 = 0;    
    DDS_Char  getChar_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCharReplyUtils::extractTypeData(m_reply, retcode, ch2, ch3, getChar_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getChar(ch2, ch3, getChar_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getWCharTask::BasicTypeTest_getWCharTask(BasicTypeTest_getWChar &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getWCharTask::~BasicTypeTest_getWCharTask()
{
}

BasicTypeTest_getWChar& BasicTypeTest_getWCharTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getWCharTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getWCharTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Wchar  wch2 = 0;    
    DDS_Wchar  wch3 = 0;    
    DDS_Wchar  getWChar_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getWCharReplyUtils::extractTypeData(m_reply, retcode, wch2, wch3, getWChar_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getWChar(wch2, wch3, getWChar_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getShortTask::BasicTypeTest_getShortTask(BasicTypeTest_getShort &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getShortTask::~BasicTypeTest_getShortTask()
{
}

BasicTypeTest_getShort& BasicTypeTest_getShortTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getShortTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getShortTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Short  sh2 = 0;    
    DDS_Short  sh3 = 0;    
    DDS_Short  getShort_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getShortReplyUtils::extractTypeData(m_reply, retcode, sh2, sh3, getShort_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getShort(sh2, sh3, getShort_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getUShortTask::BasicTypeTest_getUShortTask(BasicTypeTest_getUShort &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getUShortTask::~BasicTypeTest_getUShortTask()
{
}

BasicTypeTest_getUShort& BasicTypeTest_getUShortTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getUShortTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getUShortTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedShort  ush2 = 0;    
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShort_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getUShortReplyUtils::extractTypeData(m_reply, retcode, ush2, ush3, getUShort_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getUShort(ush2, ush3, getUShort_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getLongTask::BasicTypeTest_getLongTask(BasicTypeTest_getLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getLongTask::~BasicTypeTest_getLongTask()
{
}

BasicTypeTest_getLong& BasicTypeTest_getLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLongReplyUtils::extractTypeData(m_reply, retcode, lo2, lo3, getLong_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getLong(lo2, lo3, getLong_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getULongTask::BasicTypeTest_getULongTask(BasicTypeTest_getULong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getULongTask::~BasicTypeTest_getULongTask()
{
}

BasicTypeTest_getULong& BasicTypeTest_getULongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getULongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getULongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedLong  ulo2 = 0;    
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getULongReplyUtils::extractTypeData(m_reply, retcode, ulo2, ulo3, getULong_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getULong(ulo2, ulo3, getULong_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getLLongTask::BasicTypeTest_getLLongTask(BasicTypeTest_getLLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getLLongTask::~BasicTypeTest_getLLongTask()
{
}

BasicTypeTest_getLLong& BasicTypeTest_getLLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getLLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getLLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_LongLong  llo2 = 0;    
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLLongReplyUtils::extractTypeData(m_reply, retcode, llo2, llo3, getLLong_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getLLong(llo2, llo3, getLLong_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getULLongTask::BasicTypeTest_getULLongTask(BasicTypeTest_getULLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getULLongTask::~BasicTypeTest_getULLongTask()
{
}

BasicTypeTest_getULLong& BasicTypeTest_getULLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getULLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getULLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedLongLong  ullo2 = 0;    
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getULLongReplyUtils::extractTypeData(m_reply, retcode, ullo2, ullo3, getULLong_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getULLong(ullo2, ullo3, getULLong_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getFloatTask::BasicTypeTest_getFloatTask(BasicTypeTest_getFloat &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getFloatTask::~BasicTypeTest_getFloatTask()
{
}

BasicTypeTest_getFloat& BasicTypeTest_getFloatTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getFloatTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getFloatTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Float  fl2 = 0;    
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloat_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getFloatReplyUtils::extractTypeData(m_reply, retcode, fl2, fl3, getFloat_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getFloat(fl2, fl3, getFloat_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getDoubleTask::BasicTypeTest_getDoubleTask(BasicTypeTest_getDouble &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getDoubleTask::~BasicTypeTest_getDoubleTask()
{
}

BasicTypeTest_getDouble& BasicTypeTest_getDoubleTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getDoubleTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getDoubleTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Double  do2 = 0;    
    DDS_Double  do3 = 0;    
    DDS_Double  getDouble_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDoubleReplyUtils::extractTypeData(m_reply, retcode, do2, do3, getDouble_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getDouble(do2, do3, getDouble_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getBooleanTask::BasicTypeTest_getBooleanTask(BasicTypeTest_getBoolean &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getBooleanTask::~BasicTypeTest_getBooleanTask()
{
}

BasicTypeTest_getBoolean& BasicTypeTest_getBooleanTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getBooleanTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getBooleanTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Boolean  bo2 = RTI_FALSE;    
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getBooleanReplyUtils::extractTypeData(m_reply, retcode, bo2, bo3, getBoolean_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getBoolean(bo2, bo3, getBoolean_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
