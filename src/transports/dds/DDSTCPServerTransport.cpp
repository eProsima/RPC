/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/transports/dds/TCPServerTransport.h"
#include "eProsima_cpp/eProsimaMacros.h"

static const char* const CLASS_NAME = "eprosima::fastrpc::transport::dds::TCPServerTransport";

using namespace eprosima::fastrpc::transport::dds;

TCPServerTransport::TCPServerTransport(const char *public_address, const char *server_bind_port, std::string serviceName, int domainId) :
    m_public_address(NULL), m_server_bind_port(NULL), ServerTransport(serviceName, domainId)
{
    m_public_address = strdup(public_address);
    m_server_bind_port = strdup(server_bind_port);
}

TCPServerTransport::~TCPServerTransport()
{
    if(m_public_address != NULL)
        free(m_public_address);
    if(m_server_bind_port != NULL)
        free(m_server_bind_port);
}

int TCPServerTransport::setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
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
#elif defined(OPENDDS)
    return 0;
#endif
}
