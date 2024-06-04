// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file CalculatorTopics.cpp
 * This source file contains the implementation of topics generated using operations in the IDL file.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorTopics.h"

#if FASTCDR_VERSION_MAJOR == 1

#include <fastcdr/Cdr.h>
#include <fastcdr/exceptions/BadParamException.h>
#include <rpcdds/exceptions/BadParamException.h>

Calculator_addition_In::Calculator_addition_In()
: 
m_value1(0)
, 
m_value2(0)

{
}

Calculator_addition_In::~Calculator_addition_In()
{
}

Calculator_addition_In::Calculator_addition_In(const Calculator_addition_In &x)
: m_value1(x.m_value1), m_value2(x.m_value2)
{
}

Calculator_addition_In::Calculator_addition_In(Calculator_addition_In &&x)
: m_value1(std::move(x.m_value1)), m_value2(std::move(x.m_value2))
{
}

Calculator_addition_In& Calculator_addition_In::operator=(const Calculator_addition_In &x)
{
    m_value1 = x.m_value1;;
    m_value2 = x.m_value2;;
    return *this;
}

Calculator_addition_In& Calculator_addition_In::operator=(Calculator_addition_In &&x)
{
    m_value1 = x.m_value1;;
    m_value2 = x.m_value2;;
    return *this;
}

size_t Calculator_addition_In::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t Calculator_addition_In::getCdrSerializedSize(const Calculator_addition_In& data, size_t current_alignment)
{
    static_cast<void>(data);
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void Calculator_addition_In::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_value1;


    scdr << m_value2;

}

void Calculator_addition_In::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_value1;



    dcdr >> m_value2;


}

Calculator_addition_Request::Calculator_addition_Request()
{
}

Calculator_addition_Request::~Calculator_addition_Request()
{
}

Calculator_addition_Request::Calculator_addition_Request(const Calculator_addition_Request &x)
: m_header(x.m_header), m_addition(x.m_addition)
{
}

Calculator_addition_Request::Calculator_addition_Request(Calculator_addition_Request &&x)
: m_header(std::move(x.m_header)), m_addition(std::move(x.m_addition))
{
}

Calculator_addition_Request& Calculator_addition_Request::operator=(const Calculator_addition_Request &x)
{
    m_header = x.m_header;
    m_addition = x.m_addition;

    return *this;
}

Calculator_addition_Request& Calculator_addition_Request::operator=(Calculator_addition_Request &&x)
{
    m_header = std::move(x.m_header);
    m_addition = std::move(x.m_addition);

    return *this;
}

size_t Calculator_addition_Request::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += eprosima::rpc::protocol::dds::rpc::RequestHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_addition_In::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_addition_Request::getCdrSerializedSize(const Calculator_addition_Request& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += eprosima::rpc::protocol::dds::rpc::RequestHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_addition_In::getCdrSerializedSize(data.m_addition, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_addition_Request::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_addition;
}

void Calculator_addition_Request::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_addition;
}

Calculator_addition_Out::Calculator_addition_Out()
: 
m_return_(0)

{
}

Calculator_addition_Out::~Calculator_addition_Out()
{
}

Calculator_addition_Out::Calculator_addition_Out(const Calculator_addition_Out &x)
: m_return_(x.m_return_)
{
}

Calculator_addition_Out::Calculator_addition_Out(Calculator_addition_Out &&x)
: m_return_(std::move(x.m_return_))
{
}

Calculator_addition_Out& Calculator_addition_Out::operator=(const Calculator_addition_Out &x)
{
    m_return_ = x.m_return_;;
    return *this;
}

Calculator_addition_Out& Calculator_addition_Out::operator=(Calculator_addition_Out &&x)
{
    m_return_ = x.m_return_;;
    return *this;
}

size_t Calculator_addition_Out::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t Calculator_addition_Out::getCdrSerializedSize(const Calculator_addition_Out& data, size_t current_alignment)
{
    static_cast<void>(data);
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void Calculator_addition_Out::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_return_;

}

void Calculator_addition_Out::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_return_;


}

Calculator_addition_Result::Calculator_addition_Result() : m__d(2)
{
}

Calculator_addition_Result::~Calculator_addition_Result()
{
}

