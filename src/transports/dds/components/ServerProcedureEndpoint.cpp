/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/components/ServerProcedureEndpoint.h"

using namespace eprosima::rpcdds;
using namespace ::transport::dds;


ServerProcedureEndpoint::ServerProcedureEndpoint(Transport *transport) : m_transport(NULL),
    m_writerTopic(NULL), m_readerTopic(NULL), m_writer(NULL), m_reader(NULL), m_copy_data(NULL),
    m_dataSize(0)
{
}

ServerProcedureEndpoint::~ServerProcedureEndpoint()
{
}

int ServerProcedureEndpoint::initialize(const char *writertypename, const char *readertypename,
        Transport::Copy_data copy_data, int dataSize)
{
    m_writerTypeName = writertypename;
    m_readerTypeName = readertypename;
    m_copy_data = copy_data;
    m_dataSize = dataSize;
}

int ServerProcedureEndpoint::start(std::string &serviceName)
{
    const char* const METHOD_NAME = "start";
    int returnedValue = -1;

    if(createEntities(serviceName) == 0)
    {
        if((returnedValue = enableEntities()) != 0)
        {
            printf("ERROR<%s::%s>: Cannot enable the DDS entities\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

int ServerProcedureEndpoint::createEntities(std::string &serviceName)
{
    const char* const METHOD_NAME = "createEntities";

    if((m_readerTopic = m_transport->getParticipant()->create_topic(m_readerTypeName.c_str(), m_readerTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
    {
        DDS::StringSeq stringSeq(0);
        stringSeq.length(0);
        char value[285];

        SNPRINTF(value, 285, "header.remoteServiceName = '%s'", serviceName.c_str());

        if((m_filter = m_transport->getParticipant()->create_contentfilteredtopic(m_rpcName.c_str(), m_requestTopic,
                        value, stringSeq)) != NULL)
        {
            DDS::DataReaderQos rQos = DDS::DataReaderQos();

            m_requestSubscriber->get_default_datareader_qos(rQos);
            rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
            rQos.history.depth = 100;
            ::util::dds::set_datareader_protocol(rQos);

            m_requestDataReader = m_requestSubscriber->create_datareader(m_requestFilter, rQos, this, DDS::DATA_AVAILABLE_STATUS);

            if(m_requestDataReader != NULL)
            {
                ::util::dds::set_redundant_feature(m_requestDataReader, rQos);

                if(!m_replyTypeName.empty())
                {
                    if((m_replyPublisher = m_server->getParticipant()->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                    {
                        if(m_replyPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
                        {
                            publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_replyPublisher->set_qos(publisherQos);

                            if((m_replyTopic = m_server->getParticipant()->create_topic(m_replyTypeName.c_str(), m_replyTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                            {
                                DDS::DataWriterQos wQos = DDS:: DataWriterQos();

                                m_replyPublisher->get_default_datawriter_qos(wQos);
                                wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
                                wQos.history.depth = 100;
                                ::util::dds::set_datawriter_protocol(wQos);

                                m_replyDataWriter = m_replyPublisher->create_datawriter(m_replyTopic, wQos, NULL, STATUS_MASK_NONE);

                                if(m_replyDataWriter != NULL)
                                {
                                    return 0;
                                }
                                else
                                {
                                    printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
                                }

                                m_server->getParticipant()->delete_topic(m_replyTopic);
                            }
                            else
                            {
                                printf("ERROR<%s::%s: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                            }
                        }
                        else
                        {
                            printf("ERROR <%s::%s>: Cannot get the publisher qos\n", CLASS_NAME, METHOD_NAME);
                        }

                        m_server->getParticipant()->delete_publisher(m_replyPublisher);
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    return 0;
                }

                m_requestSubscriber->delete_datareader(m_requestDataReader);
            }
            else
            {
                printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
            }

            m_server->getParticipant()->delete_contentfilteredtopic(m_requestFilter);
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create the request filter\n", CLASS_NAME, METHOD_NAME);
        }

        m_server->getParticipant()->delete_topic(m_requestTopic);
    }
    else
    {
        printf("ERROR<%s::%s: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
    }

    return -1;
}
