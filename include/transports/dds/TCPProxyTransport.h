/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_TCPPROXYTRANSPORT_H_
#define _TRANSPORTS_TCPPROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/dds/ProxyTransport.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class implements a transport using DDS over TCPv4.
                 * This transport only could be used by a server's proxy.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI TCPProxyTransport : public ProxyTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for the proxies.
                         *
                         * @param to_connect Public address and port where the server could be found by the proxy. By example: "218.18.3.133:7600"
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        TCPProxyTransport(const char *to_connect, std::string remoteServiceName, int domainId = 0, long timeout = 10000L);

                        //! @brief Default destructor.
                        virtual ~TCPProxyTransport();

                        /*!
                         * @brief This function sets the QoS of DDS to use the TCPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use TCPv4 transport.
                         */
                        int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);

                    private:

                        //! @brief The public address and port where the client could find the server. This attribute is only used by the proxy.
                        char *m_to_connect;
                };
            } // namepsace dds
        } // namespace transport
    } // namepsace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
