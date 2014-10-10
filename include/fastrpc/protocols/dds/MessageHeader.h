/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROTOCOLS_DDS_MESSAGEHEADER_H_
#define _PROTOCOLS_DDS_MESSAGEHEADER_H_

#include "fastrpc/fastrpc_dll.h"

#include <stdint.h>
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
                typedef uint8_t UnknownOperation;
                typedef uint8_t UnknownException;

                class FASTRPC_DllAPI GUID_t
                {
                    public:

                        GUID_t();

                        GUID_t(const GUID_t &guid);

                        ~GUID_t();

                        GUID_t& operator=(const GUID_t &guid);

                        inline uint8_t* value()
                        {
                            return m_value;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a GUID_t object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

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

                        uint8_t m_value[16];
                };

                /*!
                 * @brief This class is used to identify clients.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI SampleIdentity_t
                {
                    public:

                        //! @brief Default constructor
                        SampleIdentity_t();

                        /*!
                         * @brief Copy constructor
                         * @param id SampleIdentity_t object to be copied.
                         */
                        SampleIdentity_t(const SampleIdentity_t &id);

                        /*!
                         * @brief Copy constructor
                         * @param id SampleIdentity_t object to be copied.
                         */
                        SampleIdentity_t(SampleIdentity_t &&id);

                        //! @brief Destructor
                        ~SampleIdentity_t();

                        /*!
                         * @brief Copy assignment
                         * @param id SampleIdentity_t object to be copied.
                         */
                        SampleIdentity_t& operator=(const SampleIdentity_t &id);

                        /*!
                         * @brief Copy assignment
                         * @param id SampleIdentity_t object to be copied.
                         */
                        SampleIdentity_t& operator=(SampleIdentity_t &&id);

                        inline void guid(const GUID_t &_guid)
                        {
                            m_guid = _guid;
                        }

                        inline void guid(GUID_t &&_guid)
                        {
                            m_guid = std::move(_guid);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const GUID_t& guid() const
                        {
                            return m_guid;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline GUID_t& guid()
                        {
                            return m_guid;
                        }

                        /*!
                         * @brief This function sets the fourth value of the client identifier.
                         * @param _value_4 Fourth value of the client identifier.
                         */
                        inline void sequence_number(int64_t _sequence_number)
                        {
                            m_sequence_number = _sequence_number;
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline int64_t sequence_number() const
                        {
                            return m_sequence_number;
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline int64_t& sequence_number()
                        {
                            return m_sequence_number;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a SampleIdentity_t object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

                        /*!
                         * @brief This function serializes the SampleIdentity_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes the SampleIdentity_t object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        GUID_t m_guid;
                        int64_t m_sequence_number;
                };

                /*!
                 * @brief Header information used in all generated request topics.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI RequestHeader
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
                        inline void request_id(const SampleIdentity_t &_request_id)
                        {
                            m_request_id = _request_id;
                        }

                        /*!
                         * @brief This function sets the client identifier.
                         * @param _clientId Client identifier
                         */
                        inline void request_id(SampleIdentity_t &&_request_id)
                        {
                            m_request_id = std::move(_request_id);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const SampleIdentity_t& request_id() const
                        {
                            return m_request_id;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline SampleIdentity_t& request_id()
                        {
                            return m_request_id;
                        }

                        /*!
                         * @brief This function sets the server service name.
                         * @param _remoteServiceName Server service name.
                         */
                        inline void remote_service_name(const char *_remote_service_name)
                        {
							if(m_remote_service_name != NULL)
								free(m_remote_service_name);
                            m_remote_service_name = strdup(_remote_service_name);
                        }

                        /*!
                         * @brief This function returns the server service name.
                         * @return Server service name.
                         */
                        inline const char* remote_service_name() const
                        {
                            return m_remote_service_name;
                        }

                        /*!
                         * @brief This function sets the server service name.
                         * @param _remoteServiceName Server service name.
                         */
                        inline void instance_name(const char *_instance_name)
                        {
							if(m_instance_name != NULL)
								free(m_instance_name);
                            m_instance_name = strdup(_instance_name);
                        }

                        /*!
                         * @brief This function returns the server service name.
                         * @return Server service name.
                         */
                        inline const char* instance_name() const
                        {
                            return m_instance_name;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a RequestHeader object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

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

                        SampleIdentity_t m_request_id;

                        char* m_remote_service_name;

                        char* m_instance_name;
                };

                /*!
                 * @brief Header information used in all generated reply topics.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI ReplyHeader
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
                        inline void request_id(const SampleIdentity_t &_request_id)
                        {
                            m_request_id = _request_id;
                        }

                        /*!
                         * @brief This function sets the client identifier.
                         * @param _clientId Client identifier
                         */
                        inline void request_id(SampleIdentity_t &&_request_id)
                        {
                            m_request_id = std::move(_request_id);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const SampleIdentity_t& request_id() const
                        {
                            return m_request_id;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline SampleIdentity_t& request_id()
                        {
                            return m_request_id;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a ReplyHeader object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static size_t getMaxCdrSerializedSize(size_t current_alignment);

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

                        SampleIdentity_t m_request_id;
                };
            } // namespace dds
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADER_H_
