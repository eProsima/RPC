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

    // UnknowEx
    union_max_size_serialized = current_alignment;
    union_max_size_serialized += 1;

    reset_alignment = current_alignment;
    reset_alignment += Calculator_addition_Out::getMaxCdrSerializedSize(reset_alignment);

    if(union_max_size_serialized < reset_alignment)
    {
        union_max_size_serialized = reset_alignment;
    }


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

    // UnknowEx
    union_max_size_serialized = current_alignment;
    union_max_size_serialized += 1;

    reset_alignment = current_alignment;
    reset_alignment += Calculator_subtraction_Out::getMaxCdrSerializedSize(reset_alignment);

    if(union_max_size_serialized < reset_alignment)
    {
        union_max_size_serialized = reset_alignment;
    }


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



Calculator_Call::Calculator_Call() : m__d(0)
{
}

Calculator_Call::~Calculator_Call()
{
}

Calculator_Call::Calculator_Call(const Calculator_Call &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = x.m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = x.m_subtraction;
                    break;

    }
}

Calculator_Call::Calculator_Call(Calculator_Call &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = std::move(x.m_addition);
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = std::move(x.m_subtraction);
                    break;

    }
}

Calculator_Call& Calculator_Call::operator=(const Calculator_Call &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = x.m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = x.m_subtraction;
                    break;

    }

    return *this;
}

Calculator_Call& Calculator_Call::operator=(Calculator_Call &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = std::move(x.m_addition);
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = std::move(x.m_subtraction);
                    break;

    }

    return *this;
}

void Calculator_Call::_d(int32_t __d)
{
    if(m__d != __d)
    {
        throw eprosima::rpc::exception::BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t Calculator_Call::_d() const
{
    return m__d;
}

int32_t& Calculator_Call::_d()
{
    return m__d;
}

void Calculator_Call::unknownOp(eprosima::rpc::protocol::dds::rpc::UnknownOperation _unknownOp)
{
    m_unknownOp = _unknownOp;
    m__d = 0;
}

eprosima::rpc::protocol::dds::rpc::UnknownOperation Calculator_Call::unknownOp() const
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownOp;
}

eprosima::rpc::protocol::dds::rpc::UnknownOperation& Calculator_Call::unknownOp()
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownOp;
}

void Calculator_Call::addition(const Calculator_addition_In &_addition)
{
    m_addition = _addition;
    m__d = (int32_t)0xCBC6CEAA;
}

void Calculator_Call::addition(Calculator_addition_In &&_addition)
{
    m_addition = std::move(_addition);
    m__d = (int32_t)0xCBC6CEAA;
}

const Calculator_addition_In& Calculator_Call::addition() const
{
    if(m__d != (int32_t)0xCBC6CEAA)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_addition;
}

Calculator_addition_In& Calculator_Call::addition()
{
    if(m__d != (int32_t)0xCBC6CEAA)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_addition;
}

void Calculator_Call::subtraction(const Calculator_subtraction_In &_subtraction)
{
    m_subtraction = _subtraction;
    m__d = (int32_t)0xCA019A14;
}

void Calculator_Call::subtraction(Calculator_subtraction_In &&_subtraction)
{
    m_subtraction = std::move(_subtraction);
    m__d = (int32_t)0xCA019A14;
}

const Calculator_subtraction_In& Calculator_Call::subtraction() const
{
    if(m__d != (int32_t)0xCA019A14)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_subtraction;
}

Calculator_subtraction_In& Calculator_Call::subtraction()
{
    if(m__d != (int32_t)0xCA019A14)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_subtraction;
}


size_t Calculator_Call::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    // Default unknownOp attribute;
    union_max_size_serialized = current_alignment + 1;

        reset_alignment = current_alignment;

        reset_alignment += Calculator_addition_In::getMaxCdrSerializedSize(reset_alignment);

        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;


        reset_alignment = current_alignment;

        reset_alignment += Calculator_subtraction_In::getMaxCdrSerializedSize(reset_alignment);

        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;



    return union_max_size_serialized - initial_alignment;
}

