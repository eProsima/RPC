/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/UDPTransport.h"
#include "eProsima_c/eProsimaMacros.h"

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
#include "dds/DCPS/transport/framework/TransportRegistry.h"
#include "dds/DCPS/transport/framework/TransportInst_rch.h"
#include "dds/DCPS/transport/rtps_udp/RtpsUdpInst.h"
#endif

static const char* const CLASS_NAME = "UDPTransport";

namespace eProsima
{
    namespace RPCDDS
    {
		UDPTransport::UDPTransport() : m_to_connect(NULL)
		{
		}

		UDPTransport::UDPTransport(const char *to_connect) : m_to_connect(NULL)
        {
            m_to_connect = strdup(to_connect);
        }

		UDPTransport::~UDPTransport()
        {
            if(m_to_connect != NULL)
                free(m_to_connect);
        }

        int UDPTransport::setTransport(DDS::DomainParticipantQos &participantQos)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            int returnedValue = -1;

			if(m_to_connect != NULL)
			{
				char buffer[100];
				const char *pointer;

				SNPRINTF(buffer, 100, "builtin.udpv4://%s", m_to_connect);
				participantQos.discovery.accept_unknown_peers = DDS_BOOLEAN_FALSE;
				participantQos.discovery.initial_peers.ensure_length(1, 1);
				pointer = strdup(buffer);
				participantQos.discovery.initial_peers.set_at(0, pointer);
			}
			else
			{
				returnedValue = 0;
			}

			return returnedValue;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            const char* const METHOD_NAME = "setTransport";
            int returnedValue = -1;
            OpenDDS::DCPS::TransportConfig_rch cfg = TheTransportRegistry->create_config("rpcdds_config");

            if(cfg != NULL)
            {
                OpenDDS::DCPS::TransportInst_rch inst = TheTransportRegistry->create_inst("rpcdds_transport", "rtps_udp");

                if(inst != NULL)
                {
                    OpenDDS::DCPS::dynamic_rchandle_cast<OpenDDS::DCPS::RtpsUdpInst>(inst)->use_multicast_ = true;
                    cfg->instances_.push_back(inst);
                    TheTransportRegistry->global_config(cfg);

                    returnedValue = 0;
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create transport instance\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create transport config object\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
#endif
        }

    } // namespace RPCDDS
} // namespace eProsima