Calculator_addition_Result::Calculator_addition_Result(const Calculator_addition_Result &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = x.m_result;
            break;
    }
}

Calculator_addition_Result::Calculator_addition_Result(Calculator_addition_Result &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = std::move(x.m_result);
            break;
    }
}

Calculator_addition_Result& Calculator_addition_Result::operator=(const Calculator_addition_Result &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = x.m_result;
            break;
    }

    return *this;
}

Calculator_addition_Result& Calculator_addition_Result::operator=(Calculator_addition_Result &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = std::move(x.m_result);
            break;
    }

    return *this;
}

void Calculator_addition_Result::_d(int32_t __d)
{
    if(m__d != __d)
    {
        throw eprosima::rpc::exception::BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t Calculator_addition_Result::_d() const
{
    return m__d;
}

int32_t& Calculator_addition_Result::_d()
{
    return m__d;
}

void Calculator_addition_Result::unknownEx(eprosima::rpc::protocol::dds::rpc::UnknownException _unknownEx)
{
    m_unknownEx = _unknownEx;
    m__d = 2;
}

eprosima::rpc::protocol::dds::rpc::UnknownException Calculator_addition_Result::unknownEx() const
{
    if(m__d != 2)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownEx;
}

eprosima::rpc::protocol::dds::rpc::UnknownException& Calculator_addition_Result::unknownEx()
{
    if(m__d != 2)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownEx;
}

void Calculator_addition_Result::result(const Calculator_addition_Out &_result)
{
    m_result = _result;
    m__d = 0;
}

void Calculator_addition_Result::result(Calculator_addition_Out &&_result)
{
    m_result = std::move(_result);
    m__d = 0;
}

const Calculator_addition_Out& Calculator_addition_Result::result() const
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_result;
}

Calculator_addition_Out& Calculator_addition_Result::result()
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_result;
}


size_t Calculator_addition_Result::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    // UnknownEx
    union_max_size_serialized = current_alignment;
    union_max_size_serialized += 1;

    reset_alignment = current_alignment;
    reset_alignment += Calculator_addition_Out::getMaxCdrSerializedSize(reset_alignment);

    if(union_max_size_serialized < reset_alignment)
        union_max_size_serialized = reset_alignment;


    return union_max_size_serialized - initial_alignment;
}

size_t Calculator_addition_Result::getCdrSerializedSize(const Calculator_addition_Result& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            current_alignment += Calculator_addition_Out::getCdrSerializedSize(data.m_result, current_alignment);
            break;
    }

    return current_alignment - initial_alignment;
}

void Calculator_addition_Result::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            scdr << m_result;
            break;

        default:
            scdr << m_unknownEx;
            break;
    }
}

void Calculator_addition_Result::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            dcdr >> m_result;
            break;

        default:
            dcdr >> m_unknownEx;
            break;
    }
}

Calculator_addition_Reply::Calculator_addition_Reply()
{
}

Calculator_addition_Reply::~Calculator_addition_Reply()
{
}

Calculator_addition_Reply::Calculator_addition_Reply(const Calculator_addition_Reply &x)
: m_header(x.m_header), m_addition(x.m_addition)
{
}

Calculator_addition_Reply::Calculator_addition_Reply(Calculator_addition_Reply &&x)
: m_header(std::move(x.m_header)), m_addition(std::move(x.m_addition))
{
}

Calculator_addition_Reply& Calculator_addition_Reply::operator=(const Calculator_addition_Reply &x)
{
    m_header = x.m_header;
    m_addition = x.m_addition;

    return *this;
}

Calculator_addition_Reply& Calculator_addition_Reply::operator=(Calculator_addition_Reply &&x)
{
    m_header = std::move(x.m_header);
    m_addition = std::move(x.m_addition);

    return *this;
}

size_t Calculator_addition_Reply::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_addition_Result::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_addition_Reply::getCdrSerializedSize(const Calculator_addition_Reply& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_addition_Result::getCdrSerializedSize(data.m_addition, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_addition_Reply::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_addition;
}

void Calculator_addition_Reply::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_addition;
}


Calculator_subtraction_In::Calculator_subtraction_In()
: 
m_value1(0)
, 
m_value2(0)

{
}

Calculator_subtraction_In::~Calculator_subtraction_In()
{
}

