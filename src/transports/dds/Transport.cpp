/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#include <config.h>

#if RPC_WITH_RTIDDS

#include <transports/dds/Transport.h>
#include <exceptions/InitializeException.h>
#include <utils/dds/Middleware.h>

#include <string>

using namespace eprosima::rpc;
using namespace ::transport::dds;
using namespace ::util::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::Transport";

Transport::Transport(int domainId) : m_domainId(domainId) , m_participant(NULL),
    m_publisher(NULL), m_subscriber(NULL)
{
}

void Transport::initialize()
{
    const char* const METHOD_NAME = "initialize";

    if(m_participant == NULL)
    {
        std::string errorMessage;
        DDS::DomainParticipantFactory *factory = getFactory(m_domainId);
        DDS::DomainParticipantQos participantQos;
        DDS::PublisherQos publisherQos;
        DDS::SubscriberQos subscriberQos;

        if(factory != NULL)
        {
            factory->get_default_participant_qos(participantQos);
#if defined(RTI_WIN32) || defined(RTI_LINUX)
            setTransport(participantQos, NULL);
#endif
            // In some DDS middleware is good increase the buffer of sockets.
            increase_buffers(participantQos);
            // Creating the domain participant that will be used to create DDS entities.
            m_participant = factory->create_participant(
                    m_domainId, participantQos, 
                    NULL /* listener */, STATUS_MASK_NONE);

            if (m_participant != NULL)
            {
                if(m_participant->get_qos(participantQos) == DDS_RETCODE_OK)
                {
#if defined(OPENDDS)
                    setTransport(participantQos, m_participant);
#endif
                    m_participant->set_qos(participantQos);

                    // Creating the publisher that will be used to create datawriter entities.
                    m_publisher = m_participant->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE);

                    if(m_publisher != NULL)
                    {
                        if(m_publisher->get_qos(publisherQos) == DDS_RETCODE_OK)
                        {
                            publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_publisher->set_qos(publisherQos);

                            // Creating the subscriber that will be used to create datareader entities.
                            m_subscriber = m_participant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, NULL, STATUS_MASK_NONE);

                            if(m_subscriber != NULL)
                            {
                                if(m_subscriber->get_qos(subscriberQos) == DDS_RETCODE_OK)
                                {
                                    subscriberQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                                    m_subscriber->set_qos(subscriberQos);

                                    return;
                                }
                                else
                                {
                                    errorMessage = "subscriber get_qos() error";
                                }

                                m_participant->delete_subscriber(m_subscriber);
                            }
                            else
                            {
                                errorMessage = "create_subscriber() error";
                            }
                        }
                        else
                        {
                            errorMessage = "publisher get_qos() error";
                        }

                        m_participant->delete_publisher(m_publisher);
                    }
                    else
                    {
                        errorMessage = "create_publisher() error";
                    }
                }

                factory->delete_participant(m_participant);
            }
            else
            {
                errorMessage = "create_participant error";
            }
        }
        else
        {
            errorMessage = "create factory error";
        }

        printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
        throw InitializeException(std::move(errorMessage));
    }
}

Transport::~Transport()
{
    const char* const METHOD_NAME = "~Transport";
    DDS::ReturnCode_t retcode;

    if(m_participant != NULL)
    {
        if(m_subscriber != NULL)
        {
            retcode = m_participant->delete_subscriber(m_subscriber);
            if (retcode != DDS_RETCODE_OK) {
                printf("ERROR<~%s:%s>: delete_subscriber() error %d\n", CLASS_NAME, METHOD_NAME, retcode);
            }
        }

        if(m_publisher != NULL)
        {
            retcode = m_participant->delete_publisher(m_publisher);
            if (retcode != DDS_RETCODE_OK) {
                printf("ERROR<~%s:%s>: delete_publisher() error %d\n", CLASS_NAME, METHOD_NAME, retcode);
            }
        }

        retcode = m_participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR<~%s:%s>: delete_contained_entities() error %d\n", CLASS_NAME, METHOD_NAME, retcode);
        }

        retcode = TheParticipantFactory->delete_participant(m_participant);
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR<~%s:%s> delete_participant() error %d\n", CLASS_NAME, METHOD_NAME, retcode);
        }

        m_participant = NULL;
    }
}

#endif // RPC_WITH_RTIDDS
