/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/TCPTransport.h"
#include "eProsima_c/eProsimaMacros.h"

static const char* const CLASS_NAME = "TCPTransport";

namespace eProsima
{
    namespace RPCDDS
    {

        TCPServerTransport::TCPServerTransport(const char *public_address, const char *server_bind_port) :
            m_public_address(NULL), m_server_bind_port(NULL)
        {
            m_public_address = strdup(public_address);
            m_server_bind_port = strdup(server_bind_port);
        }

        TCPClientTransport::TCPClientTransport(const char *to_connect) :
            m_to_connect(NULL)
        {
            m_to_connect = strdup(to_connect);
        }

        TCPServerTransport::~TCPServerTransport()
        {
            if(m_public_address != NULL)
                free(m_public_address);
            if(m_server_bind_port != NULL)
                free(m_server_bind_port);
        }

		TCPClientTransport::~TCPClientTransport()
        {
            if(m_to_connect != NULL)
                free(m_to_connect);
        }

        int TCPServerTransport::setTransport(DDS::DomainParticipantQos &participantQos)
		{
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
			int returnedValue = -1;

			if(m_public_address != NULL &&
				m_server_bind_port != NULL)
			{
				int length = participantQos.property.value.length();

				participantQos.property.value.ensure_length(length + 5 + 1,
						length + 5 + 1);

				participantQos.property.value[length].name  = strdup("dds.transport.load_plugins");
				participantQos.property.value[length++].value  = strdup("dds.transport.TCPv4.tcp1");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.library");
				participantQos.property.value[length++].value  = strdup("nddstransporttcp");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.create_function");
				participantQos.property.value[length++].value  = strdup("NDDS_Transport_TCPv4_create");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.parent.classid");
				participantQos.property.value[length++].value  = strdup("NDDS_TRANSPORT_CLASSID_TCPV4_WAN");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.public_address");
				participantQos.property.value[length++].value  = strdup(m_public_address);

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.server_bind_port");
				participantQos.property.value[length++].value  = strdup(m_server_bind_port);

				// Quitar los builtin transports.
				participantQos.transport_builtin.mask = DDS_TRANSPORTBUILTIN_MASK_NONE;

				returnedValue = 0;
			}

            return returnedValue;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            return 0;
#endif
        }

		int TCPClientTransport::setTransport(DDS::DomainParticipantQos &participantQos)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
			int returnedValue = -1;

			if(m_to_connect != NULL)
			{
				int length = participantQos.property.value.length();

				participantQos.property.value.ensure_length(length + 5,
						length + 5);

				participantQos.property.value[length].name  = strdup("dds.transport.load_plugins");
				participantQos.property.value[length++].value  = strdup("dds.transport.TCPv4.tcp1");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.library");
				participantQos.property.value[length++].value  = strdup("nddstransporttcp");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.create_function");
				participantQos.property.value[length++].value  = strdup("NDDS_Transport_TCPv4_create");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.parent.classid");
				participantQos.property.value[length++].value  = strdup("NDDS_TRANSPORT_CLASSID_TCPV4_WAN");

				participantQos.property.value[length].name  = strdup("dds.transport.TCPv4.tcp1.server_bind_port");
				participantQos.property.value[length++].value  = strdup("0");

				// Quitar los builtin transports.
				participantQos.transport_builtin.mask = DDS_TRANSPORTBUILTIN_MASK_NONE;

				// Set initial peers
				char buf[50];

				length = participantQos.discovery.initial_peers.length();
				participantQos.discovery.initial_peers.ensure_length(length + 1, length + 1);

				SNPRINTF(buf, 50, "tcpv4_wan://%s", m_to_connect);

				participantQos.discovery.initial_peers[length] = strdup(buf);


				returnedValue = 0;
			}

            return returnedValue;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            return 0;
#endif
        }

    } // namespace RPCDDS
} // namespace eProsima
