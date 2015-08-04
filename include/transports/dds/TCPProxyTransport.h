/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_TCPPROXYTRANSPORT_H_
#define _TRANSPORTS_TCPPROXYTRANSPORT_H_

#include "../../rpc_dll.h"

#if RPC_WITH_RTIDDS

#include "ProxyTransport.h"
#include "../../utils/dds/Middleware.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class implements a transport using DDS over TCPv4.
                 * This transport can only be used by a server proxy.
                 * @ingroup TRANSPORTMODULE
                 */
                class TCPProxyTransport : public ProxyTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for the proxies.
                         *
                         * @param to_connect Public address and port where the server can be found by the proxy. By example: "218.18.3.133:7600"
						 * @param remoteServiceName Name of the remote service. If pointer is NULL,
                         * the default service's name will be use.
						 * @param instanceName Instance's name of the remote service. If pointer is NULL,
                         * the default instance's name will be use.
                         * @param domainId Optional parameter that specifies the domain identifier to be used in DDS.
						 * @param timeout The time in milliseconds to wait for the reply.
                         */
                        RPC_DllAPI TCPProxyTransport(const char* const &to_connect, const char* const remoteServiceName, const char* const instanceName, int domainId = 0, long timeout = 10000L);

                        //! @brief Default destructor.
                        virtual RPC_DllAPI ~TCPProxyTransport();

                        /*!
                         * @brief This function sets the DDS' QoS to use the TCPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use TCPv4 transport.
                         */
                        virtual RPC_DllAPI int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);

                    private:

                        //! @brief The public address and port where the client can find the server. This attribute is only used by the proxy.
                        char *m_to_connect;
                };
            } // namepsace dds
        } // namespace transport
    } // namepsace fastrpc
} // namespace eprosima

#endif // RPC_WITH_RTIDDS

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
