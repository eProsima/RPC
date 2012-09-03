#ifndef _TRANSPORTS_TCPTRANSPORT_H_
#define _TRANSPORTS_TCPTRANSPORT_H_

#include "transports/Transport.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class TCPTransport : public Transport
        {
            public:

                TCPTransport(const char *public_address, const char *server_bind_port);

                TCPTransport(const char *to_connect);

                virtual ~TCPTransport();

                int setTransport(DDS::DomainParticipantQos &participantQos);

            private:

                char *m_public_address;
                char *m_server_bind_port;
                char *m_to_connect;
        };
    } // namepsace DDSRPC
} // namespace eProsima
#endif // _TRANSPORTS_TCPTRANSPORT_H_
