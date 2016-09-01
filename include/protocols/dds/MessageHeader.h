/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROTOCOLS_DDS_MESSAGEHEADER_H_
#define _PROTOCOLS_DDS_MESSAGEHEADER_H_

#include "../../rpc_dll.h"
#include "../../utils/macros/strdup.h"

#include <cstdint>
#include <string.h>
#include <string>

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }

    namespace rpc
    {
        namespace protocol
        {
            namespace dds
            {
                typedef uint8_t GuidPrefix_t[12];

                class RPC_DllAPI EntityId_t
                {
                    public:

                        EntityId_t();

                        EntityId_t(const EntityId_t &entityId);

                        ~EntityId_t();

                        EntityId_t& operator=(const EntityId_t &entityId);

                        inline uint8_t* entityKey()
                        {
                            return entityKey_;
                        }

                        inline uint8_t entityKind() const
                        {
                            return entityKind_;
                        }

                        inline uint8_t& entityKind()
                        {
                            return entityKind_;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a GUID_t object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

                        /*!
                         * @brief This function returns the serialized size of an object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Serialized size.
                         */
                        size_t getSerializedSize(size_t current_alignment = 0) const;

                        /*!
                         * @brief This function serializes the GUID_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes the GUID_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        uint8_t entityKey_[3];
                        uint8_t entityKind_;
                };

                class RPC_DllAPI GUID_t
                {
                    public:

                        GUID_t();

                        GUID_t(const GUID_t &guid);

                        ~GUID_t();

                        GUID_t& operator=(const GUID_t &guid);

                        inline uint8_t* guidPrefix()
                        {
                            return guidPrefix_;
                        }

                        inline const EntityId_t& entityId() const
                        {
                            return entityId_;
                        }

                        inline EntityId_t& entityId()
                        {
                            return entityId_;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a GUID_t object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

                        /*!
                         * @brief This function returns the serialized size of an object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Serialized size.
                         */
                        size_t getSerializedSize(size_t current_alignment = 0) const;

                        /*!
                         * @brief This function serializes the GUID_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes the GUID_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        GuidPrefix_t guidPrefix_;
                        EntityId_t entityId_;
                };
                /*!
                 * @brief This class is used to define sequence numbers.
                 * @ingroup PROTOCOLMODULE
                 */

                class RPC_DllAPI SequenceNumber_t
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         */
                        SequenceNumber_t();

                        /*!
                         * @brief Default destructor.
                         */
                        ~SequenceNumber_t();

                        /*!
                         * @brief Copy constructor.
                         * @param x Reference to the object dds::SequenceNumber_t that will be copied.
                         */
                        SequenceNumber_t(const SequenceNumber_t &x);

                        /*!
                         * @brief Move constructor.
                         * @param x Reference to the object dds::SequenceNumber_t that will be copied.
                         */
                        SequenceNumber_t(SequenceNumber_t &&x);

                        /*!
                         * @brief Copy assignment.
                         * @param x Reference to the object dds::SequenceNumber_t that will be copied.
                         */
                        SequenceNumber_t& operator=(const SequenceNumber_t &x);

                        /*!
                         * @brief Move assignment.
                         * @param x Reference to the object dds::SequenceNumber_t that will be copied.
                         */
                        SequenceNumber_t& operator=(SequenceNumber_t &&x);

                        /*!
                         * @brief This function sets a value in member high
                         * @param _high New value for member high
                         */
                        inline void high(int32_t high)
                        {
                            high_ = high;
                        }

                        /*!
                         * @brief This function returns the value of member high
                         * @return Value of member high
                         */
                        inline int32_t high() const
                        {
                            return high_;
                        }

                        /*!
                         * @brief This function returns a reference to member high
                         * @return Reference to member high
                         */
                        inline int32_t& high()
                        {
                            return high_;
                        }
                        /*!
                         * @brief This function sets a value in member low
                         * @param _low New value for member low
                         */
                        inline void low(uint32_t low)
                        {
                            low_ = low;
                        }

                        /*!
                         * @brief This function returns the value of member low
                         * @return Value of member low
                         */
                        inline uint32_t low() const
                        {
                            return low_;
                        }

                        /*!
                         * @brief This function returns a reference to member low
                         * @return Reference to member low
                         */
                        inline uint32_t& low()
                        {
                            return low_;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of an object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

                        /*!
                         * @brief This function returns the serialized size of an object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Serialized size.
                         */
                        size_t getSerializedSize(size_t current_alignment = 0) const;

                        /*!
                         * @brief This function serializes an object using FastCDR serialization.
                         * @param cdr FastCDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes an object using FastCDR serialization.
                         * @param cdr FastCDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:
                        int32_t high_;
                        uint32_t low_;
                };

                /*!
                 * @brief This class is used to identify clients.
                 * @ingroup PROTOCOLMODULE
                 */
                class RPC_DllAPI SampleIdentity
                {
                    public:

                        //! @brief Default constructor
                        SampleIdentity();

                        /*!
                         * @brief Copy constructor
                         * @param id SampleIdentity object to be copied.
                         */
                        SampleIdentity(const SampleIdentity &id);

                        /*!
                         * @brief Copy constructor
                         * @param id SampleIdentity object to be copied.
                         */
                        SampleIdentity(SampleIdentity &&id);

                        //! @brief Destructor
                        ~SampleIdentity();

                        /*!
                         * @brief Copy assignment
                         * @param id SampleIdentity object to be copied.
                         */
                        SampleIdentity& operator=(const SampleIdentity &id);

                        /*!
                         * @brief Copy assignment
                         * @param id SampleIdentity object to be copied.
                         */
                        SampleIdentity& operator=(SampleIdentity &&id);

                        inline void writer_guid(const GUID_t &writer_guid)
                        {
                            writer_guid_ = writer_guid;
                        }

                        inline void writer_guid(GUID_t &&writer_guid)
                        {
                            writer_guid_ = std::move(writer_guid);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const GUID_t& writer_guid() const
                        {
                            return writer_guid_;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline GUID_t& writer_guid()
                        {
                            return writer_guid_;
                        }

                        /*!
                         * @brief This function sets the fourth value of the client identifier.
                         * @param _value_4 Fourth value of the client identifier.
                         */
                        inline void sequence_number(const SequenceNumber_t &sequence_number)
                        {
                            sequence_number_ = sequence_number;
                        }

                        /*!
                         * @brief This function sets the fourth value of the client identifier.
                         * @param _value_4 Fourth value of the client identifier.
                         */
                        inline void sequence_number(SequenceNumber_t &&sequence_number)
                        {
                            sequence_number_ = std::move(sequence_number);
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline const SequenceNumber_t& sequence_number() const
                        {
                            return sequence_number_;
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline SequenceNumber_t& sequence_number()
                        {
                            return sequence_number_;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a SampleIdentity object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

                        /*!
                         * @brief This function returns the serialized size of an object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Serialized size.
                         */
                        size_t getSerializedSize(size_t current_alignment = 0) const;

                        /*!
                         * @brief This function serializes the SampleIdentity object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes the SampleIdentity object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        GUID_t writer_guid_;
                        SequenceNumber_t sequence_number_;
                };

                namespace rpc
                {
                    typedef uint8_t UnknownOperation;
                    typedef uint8_t UnknownException;
                    typedef uint8_t UnusedMember;

                    /*!
                     * @brief This class represents the enumeration RemoteExceptionCode_t defined by the user in the IDL file.
                     * @ingroup MESSAGEHEADER
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
                     * @brief Header information used in all generated request topics.
                     * @ingroup PROTOCOLMODULE
                     */
                    class RPC_DllAPI RequestHeader
                    {
                        public:

                            //! @brief Default constructor
                            RequestHeader();

                            /*!
                             * @brief Copy constructor
                             * @param header RequestHeader object to be copied.
                             */
                            RequestHeader(const RequestHeader &header);

                            /*!
                             * @brief Copy constructor
                             * @param header RequestHeader object to be copied.
                             */
                            RequestHeader(RequestHeader &&header);

                            //! @brief Destructor
                            ~RequestHeader();

                            /*!
                             * @brief Copy assignment
                             * @param header RequestHeader object to be copied.
                             */
                            RequestHeader& operator=(const RequestHeader &header);

                            /*!
                             * @brief Copy assignment
                             * @param header RequestHeader object to be copied.
                             */
                            RequestHeader& operator=(RequestHeader &&header);

                            /*!
                             * @brief This function sets the client identifier.
                             * @param _clientId Client identifier
                             */
                            inline void requestId(const dds::SampleIdentity &requestId)
                            {
                                requestId_ = requestId;
                            }

                            /*!
                             * @brief This function sets the client identifier.
                             * @param _clientId Client identifier
                             */
                            inline void requestId(dds::SampleIdentity &&requestId)
                            {
                                requestId_ = std::move(requestId);
                            }

                            /*!
                             * @brief This function returns the client identifier.
                             * @return Client identifier
                             */
                            inline const dds::SampleIdentity& requestId() const
                            {
                                return requestId_;
                            }

                            /*!
                             * @brief This function returns the client identifier.
                             * @return Client identifier
                             */
                            inline dds::SampleIdentity& requestId()
                            {
                                return requestId_;
                            }

                            /*!
                             * @brief This function sets the server service name.
                             * @param _remoteServiceName Server service name.
                             */
                            inline void instanceName(const char *instanceName)
                            {
                                if(instanceName_ != NULL)
                                    free(instanceName_);
                                instanceName_ = STRDUP(instanceName);
                            }

                            /*!
                             * @brief This function returns the server service name.
                             * @return Server service name.
                             */
                            inline const char* instanceName() const
                            {
                                return instanceName_;
                            }

                            /*!
                             * @brief This function returns the maximum serialized size of a RequestHeader object
                             * depending on the buffer alignment.
                             * @param current_alignment Buffer alignment.
                             * @return Maximum serialized size.
                             */
                            static size_t getMaxCdrSerializedSize(size_t current_alignment);

                            /*!
                             * @brief This function returns the serialized size of an object
                             * depending on the buffer alignment.
                             * @param current_alignment Buffer alignment.
                             * @return Serialized size.
                             */
                            size_t getSerializedSize(size_t current_alignment = 0) const;

                            /*!
                             * @brief This function serializes the RequestHeader object using CDR serialization.
                             * @param cdr CDR serialization object.
                             */
                            void serialize(eprosima::fastcdr::Cdr &cdr) const;

                            /*!
                             * @brief This function deserializes the RequestHeader object using CDR serialization.
                             * @param cdr CDR serialization object.
                             */
                            void deserialize(eprosima::fastcdr::Cdr &cdr);

                        private:

                            dds::SampleIdentity requestId_;

                            char* instanceName_;
                    };

                    /*!
                     * @brief Header information used in all generated reply topics.
                     * @ingroup PROTOCOLMODULE
                     */
                    class RPC_DllAPI ReplyHeader
                    {
                        public:

                            //! @brief Default constructor
                            ReplyHeader();

                            /*!
                             * @brief Copy constructor
                             * @param header ReplyHeader object to be copied.
                             */
                            ReplyHeader(const ReplyHeader &header);

                            /*!
                             * @brief Copy constructor
                             * @param header ReplyHeader object to be copied.
                             */
                            ReplyHeader(ReplyHeader &&header);

                            //! @brief Destructor
                            ~ReplyHeader();

                            /*!
                             * @brief Copy assignment
                             * @param header ReplyHeader object to be copied.
                             */
                            ReplyHeader& operator=(const ReplyHeader &header);

                            /*!
                             * @brief Copy assignment
                             * @param header ReplyHeader object to be copied.
                             */
                            ReplyHeader& operator=(ReplyHeader &&header);

                            /*!
                             * @brief This function sets the client identifier.
                             * @param _clientId Client identifier
                             */
                            inline void relatedRequestId(const dds::SampleIdentity &relatedRequestId)
                            {
                                relatedRequestId_ = relatedRequestId;
                            }

                            /*!
                             * @brief This function sets the client identifier.
                             * @param _clientId Client identifier
                             */
                            inline void relatedRequestId(dds::SampleIdentity &&relatedRequestId)
                            {
                                relatedRequestId_ = std::move(relatedRequestId);
                            }

                            /*!
                             * @brief This function returns the client identifier.
                             * @return Client identifier
                             */
                            inline const dds::SampleIdentity& relatedRequestId() const
                            {
                                return relatedRequestId_;
                            }

                            /*!
                             * @brief This function returns the client identifier.
                             * @return Client identifier
                             */
                            inline dds::SampleIdentity& relatedRequestId()
                            {
                                return relatedRequestId_;
                            }

                            inline void remoteEx(RemoteExceptionCode_t remoteEx)
                            {
                                remoteEx_ = remoteEx;
                            }

                            inline RemoteExceptionCode_t remoteEx() const
                            {
                                return remoteEx_;
                            }

                            inline RemoteExceptionCode_t& remoteEx()
                            {
                                return remoteEx_;
                            }

                            /*!
                             * @brief This function returns the maximum serialized size of a ReplyHeader object
                             * depending on the buffer alignment.
                             * @param current_alignment Buffer alignment.
                             * @return Maximum serialized size.
                             */
                            static size_t getMaxCdrSerializedSize(size_t current_alignment);

                            /*!
                             * @brief This function returns the serialized size of an object
                             * depending on the buffer alignment.
                             * @param current_alignment Buffer alignment.
                             * @return Serialized size.
                             */
                            size_t getSerializedSize(size_t current_alignment = 0) const;

                            /*!
                             * @brief This function serializes the ReplyHeader object using CDR serialization.
                             * @param cdr CDR serialization object.
                             */
                            void serialize(eprosima::fastcdr::Cdr &cdr) const;

                            /*!
                             * @brief This function deserializes the ReplyHeader object using CDR serialization.
                             * @param cdr CDR serialization object.
                             */
                            void deserialize(eprosima::fastcdr::Cdr &cdr);

                        private:

                            SampleIdentity relatedRequestId_;
                            RemoteExceptionCode_t remoteEx_;
                    };
                } // namespace rpc
            } // namespace dds
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADER_H_
