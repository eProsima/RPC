#ifndef _TRANSPORTS_TRANSPORT_H_
#define _TRANSPORTS_TRANSPORT_H_

#include "utils/Version.h"

namespace eProsima
{
    namespace DDSRPC
    {
		/**
		 * \brief This class is the base of all classes that implement a transport
		 *        that could be used by the client or the server.
		 */
        class Transport
        {
            public:

				/// \brief Default constructor.
                Transport(){}

				/// \brief Default destructor.
                virtual ~Transport(){}
                
				/**
				 * \brief This function sets the QoS of DDS to use the transport that this class implements.
				 *        This function has to be implemented by the derived classes.
				 *
				 * \param participantQos Reference to the DDS domain participant QoS.
				 */
                virtual int setTransport(DDS::DomainParticipantQos &participantQos) = 0;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_TRANSPORT_H_
