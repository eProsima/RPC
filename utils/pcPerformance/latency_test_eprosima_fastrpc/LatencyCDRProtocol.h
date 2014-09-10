/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file LatencyCDRProtocol.h
 * This header file contains the declaration of the protocol used to create CDR messages.
 *
 * This file was generated by the tool fastrpcgen.
 */

#ifndef _Latency_CDR_PROTOCOL_H_
#define _Latency_CDR_PROTOCOL_H_

#include "LatencyProtocol.h"
#include "fastcdr/FastCdr.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class ServerTransport;
        }
        
        namespace protocol
        {
            namespace fastcdr
            {
                /*!
                 * @brief This function serialize a type element.
                 * @param cdr eprosima::fastcdr::FastCdr object used to serialize.
                 * @param x Reference to the variable that will be serialized in the buffer.
                 * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
                 * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
                 */
                void serialize(eprosima::fastcdr::FastCdr &cdr, const element &x);

                /*!
                 * @brief This function deserialize a type element.
                 * @param cdr eprosima::fastcdr::FastCdr object used to deserialize.
                 * @param x Reference to the variable that will store the element read from the buffer.
                 * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
                 * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
                 */
                void deserialize(eprosima::fastcdr::FastCdr &cdr, element &x);



                
                /*!
                 * @brief
                 * @ingroup LATENCY
                 */
                class FASTRPCUSERDllExport LatencyProtocol : public eprosima::rpc::protocol::LatencyProtocol
                {
                    public:
                    
                        LatencyProtocol();
                        
                        virtual ~LatencyProtocol();
                    
                        virtual bool setTransport(eprosima::rpc::transport::Transport &transport);
                        
                        bool activateInterface(const char* interfaceName);
                        
                        static size_t worker(Protocol& protocol, void *&buffer, size_t &bufferLength, size_t &bufferSize, eprosima::rpc::transport::Endpoint *endpoint);
                        
                                                                        st Latency_latency(/*in*/ const st& param);
                                                                        
                                                                        
                                                
                        
                    private:
                    
                        eprosima::fastcdr::FastBuffer serializeBuffer;
                        eprosima::fastcdr::FastCdr scdr;
                };
            } // namespace fastcdr
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _Latency_CDR_PROTOCOL_H_