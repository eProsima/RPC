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

    namespace fastrpc
    {
        namespace protocol
        {
            namespace dds
            {
                class FASTRPC_DllAPI Identification
                {
                    public:

                        //! @brief Default constructor
                        Identification();

                        Identification(const Identification &id);

                        Identification(Identification &&id);

                        ~Identification();

                        Identification& operator=(const Identification &id);

                        Identification& operator=(Identification &&id);

                        inline void value_1(uint32_t _value_1)
                        {
                            m_value_1 = _value_1;
                        }

                        inline uint32_t value_1() const
                        {
                            return m_value_1;
                        }

                        inline uint32_t& value_1()
                        {
                            return m_value_1;
                        }

                        inline void value_2(uint32_t _value_2)
                        {
                            m_value_2 = _value_2;
                        }

                        inline uint32_t value_2() const
                        {
                            return m_value_2;
                        }

                        inline uint32_t& value_2()
                        {
                            return m_value_2;
                        }

                        inline void value_3(uint32_t _value_3)
                        {
                            m_value_3 = _value_3;
                        }

                        inline uint32_t value_3() const
                        {
                            return m_value_3;
                        }

                        inline uint32_t& value_3()
                        {
                            return m_value_3;
                        }

                        inline void value_4(uint32_t _value_4)
                        {
                            m_value_4 = _value_4;
                        }

                        inline uint32_t value_4() const
                        {
                            return m_value_4;
                        }

                        inline uint32_t& value_4()
                        {
                            return m_value_4;
                        }

                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        uint32_t m_value_1;
                        uint32_t m_value_2;
                        uint32_t m_value_3;
                        uint32_t m_value_4;
                };

                class FASTRPC_DllAPI RequestHeader
                {
                    public:

                        //! @brief Default constructor
                        RequestHeader();

                        RequestHeader(const RequestHeader &header);

                        RequestHeader(RequestHeader &&header);

                        ~RequestHeader();

                        RequestHeader& operator=(const RequestHeader &header);

                        RequestHeader& operator=(RequestHeader &&header);

                        inline void clientId(const Identification &_clientId)
                        {
                            m_clientId = _clientId;
                        }

                        inline void clientId(Identification &&_clientId)
                        {
                            m_clientId = std::move(_clientId);
                        }

                        inline const Identification& clientId() const
                        {
                            return m_clientId;
                        }

                        inline Identification& clientId()
                        {
                            return m_clientId;
                        }

                        inline void remoteServiceName(const std::string &_remoteServiceName)
                        {
                            m_remoteServiceName = _remoteServiceName;
                        }

                        inline void remoteServiceName(std::string &&_remoteServiceName)
                        {
                            m_remoteServiceName = std::move(_remoteServiceName);
                        }

                        inline const std::string& remoteServiceName() const
                        {
                            return m_remoteServiceName;
                        }

                        inline std::string& remoteServiceName()
                        {
                            return m_remoteServiceName;
                        }

                        inline void requestSequenceNumber(uint32_t _requestSequenceNumber)
                        {
                            m_requestSequenceNumber = _requestSequenceNumber;
                        }

                        inline uint32_t requestSequenceNumber() const
                        {
                            return m_requestSequenceNumber;
                        }

                        inline uint32_t& requestSequenceNumber()
                        {
                            return m_requestSequenceNumber;
                        }

                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        Identification m_clientId;

                        std::string m_remoteServiceName;

                        uint32_t m_requestSequenceNumber;

                };

                class FASTRPC_DllAPI ReplyHeader
                {
                    public:

                        //! @brief Default constructor
                        ReplyHeader();

                        ReplyHeader(const ReplyHeader &header);

                        ReplyHeader(ReplyHeader &&header);

                        ~ReplyHeader();

                        ReplyHeader& operator=(const ReplyHeader &header);

                        ReplyHeader& operator=(ReplyHeader &&header);

                        inline void clientId(const Identification &_clientId)
                        {
                            m_clientId = _clientId;
                        }

                        inline void clientId(Identification &&_clientId)
                        {
                            m_clientId = std::move(_clientId);
                        }

                        inline const Identification& clientId() const
                        {
                            return m_clientId;
                        }

                        inline Identification& clientId()
                        {
                            return m_clientId;
                        }

                        inline void requestSequenceNumber(uint32_t _requestSequenceNumber)
                        {
                            m_requestSequenceNumber = _requestSequenceNumber;
                        }

                        inline uint32_t requestSequenceNumber() const
                        {
                            return m_requestSequenceNumber;
                        }

                        inline uint32_t& requestSequenceNumber()
                        {
                            return m_requestSequenceNumber;
                        }

                        inline void retCode(int32_t _retCode)
                        {
                            m_retCode = _retCode;
                        }

                        inline int32_t retCode() const
                        {
                            return m_retCode;
                        }

                        inline int32_t& retCode()
                        {
                            return m_retCode;
                        }

                        inline void retMsg(const std::string &_retMsg)
                        {
                            m_retMsg = _retMsg;
                        }

                        inline void retMsg(std::string &&_retMsg)
                        {
                            m_retMsg = std::move(_retMsg);
                        }

                        inline const std::string& retMsg() const
                        {
                            return m_retMsg;
                        }

                        inline std::string& retMsg()
                        {
                            return m_retMsg;
                        }

                        static unsigned int getMaxCdrSerializedSize(unsigned int current_alignment);

                        void serialize(eprosima::fastcdr::Cdr &cdr) const;

                        void deserialize(eprosima::fastcdr::Cdr &cdr);

                    private:

                        Identification m_clientId;

                        uint32_t m_requestSequenceNumber;

                        int32_t m_retCode;

                        std::string m_retMsg;
                };
            } // namespace dds
        } // namespace protocol
    } // namespace fastrpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADER_H_
