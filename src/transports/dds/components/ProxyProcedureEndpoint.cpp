/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/components/ProxyProcedureEndpoint.h"
#include "transports/dds/Transport.h"
#include "eProsima_cpp/eProsimaMacros.h"

#include "boost/config/user.hpp"
#include "boost/thread/mutex.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ProxyProcedureEndpoint";

#define QUERY_POOL_LENGTH 10

using namespace eprosima::rpcdds;
using namespace ::transport::dds;

ProxyProcedureEndpoint::ProxyProcedureEndpoint(Transport *transport) : m_mutex(NULL), m_transport(transport), m_writerTopic(NULL),
    m_readerTopic(NULL), m_filter(NULL), m_writer(NULL), m_reader(NULL), m_queryPool(NULL)
{
}

ProxyProcedureEndpoint::~ProxyProcedureEndpoint()
{
    finalize();
}

int ProxyProcedureEndpoint::initialize(const char *name, const char *writertypename, const char *readertypename)
{
    const char* const METHOD_NAME = "initialize";
    m_mutex =  new boost::mutex();

    if(m_mutex != NULL)
    {
        if(createEntities(name, writertypename, readertypename) == 0)
        {
            if(enableEntities() == 0)
            {
                // Initialize query pool if it's not a oneway function.
                if(initQueryPool() == 0)
                {
                    return 0;
                }
                else
                    printf("ERROR<%s::%s>: initialize the query pool\n", CLASS_NAME, METHOD_NAME);
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot enable the DDS entities\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot create the mutex\n", CLASS_NAME, METHOD_NAME);
    }

    return -1;
}

void ProxyProcedureEndpoint::finalize()
{
    // if not operation oneway.
    if(m_reader != NULL)
    {
        finalizeQueryPool();

        m_transport->getSubscriber()->delete_datareader(m_reader);

        if(m_filter != NULL)
            m_transport->getParticipant()->delete_contentfilteredtopic(m_filter);
        if(m_readerTopic != NULL)
            m_transport->getParticipant()->delete_topic(m_readerTopic);
    }

    if(m_writer != NULL)
        m_transport->getPublisher()->delete_datawriter(m_writer);
    if(m_writerTopic)
        m_transport->getParticipant()->delete_topic(m_writerTopic);

    if(m_mutex != NULL)
    {
        delete m_mutex;
        m_mutex = NULL;
    }
}

int ProxyProcedureEndpoint::createEntities(const char *name, const char *writertypename, const char *readertypename)
{
    const char* const METHOD_NAME = "createEntities";

    if(name != NULL)
    {
        if(writertypename != NULL)
        {
            if((m_writerTopic = m_transport->getParticipant()->create_topic(writertypename, writertypename, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
            {
                DDS::DataWriterQos wQos = DDS::DataWriterQos();

                m_transport->getPublisher()->get_default_datawriter_qos(wQos);

                // TODO
                wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
                wQos.history.depth = 100;
                ::util::dds::set_datawriter_protocol(wQos);

                m_writer = m_transport->getPublisher()->create_datawriter(m_writerTopic, wQos, NULL, STATUS_MASK_NONE);

                if(m_writer != NULL)
                {                              
                    // Is not oneway operation
                    if(readertypename != NULL)
                    {
                        if((m_readerTopic = m_transport->getParticipant()->create_topic(readertypename, readertypename, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                        {
                            DDS::StringSeq stringSeq(4);
                            stringSeq.length(4);
                            stringSeq[0] = strdup("0");
                            stringSeq[1] = strdup("0");
                            stringSeq[2] = strdup("0");
                            stringSeq[3] = strdup("0");

                            if((m_filter = m_transport->getParticipant()->create_contentfilteredtopic(name, m_readerTopic,
                                            "header.clientId.value_1 = %0 and header.clientId.value_2 = %1 and header.clientId.value_3 = %2 and header.clientId.value_4 = %3",
                                            stringSeq)) != NULL)
                            {
                                DDS::DataReaderQos rQos = DDS::DataReaderQos();

                                m_transport->getSubscriber()->get_default_datareader_qos(rQos);

                                // TODO
                                rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
                                rQos.history.depth = 100;
                                ::util::dds::set_max_query_condition_filters(rQos);
                                ::util::dds::set_datareader_protocol(rQos);

                                m_reader = m_transport->getSubscriber()->create_datareader(m_filter, rQos, NULL, STATUS_MASK_NONE);

                                if(m_reader != NULL)
                                {
                                    return 0;
                                }

                                m_transport->getParticipant()->delete_contentfilteredtopic(m_filter);
                            }
                            else
                            {
                                printf("ERROR<%s::%s>: Cannot create the content filter\n", CLASS_NAME, METHOD_NAME);
                            }

                            m_transport->getParticipant()->delete_topic(m_readerTopic);
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot create the topic to receive\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        return 0;
                    }

                    m_transport->getPublisher()->delete_datawriter(m_writer);
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create the data writer\n", CLASS_NAME, METHOD_NAME);
                }

                m_transport->getParticipant()->delete_topic(m_writerTopic);
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create the topic to send\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Bad parameter (writertypename)\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter (name)\n", CLASS_NAME, METHOD_NAME);
    }

    return -1;
}

int ProxyProcedureEndpoint::enableEntities()
{
    const char* const METHOD_NAME = "enableEntities";
    int returnedValue = -1;

    if(m_writerTopic->enable() == DDS::RETCODE_OK)
    {
        if(m_writer->enable() == DDS::RETCODE_OK)
        {
            // if not operation oneway.
            if(m_reader != NULL)
            {
                // Obtain clientServiceId.
                ::util::dds::get_guid(m_proxyId, m_writer);

                // Set identifier to filter topic.
                DDS::StringSeq stringSeq(4);
                char value[50];

                stringSeq.length(4);
                SNPRINTF(value, 50, "%u", m_proxyId[0]);
                stringSeq[0] = strdup(value);
                SNPRINTF(value, 50, "%u", m_proxyId[1]);
                stringSeq[1] = strdup(value);
                SNPRINTF(value, 50, "%u", m_proxyId[2]);
                stringSeq[2] = strdup(value);
                SNPRINTF(value, 50, "%u", m_proxyId[3]);
                stringSeq[3] = strdup(value);

                m_filter->set_expression_parameters(stringSeq);

                if(m_readerTopic->enable() == DDS::RETCODE_OK)
                {
                    if(m_reader->enable() == DDS::RETCODE_OK)
                    {
                        returnedValue = 0;
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot enable the datareader\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enable topic to receive\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                returnedValue = 0;
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot enable the datawriter\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot enable topic to send\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

int ProxyProcedureEndpoint::initQueryPool()
{
    int count = 0;
    int returnedValue = -1;

    //Initialize all pool to NULL.
    m_queryPool = (DDS::QueryCondition**)calloc(10, sizeof(DDS::QueryCondition*));

    DDS::StringSeq stringSeq(1);

    stringSeq.length(1);
    stringSeq[0] = strdup("0");

    // Create all query conditions.
    for(; count < QUERY_POOL_LENGTH; ++count)
    {
        DDS::QueryCondition *query = m_reader->create_querycondition(DDS::NOT_READ_SAMPLE_STATE, DDS::ANY_VIEW_STATE, DDS::ANY_INSTANCE_STATE,
                "header.requestSequenceNumber = %0", stringSeq);
        m_queryPool[count] = query;

        if(m_queryPool[count] == NULL)
            break;
    }

    // Check all query has been created successfully.
    if(count != QUERY_POOL_LENGTH)
    {
        for(int rcount = 0; rcount < count; ++rcount)
        {
            m_reader->delete_readcondition(m_queryPool[rcount]);
            m_queryPool[rcount] = NULL;
        }

        free(m_queryPool);
    }
    else
        returnedValue = 0;

    return returnedValue;
}

void ProxyProcedureEndpoint::finalizeQueryPool()
{
    int count = 0;

    for(; count <  QUERY_POOL_LENGTH; ++count)
    {
        m_reader->delete_readcondition(m_queryPool[count]);
        m_queryPool[count] = NULL;
    }

    free(m_queryPool);
    m_queryPool = NULL;
}
