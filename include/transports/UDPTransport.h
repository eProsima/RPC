#ifndef _TRANSPORTS_UDPTRANSPORT_H_
#define _TRANSPORTS_UDPTRANSPORT_H_

#include "transports/Transport.h"
#include "utils/ddsrpc.h"

namespace eProsima
{
    namespace DDSRPC
    {
		/**
		 * \brief This class implements the UDPv4 transport for the client and the server.
		 */
        class DDSRPC_WIN32_DLL_API UDPTransport : public Transport
        {
            public:

				/// \brief Default constructor.
				UDPTransport(){};

				/// \brief Default destructor.
				virtual ~UDPTransport(){};

				/**
				 * \brief This function sets the QoS of DDS to use the UDPv4 transport.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                int setTransport(DDS::DomainParticipantQos &participantQos);
        };
    } // namepsace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_UDPTRANSPORT_H_
