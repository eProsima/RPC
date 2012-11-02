#include "TypedefTestProxy.h"
#include "TypedefTestAsyncSupport.h"
#include "TypedefTestRequestReplyPlugin.h"


TypedefTest_getLargoTask::TypedefTest_getLargoTask(TypedefTest_getLargo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getLargoTask::~TypedefTest_getLargoTask()
{
}

TypedefTest_getLargo& TypedefTest_getLargoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getLargoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getLargoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    largo  l2 = 0;    
    largo  getLargo_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLargoReplyUtils::extractTypeData(m_reply, retcode, l2, getLargo_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getLargo(l2, getLargo_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getLarguisimoTask::TypedefTest_getLarguisimoTask(TypedefTest_getLarguisimo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getLarguisimoTask::~TypedefTest_getLarguisimoTask()
{
}

TypedefTest_getLarguisimo& TypedefTest_getLarguisimoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getLarguisimoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getLarguisimoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    larguisimo  ll2 = 0;    
    larguisimo  getLarguisimo_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getLarguisimoReplyUtils::extractTypeData(m_reply, retcode, ll2, getLarguisimo_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getLarguisimo(ll2, getLarguisimo_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getDatosDefTask::TypedefTest_getDatosDefTask(TypedefTest_getDatosDef &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getDatosDefTask::~TypedefTest_getDatosDefTask()
{
}

TypedefTest_getDatosDef& TypedefTest_getDatosDefTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getDatosDefTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getDatosDefTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DatosDef d2;
        
    DatosDef getDatosDef_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDatosDefReplyUtils::extractTypeData(m_reply, retcode, d2, getDatosDef_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getDatosDef(d2, getDatosDef_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getDatosDefondoTask::TypedefTest_getDatosDefondoTask(TypedefTest_getDatosDefondo &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getDatosDefondoTask::~TypedefTest_getDatosDefondoTask()
{
}

TypedefTest_getDatosDefondo& TypedefTest_getDatosDefondoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getDatosDefondoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getDatosDefondoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    DatosDefondo dd2;
        
    DatosDefondo getDatosDefondo_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getDatosDefondoReplyUtils::extractTypeData(m_reply, retcode, dd2, getDatosDefondo_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getDatosDefondo(dd2, getDatosDefondo_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getCadenaTask::TypedefTest_getCadenaTask(TypedefTest_getCadena &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getCadenaTask::~TypedefTest_getCadenaTask()
{
}

TypedefTest_getCadena& TypedefTest_getCadenaTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getCadenaTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getCadenaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    cadena  c2 = NULL;    
    cadena  getCadena_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCadenaReplyUtils::extractTypeData(m_reply, retcode, c2, getCadena_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getCadena(c2, getCadena_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}


TypedefTest_getCorreaTask::TypedefTest_getCorreaTask(TypedefTest_getCorrea &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

TypedefTest_getCorreaTask::~TypedefTest_getCorreaTask()
{
}

TypedefTest_getCorrea& TypedefTest_getCorreaTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getCorreaTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getCorreaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    correa  cc2 = NULL;    
    correa  getCorrea_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getCorreaReplyUtils::extractTypeData(m_reply, retcode, cc2, getCorrea_ret);
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getCorrea(cc2, getCorrea_ret);
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
