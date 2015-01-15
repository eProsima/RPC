/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <fastrpc/transports/dds/components/RTPSServerProcedureEndpoint.h>
#include <fastrpc/strategies/ServerStrategy.h>
#include <fastrpc/strategies/ServerStrategyImpl.h>
#include <fastrpc/utils/macros/snprintf.h>

#include <fastrtps/Domain.h>
#include <fastrtps/publisher/Publisher.h>
#include <fastrtps/subscriber/Subscriber.h>
#include <fastrtps/attributes/SubscriberAttributes.h>
#include <fastrtps/attributes/PublisherAttributes.h>
#include <fastrtps/subscriber/SampleInfo.h>

#include <boost/config/user.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/bind.hpp>

using namespace eprosima::rpc;
using namespace ::transport::dds;

const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSServerProcedureEndpoint";

RTPSServerProcedureEndpoint::RTPSServerProcedureEndpoint(RTPSServerTransport &transport) : m_transport(transport),
    m_writer(NULL), m_reader(NULL), m_create_data(NULL), m_destroy_data(NULL),
    m_process_func(NULL), m_dataSize(0), m_mutex(NULL), m_started(0)
{
}

RTPSServerProcedureEndpoint::~RTPSServerProcedureEndpoint()
{
    if(m_mutex != NULL)
    {
        delete m_mutex;
        m_mutex = NULL;
    }
}

int RTPSServerProcedureEndpoint::initialize(const char *name, const char *writertypename, const char *writertopicname,
        const char *readertypename, const char *readertopicname,
        RTPSTransport::Create_data create_data, RTPSTransport::Destroy_data destroy_data,
        RTPSTransport::ProcessFunc processFunc, int dataSize)
{
    if(name != NULL && readertypename != NULL && create_data != NULL && destroy_data != NULL &&
            processFunc != NULL && dataSize > 0)
    {
        m_mutex =  new boost::mutex();

        if(m_mutex != NULL)
        {
            m_name = name;
            if(writertypename != NULL)
            {
                m_writerTypeName = writertypename;
                m_writerTopicName = writertopicname;
            }
            m_readerTypeName = readertypename;
            m_readerTopicName = readertopicname;
            m_create_data = create_data;
            m_destroy_data = destroy_data;
            m_process_func = processFunc;
            m_dataSize = dataSize;
            return 0;
        }
    }

    return -1;
}

int RTPSServerProcedureEndpoint::start(const char* const &serviceName, const char* const &instanceName)
{
    const char* const METHOD_NAME = "start";
    int returnedValue = -1;

    m_mutex->lock();
    if(m_started++ == 0)
    {
        if((returnedValue = createEntities(std::string(serviceName), std::string(instanceName))) != 0)
        {
            printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
            // TODO Borrar en caso de error los endpo8ints.
            --m_started;
        }
    }
    else
        returnedValue = 0;

    m_mutex->unlock();

    return returnedValue;
}

void RTPSServerProcedureEndpoint::stop()
{
    m_mutex->lock();
    if(--m_started == 0)
    {
        if(m_writer != NULL)
        {
            eprosima::fastrtps::Domain::removePublisher(m_writer);
            m_writer = NULL;
        }
        if(m_reader != NULL)
        {
            eprosima::fastrtps::Domain::removeSubscriber(m_reader);
            m_reader = NULL;
        }
    }

    m_mutex->unlock();
}

int RTPSServerProcedureEndpoint::createEntities(const std::string &/*serviceName*/, const std::string &/*instanceName*/)
{
    const char* const METHOD_NAME = "createEntities";

    eprosima::fastrtps::SubscriberAttributes rQos;

    rQos.topic.topicName = m_readerTopicName;
    rQos.topic.topicDataType = m_readerTypeName.c_str();
    rQos.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

    m_reader = eprosima::fastrtps::Domain::createSubscriber(m_transport.getParticipant(), rQos, this);

    if(m_reader != nullptr)
    {
        if(!m_writerTypeName.empty())
        {
            eprosima::fastrtps::PublisherAttributes wQos;

            wQos.topic.topicName = m_writerTopicName;
            wQos.topic.topicDataType = m_writerTypeName;
            wQos.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;
            wQos.topic.historyQos.depth = 100;

            m_writer = eprosima::fastrtps::Domain::createPublisher(m_transport.getParticipant(), wQos, nullptr);

            if(m_writer != nullptr)
            {
                return 0;
            }
            else
            {
                printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            return 0;
        }

        eprosima::fastrtps::Domain::removeSubscriber(m_reader);
    }
    else
    {
        printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
    }

    return -1;
}

int RTPSServerProcedureEndpoint::sendReply(void *data)
{
    const char* const METHOD_NAME = "sendReply";
    int returnedValue = -1;

    if(data != NULL)
    {
        if(m_writer != nullptr)
        {
            if(m_writer->write(data))
            {
                returnedValue = 0;
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot send the reply. Datawriter error.\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: DataWrite was not created. Maybe this is a oneway procedure.\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter (requestData)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

void RTPSServerProcedureEndpoint::onNewDataMessage(eprosima::fastrtps::Subscriber *sub)
{
    eprosima::fastrtps::SampleInfo_t info;
    void *data = m_create_data();

    while(data != NULL && sub->takeNextData(data, &info))
    {
        if(info.sampleKind == eprosima::fastrtps::ALIVE)
        {
            m_transport.getStrategy().getImpl()->schedule(boost::bind(&RTPSServerTransport::process, &m_transport, this, data));

            data = m_create_data();
        }
    }

    if(data != NULL)
    {
        m_destroy_data(data);
    }
}
