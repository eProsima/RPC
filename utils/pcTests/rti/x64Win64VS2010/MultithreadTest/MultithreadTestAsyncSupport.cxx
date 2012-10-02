#include "MultithreadTestProxy.h"
#include "MultithreadTestAsyncSupport.h"
#include "MultithreadTestRequestReplyPlugin.h"


MultithreadTest_testTask::MultithreadTest_testTask(MultithreadTest_test &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
m_reply = (void*)testReplyTypeSupport::create_data();
}

MultithreadTest_testTask::~MultithreadTest_testTask()
{
testReplyTypeSupport::delete_data((testReply*)m_reply);
}

MultithreadTest_test& MultithreadTest_testTask::getObject()
{
    return m_obj;
}

void MultithreadTest_testTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Dato *dato2 = DatoPluginSupport_create_data();    
    DDS_Long  test_ret = 0;     
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		testReplyUtils::extractTypeData((testReply*)m_reply, dato2  , test_ret  );
		getObject().test(dato2  , test_ret  );
	}
	else
	{
	    getObject().error(message);
	}
}
