/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file SimpleDelayProxy.cxx
 * This source file contains the definition of the proxy for interface SimpleDelay.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SimpleDelayProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "SimpleDelayRequestReplyPlugin.h"
#include "SimpleDelayAsyncSupport.h"
#include "exceptions/Exceptions.h"

SimpleDelayProxy::SimpleDelayProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

SimpleDelayProxy::SimpleDelayProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

SimpleDelayProxy::~SimpleDelayProxy()
{
    delete suma_Service;
    delete duplicate_Service;
}

void SimpleDelayProxy::createRPCs()
{
    this->suma_Service = new SimpleDelay_sumaClientRPC("suma",
                                  SimpleDelay_sumaRequestUtils::registerType(getParticipant()),
                                  SimpleDelay_sumaReplyUtils::registerType(getParticipant()),
                                  this);
    this->duplicate_Service = new SimpleDelay_duplicateClientRPC("duplicate",
                                  SimpleDelay_duplicateRequestUtils::registerType(getParticipant()),
                                  SimpleDelay_duplicateReplyUtils::registerType(getParticipant()),
                                  this);

}

 
DDS_Long SimpleDelayProxy::suma(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    DDS_Long  suma_ret = 0;
    SimpleDelay_sumaRequest instance;
    SimpleDelay_sumaReply retInstance;

    SimpleDelay_sumaReply_initialize(&retInstance);
    SimpleDelay_sumaRequestUtils::setTypeData(instance, value1, value2);
    retcode = suma_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        SimpleDelay_sumaReplyUtils::extractTypeData(retInstance, retcode, suma_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
            throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::RPCDDS::SERVER_TIMEOUT:
            throw eProsima::RPCDDS::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::RPCDDS::SERVER_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ServerInternalException(retInstance.header.rpcddsRetMsg);
            break;
    };
    

    return suma_ret;
}
 
Estructura SimpleDelayProxy::duplicate(/*in*/ const Estructura& es) 
{
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    Estructura duplicate_ret;
    SimpleDelay_duplicateRequest instance;
    SimpleDelay_duplicateReply retInstance;

    SimpleDelay_duplicateReply_initialize(&retInstance);
    SimpleDelay_duplicateRequestUtils::setTypeData(instance, es);
    retcode = duplicate_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
    {
        SimpleDelay_duplicateReplyUtils::extractTypeData(retInstance, retcode, duplicate_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
            throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
            break;
        case eProsima::RPCDDS::SERVER_TIMEOUT:
            throw eProsima::RPCDDS::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::RPCDDS::SERVER_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ServerInternalException(retInstance.header.rpcddsRetMsg);
            break;
    };
    

    return duplicate_ret;
}

 
void SimpleDelayProxy::suma_async(SimpleDelay_sumaCallbackHandler &obj, /*in*/ DDS_Long value1, /*in*/ DDS_Long value2) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    SimpleDelay_sumaRequest instance;
    SimpleDelay_sumaTask *task = NULL;
    SimpleDelay_sumaRequestUtils::setTypeData(instance, value1, value2);
    task = new SimpleDelay_sumaTask(obj, this);
    retcode = suma_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
             throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void SimpleDelayProxy::duplicate_async(SimpleDelay_duplicateCallbackHandler &obj, /*in*/ const Estructura& es) 
{
	eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::CLIENT_INTERNAL_ERROR;
    SimpleDelay_duplicateRequest instance;
    SimpleDelay_duplicateTask *task = NULL;
    SimpleDelay_duplicateRequestUtils::setTypeData(instance, es);
    task = new SimpleDelay_duplicateTask(obj, this);
    retcode = duplicate_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::RPCDDS::CLIENT_INTERNAL_ERROR:
            throw eProsima::RPCDDS::ClientInternalException("Error in client side");
            break;
        case eProsima::RPCDDS::NO_SERVER:
             throw eProsima::RPCDDS::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}