Calculator_subtraction_In::Calculator_subtraction_In(const Calculator_subtraction_In &x)
: m_value1(x.m_value1), m_value2(x.m_value2)
{
}

Calculator_subtraction_In::Calculator_subtraction_In(Calculator_subtraction_In &&x)
: m_value1(std::move(x.m_value1)), m_value2(std::move(x.m_value2))
{
}

Calculator_subtraction_In& Calculator_subtraction_In::operator=(const Calculator_subtraction_In &x)
{
    m_value1 = x.m_value1;;
    m_value2 = x.m_value2;;
    return *this;
}

Calculator_subtraction_In& Calculator_subtraction_In::operator=(Calculator_subtraction_In &&x)
{
    m_value1 = x.m_value1;;
    m_value2 = x.m_value2;;
    return *this;
}

size_t Calculator_subtraction_In::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t Calculator_subtraction_In::getCdrSerializedSize(const Calculator_subtraction_In& data, size_t current_alignment)
{
    static_cast<void>(data);
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void Calculator_subtraction_In::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_value1;


    scdr << m_value2;

}

void Calculator_subtraction_In::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_value1;



    dcdr >> m_value2;


}

Calculator_subtraction_Request::Calculator_subtraction_Request()
{
}

Calculator_subtraction_Request::~Calculator_subtraction_Request()
{
}

Calculator_subtraction_Request::Calculator_subtraction_Request(const Calculator_subtraction_Request &x)
: m_header(x.m_header), m_subtraction(x.m_subtraction)
{
}

Calculator_subtraction_Request::Calculator_subtraction_Request(Calculator_subtraction_Request &&x)
: m_header(std::move(x.m_header)), m_subtraction(std::move(x.m_subtraction))
{
}

Calculator_subtraction_Request& Calculator_subtraction_Request::operator=(const Calculator_subtraction_Request &x)
{
    m_header = x.m_header;
    m_subtraction = x.m_subtraction;

    return *this;
}

Calculator_subtraction_Request& Calculator_subtraction_Request::operator=(Calculator_subtraction_Request &&x)
{
    m_header = std::move(x.m_header);
    m_subtraction = std::move(x.m_subtraction);

    return *this;
}

size_t Calculator_subtraction_Request::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += eprosima::rpc::protocol::dds::rpc::RequestHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_subtraction_In::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_subtraction_Request::getCdrSerializedSize(const Calculator_subtraction_Request& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += eprosima::rpc::protocol::dds::rpc::RequestHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_subtraction_In::getCdrSerializedSize(data.m_subtraction, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_subtraction_Request::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_subtraction;
}

void Calculator_subtraction_Request::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_subtraction;
}

Calculator_subtraction_Out::Calculator_subtraction_Out()
: 
m_return_(0)

{
}

Calculator_subtraction_Out::~Calculator_subtraction_Out()
{
}

Calculator_subtraction_Out::Calculator_subtraction_Out(const Calculator_subtraction_Out &x)
: m_return_(x.m_return_)
{
}

Calculator_subtraction_Out::Calculator_subtraction_Out(Calculator_subtraction_Out &&x)
: m_return_(std::move(x.m_return_))
{
}

Calculator_subtraction_Out& Calculator_subtraction_Out::operator=(const Calculator_subtraction_Out &x)
{
    m_return_ = x.m_return_;;
    return *this;
}

Calculator_subtraction_Out& Calculator_subtraction_Out::operator=(Calculator_subtraction_Out &&x)
{
    m_return_ = x.m_return_;;
    return *this;
}

size_t Calculator_subtraction_Out::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t Calculator_subtraction_Out::getCdrSerializedSize(const Calculator_subtraction_Out& data, size_t current_alignment)
{
    static_cast<void>(data);
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void Calculator_subtraction_Out::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_return_;

}

void Calculator_subtraction_Out::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_return_;


}

Calculator_subtraction_Result::Calculator_subtraction_Result() : m__d(2)
{
}

Calculator_subtraction_Result::~Calculator_subtraction_Result()
{
}

Calculator_subtraction_Result::Calculator_subtraction_Result(const Calculator_subtraction_Result &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = x.m_result;
            break;
    }
}

Calculator_subtraction_Result::Calculator_subtraction_Result(Calculator_subtraction_Result &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = std::move(x.m_result);
            break;
    }
}

