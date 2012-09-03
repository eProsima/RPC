#ifndef _TRANSPORTS_UDPTRANSPORT_H_
#define _TRANSPORTS_UDPTRANSPORT_H_

#include "transports/Transport.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class UDPTransport : public Transport
        {
            public:

                int setTransport(DDS::DomainParticipantQos &participantQos);
        };
    } // namepsace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_UDPTRANSPORT_H_