size_t Calculator_Call::getCdrSerializedSize(const Calculator_Call& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    current_alignment += Calculator_addition_In::getCdrSerializedSize(data.m_addition, current_alignment);
                    break;

                case (int32_t)0xCA019A14:
                    current_alignment += Calculator_subtraction_In::getCdrSerializedSize(data.m_subtraction, current_alignment);
                    break;

    }

    return current_alignment - initial_alignment;
}

void Calculator_Call::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    scdr << m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    scdr << m_subtraction;
                    break;

        default:
            scdr << m_unknownOp;
            break;
    }
}

void Calculator_Call::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    dcdr >> m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    dcdr >> m_subtraction;
                    break;

        default:
            dcdr >> m_unknownOp;
            break;
    }
}

Calculator_Request::Calculator_Request()
{
}

Calculator_Request::~Calculator_Request()
{
}

Calculator_Request::Calculator_Request(const Calculator_Request &x)
: m_header(x.m_header), m_data(x.m_data)
{
}

Calculator_Request::Calculator_Request(Calculator_Request &&x)
: m_header(std::move(x.m_header)), m_data(std::move(x.m_data))
{
}

Calculator_Request& Calculator_Request::operator=(const Calculator_Request &x)
{
    m_header = x.m_header;
    m_data = x.m_data;

    return *this;
}

Calculator_Request& Calculator_Request::operator=(Calculator_Request &&x)
{
    m_header = std::move(x.m_header);
    m_data = std::move(x.m_data);

    return *this;
}

size_t Calculator_Request::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::RequestHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_Call::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_Request::getCdrSerializedSize(const Calculator_Request& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += eprosima::rpc::protocol::dds::rpc::RequestHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_Call::getCdrSerializedSize(data.m_data, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_Request::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_data;
}

void Calculator_Request::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_data;
}

Calculator_Return::Calculator_Return() : m__d(0)
{
}

Calculator_Return::~Calculator_Return()
{
}

Calculator_Return::Calculator_Return(const Calculator_Return &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = x.m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = x.m_subtraction;
                    break;

    }
}

Calculator_Return::Calculator_Return(Calculator_Return &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = std::move(x.m_addition);
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = std::move(x.m_subtraction);
                    break;

    }
}

Calculator_Return& Calculator_Return::operator=(const Calculator_Return &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = x.m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = x.m_subtraction;
                    break;

    }

    return *this;
}

Calculator_Return& Calculator_Return::operator=(Calculator_Return &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    m_addition = std::move(x.m_addition);
                    break;

                case (int32_t)0xCA019A14:
                    m_subtraction = std::move(x.m_subtraction);
                    break;

    }

    return *this;
}

