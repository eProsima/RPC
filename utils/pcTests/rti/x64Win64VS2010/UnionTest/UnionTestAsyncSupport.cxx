#include "UnionTestProxy.h"
#include "UnionTestAsyncSupport.h"
#include "UnionTestRequestReplyPlugin.h"


UnionTest_getEmpleadoTask::UnionTest_getEmpleadoTask(UnionTest_getEmpleado &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)getEmpleadoReplyTypeSupport::create_data();
}

UnionTest_getEmpleadoTask::~UnionTest_getEmpleadoTask()
{
getEmpleadoReplyTypeSupport::delete_data((getEmpleadoReply*)m_reply);
}

UnionTest_getEmpleado& UnionTest_getEmpleadoTask::getObject()
{
    return m_obj;
}

void UnionTest_getEmpleadoTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Empleado *em2 = EmpleadoPluginSupport_create_data();    
    Empleado *em3 = EmpleadoPluginSupport_create_data();    
    Empleado *getEmpleado_ret = EmpleadoPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		getEmpleadoReplyUtils::extractTypeData((getEmpleadoReply*)m_reply, em2  , em3  , getEmpleado_ret  );
		getObject().getEmpleado(em2  , em3  , getEmpleado_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
