/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcdds_LICENSE file included in this rpcdds distribution.
 *
 *************************************************************************
 *
 * @file CalculatorAsyncSupport.cxx
 * This source file contains functionality to use asynchronous calls for all interfaces.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorDDSAsyncSupport.h"
#include <rpcdds/exceptions/ServerInternalException.h>
#include <rpcdds/exceptions/ClientInternalException.h>
#include <rpcdds/utils/Messages.h>

using namespace eprosima::rpc;
using namespace ::exception;

Calculator_additionTask::Calculator_additionTask(Calculator_additionCallbackHandler &obj) :
    RTPSAsyncTask(), m_obj(obj)
{
}

Calculator_additionTask::~Calculator_additionTask()
{
}

Calculator_additionCallbackHandler& Calculator_additionTask::getObject()
{
    return m_obj;
}

void* Calculator_additionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_additionTask::execute()
{
    int32_t  return_ = 0;


    if(m_reply.header().remoteEx() == eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK)
    {
        switch (m_reply.addition()._d())
        {
            case 0:
                return_ = m_reply.addition().result().return_();

                getObject().addition(return_);
                break;
            default:
                getObject().on_exception(ClientInternalException("Error extracting information from server"));
        }
    }
    else
    {
        getObject().on_exception(ServerInternalException(""));
    }
}

void Calculator_additionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_subtractionTask::Calculator_subtractionTask(Calculator_subtractionCallbackHandler &obj) :
    RTPSAsyncTask(), m_obj(obj)
{
}

Calculator_subtractionTask::~Calculator_subtractionTask()
{
}

Calculator_subtractionCallbackHandler& Calculator_subtractionTask::getObject()
{
    return m_obj;
}

void* Calculator_subtractionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_subtractionTask::execute()
{
    int32_t  return_ = 0;


    if(m_reply.header().remoteEx() == eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK)
    {
        switch (m_reply.subtraction()._d())
        {
            case 0:
                return_ = m_reply.subtraction().result().return_();

                getObject().subtraction(return_);
                break;
            default:
                getObject().on_exception(ClientInternalException("Error extracting information from server"));
        }
    }
    else
    {
        getObject().on_exception(ServerInternalException(""));
    }
}

void Calculator_subtractionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}



