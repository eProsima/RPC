#include "TypedefTestProxy.h"
#include "TypedefTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "TypedefTestRequestReplyPlugin.h"


TypedefTest_getLargoTask::TypedefTest_getLargoTask(TypedefTest_getLargoCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getLargoReply_initialize(&m_reply);
}

TypedefTest_getLargoTask::~TypedefTest_getLargoTask()
{
    TypedefTest_getLargoReply_finalize(&m_reply);
}

TypedefTest_getLargoCallbackHandler& TypedefTest_getLargoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getLargoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getLargoTask::execute()
{  
    largo  l2 = 0;    
    largo  getLargo_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getLargoReplyUtils::extractTypeData(m_reply, retcode, l2, getLargo_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getLargo(l2, getLargo_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getLargoTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


TypedefTest_getLarguisimoTask::TypedefTest_getLarguisimoTask(TypedefTest_getLarguisimoCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getLarguisimoReply_initialize(&m_reply);
}

TypedefTest_getLarguisimoTask::~TypedefTest_getLarguisimoTask()
{
    TypedefTest_getLarguisimoReply_finalize(&m_reply);
}

TypedefTest_getLarguisimoCallbackHandler& TypedefTest_getLarguisimoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getLarguisimoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getLarguisimoTask::execute()
{  
    larguisimo  ll2 = 0;    
    larguisimo  getLarguisimo_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getLarguisimoReplyUtils::extractTypeData(m_reply, retcode, ll2, getLarguisimo_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getLarguisimo(ll2, getLarguisimo_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getLarguisimoTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


TypedefTest_getDatosDefTask::TypedefTest_getDatosDefTask(TypedefTest_getDatosDefCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getDatosDefReply_initialize(&m_reply);
}

TypedefTest_getDatosDefTask::~TypedefTest_getDatosDefTask()
{
    TypedefTest_getDatosDefReply_finalize(&m_reply);
}

TypedefTest_getDatosDefCallbackHandler& TypedefTest_getDatosDefTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getDatosDefTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getDatosDefTask::execute()
{  
    DatosDef d2;
        
    DatosDef getDatosDef_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getDatosDefReplyUtils::extractTypeData(m_reply, retcode, d2, getDatosDef_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getDatosDef(d2, getDatosDef_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getDatosDefTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


TypedefTest_getDatosDefondoTask::TypedefTest_getDatosDefondoTask(TypedefTest_getDatosDefondoCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getDatosDefondoReply_initialize(&m_reply);
}

TypedefTest_getDatosDefondoTask::~TypedefTest_getDatosDefondoTask()
{
    TypedefTest_getDatosDefondoReply_finalize(&m_reply);
}

TypedefTest_getDatosDefondoCallbackHandler& TypedefTest_getDatosDefondoTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getDatosDefondoTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getDatosDefondoTask::execute()
{  
    DatosDefondo dd2;
        
    DatosDefondo getDatosDefondo_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getDatosDefondoReplyUtils::extractTypeData(m_reply, retcode, dd2, getDatosDefondo_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getDatosDefondo(dd2, getDatosDefondo_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getDatosDefondoTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


TypedefTest_getCadenaTask::TypedefTest_getCadenaTask(TypedefTest_getCadenaCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getCadenaReply_initialize(&m_reply);
}

TypedefTest_getCadenaTask::~TypedefTest_getCadenaTask()
{
    TypedefTest_getCadenaReply_finalize(&m_reply);
}

TypedefTest_getCadenaCallbackHandler& TypedefTest_getCadenaTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getCadenaTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getCadenaTask::execute()
{  
    cadena  c2 = NULL;    
    cadena  getCadena_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getCadenaReplyUtils::extractTypeData(m_reply, retcode, c2, getCadena_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getCadena(c2, getCadena_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getCadenaTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}


TypedefTest_getCorreaTask::TypedefTest_getCorreaTask(TypedefTest_getCorreaCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    TypedefTest_getCorreaReply_initialize(&m_reply);
}

TypedefTest_getCorreaTask::~TypedefTest_getCorreaTask()
{
    TypedefTest_getCorreaReply_finalize(&m_reply);
}

TypedefTest_getCorreaCallbackHandler& TypedefTest_getCorreaTask::getObject()
{
    return m_obj;
}

void* TypedefTest_getCorreaTask::getReplyInstance()
{
    return &m_reply;
}

void TypedefTest_getCorreaTask::execute()
{  
    correa  cc2 = NULL;    
    correa  getCorrea_ret = NULL;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	TypedefTest_getCorreaReplyUtils::extractTypeData(m_reply, retcode, cc2, getCorrea_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getCorrea(cc2, getCorrea_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void TypedefTest_getCorreaTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
