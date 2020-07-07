/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_FASTRTPS

#include <transports/dds/RTPSTransport.h>
#include <exceptions/InitializeException.h>

#include <fastrtps/Domain.h>
#include <fastrtps/participant/Participant.h>
#include <fastrtps/attributes/ParticipantAttributes.h>

#include <string>

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSTransport";

RTPSTransport::RTPSTransport(int domainId) : m_domainId(domainId) , m_participant(NULL),
    m_ownership(true)
{
}

RTPSTransport::RTPSTransport(eprosima::fastrtps::Participant *participant) : m_domainId(0) , m_participant(participant),
    m_ownership(false)
{
}

void RTPSTransport::initialize()
{
    const char* const METHOD_NAME = "initialize";

    if(m_ownership && m_participant == nullptr)
    {
        std::string errorMessage;
        eprosima::fastrtps::ParticipantAttributes pQos;
        pQos.domainId = m_domainId;

        // Creating the domain participant that will be used to create DDS entities.
        m_participant = eprosima::fastrtps::Domain::createParticipant(pQos, nullptr);

        if (m_participant != nullptr)
        {
            return;
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
    if(m_ownership && m_participant != nullptr)
    {
        eprosima::fastrtps::Domain::removeParticipant(m_participant);
        m_participant = nullptr;
    }
}

#endif // RPC_WITH_FASTRTPS