Calculator_subtraction_Result& Calculator_subtraction_Result::operator=(const Calculator_subtraction_Result &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = x.m_result;
            break;
    }

    return *this;
}

Calculator_subtraction_Result& Calculator_subtraction_Result::operator=(Calculator_subtraction_Result &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            m_result = std::move(x.m_result);
            break;
    }

    return *this;
}

void Calculator_subtraction_Result::_d(int32_t __d)
{
    if(m__d != __d)
    {
        throw eprosima::rpc::exception::BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t Calculator_subtraction_Result::_d() const
{
    return m__d;
}

int32_t& Calculator_subtraction_Result::_d()
{
    return m__d;
}

void Calculator_subtraction_Result::unknownEx(eprosima::rpc::protocol::dds::rpc::UnknownException _unknownEx)
{
    m_unknownEx = _unknownEx;
    m__d = 2;
}

eprosima::rpc::protocol::dds::rpc::UnknownException Calculator_subtraction_Result::unknownEx() const
{
    if(m__d != 2)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownEx;
}

eprosima::rpc::protocol::dds::rpc::UnknownException& Calculator_subtraction_Result::unknownEx()
{
    if(m__d != 2)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownEx;
}

void Calculator_subtraction_Result::result(const Calculator_subtraction_Out &_result)
{
    m_result = _result;
    m__d = 0;
}

void Calculator_subtraction_Result::result(Calculator_subtraction_Out &&_result)
{
    m_result = std::move(_result);
    m__d = 0;
}

const Calculator_subtraction_Out& Calculator_subtraction_Result::result() const
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_result;
}

Calculator_subtraction_Out& Calculator_subtraction_Result::result()
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_result;
}


size_t Calculator_subtraction_Result::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    // UnknownEx
    union_max_size_serialized = current_alignment;
    union_max_size_serialized += 1;

    reset_alignment = current_alignment;
    reset_alignment += Calculator_subtraction_Out::getMaxCdrSerializedSize(reset_alignment);

    if(union_max_size_serialized < reset_alignment)
        union_max_size_serialized = reset_alignment;


    return union_max_size_serialized - initial_alignment;
}

size_t Calculator_subtraction_Result::getCdrSerializedSize(const Calculator_subtraction_Result& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            current_alignment += Calculator_subtraction_Out::getCdrSerializedSize(data.m_result, current_alignment);
            break;
    }

    return current_alignment - initial_alignment;
}

void Calculator_subtraction_Result::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            scdr << m_result;
            break;

        default:
            scdr << m_unknownEx;
            break;
    }
}

void Calculator_subtraction_Result::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            dcdr >> m_result;
            break;

        default:
            dcdr >> m_unknownEx;
            break;
    }
}

Calculator_subtraction_Reply::Calculator_subtraction_Reply()
{
}

Calculator_subtraction_Reply::~Calculator_subtraction_Reply()
{
}

Calculator_subtraction_Reply::Calculator_subtraction_Reply(const Calculator_subtraction_Reply &x)
: m_header(x.m_header), m_subtraction(x.m_subtraction)
{
}

Calculator_subtraction_Reply::Calculator_subtraction_Reply(Calculator_subtraction_Reply &&x)
: m_header(std::move(x.m_header)), m_subtraction(std::move(x.m_subtraction))
{
}

Calculator_subtraction_Reply& Calculator_subtraction_Reply::operator=(const Calculator_subtraction_Reply &x)
{
    m_header = x.m_header;
    m_subtraction = x.m_subtraction;

    return *this;
}

Calculator_subtraction_Reply& Calculator_subtraction_Reply::operator=(Calculator_subtraction_Reply &&x)
{
    m_header = std::move(x.m_header);
    m_subtraction = std::move(x.m_subtraction);

    return *this;
}

size_t Calculator_subtraction_Reply::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_subtraction_Result::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_subtraction_Reply::getCdrSerializedSize(const Calculator_subtraction_Reply& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_subtraction_Result::getCdrSerializedSize(data.m_subtraction, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_subtraction_Reply::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_subtraction;
}

void Calculator_subtraction_Reply::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_subtraction;
}





#endif // FASTCDR_VERSION_MAJOR == 1