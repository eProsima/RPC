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
 * @file CalculatorCdrAux.ipp
 * This source file contains some declarations of CDR related functions.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _RPC_DDS_GENERATED_CALCULATORTOPICSCDRAUX_IPP_
#define _RPC_DDS_GENERATED_CALCULATORTOPICSCDRAUX_IPP_

#include <fastcdr/Cdr.h>
#include <fastcdr/CdrSizeCalculator.hpp>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

constexpr uint32_t Calculator_Request_max_cdr_typesize {100UL};
constexpr uint32_t Calculator_Reply_max_cdr_typesize {100UL};


namespace eprosima {
namespace fastcdr {







template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_addition_In& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(0, data.value1(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(1, data.value2(), current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_addition_Out& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(0, data.return_(), current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_addition_Result& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data._d(),
                    current_alignment);

    switch(data._d())
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            calculated_size += calculator.calculate_member_serialized_size(2, data.result(), current_alignment);
            break;
        default:
            calculated_size += calculator.calculate_member_serialized_size(1, data.unknownEx(), current_alignment);
            break;
    }

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}


template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_addition_In& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr<< eprosima::fastcdr::MemberId(0) << data.value1()
        << eprosima::fastcdr::MemberId(1) << data.value2()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_addition_In& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                            dcdr >> data.value1();
                                            break;

                                        case 1:
                                            dcdr >> data.value2();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_addition_Out& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr<< eprosima::fastcdr::MemberId(0) << data.return_()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_addition_Out& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                            dcdr >> data.return_();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_addition_Result& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data._d();

    switch (data._d())
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            scdr << eprosima::fastcdr::MemberId(2) << data.result();
            break;
        default:
            scdr << eprosima::fastcdr::MemberId(1) << data.unknownEx();
            break;
    }

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_addition_Result& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                if (0 == mid.id)
                {
                    int32_t discriminator;
                    dcdr >> discriminator;

                    switch (discriminator)
                    {
                        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
                            data.result({});
                            break;
                        default:
                            data.unknownEx({});
                            break;
                    }
                }
                else
                {
                    switch (data._d())
                    {
                        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
                            dcdr >> data.result();
                            break;
                        default:
                            dcdr >> data.unknownEx();
                            break;
                    }
                    ret_value = false;
                }
                return ret_value;
            });
}




template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_subtraction_In& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(0, data.value1(), current_alignment);

        calculated_size += calculator.calculate_member_serialized_size(1, data.value2(), current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_subtraction_Out& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};


        calculated_size += calculator.calculate_member_serialized_size(0, data.return_(), current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_subtraction_Result& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data._d(),
                    current_alignment);

    switch(data._d())
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            calculated_size += calculator.calculate_member_serialized_size(2, data.result(), current_alignment);
            break;
        default:
            calculated_size += calculator.calculate_member_serialized_size(1, data.unknownEx(), current_alignment);
            break;
    }

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}


template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_subtraction_In& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr<< eprosima::fastcdr::MemberId(0) << data.value1()
        << eprosima::fastcdr::MemberId(1) << data.value2()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_subtraction_In& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                            dcdr >> data.value1();
                                            break;

                                        case 1:
                                            dcdr >> data.value2();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_subtraction_Out& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr<< eprosima::fastcdr::MemberId(0) << data.return_()
;
    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_subtraction_Out& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                                        case 0:
                                            dcdr >> data.return_();
                                            break;

                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_subtraction_Result& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data._d();

    switch (data._d())
    {
        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
            scdr << eprosima::fastcdr::MemberId(2) << data.result();
            break;
        default:
            scdr << eprosima::fastcdr::MemberId(1) << data.unknownEx();
            break;
    }

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_subtraction_Result& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                if (0 == mid.id)
                {
                    int32_t discriminator;
                    dcdr >> discriminator;

                    switch (discriminator)
                    {
                        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
                            data.result({});
                            break;
                        default:
                            data.unknownEx({});
                            break;
                    }
                }
                else
                {
                    switch (data._d())
                    {
                        case eprosima::rpc::protocol::dds::rpc::REMOTE_EX_OK:
                            dcdr >> data.result();
                            break;
                        default:
                            dcdr >> data.unknownEx();
                            break;
                    }
                    ret_value = false;
                }
                return ret_value;
            });
}





