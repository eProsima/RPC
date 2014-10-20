/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_TCPSERVERTRANSPORT_H_
#define _TRANSPORTS_DDS_TCPSERVERTRANSPORT_H_

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
                 * @brief This class implements a transport using DDS over TCPv4.
                 * This transport can only be used by a server.
                 * @ingroup TRANSPORTMODULE
                 */
                class FASTRPC_DllAPI TCPServerTransport : public ServerTransport
                {
                    public:

                        /*!
                         * @brief Default constructor for servers.
                         *
                         * @param public_address Public address and port of the server. The server should be accesible in this address.
                         *        The user has to configure his router for this purpose. For example: "218.18.3.133:7600"
                         * @param server_bind_port Port used by the server in his machine. This port will be used in the router for port forwarding
                         *        between the public port and this port.
						 * @param remoteServiceName Name of the remote service
                         * @param domainId Optional parameter that specifies the domain identifier to be used in DDS.
                         */
                        TCPServerTransport(const char *public_address, const char *server_bind_port, std::string serviceName, int domainId = 0);


                        //! @brief Default destructor.
                        virtual ~TCPServerTransport();

                        /*!
                         * @brief This function sets the QoS to use the TCPv4 transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use TCPv4 transport.
                         */
                        virtual int setTransport(DDS_DomainParticipantQos &participantQos, DDSDomainParticipant *participant);

                    private:

                        //! @brief The public address and port of the server. This attribute is only used by the server.
                        char *m_public_address;
                        /// @brief The local port that the server uses to make its connections. This attribute is only used by the server.
                        char *m_server_bind_port;
                };
            } // namepsace dds
        } // namespace transport
    } // namepsace fastrpc
} // namespace eprosima
#endif // _TRANSPORTS_DDS_TCPSERVERTRANSPORT_H_
