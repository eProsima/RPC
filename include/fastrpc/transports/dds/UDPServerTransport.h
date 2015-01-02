/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_UDPSERVERTRANSPORT_H_
#define _TRANSPORTS_DDS_UDPSERVERTRANSPORT_H_

#include "fastrpc/fastrpc_dll.h"
#include "fastrpc/transports/dds/ServerTransport.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class implements transport using DDS over UDPv4.
                 * This transport can only be used by a server.
                 * @ingroup TRANSPORTMODULE
                 */
                class UDPServerTransport : public ServerTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for servers.
						 * @param serviceName Name of the remote service. If value is not assigned or NULL pointer is used,
                         * the default service's name will be use.
						 * @param instanceName Instance's name of the remote service. If value is not assigned or NULL pointer is used,
                         * the default instance's name will be use.
                         * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
                         */
                        FASTRPC_DllAPI UDPServerTransport(const char* const serviceName = NULL, const char* const instanceName = NULL, int domainId = 0);

                        //! @brief Default destructor.
                        virtual FASTRPC_DllAPI ~UDPServerTransport();

                        /*!
                         * @brief This function sets the DDS' QoS to use the UDPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use UDPv4 transport.
                         */
                        virtual FASTRPC_DllAPI int setTransport(DDS_DomainParticipantQos &participantQos, DDSDomainParticipant *participant);
                };
            } // namepsace dds
        } // namespace transport
    } // namepsace fastrpc
} // namespace eprosima

#endif // _TRANSPORTS_DDS_UDPSERVERTRANSPORT_H_
