#include "TypedefTestProxy.h"
#include "TypedefTestAsyncSupport.h"
#include "TypedefTestRequestReplyPlugin.h"


TypedefTest_getLargoTask::TypedefTest_getLargoTask(TypedefTest_getLargo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getLargoReplyTypeSupport::create_data();
}

TypedefTest_getLargoTask::~TypedefTest_getLargoTask()
{
getLargoReplyTypeSupport::delete_data((getLargoReply*)m_reply);
}

TypedefTest_getLargo& TypedefTest_getLargoTask::getObject()
{
    return m_obj;
}

void TypedefTest_getLargoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    largo  l2 = 0;    
    largo  getLargo_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLargoReplyUtils::extractTypeData((getLargoReply*)m_reply, l2  , getLargo_ret  );
		getObject().getLargo(l2  , getLargo_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getLarguisimoTask::TypedefTest_getLarguisimoTask(TypedefTest_getLarguisimo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getLarguisimoReplyTypeSupport::create_data();
}

TypedefTest_getLarguisimoTask::~TypedefTest_getLarguisimoTask()
{
getLarguisimoReplyTypeSupport::delete_data((getLarguisimoReply*)m_reply);
}

TypedefTest_getLarguisimo& TypedefTest_getLarguisimoTask::getObject()
{
    return m_obj;
}

void TypedefTest_getLarguisimoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    larguisimo  ll2 = 0;    
    larguisimo  getLarguisimo_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLarguisimoReplyUtils::extractTypeData((getLarguisimoReply*)m_reply, ll2  , getLarguisimo_ret  );
		getObject().getLarguisimo(ll2  , getLarguisimo_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getDatosDefTask::TypedefTest_getDatosDefTask(TypedefTest_getDatosDef &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getDatosDefReplyTypeSupport::create_data();
}

TypedefTest_getDatosDefTask::~TypedefTest_getDatosDefTask()
{
getDatosDefReplyTypeSupport::delete_data((getDatosDefReply*)m_reply);
}

TypedefTest_getDatosDef& TypedefTest_getDatosDefTask::getObject()
{
    return m_obj;
}

void TypedefTest_getDatosDefTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DatosDef *d2 = DatosDefPluginSupport_create_data();    
    DatosDef *getDatosDef_ret = DatosDefPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDatosDefReplyUtils::extractTypeData((getDatosDefReply*)m_reply, d2  , getDatosDef_ret  );
		getObject().getDatosDef(d2  , getDatosDef_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getDatosDefondoTask::TypedefTest_getDatosDefondoTask(TypedefTest_getDatosDefondo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getDatosDefondoReplyTypeSupport::create_data();
}

TypedefTest_getDatosDefondoTask::~TypedefTest_getDatosDefondoTask()
{
getDatosDefondoReplyTypeSupport::delete_data((getDatosDefondoReply*)m_reply);
}

TypedefTest_getDatosDefondo& TypedefTest_getDatosDefondoTask::getObject()
{
    return m_obj;
}

void TypedefTest_getDatosDefondoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DatosDefondo *dd2 = DatosDefondoPluginSupport_create_data();    
    DatosDefondo *getDatosDefondo_ret = DatosDefondoPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDatosDefondoReplyUtils::extractTypeData((getDatosDefondoReply*)m_reply, dd2  , getDatosDefondo_ret  );
		getObject().getDatosDefondo(dd2  , getDatosDefondo_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getCadenaTask::TypedefTest_getCadenaTask(TypedefTest_getCadena &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getCadenaReplyTypeSupport::create_data();
}

TypedefTest_getCadenaTask::~TypedefTest_getCadenaTask()
{
getCadenaReplyTypeSupport::delete_data((getCadenaReply*)m_reply);
}

TypedefTest_getCadena& TypedefTest_getCadenaTask::getObject()
{
    return m_obj;
}

void TypedefTest_getCadenaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    cadena  c2 = NULL;    
    cadena  getCadena_ret = NULL;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCadenaReplyUtils::extractTypeData((getCadenaReply*)m_reply, c2  , getCadena_ret  );
		getObject().getCadena(c2  , getCadena_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getCorreaTask::TypedefTest_getCorreaTask(TypedefTest_getCorrea &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getCorreaReplyTypeSupport::create_data();
}

TypedefTest_getCorreaTask::~TypedefTest_getCorreaTask()
{
getCorreaReplyTypeSupport::delete_data((getCorreaReply*)m_reply);
}

TypedefTest_getCorrea& TypedefTest_getCorreaTask::getObject()
{
    return m_obj;
}

void TypedefTest_getCorreaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    correa  cc2 = NULL;    
    correa  getCorrea_ret = NULL;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCorreaReplyUtils::extractTypeData((getCorreaReply*)m_reply, cc2  , getCorrea_ret  );
		getObject().getCorrea(cc2  , getCorrea_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
