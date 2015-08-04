/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <utils/dds/Middleware.h>
#include <protocols/dds/MessageHeader.h>

#if defined(OPENDDS)
#include <dds/DCPS/RTPS/RtpsDiscovery.h>
#endif

static const char* const CLASS_NAME = "eprosima::rpc::util::dds::Middleware";

void eprosima::rpc::util::dds::get_guid(eprosima::rpc::protocol::dds::GUID_t &id, DDS::DataWriter *datawriter)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    DDS::DataWriterQos wQos;
    datawriter->get_qos(wQos);
    id.guidPrefix()[0] = wQos.protocol.virtual_guid.value[0];
    id.guidPrefix()[1] = wQos.protocol.virtual_guid.value[1];
    id.guidPrefix()[2] = wQos.protocol.virtual_guid.value[2];
    id.guidPrefix()[3] = wQos.protocol.virtual_guid.value[3];
    id.guidPrefix()[4] = wQos.protocol.virtual_guid.value[4];
    id.guidPrefix()[5] = wQos.protocol.virtual_guid.value[5];
    id.guidPrefix()[6] = wQos.protocol.virtual_guid.value[6];
    id.guidPrefix()[7] = wQos.protocol.virtual_guid.value[7];
    id.guidPrefix()[8] = wQos.protocol.virtual_guid.value[8];
    id.guidPrefix()[9] = wQos.protocol.virtual_guid.value[9];
    id.guidPrefix()[10] = wQos.protocol.virtual_guid.value[10];
    id.guidPrefix()[11] = wQos.protocol.virtual_guid.value[11];
    id.entityId().entityKey()[0] = wQos.protocol.virtual_guid.value[12];
    id.entityId().entityKey()[1] = wQos.protocol.virtual_guid.value[13];
    id.entityId().entityKey()[2] = wQos.protocol.virtual_guid.value[14];
    id.entityId().entityKind() = wQos.protocol.virtual_guid.value[15];
#elif defined(OPENDDS)
    OpenDDS::DCPS::DataWriterImpl *wimpl = dynamic_cast<OpenDDS::DCPS::DataWriterImpl*>(datawriter);
    OpenDDS::DCPS::RepoId guid = wimpl->get_publication_id();
    id[0] = ((guid.guidPrefix[0] << 24) & 0xFF000000) +
        ((guid.guidPrefix[1] << 16) & 0xFF0000) +
        ((guid.guidPrefix[2] << 8) & 0xFF00) +
        (guid.guidPrefix[3] & 0xFF);
    id[1] = ((guid.guidPrefix[4] << 24) & 0xFF000000) +
        ((guid.guidPrefix[5] << 16) & 0xFF0000) +
        ((guid.guidPrefix[6] << 8) & 0xFF00) +
        (guid.guidPrefix[7] & 0xFF);
    id[2] = ((guid.guidPrefix[8] << 24) & 0xFF000000) +
        ((guid.guidPrefix[9] << 16) & 0xFF0000) +
        ((guid.guidPrefix[10] << 8) & 0xFF00) +
        (guid.guidPrefix[11] & 0xFF);
    id[3] = ((guid.entityId.entityKey[0] << 24) & 0xFF000000) +
        ((guid.entityId.entityKey[1] << 16) & 0xFF0000) +
        ((guid.entityId.entityKey[2] << 8) & 0xFF00) +
        (guid.entityId.entityKind & 0xFF);
#else
#error There not set OS.
#endif
}

void eprosima::rpc::util::dds::set_redundant_feature(DDS::DataReader *datareader, DDS::DataReaderQos &rQos)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    datareader->get_qos(rQos);
    rQos.property.value.ensure_length(rQos.property.value.length() + 1,
            rQos.property.value.maximum() + 1);
    rQos.property.value[rQos.property.value.length() - 1].name = 
        DDS::String_dup("dds.data_reader.state.filter_redundant_samples");
    rQos.property.value[rQos.property.value.length() - 1].value =
        DDS::String_dup("0");
    datareader->set_qos(rQos);
