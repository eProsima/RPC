#include "StructTestProxy.h"
#include "StructTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "StructTestRequestReplyPlugin.h"


StructTest_duplicateTask::StructTest_duplicateTask(StructTest_duplicateCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    StructTest_duplicateReply_initialize(&m_reply);
}

StructTest_duplicateTask::~StructTest_duplicateTask()
{
    StructTest_duplicateReply_finalize(&m_reply);
}

StructTest_duplicateCallbackHandler& StructTest_duplicateTask::getObject()
{
    return m_obj;
}

void* StructTest_duplicateTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_duplicateTask::execute()
{  
    Recepcion duplicate_ret;
        
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	StructTest_duplicateReplyUtils::extractTypeData(m_reply, retcode, duplicate_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().duplicate(duplicate_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void StructTest_duplicateTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}


StructTest_sumaTask::StructTest_sumaTask(StructTest_sumaCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    StructTest_sumaReply_initialize(&m_reply);
}

StructTest_sumaTask::~StructTest_sumaTask()
{
    StructTest_sumaReply_finalize(&m_reply);
}

StructTest_sumaCallbackHandler& StructTest_sumaTask::getObject()
{
    return m_obj;
}

void* StructTest_sumaTask::getReplyInstance()
{
    return &m_reply;
}

void StructTest_sumaTask::execute()
{  
    Recepcion suma_ret;
        
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	StructTest_sumaReplyUtils::extractTypeData(m_reply, retcode, suma_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().suma(suma_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void StructTest_sumaTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
