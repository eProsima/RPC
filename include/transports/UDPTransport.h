/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_UDPTRANSPORT_H_
#define _TRANSPORTS_UDPTRANSPORT_H_

#include "transports/Transport.h"
#include "utils/rpcdds.h"

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This class implements the UDPv4 transport that could be used by a server's proxy.
         * @ingroup TRANSPORTMODULE
		 */
        class RPCDDS_WIN32_DLL_API UDPClientTransport : public Transport
        {
            public:

				/// \brief Default constructor for clients.
				UDPClientTransport();

				/**
				 * \brief Constructor for clients.
				 *
				 * \param to_connect IP address where the server could be found by the client. By example: "192.168.1.3"
				 */
                UDPClientTransport(const char *to_connect);

				/// \brief Default destructor.
				virtual ~UDPClientTransport();

				/**
				 * \brief This function sets the QoS of DDS to use the UDPv4 transport.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);

			private:

				/// \brief The IP address where the client could find the server. This attribute is only used by the client.
                char *m_to_connect;
        };

		/**
		 * @brief This class implements the UDPv4 transport that could be used by a server.
         * @ingroup TRANSPORTMODULE
		 */
        class RPCDDS_WIN32_DLL_API UDPServerTransport : public Transport
        {
            public:

				/// \brief Default constructor for servers.
				UDPServerTransport();

				/// \brief Default destructor.
				virtual ~UDPServerTransport();

				/**
				 * \brief This function sets the QoS of DDS to use the UDPv4 transport.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);
        };
    } // namepsace RPCDDS
} // namespace eProsima
#endif // _TRANSPORTS_UDPTRANSPORT_H_
