/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#include <config.h>

#if RPC_WITH_FASTDDS

#include <transports/dds/components/RTPSServerProcedureEndpoint.h>
#include <strategies/ServerStrategy.h>
#include "../../../strategies/ServerStrategyImpl.h"
#include <utils/macros/snprintf.h>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/qos/DataWriterQos.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>

#include <boost/config/user.hpp>
#include <boost/bind.hpp>

namespace eprosima {
namespace rpc {

using namespace transport::dds;

const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSServerProcedureEndpoint";

RTPSServerProcedureEndpoint::RTPSServerProcedureEndpoint(
        RTPSServerTransport& transport)
    : m_transport(transport)
{
}

RTPSServerProcedureEndpoint::~RTPSServerProcedureEndpoint()
{
    finalize();
}

int RTPSServerProcedureEndpoint::initialize(
        const char* name,
        const char* writertypename,
        const char* writertopicname,
        const char* readertypename,
        const char* readertopicname,
        RTPSTransport::Create_data create_data,
        RTPSTransport::Destroy_data destroy_data,
        RTPSTransport::ProcessFunc processFunc,
        size_t dataSize)
{
    if (name != NULL && readertypename != NULL && create_data != NULL && destroy_data != NULL &&
            processFunc != NULL && dataSize > 0)
    {
        m_name = name;
        if (writertypename != NULL)
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

    return -1;
}

void RTPSServerProcedureEndpoint::finalize()
{
    if (m_reader != nullptr)
    {
        m_transport.get_subscriber()->delete_datareader(m_reader);
    }

    if (m_writer != nullptr)
    {
        m_transport.get_publisher()->delete_datawriter(m_writer);
    }
}

int RTPSServerProcedureEndpoint::start(
        const char* const& serviceName,
        const char* const& instanceName)
{
    const char* const METHOD_NAME = "start";
    int returnedValue = -1;

    std::unique_lock<std::mutex> lock(m_mutex);
    if (m_started++ == 0)
    {
        if ((returnedValue = createEntities(std::string(serviceName), std::string(instanceName))) != 0)
        {
            printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
            // TODO Borrar en caso de error los endpo8ints.
            --m_started;
        }
    }
    else
    {
        returnedValue = 0;
    }

    return returnedValue;
}

void RTPSServerProcedureEndpoint::stop()
{
    std::unique_lock<std::mutex> lock(m_mutex);
    if (--m_started == 0)
    {
        if (m_writer != NULL)
        {
            m_transport.get_publisher()->delete_datawriter(m_writer);
            m_writer = NULL;
        }
        if (m_reader != NULL)
        {
            m_transport.get_subscriber()->delete_datareader(m_reader);
            m_reader = NULL;
        }
    }
}

int RTPSServerProcedureEndpoint::createEntities(
        const std::string& /*serviceName*/,
        const std::string& /*instanceName*/)
{
    const char* const METHOD_NAME = "createEntities";

    m_rtopic = m_transport.get_participant()->create_topic(m_readerTopicName, m_readerTypeName,
                    fastdds::dds::TOPIC_QOS_DEFAULT);

    if (nullptr != m_rtopic)
    {
        fastdds::dds::DataReaderQos rQos;

        rQos.reliability().kind = fastdds::dds::RELIABLE_RELIABILITY_QOS;

        m_reader = m_transport.get_subscriber()->create_datareader(m_rtopic, rQos, this);

        if (m_reader != nullptr)
        {
            if (!m_writerTypeName.empty())
            {
                m_wtopic = m_transport.get_participant()->create_topic(m_writerTopicName, m_writerTypeName,
                                fastdds::dds::TOPIC_QOS_DEFAULT);

                if (nullptr != m_wtopic)
                {
                    fastdds::dds::DataWriterQos wQos;

                    wQos.reliability().kind = fastdds::dds::RELIABLE_RELIABILITY_QOS;
                    wQos.history().depth = 100;

                    m_writer = m_transport.get_publisher()->create_datawriter(m_wtopic, wQos, nullptr);

                    if (m_writer != nullptr)
                    {
                        return 0;
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
                    }
                }
            }
            else
            {
                return 0;
            }

            m_transport.get_subscriber()->delete_datareader(m_reader);
        }
        else
        {
            printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
        }
    }

    return -1;
}

int RTPSServerProcedureEndpoint::sendReply(
        void* data)
{
    const char* const METHOD_NAME = "sendReply";
    int returnedValue = -1;

    if (data != NULL)
    {
        if (m_writer != nullptr)
        {
            if (fastdds::dds::RETCODE_OK == m_writer->write(data))
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
            printf("ERROR<%s::%s>: DataWrite was not created. Maybe this is a oneway procedure.\n", CLASS_NAME,
                    METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter (requestData)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

void RTPSServerProcedureEndpoint::on_data_available(
        fastdds::dds::DataReader* reader)
{
    fastdds::dds::SampleInfo info;
    void* data = m_create_data();

    while (nullptr != data && fastdds::dds::RETCODE_OK == reader->take_next_sample(data, &info))
    {
        if (fastdds::dds::ALIVE_INSTANCE_STATE == info.instance_state && info.valid_data)
        {
            m_transport.getStrategy().getImpl()->schedule(boost::bind(&RTPSServerTransport::process, &m_transport, this,
                    data));

            data = m_create_data();
        }
    }

    if (data != NULL)
    {
        m_destroy_data(data);
    }
}

} // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS
