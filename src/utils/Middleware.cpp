/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "utils/Middleware.h"

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
#include "dds/DCPS/RTPS/RtpsDiscovery.h"
#endif

static const char* const CLASS_NAME = "eProsima::RPCDDS::Middleware";

namespace eProsima
{
    namespace RPCDDS
    {
        void get_guid(unsigned int *id, DDS::DataWriter *datawriter)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            DDS::DataWriterQos wQos;
            datawriter->get_qos(wQos);
            id[0] = ((wQos.protocol.virtual_guid.value[0] << 24) & 0xFF000000) +
                ((wQos.protocol.virtual_guid.value[1] << 16) & 0xFF0000) +
                ((wQos.protocol.virtual_guid.value[2] << 8) & 0xFF00) +
                (wQos.protocol.virtual_guid.value[3] & 0xFF);
            id[1] = ((wQos.protocol.virtual_guid.value[4] << 24) & 0xFF000000) +
                ((wQos.protocol.virtual_guid.value[5] << 16) & 0xFF0000) +
                ((wQos.protocol.virtual_guid.value[6] << 8) & 0xFF00) +
                (wQos.protocol.virtual_guid.value[7] & 0xFF);
            id[2] = ((wQos.protocol.virtual_guid.value[8] << 24) & 0xFF000000) +
                ((wQos.protocol.virtual_guid.value[9] << 16) & 0xFF0000) +
                ((wQos.protocol.virtual_guid.value[10] << 8) & 0xFF00) +
                (wQos.protocol.virtual_guid.value[11] & 0xFF);
            id[3] = ((wQos.protocol.virtual_guid.value[12] << 24) & 0xFF000000) +
                ((wQos.protocol.virtual_guid.value[13] << 16) & 0xFF0000) +
                ((wQos.protocol.virtual_guid.value[14] << 8) & 0xFF00) +
                (wQos.protocol.virtual_guid.value[15] & 0xFF);
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
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

        void set_redundant_feature(DDS::DataReader *datareader, DDS::DataReaderQos &rQos)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            datareader->get_qos(rQos);
            rQos.property.value.ensure_length(rQos.property.value.length() + 1,
                    rQos.property.value.maximum() + 1);
            rQos.property.value[rQos.property.value.length() - 1].name = 
                DDS::String_dup("dds.data_reader.state.filter_redundant_samples");
            rQos.property.value[rQos.property.value.length() - 1].value =
                DDS::String_dup("0");
            datareader->set_qos(rQos);
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
#else
#error There not set OS.
#endif
        }

		void set_max_query_condition_filters(DDS::DataReaderQos &rQos)
		{
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
			rQos.reader_resource_limits.max_query_condition_filters = 10;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
#else
#error There not set OS.
#endif
		}

		void set_datareader_protocol(DDS::DataReaderQos &rQos)
		{
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
			rQos.protocol.rtps_reliable_reader.max_heartbeat_response_delay.sec = 0;
			rQos.protocol.rtps_reliable_reader.max_heartbeat_response_delay.nanosec = 50000000;
			rQos.protocol.rtps_reliable_reader.heartbeat_suppression_duration.sec = 0;
			rQos.protocol.rtps_reliable_reader.heartbeat_suppression_duration.nanosec = 45000000;
			rQos.protocol.rtps_reliable_reader.nack_period.sec = 0;
			rQos.protocol.rtps_reliable_reader.nack_period.nanosec = 100000000;
#endif
		}

		void set_datawriter_protocol(DDS::DataWriterQos &wQos)
		{
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
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

		void increase_buffers(DDS::DomainParticipantQos &pQos)
		{
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
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

        DDS::DomainParticipantFactory* getFactory(int domainId)
        {
            const char* const METHOD_NAME = "getFactory";

#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            return TheParticipantFactory;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            OpenDDS::RTPS::RtpsDiscovery_rch discovery = new OpenDDS::RTPS::RtpsDiscovery("rtps");

            if(discovery != NULL)
            {
                discovery->resend_period(ACE_Time_Value(3));
                discovery->sedp_multicast(false);
                std::vector<std::string> addresses;
                discovery->spdp_send_addrs().swap(addresses);
                TheServiceParticipant->add_discovery(OpenDDS::DCPS::static_rchandle_cast<OpenDDS::DCPS::Discovery>(discovery));
                TheServiceParticipant->set_repo_domain(domainId, "rtps");

                return TheParticipantFactory;
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create discovery object\n", CLASS_NAME, METHOD_NAME);
            }

            return NULL;
#else
#error There not set OS.
#endif
        }

    } // namespace RPCDDS
} //namespace eProsima