/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#include <config.h>

#if RPC_WITH_FASTDDS

#include <transports/dds/RTPSTransport.h>
#include <exceptions/InitializeException.h>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>

#include <string>

namespace eprosima {
namespace rpc {

using namespace transport::dds;
using namespace exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSTransport";

RTPSTransport::RTPSTransport(
        int domainId)
    : m_domainId(domainId)
    , m_ownership(true)
{
}

RTPSTransport::RTPSTransport(
        fastdds::dds::DomainParticipant* participant)
    : m_participant(participant)
    , m_ownership(false)
{
}

void RTPSTransport::initialize()
{
    const char* const METHOD_NAME = "initialize";

    if (m_ownership && m_participant == nullptr)
    {
        std::string errorMessage;

        // Creating the domain participant that will be used to create DDS entities.
        m_participant = fastdds::dds::DomainParticipantFactory::get_instance()->create_participant(m_domainId,
                        fastdds::dds::PARTICIPANT_QOS_DEFAULT);

        if (nullptr != m_participant)
        {
            m_publisher = m_participant->create_publisher(fastdds::dds::PUBLISHER_QOS_DEFAULT);

            if (nullptr != m_publisher)
            {
                m_subscriber = m_participant->create_subscriber(fastdds::dds::SUBSCRIBER_QOS_DEFAULT);

                if (nullptr != m_subscriber)
                {
                    return;
                }
            }
        }
        else
        {
            errorMessage = "create_participant error";
        }

        printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
        throw InitializeException(std::move(errorMessage));
    }
}

RTPSTransport::~RTPSTransport()
{
    if (m_ownership && m_participant != nullptr)
    {
        m_participant->delete_contained_entities();
        fastdds::dds::DomainParticipantFactory::get_instance()->delete_participant(m_participant);
        m_participant = nullptr;
    }
}

} // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS
