#ifndef _TRANSPORTS_UDPTRANSPORT_H_
#define _TRANSPORTS_UDPTRANSPORT_H_

#include "transports/Transport.h"
#include "utils/ddsrpc.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API UDPTransport : public Transport
        {
            public:

                int setTransport(DDS::DomainParticipantQos &participantQos);
        };
    } // namepsace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_UDPTRANSPORT_H_
