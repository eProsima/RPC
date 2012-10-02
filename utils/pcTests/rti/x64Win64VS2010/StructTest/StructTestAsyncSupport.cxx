#include "StructTestProxy.h"
#include "StructTestAsyncSupport.h"
#include "StructTestRequestReplyPlugin.h"


StructTest_duplicateTask::StructTest_duplicateTask(StructTest_duplicate &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)duplicateReplyTypeSupport::create_data();
}

StructTest_duplicateTask::~StructTest_duplicateTask()
{
duplicateReplyTypeSupport::delete_data((duplicateReply*)m_reply);
}

StructTest_duplicate& StructTest_duplicateTask::getObject()
{
    return m_obj;
}

void StructTest_duplicateTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Recepcion *duplicate_ret = RecepcionPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		duplicateReplyUtils::extractTypeData((duplicateReply*)m_reply, duplicate_ret  );
		getObject().duplicate(duplicate_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}


StructTest_sumaTask::StructTest_sumaTask(StructTest_suma &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)sumaReplyTypeSupport::create_data();
}

StructTest_sumaTask::~StructTest_sumaTask()
{
sumaReplyTypeSupport::delete_data((sumaReply*)m_reply);
}

StructTest_suma& StructTest_sumaTask::getObject()
{
    return m_obj;
}

void StructTest_sumaTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Recepcion *suma_ret = RecepcionPluginSupport_create_data();     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sumaReplyUtils::extractTypeData((sumaReply*)m_reply, suma_ret  );
		getObject().suma(suma_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
