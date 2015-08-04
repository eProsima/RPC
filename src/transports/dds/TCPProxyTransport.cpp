/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <transports/dds/TCPProxyTransport.h>
#include <utils/macros/snprintf.h>

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::TCPProxyTransport";

using namespace eprosima::rpc::transport::dds;

TCPProxyTransport::TCPProxyTransport(const char* const &to_connect, const char* const remoteServiceName, const char* const instanceName, int domainId, long milliseconds) :
    ProxyTransport(remoteServiceName, instanceName, domainId, milliseconds), m_to_connect(NULL) 
{
    m_to_connect = strdup(to_connect);
}

TCPProxyTransport::~TCPProxyTransport()
{
    if(m_to_connect != NULL)
        free(m_to_connect);
}

int TCPProxyTransport::setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
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
#elif defined(OPENDDS)
    return 0;
#endif
}

#endif // RPC_WITH_RTIDDS
