/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORT_DDS_UDPPROXYTRANSPORT_H_
#define _TRANSPORT_DDS_UDPPROXYTRANSPORT_H_

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
                 * @brief This class implements a transport using DDS over UDPv4.
                 * This transport only can be used by a server's proxy.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI UDPProxyTransport : public ProxyTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for server's proxies.
                         * @param domainId Optional parameter that specifies the domain identifier to be used in DDS.
                         */
                        UDPProxyTransport(std::string remoteServiceName, int domainId = 0, long timeout = 10000L);

                        /*!
                         * @brief Constructor for server's proxies.
                         *
                         * @param to_connect IP address where the server can be found by the proxy. For example: "192.168.1.3"
                         * @param domainId Optional parameter that specifies the domain identifier to be used in DDS.
                         */
                        UDPProxyTransport(const char *to_connect, std::string remoteServiceName, int domainId = 0, long timeout = 10000L);

                        //! @brief Default destructor.
                        virtual ~UDPProxyTransport();

                        /*!
                         * @brief This function sets the QoS of DDS to use the UDPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use UDPv4 transport. 
                         */
                        virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);

                    private:

                        //! @brief The IP address where the proxy can find the server. This attribute is only used by the proxy.
                        char *m_to_connect;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORT_DDS_UDPPROXYTRANSPORT_H_
