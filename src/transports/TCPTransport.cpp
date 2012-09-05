#include "transports/TCPTransport.h"
#include "eProsima_c/eProsimaMacros.h"

static const char* const CLASS_NAME = "TCPTransport";

namespace eProsima
{
    namespace DDSRPC
    {

        TCPTransport::TCPTransport(const char *public_address, const char *server_bind_port) :
            m_public_address(NULL), m_server_bind_port(NULL), m_to_connect(NULL)
        {
            m_public_address = strdup(public_address);
            m_server_bind_port = strdup(server_bind_port);
        }

        TCPTransport::TCPTransport(const char *to_connect) :
            m_public_address(NULL), m_server_bind_port(NULL), m_to_connect(NULL)
        {
            m_to_connect = strdup(to_connect);
        }

        TCPTransport::~TCPTransport()
        {
            if(m_public_address != NULL)
                free(m_public_address);
            if(m_server_bind_port != NULL)
                free(m_server_bind_port);
            if(m_to_connect != NULL)
                free(m_to_connect);
        }

        int TCPTransport::setTransport(DDS::DomainParticipantQos &participantQos)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            int length = participantQos.property.value.length(),
                dynProperties = 0 + (m_public_address !=  NULL ? 1 : 0);

            participantQos.property.value.ensure_length(length + 5 + dynProperties,
                    length + 5 + dynProperties);

            participantQos.property.value[length].name  = strdup("dds.transport.load_plugins");
            participantQos.property.value[length++].value  = strdup("dds.transport.TCPv4.tcp1");

            participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.library");
            participantQos.property.value[length++].value  = strdup("nddstransporttcp");

            participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.create_function");
            participantQos.property.value[length++].value  = strdup("NDDS_Transport_TCPv4_create");

            participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.parent.classid");
            participantQos.property.value[length++].value  = strdup("NDDS_TRANSPORT_CLASSID_TCPV4_WAN");

            if(m_public_address != NULL)
            {
                participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.public_address");
                participantQos.property.value[length++].value  = strdup(m_public_address);
            }

            participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.server_bind_port");
            if(m_server_bind_port != NULL)
            {
                participantQos.property.value[length++].value  = strdup(m_server_bind_port);
            }
            else
            {
                participantQos.property.value[length++].value  = strdup("0");
            }

            // Quitar los builtin transports.
            participantQos.transport_builtin.mask = DDS_TRANSPORTBUILTIN_MASK_NONE;

            // Set initial peers
            if(m_to_connect != NULL)
            {
                char buf[50];

                length = participantQos.discovery.initial_peers.length();
                participantQos.discovery.initial_peers.ensure_length(length + 1, length + 1);

                SNPRINTF(buf, 50, "tcpv4_wan://%s", m_to_connect);

                participantQos.discovery.initial_peers[length] = strdup(buf);

            }

            return 0;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            return 0;
#endif
        }

    } // namespace DDSRPC
} // namespace eProsima