#elif defined(OPENDDS)
#else
#error There not set OS.
#endif
}

void eprosima::rpc::util::dds::set_max_query_condition_filters(DDS::DataReaderQos &rQos)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    rQos.reader_resource_limits.max_query_condition_filters = 10;
#elif defined(OPENDDS)
#else
#error There not set OS.
#endif
}

void eprosima::rpc::util::dds::set_datareader_protocol(DDS::DataReaderQos &rQos)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    rQos.protocol.rtps_reliable_reader.max_heartbeat_response_delay.sec = 0;
    rQos.protocol.rtps_reliable_reader.max_heartbeat_response_delay.nanosec = 50000000;
    rQos.protocol.rtps_reliable_reader.heartbeat_suppression_duration.sec = 0;
    rQos.protocol.rtps_reliable_reader.heartbeat_suppression_duration.nanosec = 45000000;
    rQos.protocol.rtps_reliable_reader.nack_period.sec = 0;
    rQos.protocol.rtps_reliable_reader.nack_period.nanosec = 100000000;
#endif
}

void eprosima::rpc::util::dds::set_datawriter_protocol(DDS::DataWriterQos &wQos)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    wQos.protocol.rtps_reliable_writer.low_watermark = 0;
    wQos.protocol.rtps_reliable_writer.high_watermark = 3;
    wQos.protocol.rtps_reliable_writer.heartbeat_period.sec = 0;
    wQos.protocol.rtps_reliable_writer.heartbeat_period.nanosec = 100000000;
    wQos.protocol.rtps_reliable_writer.fast_heartbeat_period.sec = 0;
    wQos.protocol.rtps_reliable_writer.fast_heartbeat_period.nanosec = 50000000;
    wQos.protocol.rtps_reliable_writer.late_joiner_heartbeat_period.sec = 0;
    wQos.protocol.rtps_reliable_writer.late_joiner_heartbeat_period.nanosec = 100000000;
    wQos.protocol.rtps_reliable_writer.max_heartbeat_retries = 100;
#endif
}

void eprosima::rpc::util::dds::increase_buffers(DDS::DomainParticipantQos &pQos)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    pQos.receiver_pool.buffer_size = 65536;
    int length = pQos.property.value.length();
    pQos.property.value.ensure_length(length + 3, length + 3);
    pQos.property.value[length].name = strdup("dds.transport.UDPv4.builtin.parent.message_size_max");
    pQos.property.value[length++].value = strdup("65536");
    pQos.property.value[length].name = strdup("dds.transport.UDPv4.builtin.send_socket_buffer_size");
    pQos.property.value[length++].value = strdup("65536");
    pQos.property.value[length].name = strdup("dds.transport.UDPv4.builtin.recv_socket_buffer_size");
    pQos.property.value[length].value = strdup("65536");
#endif
}

DDS::DomainParticipantFactory* eprosima::rpc::util::dds::getFactory(int domainId)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    return TheParticipantFactory;
#elif defined(OPENDDS)
    const OpenDDS::DCPS::Service_Participant::RepoKeyDiscoveryMap &map =  TheServiceParticipant->discoveryMap();

    if(map.find("rtps") == map.end())
    {
        OpenDDS::RTPS::RtpsDiscovery_rch discovery = new OpenDDS::RTPS::RtpsDiscovery("rtps");

        if(discovery != NULL)
        {
            //discovery->resend_period(ACE_Time_Value(3));
            discovery->sedp_multicast(false);
            std::vector<std::string> addresses;
            discovery->spdp_send_addrs().swap(addresses);
            TheServiceParticipant->add_discovery(OpenDDS::DCPS::static_rchandle_cast<OpenDDS::DCPS::Discovery>(discovery));    
            TheServiceParticipant->set_default_discovery("rtps");

            return TheParticipantFactory;
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create discovery object\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        return TheParticipantFactory;
    }

    return NULL;
#else
#error There not set OS.
#endif
}

#endif // RPC_WITH_RTIDDS
