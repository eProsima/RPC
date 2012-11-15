#include "BasicTypeTestProxy.h"
#include "BasicTypeTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "BasicTypeTestRequestReplyPlugin.h"


BasicTypeTest_getOctetTask::BasicTypeTest_getOctetTask(BasicTypeTest_getOctetCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getOctetTask::~BasicTypeTest_getOctetTask()
{
}

BasicTypeTest_getOctetCallbackHandler& BasicTypeTest_getOctetTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getOctetTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getOctetTask::execute()
{  
    DDS_Octet  oc2 = 0;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctet_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getOctetReplyUtils::extractTypeData(m_reply, retcode, oc2, oc3, getOctet_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getOctet(oc2, oc3, getOctet_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getOctetTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getCharTask::BasicTypeTest_getCharTask(BasicTypeTest_getCharCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getCharTask::~BasicTypeTest_getCharTask()
{
}

BasicTypeTest_getCharCallbackHandler& BasicTypeTest_getCharTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getCharTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getCharTask::execute()
{  
    DDS_Char  ch2 = 0;    
    DDS_Char  ch3 = 0;    
    DDS_Char  getChar_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getCharReplyUtils::extractTypeData(m_reply, retcode, ch2, ch3, getChar_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getChar(ch2, ch3, getChar_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getCharTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getWCharTask::BasicTypeTest_getWCharTask(BasicTypeTest_getWCharCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getWCharTask::~BasicTypeTest_getWCharTask()
{
}

BasicTypeTest_getWCharCallbackHandler& BasicTypeTest_getWCharTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getWCharTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getWCharTask::execute()
{  
    DDS_Wchar  wch2 = 0;    
    DDS_Wchar  wch3 = 0;    
    DDS_Wchar  getWChar_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getWCharReplyUtils::extractTypeData(m_reply, retcode, wch2, wch3, getWChar_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getWChar(wch2, wch3, getWChar_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getWCharTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getShortTask::BasicTypeTest_getShortTask(BasicTypeTest_getShortCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getShortTask::~BasicTypeTest_getShortTask()
{
}

BasicTypeTest_getShortCallbackHandler& BasicTypeTest_getShortTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getShortTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getShortTask::execute()
{  
    DDS_Short  sh2 = 0;    
    DDS_Short  sh3 = 0;    
    DDS_Short  getShort_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getShortReplyUtils::extractTypeData(m_reply, retcode, sh2, sh3, getShort_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getShort(sh2, sh3, getShort_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getShortTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getUShortTask::BasicTypeTest_getUShortTask(BasicTypeTest_getUShortCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getUShortTask::~BasicTypeTest_getUShortTask()
{
}

BasicTypeTest_getUShortCallbackHandler& BasicTypeTest_getUShortTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getUShortTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getUShortTask::execute()
{  
    DDS_UnsignedShort  ush2 = 0;    
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShort_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getUShortReplyUtils::extractTypeData(m_reply, retcode, ush2, ush3, getUShort_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getUShort(ush2, ush3, getUShort_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getUShortTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getLongTask::BasicTypeTest_getLongTask(BasicTypeTest_getLongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getLongTask::~BasicTypeTest_getLongTask()
{
}

BasicTypeTest_getLongCallbackHandler& BasicTypeTest_getLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getLongTask::execute()
{  
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getLongReplyUtils::extractTypeData(m_reply, retcode, lo2, lo3, getLong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getLong(lo2, lo3, getLong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getLongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getULongTask::BasicTypeTest_getULongTask(BasicTypeTest_getULongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getULongTask::~BasicTypeTest_getULongTask()
{
}

BasicTypeTest_getULongCallbackHandler& BasicTypeTest_getULongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getULongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getULongTask::execute()
{  
    DDS_UnsignedLong  ulo2 = 0;    
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getULongReplyUtils::extractTypeData(m_reply, retcode, ulo2, ulo3, getULong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getULong(ulo2, ulo3, getULong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getULongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getLLongTask::BasicTypeTest_getLLongTask(BasicTypeTest_getLLongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getLLongTask::~BasicTypeTest_getLLongTask()
{
}

BasicTypeTest_getLLongCallbackHandler& BasicTypeTest_getLLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getLLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getLLongTask::execute()
{  
    DDS_LongLong  llo2 = 0;    
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getLLongReplyUtils::extractTypeData(m_reply, retcode, llo2, llo3, getLLong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getLLong(llo2, llo3, getLLong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getLLongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getULLongTask::BasicTypeTest_getULLongTask(BasicTypeTest_getULLongCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getULLongTask::~BasicTypeTest_getULLongTask()
{
}

BasicTypeTest_getULLongCallbackHandler& BasicTypeTest_getULLongTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getULLongTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getULLongTask::execute()
{  
    DDS_UnsignedLongLong  ullo2 = 0;    
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLong_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getULLongReplyUtils::extractTypeData(m_reply, retcode, ullo2, ullo3, getULLong_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getULLong(ullo2, ullo3, getULLong_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getULLongTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getFloatTask::BasicTypeTest_getFloatTask(BasicTypeTest_getFloatCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getFloatTask::~BasicTypeTest_getFloatTask()
{
}

BasicTypeTest_getFloatCallbackHandler& BasicTypeTest_getFloatTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getFloatTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getFloatTask::execute()
{  
    DDS_Float  fl2 = 0;    
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloat_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getFloatReplyUtils::extractTypeData(m_reply, retcode, fl2, fl3, getFloat_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getFloat(fl2, fl3, getFloat_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getFloatTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getDoubleTask::BasicTypeTest_getDoubleTask(BasicTypeTest_getDoubleCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getDoubleTask::~BasicTypeTest_getDoubleTask()
{
}

BasicTypeTest_getDoubleCallbackHandler& BasicTypeTest_getDoubleTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getDoubleTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getDoubleTask::execute()
{  
    DDS_Double  do2 = 0;    
    DDS_Double  do3 = 0;    
    DDS_Double  getDouble_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getDoubleReplyUtils::extractTypeData(m_reply, retcode, do2, do3, getDouble_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getDouble(do2, do3, getDouble_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getDoubleTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


BasicTypeTest_getBooleanTask::BasicTypeTest_getBooleanTask(BasicTypeTest_getBooleanCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

BasicTypeTest_getBooleanTask::~BasicTypeTest_getBooleanTask()
{
}

BasicTypeTest_getBooleanCallbackHandler& BasicTypeTest_getBooleanTask::getObject()
{
    return m_obj;
}

void* BasicTypeTest_getBooleanTask::getReplyInstance()
{
    return &m_reply;
}

void BasicTypeTest_getBooleanTask::execute()
{  
    DDS_Boolean  bo2 = RTI_FALSE;    
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	BasicTypeTest_getBooleanReplyUtils::extractTypeData(m_reply, retcode, bo2, bo3, getBoolean_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getBoolean(bo2, bo3, getBoolean_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void BasicTypeTest_getBooleanTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
