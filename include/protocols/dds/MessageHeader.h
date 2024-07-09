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
 * @file MessageHeader.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include <fastcdr/config.h>
#include "MessageHeaderv1.h"

#if FASTCDR_VERSION_MAJOR > 1

#ifndef _RPC_GENERATED_MESSAGEHEADER_H_
#define _RPC_GENERATED_MESSAGEHEADER_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "../../exceptions/UserException.h"



#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(MESSAGEHEADER_SOURCE)
#define MESSAGEHEADER_DllAPI __declspec( dllexport )
#else
#define MESSAGEHEADER_DllAPI __declspec( dllimport )
#endif // MESSAGEHEADER_SOURCE
#else
#define MESSAGEHEADER_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MESSAGEHEADER_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace eprosima {

namespace rpc {

namespace protocol {

namespace dds {


typedef std::array<uint8_t, 12> GuidPrefix_t;



/*!
 * @brief This class represents the structure EntityId_t defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class EntityId_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport EntityId_t();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~EntityId_t();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::EntityId_t that will be copied.
     */
    eProsima_user_DllExport EntityId_t(
            const EntityId_t& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::EntityId_t that will be copied.
     */
    eProsima_user_DllExport EntityId_t(
            EntityId_t&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::EntityId_t that will be copied.
     */
    eProsima_user_DllExport EntityId_t& operator =(
            const EntityId_t& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::EntityId_t that will be copied.
     */
    eProsima_user_DllExport EntityId_t& operator =(
            EntityId_t&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::EntityId_t object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const EntityId_t& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::EntityId_t object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const EntityId_t& x) const;

    /*!
     * @brief This function copies the value in member entityKey
     * @param _entityKey New value to be copied in member entityKey
     */
    eProsima_user_DllExport void entityKey(
            const std::array<uint8_t, 3>& _entityKey);

    /*!
     * @brief This function moves the value in member entityKey
     * @param _entityKey New value to be moved in member entityKey
     */
    eProsima_user_DllExport void entityKey(
            std::array<uint8_t, 3>&& _entityKey);

    /*!
     * @brief This function returns a constant reference to member entityKey
     * @return Constant reference to member entityKey
     */
    eProsima_user_DllExport const std::array<uint8_t, 3>& entityKey() const;

    /*!
     * @brief This function returns a reference to member entityKey
     * @return Reference to member entityKey
     */
    eProsima_user_DllExport std::array<uint8_t, 3>& entityKey();


    /*!
     * @brief This function sets a value in member entityKind
     * @param _entityKind New value for member entityKind
     */
    eProsima_user_DllExport void entityKind(
            uint8_t _entityKind);

    /*!
     * @brief This function returns the value of member entityKind
     * @return Value of member entityKind
     */
    eProsima_user_DllExport uint8_t entityKind() const;

    /*!
     * @brief This function returns a reference to member entityKind
     * @return Reference to member entityKind
     */
    eProsima_user_DllExport uint8_t& entityKind();

private:

    std::array<uint8_t, 3> m_entityKey{0};
    uint8_t m_entityKind{0};

};


/*!
 * @brief This class represents the structure GUID_t defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class GUID_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport GUID_t();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~GUID_t();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::GUID_t that will be copied.
     */
    eProsima_user_DllExport GUID_t(
            const GUID_t& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::GUID_t that will be copied.
     */
    eProsima_user_DllExport GUID_t(
            GUID_t&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::GUID_t that will be copied.
     */
    eProsima_user_DllExport GUID_t& operator =(
            const GUID_t& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::GUID_t that will be copied.
     */
    eProsima_user_DllExport GUID_t& operator =(
            GUID_t&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::GUID_t object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const GUID_t& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::GUID_t object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const GUID_t& x) const;

    /*!
     * @brief This function copies the value in member guidPrefix
     * @param _guidPrefix New value to be copied in member guidPrefix
     */
    eProsima_user_DllExport void guidPrefix(
            const eprosima::rpc::protocol::dds::GuidPrefix_t& _guidPrefix);

    /*!
     * @brief This function moves the value in member guidPrefix
     * @param _guidPrefix New value to be moved in member guidPrefix
     */
    eProsima_user_DllExport void guidPrefix(
            eprosima::rpc::protocol::dds::GuidPrefix_t&& _guidPrefix);

    /*!
     * @brief This function returns a constant reference to member guidPrefix
     * @return Constant reference to member guidPrefix
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::GuidPrefix_t& guidPrefix() const;

    /*!
     * @brief This function returns a reference to member guidPrefix
     * @return Reference to member guidPrefix
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::GuidPrefix_t& guidPrefix();


    /*!
     * @brief This function copies the value in member entityId
     * @param _entityId New value to be copied in member entityId
     */
    eProsima_user_DllExport void entityId(
            const eprosima::rpc::protocol::dds::EntityId_t& _entityId);

    /*!
     * @brief This function moves the value in member entityId
     * @param _entityId New value to be moved in member entityId
     */
    eProsima_user_DllExport void entityId(
            eprosima::rpc::protocol::dds::EntityId_t&& _entityId);

    /*!
     * @brief This function returns a constant reference to member entityId
     * @return Constant reference to member entityId
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::EntityId_t& entityId() const;

    /*!
     * @brief This function returns a reference to member entityId
     * @return Reference to member entityId
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::EntityId_t& entityId();

private:

    eprosima::rpc::protocol::dds::GuidPrefix_t m_guidPrefix{0};
    eprosima::rpc::protocol::dds::EntityId_t m_entityId;

};


/*!
 * @brief This class represents the structure SequenceNumber_t defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class SequenceNumber_t
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SequenceNumber_t();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SequenceNumber_t();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SequenceNumber_t that will be copied.
     */
    eProsima_user_DllExport SequenceNumber_t(
            const SequenceNumber_t& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SequenceNumber_t that will be copied.
     */
    eProsima_user_DllExport SequenceNumber_t(
            SequenceNumber_t&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SequenceNumber_t that will be copied.
     */
    eProsima_user_DllExport SequenceNumber_t& operator =(
            const SequenceNumber_t& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SequenceNumber_t that will be copied.
     */
    eProsima_user_DllExport SequenceNumber_t& operator =(
            SequenceNumber_t&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::SequenceNumber_t object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SequenceNumber_t& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::SequenceNumber_t object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SequenceNumber_t& x) const;

    /*!
     * @brief This function sets a value in member high
     * @param _high New value for member high
     */
    eProsima_user_DllExport void high(
            int32_t _high);

    /*!
     * @brief This function returns the value of member high
     * @return Value of member high
     */
    eProsima_user_DllExport int32_t high() const;

    /*!
     * @brief This function returns a reference to member high
     * @return Reference to member high
     */
    eProsima_user_DllExport int32_t& high();


    /*!
     * @brief This function sets a value in member low
     * @param _low New value for member low
     */
    eProsima_user_DllExport void low(
            uint32_t _low);

    /*!
     * @brief This function returns the value of member low
     * @return Value of member low
     */
    eProsima_user_DllExport uint32_t low() const;

    /*!
     * @brief This function returns a reference to member low
     * @return Reference to member low
     */
    eProsima_user_DllExport uint32_t& low();

private:

    int32_t m_high{0};
    uint32_t m_low{0};

};


/*!
 * @brief This class represents the structure SampleIdentity defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class SampleIdentity
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport SampleIdentity();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~SampleIdentity();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SampleIdentity that will be copied.
     */
    eProsima_user_DllExport SampleIdentity(
            const SampleIdentity& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SampleIdentity that will be copied.
     */
    eProsima_user_DllExport SampleIdentity(
            SampleIdentity&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SampleIdentity that will be copied.
     */
    eProsima_user_DllExport SampleIdentity& operator =(
            const SampleIdentity& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::SampleIdentity that will be copied.
     */
    eProsima_user_DllExport SampleIdentity& operator =(
            SampleIdentity&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::SampleIdentity object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const SampleIdentity& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::SampleIdentity object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const SampleIdentity& x) const;

    /*!
     * @brief This function copies the value in member writer_guid
     * @param _writer_guid New value to be copied in member writer_guid
     */
    eProsima_user_DllExport void writer_guid(
            const eprosima::rpc::protocol::dds::GUID_t& _writer_guid);

    /*!
     * @brief This function moves the value in member writer_guid
     * @param _writer_guid New value to be moved in member writer_guid
     */
    eProsima_user_DllExport void writer_guid(
            eprosima::rpc::protocol::dds::GUID_t&& _writer_guid);

    /*!
     * @brief This function returns a constant reference to member writer_guid
     * @return Constant reference to member writer_guid
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::GUID_t& writer_guid() const;

    /*!
     * @brief This function returns a reference to member writer_guid
     * @return Reference to member writer_guid
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::GUID_t& writer_guid();


    /*!
     * @brief This function copies the value in member sequence_number
     * @param _sequence_number New value to be copied in member sequence_number
     */
    eProsima_user_DllExport void sequence_number(
            const eprosima::rpc::protocol::dds::SequenceNumber_t& _sequence_number);

    /*!
     * @brief This function moves the value in member sequence_number
     * @param _sequence_number New value to be moved in member sequence_number
     */
    eProsima_user_DllExport void sequence_number(
            eprosima::rpc::protocol::dds::SequenceNumber_t&& _sequence_number);

    /*!
     * @brief This function returns a constant reference to member sequence_number
     * @return Constant reference to member sequence_number
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::SequenceNumber_t& sequence_number() const;

    /*!
     * @brief This function returns a reference to member sequence_number
     * @return Reference to member sequence_number
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::SequenceNumber_t& sequence_number();

private:

    eprosima::rpc::protocol::dds::GUID_t m_writer_guid;
    eprosima::rpc::protocol::dds::SequenceNumber_t m_sequence_number;

};
namespace rpc {

typedef uint8_t UnknownOperation;

typedef uint8_t UnknownException;

typedef uint8_t UnusedMember;

/*!
 * @brief This class represents the enumeration RemoteExceptionCode_t defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
enum RemoteExceptionCode_t : uint32_t
{
    REMOTE_EX_OK,
    REMOTE_EX_UNSUPPORTED,
    REMOTE_EX_INVALID_ARGUMENT,
    REMOTE_EX_OUT_OF_RESOURCES,
    REMOTE_EX_UNKNOWN_OPERATION,
    REMOTE_EX_UNKNOWN_EXCEPTION
};


/*!
 * @brief This class represents the structure RequestHeader defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class RequestHeader
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport RequestHeader();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~RequestHeader();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::RequestHeader that will be copied.
     */
    eProsima_user_DllExport RequestHeader(
            const RequestHeader& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::RequestHeader that will be copied.
     */
    eProsima_user_DllExport RequestHeader(
            RequestHeader&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::RequestHeader that will be copied.
     */
    eProsima_user_DllExport RequestHeader& operator =(
            const RequestHeader& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::RequestHeader that will be copied.
     */
    eProsima_user_DllExport RequestHeader& operator =(
            RequestHeader&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::rpc::RequestHeader object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const RequestHeader& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::rpc::RequestHeader object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const RequestHeader& x) const;

    /*!
     * @brief This function copies the value in member requestId
     * @param _requestId New value to be copied in member requestId
     */
    eProsima_user_DllExport void requestId(
            const eprosima::rpc::protocol::dds::SampleIdentity& _requestId);

    /*!
     * @brief This function moves the value in member requestId
     * @param _requestId New value to be moved in member requestId
     */
    eProsima_user_DllExport void requestId(
            eprosima::rpc::protocol::dds::SampleIdentity&& _requestId);

    /*!
     * @brief This function returns a constant reference to member requestId
     * @return Constant reference to member requestId
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::SampleIdentity& requestId() const;

    /*!
     * @brief This function returns a reference to member requestId
     * @return Reference to member requestId
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::SampleIdentity& requestId();


    /*!
     * @brief This function copies the value in member instanceName
     * @param _instanceName New value to be copied in member instanceName
     */
    eProsima_user_DllExport void instanceName(
            const eprosima::fastcdr::fixed_string<255>& _instanceName);

    /*!
     * @brief This function moves the value in member instanceName
     * @param _instanceName New value to be moved in member instanceName
     */
    eProsima_user_DllExport void instanceName(
            eprosima::fastcdr::fixed_string<255>&& _instanceName);

    /*!
     * @brief This function returns a constant reference to member instanceName
     * @return Constant reference to member instanceName
     */
    eProsima_user_DllExport const eprosima::fastcdr::fixed_string<255>& instanceName() const;

    /*!
     * @brief This function returns a reference to member instanceName
     * @return Reference to member instanceName
     */
    eProsima_user_DllExport eprosima::fastcdr::fixed_string<255>& instanceName();

private:

    eprosima::rpc::protocol::dds::SampleIdentity m_requestId;
    eprosima::fastcdr::fixed_string<255> m_instanceName;

};


/*!
 * @brief This class represents the structure ReplyHeader defined by the user in the IDL file.
 * @ingroup MessageHeader
 */
class ReplyHeader
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport ReplyHeader();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~ReplyHeader();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::ReplyHeader that will be copied.
     */
    eProsima_user_DllExport ReplyHeader(
            const ReplyHeader& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::ReplyHeader that will be copied.
     */
    eProsima_user_DllExport ReplyHeader(
            ReplyHeader&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::ReplyHeader that will be copied.
     */
    eProsima_user_DllExport ReplyHeader& operator =(
            const ReplyHeader& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object eprosima::rpc::protocol::dds::rpc::ReplyHeader that will be copied.
     */
    eProsima_user_DllExport ReplyHeader& operator =(
            ReplyHeader&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::rpc::ReplyHeader object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const ReplyHeader& x) const;

    /*!
     * @brief Comparison operator.
     * @param x eprosima::rpc::protocol::dds::rpc::ReplyHeader object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const ReplyHeader& x) const;

    /*!
     * @brief This function copies the value in member relatedRequestId
     * @param _relatedRequestId New value to be copied in member relatedRequestId
     */
    eProsima_user_DllExport void relatedRequestId(
            const eprosima::rpc::protocol::dds::SampleIdentity& _relatedRequestId);

    /*!
     * @brief This function moves the value in member relatedRequestId
     * @param _relatedRequestId New value to be moved in member relatedRequestId
     */
    eProsima_user_DllExport void relatedRequestId(
            eprosima::rpc::protocol::dds::SampleIdentity&& _relatedRequestId);

    /*!
     * @brief This function returns a constant reference to member relatedRequestId
     * @return Constant reference to member relatedRequestId
     */
    eProsima_user_DllExport const eprosima::rpc::protocol::dds::SampleIdentity& relatedRequestId() const;

    /*!
     * @brief This function returns a reference to member relatedRequestId
     * @return Reference to member relatedRequestId
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::SampleIdentity& relatedRequestId();


    /*!
     * @brief This function sets a value in member remoteEx
     * @param _remoteEx New value for member remoteEx
     */
    eProsima_user_DllExport void remoteEx(
            eprosima::rpc::protocol::dds::rpc::RemoteExceptionCode_t _remoteEx);

    /*!
     * @brief This function returns the value of member remoteEx
     * @return Value of member remoteEx
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::rpc::RemoteExceptionCode_t remoteEx() const;

    /*!
     * @brief This function returns a reference to member remoteEx
     * @return Reference to member remoteEx
     */
    eProsima_user_DllExport eprosima::rpc::protocol::dds::rpc::RemoteExceptionCode_t& remoteEx();

private:

    eprosima::rpc::protocol::dds::SampleIdentity m_relatedRequestId;
    eprosima::rpc::protocol::dds::rpc::RemoteExceptionCode_t m_remoteEx{eprosima::rpc::protocol::dds::rpc::RemoteExceptionCode_t::REMOTE_EX_OK};

};

} // namespace rpc

} // namespace dds

} // namespace protocol

} // namespace rpc

} // namespace eprosima


#endif // _RPC_GENERATED_MESSAGEHEADER_H_

#endif // FASTCDR_VERSION_MAJOR > 1
