/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "MultithreadTestServer.h"
#include "MultithreadTestRequestReplyPlugin.h"
#include "MultithreadTestServerRPCSupport.h"

MultithreadTestServer::MultithreadTestServer(int domainId, unsigned int threadCount,
const char *qosLibrary, const char *qosProfile) : Server(domainId, threadCount, qosLibrary, qosProfile)
{
    _impl = new MultithreadTestImpl();
    
    this->setRPC(new testServerRPC("test", this,
                testRequestUtils::registerType(getParticipant()),
    NULL,
    NULL,
                testReplyUtils::registerType(getParticipant()),
    NULL,
    NULL,
                &MultithreadTestServer::test, getParticipant()));

}
MultithreadTestServer::~MultithreadTestServer()
{
    delete _impl;    
}

void MultithreadTestServer::test(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    MultithreadTestServer *srv = (MultithreadTestServer*)server;
    Dato *dato1 = NULL;       
   
    Dato *dato2 = DatoPluginSupport_create_data();    
    DDS_Long  test_ret ;       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    testReply *replyData = NULL;

    testRequestUtils::extractTypeData((testRequest*)requestData, dato1  );
                                         
    returnedValue = srv->_impl->test(dato1  ,dato2  , test_ret  );
           
    replyData = testReplyUtils::createTypeData(dato2  , test_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    testReplyTypeSupport::delete_data(replyData);
    testRequestTypeSupport::delete_data((testRequest*)requestData);
    
    DatoPluginSupport_destroy_data(dato2);    
        
}