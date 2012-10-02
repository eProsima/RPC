#include "BasicTypeTestProxy.h"
#include "BasicTypeTestAsyncSupport.h"
#include "BasicTypeTestRequestReplyPlugin.h"


BasicTypeTest_getOctetTask::BasicTypeTest_getOctetTask(BasicTypeTest_getOctet &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getOctetReplyTypeSupport::create_data();
}

BasicTypeTest_getOctetTask::~BasicTypeTest_getOctetTask()
{
getOctetReplyTypeSupport::delete_data((getOctetReply*)m_reply);
}

BasicTypeTest_getOctet& BasicTypeTest_getOctetTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getOctetTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Octet  oc2 = 0;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctet_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getOctetReplyUtils::extractTypeData((getOctetReply*)m_reply, oc2  , oc3  , getOctet_ret  );
		getObject().getOctet(oc2  , oc3  , getOctet_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getCharTask::BasicTypeTest_getCharTask(BasicTypeTest_getChar &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getCharReplyTypeSupport::create_data();
}

BasicTypeTest_getCharTask::~BasicTypeTest_getCharTask()
{
getCharReplyTypeSupport::delete_data((getCharReply*)m_reply);
}

BasicTypeTest_getChar& BasicTypeTest_getCharTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getCharTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Char  ch2 = 0;    
    DDS_Char  ch3 = 0;    
    DDS_Char  getChar_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCharReplyUtils::extractTypeData((getCharReply*)m_reply, ch2  , ch3  , getChar_ret  );
		getObject().getChar(ch2  , ch3  , getChar_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getWCharTask::BasicTypeTest_getWCharTask(BasicTypeTest_getWChar &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getWCharReplyTypeSupport::create_data();
}

BasicTypeTest_getWCharTask::~BasicTypeTest_getWCharTask()
{
getWCharReplyTypeSupport::delete_data((getWCharReply*)m_reply);
}

BasicTypeTest_getWChar& BasicTypeTest_getWCharTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getWCharTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Wchar  wch2 = 0;    
    DDS_Wchar  wch3 = 0;    
    DDS_Wchar  getWChar_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getWCharReplyUtils::extractTypeData((getWCharReply*)m_reply, wch2  , wch3  , getWChar_ret  );
		getObject().getWChar(wch2  , wch3  , getWChar_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getShortTask::BasicTypeTest_getShortTask(BasicTypeTest_getShort &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getShortReplyTypeSupport::create_data();
}

BasicTypeTest_getShortTask::~BasicTypeTest_getShortTask()
{
getShortReplyTypeSupport::delete_data((getShortReply*)m_reply);
}

BasicTypeTest_getShort& BasicTypeTest_getShortTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getShortTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Short  sh2 = 0;    
    DDS_Short  sh3 = 0;    
    DDS_Short  getShort_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getShortReplyUtils::extractTypeData((getShortReply*)m_reply, sh2  , sh3  , getShort_ret  );
		getObject().getShort(sh2  , sh3  , getShort_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getUShortTask::BasicTypeTest_getUShortTask(BasicTypeTest_getUShort &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getUShortReplyTypeSupport::create_data();
}

BasicTypeTest_getUShortTask::~BasicTypeTest_getUShortTask()
{
getUShortReplyTypeSupport::delete_data((getUShortReply*)m_reply);
}

BasicTypeTest_getUShort& BasicTypeTest_getUShortTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getUShortTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedShort  ush2 = 0;    
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShort_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getUShortReplyUtils::extractTypeData((getUShortReply*)m_reply, ush2  , ush3  , getUShort_ret  );
		getObject().getUShort(ush2  , ush3  , getUShort_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getLongTask::BasicTypeTest_getLongTask(BasicTypeTest_getLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getLongReplyTypeSupport::create_data();
}

BasicTypeTest_getLongTask::~BasicTypeTest_getLongTask()
{
getLongReplyTypeSupport::delete_data((getLongReply*)m_reply);
}

BasicTypeTest_getLong& BasicTypeTest_getLongTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Long  lo2 = 0;    
    DDS_Long  lo3 = 0;    
    DDS_Long  getLong_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLongReplyUtils::extractTypeData((getLongReply*)m_reply, lo2  , lo3  , getLong_ret  );
		getObject().getLong(lo2  , lo3  , getLong_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getULongTask::BasicTypeTest_getULongTask(BasicTypeTest_getULong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getULongReplyTypeSupport::create_data();
}

BasicTypeTest_getULongTask::~BasicTypeTest_getULongTask()
{
getULongReplyTypeSupport::delete_data((getULongReply*)m_reply);
}

BasicTypeTest_getULong& BasicTypeTest_getULongTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getULongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedLong  ulo2 = 0;    
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULong_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getULongReplyUtils::extractTypeData((getULongReply*)m_reply, ulo2  , ulo3  , getULong_ret  );
		getObject().getULong(ulo2  , ulo3  , getULong_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getLLongTask::BasicTypeTest_getLLongTask(BasicTypeTest_getLLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getLLongReplyTypeSupport::create_data();
}

BasicTypeTest_getLLongTask::~BasicTypeTest_getLLongTask()
{
getLLongReplyTypeSupport::delete_data((getLLongReply*)m_reply);
}

BasicTypeTest_getLLong& BasicTypeTest_getLLongTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getLLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_LongLong  llo2 = 0;    
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLong_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLLongReplyUtils::extractTypeData((getLLongReply*)m_reply, llo2  , llo3  , getLLong_ret  );
		getObject().getLLong(llo2  , llo3  , getLLong_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getULLongTask::BasicTypeTest_getULLongTask(BasicTypeTest_getULLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getULLongReplyTypeSupport::create_data();
}

BasicTypeTest_getULLongTask::~BasicTypeTest_getULLongTask()
{
getULLongReplyTypeSupport::delete_data((getULLongReply*)m_reply);
}

BasicTypeTest_getULLong& BasicTypeTest_getULLongTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getULLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_UnsignedLongLong  ullo2 = 0;    
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLong_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getULLongReplyUtils::extractTypeData((getULLongReply*)m_reply, ullo2  , ullo3  , getULLong_ret  );
		getObject().getULLong(ullo2  , ullo3  , getULLong_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getFloatTask::BasicTypeTest_getFloatTask(BasicTypeTest_getFloat &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getFloatReplyTypeSupport::create_data();
}

BasicTypeTest_getFloatTask::~BasicTypeTest_getFloatTask()
{
getFloatReplyTypeSupport::delete_data((getFloatReply*)m_reply);
}

BasicTypeTest_getFloat& BasicTypeTest_getFloatTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getFloatTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Float  fl2 = 0;    
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloat_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getFloatReplyUtils::extractTypeData((getFloatReply*)m_reply, fl2  , fl3  , getFloat_ret  );
		getObject().getFloat(fl2  , fl3  , getFloat_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getDoubleTask::BasicTypeTest_getDoubleTask(BasicTypeTest_getDouble &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getDoubleReplyTypeSupport::create_data();
}

BasicTypeTest_getDoubleTask::~BasicTypeTest_getDoubleTask()
{
getDoubleReplyTypeSupport::delete_data((getDoubleReply*)m_reply);
}

BasicTypeTest_getDouble& BasicTypeTest_getDoubleTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getDoubleTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Double  do2 = 0;    
    DDS_Double  do3 = 0;    
    DDS_Double  getDouble_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDoubleReplyUtils::extractTypeData((getDoubleReply*)m_reply, do2  , do3  , getDouble_ret  );
		getObject().getDouble(do2  , do3  , getDouble_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


BasicTypeTest_getBooleanTask::BasicTypeTest_getBooleanTask(BasicTypeTest_getBoolean &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getBooleanReplyTypeSupport::create_data();
}

BasicTypeTest_getBooleanTask::~BasicTypeTest_getBooleanTask()
{
getBooleanReplyTypeSupport::delete_data((getBooleanReply*)m_reply);
}

BasicTypeTest_getBoolean& BasicTypeTest_getBooleanTask::getObject()
{
    return m_obj;
}

void BasicTypeTest_getBooleanTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DDS_Boolean  bo2 = 0;    
    DDS_Boolean  bo3 = 0;    
    DDS_Boolean  getBoolean_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getBooleanReplyUtils::extractTypeData((getBooleanReply*)m_reply, bo2  , bo3  , getBoolean_ret  );
		getObject().getBoolean(bo2  , bo3  , getBoolean_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
