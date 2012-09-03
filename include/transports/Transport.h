#ifndef _TRANSPORTS_TRANSPORT_H_
#define _TRANSPORTS_TRANSPORT_H_

#include "utils/Version.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class Transport
        {
            public:

                Transport(){}

                virtual ~Transport(){}
                
                virtual int setTransport(DDS::DomainParticipantQos &participantQos) = 0;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_TRANSPORT_H_
