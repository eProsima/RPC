/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "StructTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "StructTestRequestReplyPlugin.h"
#include "StructTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

StructTestProxy::StructTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

StructTestProxy::StructTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

StructTestProxy::~StructTestProxy()
{
    delete duplicate_Service;
    delete suma_Service;
}

void StructTestProxy::createRPCs()
{
    this->duplicate_Service = new StructTest_duplicateClientRPC("duplicate",
                                  StructTest_duplicateRequestUtils::registerType(getParticipant()),
                                  StructTest_duplicateReplyUtils::registerType(getParticipant()),
                                  this);
    this->suma_Service = new StructTest_sumaClientRPC("suma",
                                  StructTest_sumaRequestUtils::registerType(getParticipant()),
                                  StructTest_sumaReplyUtils::registerType(getParticipant()),
                                  this);

}

 
Recepcion StructTestProxy::duplicate(/*in*/ const Envio& ev) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    Recepcion duplicate_ret;
        
    StructTest_duplicateRequest instance;
    StructTest_duplicateReply retInstance;

    StructTest_duplicateReply_initialize(&retInstance);    
    StructTest_duplicateRequestUtils::setTypeData(instance, ev);
    retcode = duplicate_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        StructTest_duplicateReplyUtils::extractTypeData(retInstance, retcode, duplicate_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return duplicate_ret;
}
 
Recepcion StructTestProxy::suma(/*in*/ const Envio& ev1, /*in*/ const Envio& ev2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    Recepcion suma_ret;
        
    StructTest_sumaRequest instance;
    StructTest_sumaReply retInstance;

    StructTest_sumaReply_initialize(&retInstance);    
    StructTest_sumaRequestUtils::setTypeData(instance, ev1, ev2);
    retcode = suma_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        StructTest_sumaReplyUtils::extractTypeData(retInstance, retcode, suma_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
    };
    

    return suma_ret;
}

 
void StructTestProxy::duplicate_async(StructTest_duplicateCallbackHandler &obj, /*in*/ const Envio& ev) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    StructTest_duplicateRequest instance;
    StructTest_duplicateTask *task = NULL;
    StructTest_duplicateRequestUtils::setTypeData(instance, ev);
    task = new StructTest_duplicateTask(obj, this);
    retcode = duplicate_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void StructTestProxy::suma_async(StructTest_sumaCallbackHandler &obj, /*in*/ const Envio& ev1, /*in*/ const Envio& ev2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    StructTest_sumaRequest instance;
    StructTest_sumaTask *task = NULL;
    StructTest_sumaRequestUtils::setTypeData(instance, ev1, ev2);
    task = new StructTest_sumaTask(obj, this);
    retcode = suma_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}