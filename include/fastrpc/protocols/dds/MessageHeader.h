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
                /*!
                 * @brief This class is used to identify clients.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI Identification
                {
                    public:

                        //! @brief Default constructor
                        Identification();

                        /*!
                         * @brief Copy constructor
                         * @param id Identification object to be copied.
                         */
                        Identification(const Identification &id);

                        /*!
                         * @brief Copy constructor
                         * @param id Identification object to be copied.
                         */
                        Identification(Identification &&id);

                        //! @brief Destructor
                        ~Identification();

                        /*!
                         * @brief Copy assignment
                         * @param id Identification object to be copied.
                         */
                        Identification& operator=(const Identification &id);

                        /*!
                         * @brief Copy assignment
                         * @param id Identification object to be copied.
                         */
                        Identification& operator=(Identification &&id);

                        /*!
                         * @brief This function sets the first value of the client identifier.
                         * @param _value_1 First value of the client identifier.
                         */
                        inline void value_1(uint32_t _value_1)
                        {
                            m_value_1 = _value_1;
                        }

                        /*!
                         * @brief This function returns the first value of the client identifier.
                         * @return First value of the client identifier.
                         */
                        inline uint32_t value_1() const
                        {
                            return m_value_1;
                        }

                        /*!
                         * @brief This function returns the first value of the client identifier.
                         * @return First value of the client identifier.
                         */
                        inline uint32_t& value_1()
                        {
                            return m_value_1;
                        }

                        /*!
                         * @brief This function sets the second value of the client identifier.
                         * @param _value_2 Second value of the client identifier.
                         */
                        inline void value_2(uint32_t _value_2)
                        {
                            m_value_2 = _value_2;
                        }

                        /*!
                         * @brief This function returns the second value of the client identifier.
                         * @return Second value of the client identifier.
                         */
                        inline uint32_t value_2() const
                        {
                            return m_value_2;
                        }

                        /*!
                         * @brief This function returns the second value of the client identifier.
                         * @return Second value of the client identifier.
                         */
                        inline uint32_t& value_2()
                        {
                            return m_value_2;
                        }

                        /*!
                         * @brief This function sets the third value of the client identifier.
                         * @param _value_3 Third value of the client identifier.
                         */
                        inline void value_3(uint32_t _value_3)
                        {
                            m_value_3 = _value_3;
                        }

                        /*!
                         * @brief This function returns the third value of the client identifier.
                         * @return Third value of the client identifier.
                         */
                        inline uint32_t value_3() const
                        {
                            return m_value_3;
                        }

                        /*!
                         * @brief This function returns the third value of the client identifier.
                         * @return Third value of the client identifier.
                         */
                        inline uint32_t& value_3()
                        {
                            return m_value_3;
                        }

                        /*!
                         * @brief This function sets the fourth value of the client identifier.
                         * @param _value_4 Fourth value of the client identifier.
                         */
                        inline void value_4(uint32_t _value_4)
                        {
                            m_value_4 = _value_4;
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline uint32_t value_4() const
                        {
                            return m_value_4;
                        }

                        /*!
                         * @brief This function returns the fourth value of the client identifier.
                         * @return Fourth value of the client identifier.
                         */
                        inline uint32_t& value_4()
                        {
                            return m_value_4;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a Identification object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

                        /*!
                         * @brief This function serializes the Identification object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        /*!
                         * @brief This function deserializes the Identification object using CDR serialization.
                         * @param cdr CDR serialization object.
                         */
                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        uint32_t m_value_1;
                        uint32_t m_value_2;
                        uint32_t m_value_3;
                        uint32_t m_value_4;
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
                        inline void clientId(const Identification &_clientId)
                        {
                            m_clientId = _clientId;
                        }

                        /*!
                         * @brief This function sets the client identifier.
                         * @param _clientId Client identifier
                         */
                        inline void clientId(Identification &&_clientId)
                        {
                            m_clientId = std::move(_clientId);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const Identification& clientId() const
                        {
                            return m_clientId;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline Identification& clientId()
                        {
                            return m_clientId;
                        }

                        /*!
                         * @brief This function sets the server service name.
                         * @param _remoteServiceName Server service name.
                         */
                        inline void remoteServiceName(const std::string &_remoteServiceName)
                        {
                            m_remoteServiceName = _remoteServiceName;
                        }

                        /*!
                         * @brief This function sets the server service name.
                         * @param _remoteServiceName Server service name.
                         */
                        inline void remoteServiceName(std::string &&_remoteServiceName)
                        {
                            m_remoteServiceName = std::move(_remoteServiceName);
                        }

                        /*!
                         * @brief This function returns the server service name.
                         * @return Server service name.
                         */
                        inline const std::string& remoteServiceName() const
                        {
                            return m_remoteServiceName;
                        }

                        /*!
                         * @brief This function returns the server service name.
                         * @return Server service name.
                         */
                        inline std::string& remoteServiceName()
                        {
                            return m_remoteServiceName;
                        }

                        /*!
                         * @brief This function sets the request sequence number
                         * @param _requestSequenceNumber Request sequence number
                         */
                        inline void requestSequenceNumber(uint32_t _requestSequenceNumber)
                        {
                            m_requestSequenceNumber = _requestSequenceNumber;
                        }

                        /*!
                         * @brief This function returns the request sequence number
                         * @return Request sequence number
                         */
                        inline uint32_t requestSequenceNumber() const
                        {
                            return m_requestSequenceNumber;
                        }

                        /*!
                         * @brief This function returns the request sequence number
                         * @return Request sequence number
                         */
                        inline uint32_t& requestSequenceNumber()
                        {
                            return m_requestSequenceNumber;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a RequestHeader object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

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

                        Identification m_clientId;

                        std::string m_remoteServiceName;

                        uint32_t m_requestSequenceNumber;

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
                        inline void clientId(const Identification &_clientId)
                        {
                            m_clientId = _clientId;
                        }

                        /*!
                         * @brief This function sets the client identifier.
                         * @param _clientId Client identifier
                         */
                        inline void clientId(Identification &&_clientId)
                        {
                            m_clientId = std::move(_clientId);
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline const Identification& clientId() const
                        {
                            return m_clientId;
                        }

                        /*!
                         * @brief This function returns the client identifier.
                         * @return Client identifier
                         */
                        inline Identification& clientId()
                        {
                            return m_clientId;
                        }

                        /*!
                         * @brief This function sets the request sequence number
                         * @param _requestSequenceNumber Request sequence number
                         */
                        inline void requestSequenceNumber(uint32_t _requestSequenceNumber)
                        {
                            m_requestSequenceNumber = _requestSequenceNumber;
                        }

                        /*!
                         * @brief This function returns the request sequence number
                         * @return Request sequence number
                         */
                        inline uint32_t requestSequenceNumber() const
                        {
                            return m_requestSequenceNumber;
                        }

                        /*!
                         * @brief This function returns the request sequence number
                         * @return Request sequence number
                         */
                        inline uint32_t& requestSequenceNumber()
                        {
                            return m_requestSequenceNumber;
                        }

                        /*!
                         * @brief This function sets the server return code
                         * @param _retCode Server return code
                         */
                        inline void retCode(int32_t _retCode)
                        {
                            m_retCode = _retCode;
                        }

                        /*!
                         * @brief This function returns the server return code
                         * @return Server return code
                         */
                        inline int32_t retCode() const
                        {
                            return m_retCode;
                        }

                        /*!
                         * @brief This function returns the server return code
                         * @return Server return code
                         */
                        inline int32_t& retCode()
                        {
                            return m_retCode;
                        }

                        /*!
                         * @brief This function sets the server return message.
                         * @param _retMsg Server return message
                         */
                        inline void retMsg(const std::string &_retMsg)
                        {
                            m_retMsg = _retMsg;
                        }

                        /*!
                         * @brief This function sets the server return message.
                         * @param _retMsg Server return message
                         */
                        inline void retMsg(std::string &&_retMsg)
                        {
                            m_retMsg = std::move(_retMsg);
                        }

                        /*!
                         * @brief This function returns the server return message.
                         * @return Server return message
                         */
                        inline const std::string& retMsg() const
                        {
                            return m_retMsg;
                        }

                        /*!
                         * @brief This function returns the server return message.
                         * @return Server return message
                         */
                        inline std::string& retMsg()
                        {
                            return m_retMsg;
                        }

                        /*!
                         * @brief This function returns the maximum serialized size of a ReplyHeader object
                         * depending on the buffer alignment.
                         * @param current_alignment Buffer alignment.
                         * @return Maximum serialized size.
                         */
                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

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

                        Identification m_clientId;

                        uint32_t m_requestSequenceNumber;

                        int32_t m_retCode;

                        std::string m_retMsg;
                };
            } // namespace dds
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADER_H_
