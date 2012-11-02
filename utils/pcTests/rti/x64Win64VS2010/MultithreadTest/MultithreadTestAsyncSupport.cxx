#include "MultithreadTestProxy.h"
#include "MultithreadTestAsyncSupport.h"
#include "MultithreadTestRequestReplyPlugin.h"


MultithreadTest_testTask::MultithreadTest_testTask(MultithreadTest_test &obj,
   eProsima::DDSRPC::Client *client) : AsyncTask(client), m_obj(obj)
{
}

MultithreadTest_testTask::~MultithreadTest_testTask()
{
}

MultithreadTest_test& MultithreadTest_testTask::getObject()
{
    return m_obj;
}

void* MultithreadTest_testTask::getReplyInstance()
{
    return &m_reply;
}

void MultithreadTest_testTask::execute(eProsima::DDSRPC::ReturnMessage message)
{  
    Dato dato2;
        
    DDS_Long  test_ret = 0;    
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::OPERATION_SUCCESSFUL;
	
	if(message == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		testReplyUtils::extractTypeData(m_reply, retcode, dato2  , test_ret  );
		
		if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
		    getObject().test(dato2  , test_ret  );
		else
		    getObject().error(retcode);
	}
	else
	{
	    getObject().error(message);
	}
}
