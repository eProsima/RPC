/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <transports/dds/UDPServerTransport.h>
#include <utils/macros/snprintf.h>
#include <utils/dds/Middleware.h>

#if defined(OPENDDS)
#include <dds/DCPS/transport/framework/TransportRegistry.h>
#include <dds/DCPS/transport/framework/TransportInst_rch.h>
#include <dds/DCPS/transport/rtps_udp/RtpsUdpInst.h>
#include <dds/DCPS/DomainParticipantImpl.h>
#endif

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::UDPServerTransport";

using namespace eprosima::rpc::transport::dds;

UDPServerTransport::UDPServerTransport(const char* const serviceName, const char* const instanceName, int domainId) : ServerTransport(serviceName, instanceName, domainId)
{
}

UDPServerTransport::~UDPServerTransport()
{
}

int UDPServerTransport::setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    return 0;
#elif defined(OPENDDS)
    const char* const METHOD_NAME = "setTransport";
    int returnedValue = -1;
    char cfgbuffer[50], trabuffer[50];
    OpenDDS::DCPS::RepoId pid = dynamic_cast<OpenDDS::DCPS::DomainParticipantImpl*>(participant)->get_id();
    int participantId = *(int*)&pid.guidPrefix[8];
    SNPRINTF(cfgbuffer, 50, "config_%ld", participantId);
    SNPRINTF(trabuffer, 50, "trans_%ld", participantId);

    OpenDDS::DCPS::TransportConfig_rch cfg = TheTransportRegistry->get_config(cfgbuffer);

    if(cfg.is_nil())
    {        
        cfg = TheTransportRegistry->create_config(cfgbuffer);

        if(cfg != NULL)
        {
            OpenDDS::DCPS::TransportInst_rch inst = TheTransportRegistry->create_inst(trabuffer, "rtps_udp");

            if(inst != NULL)
            {
                OpenDDS::DCPS::dynamic_rchandle_cast<OpenDDS::DCPS::RtpsUdpInst>(inst)->use_multicast_ = true;
                OpenDDS::DCPS::dynamic_rchandle_cast<OpenDDS::DCPS::RtpsUdpInst>(inst)->heartbeat_period_ = ACE_Time_Value(3);
                cfg->instances_.push_back(inst);
                TheTransportRegistry->bind_config(cfg, participant);

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
    }

    return returnedValue;
#endif
}

#endif // RPC_WITH_RTIDDS
