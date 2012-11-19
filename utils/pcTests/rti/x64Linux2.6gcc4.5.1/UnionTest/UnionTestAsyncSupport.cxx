#include "UnionTestProxy.h"
#include "UnionTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "UnionTestRequestReplyPlugin.h"


UnionTest_getEmpleadoTask::UnionTest_getEmpleadoTask(UnionTest_getEmpleadoCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
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
        
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	UnionTest_getEmpleadoReplyUtils::extractTypeData(m_reply, retcode, em2, em3, getEmpleado_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().getEmpleado(em2, em3, getEmpleado_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void UnionTest_getEmpleadoTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}
