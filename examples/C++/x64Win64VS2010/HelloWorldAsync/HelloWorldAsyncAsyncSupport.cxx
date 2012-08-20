#include "HelloWorldAsyncProxy.h"
#include "HelloWorldAsyncAsyncSupport.h"
#include "HelloWorldAsyncRequestReplyPlugin.h"


sumaTask::sumaTask(sumaCallback callback, eProsima::DDSRPC::Client *client, eProsima::DDSRPC::ClientRPC *clientRPC) :
      AsyncTask(client, clientRPC), m_callback(callback)
{
}

sumaTask::~sumaTask()
{
}

void sumaTask::execute(DDS::QueryCondition *query)
{
   
    DDS_Long  suma_ret ;     
	sumaReply *reply = sumaReplyTypeSupport::create_data();
	eProsima::DDSRPC::ReturnMessage retCode = getRPC()->takeReply(reply, query);
	
	if(retCode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
	{
		sumaReplyUtils::extractTypeData(reply, suma_ret    );
		m_callback(suma_ret    );
	}
	
	sumaReplyTypeSupport::delete_data(reply);
}
