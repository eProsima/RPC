#include "UnionTestProxy.h"
#include "UnionTestAsyncSupport.h"
#include "UnionTestRequestReplyPlugin.h"


UnionTest_getEmpleadoTask::UnionTest_getEmpleadoTask(UnionTest_getEmpleado &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

UnionTest_getEmpleadoTask::~UnionTest_getEmpleadoTask()
{
}

UnionTest_getEmpleado& UnionTest_getEmpleadoTask::getObject()
{
    return m_obj;
}

void* UnionTest_getEmpleadoTask::getReplyInstance()
{
    return &m_reply;
}

void UnionTest_getEmpleadoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Empleado em2;
        
    Empleado em3;
        
    Empleado getEmpleado_ret;
        
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getEmpleadoReplyUtils::extractTypeData(m_reply, retcode, em2  , em3  , getEmpleado_ret  );
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().getEmpleado(em2  , em3  , getEmpleado_ret  );
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