void Calculator_Return::_d(int32_t __d)
{
    if(m__d != __d)
    {
        throw eprosima::rpc::exception::BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

int32_t Calculator_Return::_d() const
{
    return m__d;
}

int32_t& Calculator_Return::_d()
{
    return m__d;
}

void Calculator_Return::unknownOp(eprosima::rpc::protocol::dds::rpc::UnknownOperation _unknownOp)
{
    m_unknownOp = _unknownOp;
    m__d = 0;
}

eprosima::rpc::protocol::dds::rpc::UnknownOperation Calculator_Return::unknownOp() const
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownOp;
}

eprosima::rpc::protocol::dds::rpc::UnknownOperation& Calculator_Return::unknownOp()
{
    if(m__d != 0)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_unknownOp;
}

void Calculator_Return::addition(const Calculator_addition_Result &_addition)
{
    m_addition = _addition;
    m__d = (int32_t)0xCBC6CEAA;
}

void Calculator_Return::addition(Calculator_addition_Result &&_addition)
{
    m_addition = std::move(_addition);
    m__d = (int32_t)0xCBC6CEAA;
}

const Calculator_addition_Result& Calculator_Return::addition() const
{
    if(m__d != (int32_t)0xCBC6CEAA)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_addition;
}

Calculator_addition_Result& Calculator_Return::addition()
{
    if(m__d != (int32_t)0xCBC6CEAA)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_addition;
}

void Calculator_Return::subtraction(const Calculator_subtraction_Result &_subtraction)
{
    m_subtraction = _subtraction;
    m__d = (int32_t)0xCA019A14;
}

void Calculator_Return::subtraction(Calculator_subtraction_Result &&_subtraction)
{
    m_subtraction = std::move(_subtraction);
    m__d = (int32_t)0xCA019A14;
}

const Calculator_subtraction_Result& Calculator_Return::subtraction() const
{
    if(m__d != (int32_t)0xCA019A14)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_subtraction;
}

Calculator_subtraction_Result& Calculator_Return::subtraction()
{
    if(m__d != (int32_t)0xCA019A14)
        throw eprosima::rpc::exception::BadParamException("This member is not been selected");

    return m_subtraction;
}


size_t Calculator_Return::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    // Default unknown_operation attribute;
    union_max_size_serialized = current_alignment + 1;

        reset_alignment = current_alignment;

        reset_alignment += Calculator_addition_Result::getMaxCdrSerializedSize(reset_alignment);

        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;


        reset_alignment = current_alignment;

        reset_alignment += Calculator_subtraction_Result::getMaxCdrSerializedSize(reset_alignment);

        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;



    return union_max_size_serialized - initial_alignment;
}

size_t Calculator_Return::getCdrSerializedSize(const Calculator_Return& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    switch(data.m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    current_alignment += Calculator_addition_Result::getCdrSerializedSize(data.m_addition, current_alignment);
                    break;

                case (int32_t)0xCA019A14:
                    current_alignment += Calculator_subtraction_Result::getCdrSerializedSize(data.m_subtraction, current_alignment);
                    break;

    }

    return current_alignment - initial_alignment;
}

void Calculator_Return::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    scdr << m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    scdr << m_subtraction;
                    break;

        default:
            scdr << m_unknownOp;
            break;
    }
}

void Calculator_Return::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
                case (int32_t)0xCBC6CEAA:
                    dcdr >> m_addition;
                    break;

                case (int32_t)0xCA019A14:
                    dcdr >> m_subtraction;
                    break;

        default:
            dcdr >>  m_unknownOp;
            break;
    }
}

Calculator_Reply::Calculator_Reply()
{
}

Calculator_Reply::~Calculator_Reply()
{
}

Calculator_Reply::Calculator_Reply(const Calculator_Reply &x)
: m_header(x.m_header), m_data(x.m_data)
{
}

Calculator_Reply::Calculator_Reply(Calculator_Reply &&x)
: m_header(std::move(x.m_header)), m_data(std::move(x.m_data))
{
}

Calculator_Reply& Calculator_Reply::operator=(const Calculator_Reply &x)
{
    m_header = x.m_header;
    m_data = x.m_data;

    return *this;
}

Calculator_Reply& Calculator_Reply::operator=(Calculator_Reply &&x)
{
    m_header = std::move(x.m_header);
    m_data = std::move(x.m_data);

    return *this;
}

size_t Calculator_Reply::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getMaxCdrSerializedSize(current_alignment);
    current_alignment += Calculator_Return::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t Calculator_Reply::getCdrSerializedSize(const Calculator_Reply& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment +=  eprosima::rpc::protocol::dds::rpc::ReplyHeader::getCdrSerializedSize(data.m_header, current_alignment);
    current_alignment += Calculator_Return::getCdrSerializedSize(data.m_data, current_alignment);

    return current_alignment - initial_alignment;
}

void Calculator_Reply::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_header;
    scdr << m_data;
}

void Calculator_Reply::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_header;
    dcdr >> m_data;
}

#endif // FASTCDR_VERSION_MAJOR == 1
