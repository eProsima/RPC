#ifndef _TRANSPORTS_UDPTRANSPORT_H_
#define _TRANSPORTS_UDPTRANSPORT_H_

#include "transports/Transport.h"
#include "utils/rpcdds.h"

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * \brief This class implements the UDPv4 transport for the client and the server.
		 */
        class RPCDDS_WIN32_DLL_API UDPTransport : public Transport
        {
            public:

				/// \brief Default constructor for clients and servers..
				UDPTransport();

				/**
				 * \brief Constructor for clients.
				 *
				 * \param to_connect IP address where the server could be found by the client. By example: "192.168.1.3"
				 */
                UDPTransport(const char *to_connect);

				/// \brief Default destructor.
				virtual ~UDPTransport();

				/**
				 * \brief This function sets the QoS of DDS to use the UDPv4 transport.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                int setTransport(DDS::DomainParticipantQos &participantQos);

			private:

				/// \brief The IP address where the client could find the server. This attribute is only used by the client.
                char *m_to_connect;
        };
    } // namepsace RPCDDS
} // namespace eProsima
#endif // _TRANSPORTS_UDPTRANSPORT_H_
