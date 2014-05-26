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
                class FASTRPC_DllAPI UDPServerTransport : public ServerTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for servers.
						 * @param remoteServiceName Name of the service
                         * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
                         */
                        UDPServerTransport(std::string serviceName, int domainId = 0);

                        //! @brief Default destructor.
                        virtual ~UDPServerTransport();

                        /*!
                         * @brief This function sets the DDS' QoS to use the UDPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use UDPv4 transport.
                         */
                        virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);
                };
            } // namepsace dds
        } // namespace transport
    } // namepsace fastrpc
} // namespace eprosima

#endif // _TRANSPORTS_DDS_UDPSERVERTRANSPORT_H_
