/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "client/Proxy.h"
#include "exceptions/InitializeException.h"
#include "transports/ProxyTransport.h"
#include "protocols/Protocol.h"
#include "client/AsyncThread.h"

static const char* const CLASS_NAME ="eprosima::rpcdds::proxy::Proxy";

using namespace eprosima::rpcdds;
using namespace ::proxy;
using namespace ::transport;
using namespace ::protocol;
using namespace ::exception;

Proxy::Proxy(ProxyTransport &transport, Protocol &protocol) :
    m_transport(transport), m_protocol(protocol)
{
    const char* const METHOD_NAME ="Proxy";
    std::string errorMessage;

    if(protocol.setTransport(transport))
    {
        // Create asynchronous tasks thread
        //m_asyncThread = new AsyncThread();

        //if(m_asyncThread != NULL)
        {
            //if(m_asyncThread->init() == 0)
                return;
            //else
            {
                errorMessage = "Cannot initialize the asynchronous thread";
            //    delete m_asyncThread;
            }
        }
        //else
        //    errorMessage = "create asynchronous thread";
    }
    else
        errorMessage = "Cannot bind protocol with the transport";

    printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
    throw InitializeException(std::move(errorMessage));
}

Proxy::~Proxy()
{
    /*if(m_asyncThread != NULL)
    {
        m_asyncThread->exit();
        delete m_asyncThread;
    }*/
}

// TODO
/*
   int Proxy::addAsyncTask(DDS::QueryCondition *query, AsyncTask *task, long timeout)
   {
   const char* const METHOD_NAME = "addAsyncTask";
   int returnedValue = -1;

   if(query != NULL && task != NULL)
   {
   returnedValue = m_asyncThread->addTask(query, task, timeout);
   }
   else
   {
   printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
   }

   return returnedValue;
   }*/

//TODO
/*
   void Proxy::deleteAssociatedAsyncTasks(ClientRPC *rpc)
   {
   const char* const METHOD_NAME = "deleteAssociatedAsyncTasks";

   if(rpc != NULL)
   {
   m_asyncThread->deleteAssociatedAsyncTasks(rpc);
   }
   else
   {
   printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
   }
   }*/
