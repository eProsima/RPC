#ifndef _TRANSPORTS_TCPTRANSPORT_H_
#define _TRANSPORTS_TCPTRANSPORT_H_

#include "transports/Transport.h"
#include "utils/rpcdds.h"

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * \brief This class implements the TCPv4 transport for the client and the server.
		 */
        class RPCDDS_WIN32_DLL_API TCPTransport : public Transport
        {
            public:

				/**
				 * \brief Default constructor for servers.
				 *
				 * \param public_address Public address and port of the server. The server should be accesible in this address.
                 *        The user has to configure its router for this purpose. By example: "218.18.3.133:7600"
				 * \param server_bind_port Port used by the server in its machine. This port will be use in the router for port forwarding
                 *        between the public port and this port.
				 */
                TCPTransport(const char *public_address, const char *server_bind_port);

				/**
				 * \brief Default constructor for clients.
				 *
				 * \param to_connect Public address and port where the server could be found by the client. By example: "218.18.3.133:7600"
				 */
                TCPTransport(const char *to_connect);

				/// \brief Default destructor.
                virtual ~TCPTransport();

				/**
				 * \brief This function sets the QoS of DDS to use the TCPv4 transport.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                int setTransport(DDS::DomainParticipantQos &participantQos);

            private:

				/// \brief The public address and port of the server. This attribute is only used by the server.
                char *m_public_address;
				/// \brief The local port that the server use to make connections. This attribute is only used by the server.
                char *m_server_bind_port;
				/// \brief The public address and port where the client could find the server. This attribute is only used by the client.
                char *m_to_connect;
        };
    } // namepsace RPCDDS
} // namespace eProsima
#endif // _TRANSPORTS_TCPTRANSPORT_H_