template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_Call& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data._d(),
                    current_alignment);

    switch(data._d())
    {
                case static_cast<int32_t>(0xCBC6CEAA):
                    calculated_size += calculator.calculate_member_serialized_size(1 + 1, data.addition(), current_alignment);
                    break;

                case static_cast<int32_t>(0xCA019A14):
                    calculated_size += calculator.calculate_member_serialized_size(2 + 1, data.subtraction(), current_alignment);
                    break;

        default:
            calculated_size += calculator.calculate_member_serialized_size(1, data.unknownOp(), current_alignment);
            break;
    }

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_Request& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data.header(),
                    current_alignment);
    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(1), data.data(),
                    current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_Return& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data._d(),
                    current_alignment);

    switch(data._d())
    {
                case static_cast<int32_t>(0xCBC6CEAA):
                    calculated_size += calculator.calculate_member_serialized_size(1 + 1, data.addition(), current_alignment);
                    break;

                case static_cast<int32_t>(0xCA019A14):
                    calculated_size += calculator.calculate_member_serialized_size(2 + 1, data.subtraction(), current_alignment);
                    break;

        default:
            calculated_size += calculator.calculate_member_serialized_size(1, data.unknownOp(), current_alignment);
            break;
    }

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport size_t calculate_serialized_size(
        eprosima::fastcdr::CdrSizeCalculator& calculator,
        const Calculator_Reply& data,
        size_t& current_alignment)
{
    eprosima::fastcdr::EncodingAlgorithmFlag previous_encoding = calculator.get_encoding();
    size_t calculated_size {calculator.begin_calculate_type_serialized_size(
                                eprosima::fastcdr::CdrVersion::XCDRv2 == calculator.get_cdr_version() ?
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
                                eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
                                current_alignment)};

    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(0), data.header(),
                    current_alignment);
    calculated_size += calculator.calculate_member_serialized_size(eprosima::fastcdr::MemberId(1), data.data(),
                    current_alignment);

    calculated_size += calculator.end_calculate_type_serialized_size(previous_encoding, current_alignment);

    return calculated_size;
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_Call& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data._d();

    switch (data._d())
    {
                case static_cast<int32_t>(0xCBC6CEAA):
                    scdr << eprosima::fastcdr::MemberId(1 + 1) << data.addition();
                    break;

                case static_cast<int32_t>(0xCA019A14):
                    scdr << eprosima::fastcdr::MemberId(2 + 1) << data.subtraction();
                    break;

        default:
            scdr << eprosima::fastcdr::MemberId(1) << data.unknownOp();
            break;
    }

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_Call& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                if (0 == mid.id)
                {
                    int32_t discriminator;
                    dcdr >> discriminator;

                    switch (discriminator)
                    {
                                                case static_cast<int32_t>(0xCBC6CEAA):
                                                    data.addition({});
                                                    break;

                                                case static_cast<int32_t>(0xCA019A14):
                                                    data.subtraction({});
                                                    break;

                        default:
                            data.unknownOp({});
                            break;
                    }
                }
                else
                {
                    switch (data._d())
                    {
                                                case static_cast<int32_t>(0xCBC6CEAA):
                                                    dcdr >> data.addition();
                                                    break;

                                                case static_cast<int32_t>(0xCA019A14):
                                                    dcdr >> data.subtraction();
                                                    break;

                        default:
                            dcdr >> data.unknownOp();
                            break;
                    }
                    ret_value = false;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_Request& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data.header();
    scdr << eprosima::fastcdr::MemberId(1) << data.data();

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_Request& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                    case 0:
                        dcdr >> data.header();
                        break;
                    case 1:
                        dcdr >> data.data();
                        break;
                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_Return& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data._d();

    switch (data._d())
    {
                case static_cast<int32_t>(0xCBC6CEAA):
                    scdr << eprosima::fastcdr::MemberId(1 + 1) << data.addition();
                    break;

                case static_cast<int32_t>(0xCA019A14):
                    scdr << eprosima::fastcdr::MemberId(2 + 1) << data.subtraction();
                    break;

        default:
            scdr << eprosima::fastcdr::MemberId(1) << data.unknownOp();
            break;
    }

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_Return& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                if (0 == mid.id)
                {
                    int32_t discriminator;
                    dcdr >> discriminator;

                    switch (discriminator)
                    {
                                                case static_cast<int32_t>(0xCBC6CEAA):
                                                    data.addition({});
                                                    break;

                                                case static_cast<int32_t>(0xCA019A14):
                                                    data.subtraction({});
                                                    break;

                        default:
                            data.unknownOp({});
                            break;
                    }
                }
                else
                {
                    switch (data._d())
                    {
                                                case static_cast<int32_t>(0xCBC6CEAA):
                                                    dcdr >> data.addition();
                                                    break;

                                                case static_cast<int32_t>(0xCA019A14):
                                                    dcdr >> data.subtraction();
                                                    break;

                        default:
                            dcdr >> data.unknownOp();
                            break;
                    }
                    ret_value = false;
                }
                return ret_value;
            });
}

template<>
eProsima_user_DllExport void serialize(
        eprosima::fastcdr::Cdr& scdr,
        const Calculator_Reply& data)
{
    eprosima::fastcdr::Cdr::state current_state(scdr);
    scdr.begin_serialize_type(current_state,
            eprosima::fastcdr::CdrVersion::XCDRv2 == scdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR);

    scdr << eprosima::fastcdr::MemberId(0) << data.header();
    scdr << eprosima::fastcdr::MemberId(1) << data.data();

    scdr.end_serialize_type(current_state);
}

template<>
eProsima_user_DllExport void deserialize(
        eprosima::fastcdr::Cdr& cdr,
        Calculator_Reply& data)
{
    cdr.deserialize_type(eprosima::fastcdr::CdrVersion::XCDRv2 == cdr.get_cdr_version() ?
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR2 :
            eprosima::fastcdr::EncodingAlgorithmFlag::PLAIN_CDR,
            [&data](eprosima::fastcdr::Cdr& dcdr, const eprosima::fastcdr::MemberId& mid) -> bool
            {
                bool ret_value = true;
                switch (mid.id)
                {
                    case 0:
                        dcdr >> data.header();
                        break;
                    case 1:
                        dcdr >> data.data();
                        break;
                    default:
                        ret_value = false;
                        break;
                }
                return ret_value;
            });
}


} // namespace fastcdr
} // namespace eprosima

#endif // _RPC_DDS_GENERATED_CALCULATORTOPICSCDRAUX_IPP_

