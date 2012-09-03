#include "transports/UDPTransport.h"

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
#include "dds/DCPS/transport/framework/TransportRegistry.h"
#include "dds/DCPS/transport/framework/TransportInst_rch.h"
#include "dds/DCPS/transport/rtps_udp/RtpsUdpInst.h"
#endif

static const char* const CLASS_NAME = "UDPTransport";

namespace eProsima
{
    namespace DDSRPC
    {

        int UDPTransport::setTransport(DDS::DomainParticipantQos &participantQos)
        {
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
            return 0;
#elif (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))
            const char* const METHOD_NAME = "setTransport";
            int returnedValue = -1;
            OpenDDS::DCPS::TransportConfig_rch cfg = TheTransportRegistry->create_config("ddsrpc_config");

            if(cfg != NULL)
            {
                OpenDDS::DCPS::TransportInst_rch inst = TheTransportRegistry->create_inst("ddsrpc_transport", "rtps_udp");

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

    } // namespace DDSRPC
} // namespace eProsima
