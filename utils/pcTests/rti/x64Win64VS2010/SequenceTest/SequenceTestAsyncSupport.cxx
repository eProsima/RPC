#include "SequenceTestProxy.h"
#include "SequenceTestAsyncSupport.h"
#include "SequenceTestRequestReplyPlugin.h"


SequenceTest_getSLongTask::SequenceTest_getSLongTask(SequenceTest_getSLong &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getSLongReplyTypeSupport::create_data();
}

SequenceTest_getSLongTask::~SequenceTest_getSLongTask()
{
getSLongReplyTypeSupport::delete_data((getSLongReply*)m_reply);
}

SequenceTest_getSLong& SequenceTest_getSLongTask::getObject()
{
    return m_obj;
}

void SequenceTest_getSLongTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    largo *l2 = largoPluginSupport_create_data();    
    largo *l3 = largoPluginSupport_create_data();    
    largo *getSLong_ret = largoPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getSLongReplyUtils::extractTypeData((getSLongReply*)m_reply, l2  , l3  , getSLong_ret  );
		getObject().getSLong(l2  , l3  , getSLong_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


SequenceTest_getStringTask::SequenceTest_getStringTask(SequenceTest_getString &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getStringReplyTypeSupport::create_data();
}

SequenceTest_getStringTask::~SequenceTest_getStringTask()
{
getStringReplyTypeSupport::delete_data((getStringReply*)m_reply);
}

SequenceTest_getString& SequenceTest_getStringTask::getObject()
{
    return m_obj;
}

void SequenceTest_getStringTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    cadena *s2 = cadenaPluginSupport_create_data();    
    cadena *s3 = cadenaPluginSupport_create_data();    
    cadena *getString_ret = cadenaPluginSupport_create_data();     
	
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


SequenceTest_getStringBoundedTask::SequenceTest_getStringBoundedTask(SequenceTest_getStringBounded &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getStringBoundedReplyTypeSupport::create_data();
}

SequenceTest_getStringBoundedTask::~SequenceTest_getStringBoundedTask()
{
getStringBoundedReplyTypeSupport::delete_data((getStringBoundedReply*)m_reply);
}

SequenceTest_getStringBounded& SequenceTest_getStringBoundedTask::getObject()
{
    return m_obj;
}

void SequenceTest_getStringBoundedTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    dattos *sb2 = dattosPluginSupport_create_data();    
    dattos *sb3 = dattosPluginSupport_create_data();    
    dattos *getStringBounded_ret = dattosPluginSupport_create_data();     
	
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
