#include "UnionTestProxy.h"
#include "UnionTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "UnionTestRequestReplyPlugin.h"


UnionTest_getEmpleadoTask::UnionTest_getEmpleadoTask(UnionTest_getEmpleadoCallbackHandler &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
    UnionTest_getEmpleadoReply_initialize(&m_reply);
}

UnionTest_getEmpleadoTask::~UnionTest_getEmpleadoTask()
{
    UnionTest_getEmpleadoReply_finalize(&m_reply);
}

UnionTest_getEmpleadoCallbackHandler& UnionTest_getEmpleadoTask::getObject()
{
    return m_obj;
}

void* UnionTest_getEmpleadoTask::getReplyInstance()
{
    return &m_reply;
}

void UnionTest_getEmpleadoTask::execute()
{  
    Empleado em2;
        
    Empleado em3;
        
    Empleado getEmpleado_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	UnionTest_getEmpleadoReplyUtils::extractTypeData(m_reply, retcode, em2, em3, getEmpleado_ret);
		
	if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getObject().getEmpleado(em2, em3, getEmpleado_ret);
	}
	else
	{
		if(retcode == eProsima::DDSRPC::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::DDSRPC::ServerInternalException(m_reply.header.ddsrpcRetMsg));
	}
}

void UnionTest_getEmpleadoTask::on_exception(const eProsima::DDSRPC::SystemException &ex)
{
    getObject().on_exception(ex);
}
