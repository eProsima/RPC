/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/transports/dds/components/ServerProcedureEndpoint.h"
#include "rpcdds/strategies/ServerStrategy.h"
#include "rpcdds/strategies/ServerStrategyImpl.h"
#include "eProsima_cpp/eProsimaMacros.h"

#include "boost/config/user.hpp"
#include "boost/thread/mutex.hpp"
#include <boost/bind.hpp>

using namespace eprosima::rpcdds;
using namespace ::transport::dds;

const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ServerProcedureEndpoint";

ServerProcedureEndpoint::ServerProcedureEndpoint(ServerTransport &transport) : m_transport(transport),
    m_writerTopic(NULL), m_readerTopic(NULL), m_writer(NULL), m_reader(NULL), m_initialize_data(NULL),
    m_finalize_data(NULL), m_process_func(NULL), m_dataSize(0), m_mutex(NULL), m_started(0)
{
}

ServerProcedureEndpoint::~ServerProcedureEndpoint()
{
    if(m_mutex != NULL)
    {
        delete m_mutex;
        m_mutex = NULL;
    }
}

int ServerProcedureEndpoint::initialize(const char *name, const char *writertypename, const char *readertypename,
        Transport::Initialize_data initialize_data, Transport::Finalize_data finalize_data,
        Transport::ProcessFunc processFunc, int dataSize)
{
    if(name != NULL && readertypename != NULL && initialize_data != NULL && finalize_data != NULL &&
            processFunc != NULL && dataSize > 0)
    {
        m_mutex =  new boost::mutex();

        if(m_mutex != NULL)
        {
            m_name = name;
            if(writertypename != NULL)
                m_writerTypeName = writertypename;
            m_readerTypeName = readertypename;
            m_initialize_data = initialize_data;
            m_finalize_data = finalize_data;
            m_process_func = processFunc;
            m_dataSize = dataSize;
            return 0;
        }
    }

    return -1;
}

int ServerProcedureEndpoint::start(std::string &serviceName)
{
    const char* const METHOD_NAME = "start";
    int returnedValue = -1;

    m_mutex->lock();
    if(m_started++ == 0)
    {
        if(createEntities(serviceName) == 0)
        {
            if((returnedValue = enableEntities()) != 0)
            {
                printf("ERROR<%s::%s>: Cannot enable the DDS entities\n", CLASS_NAME, METHOD_NAME);
                // TODO Borrar en caso de error los endpo8ints.
                --m_started;
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
            --m_started;
        }
    }
    else
        returnedValue = 0;

    m_mutex->unlock();

    return returnedValue;
}

void ServerProcedureEndpoint::stop()
{
    m_mutex->lock();
    if(--m_started == 0)
    {
        if(m_writer != NULL)
        {
            m_transport.getPublisher()->delete_datawriter(m_writer);
            m_writer = NULL;
        }
        if(m_writerTopic != NULL)
        {
            m_transport.getParticipant()->delete_topic(m_writerTopic);
            m_writerTopic = NULL;
        }
        if(m_reader != NULL)
        {
            m_transport.getSubscriber()->delete_datareader(m_reader);
            m_reader = NULL;
        }
        if(m_filter != NULL)
        {
            m_transport.getParticipant()->delete_contentfilteredtopic(m_filter);
            m_filter = NULL;
        }
        if(m_readerTopic != NULL)
        {
            m_transport.getParticipant()->delete_topic(m_readerTopic);
            m_readerTopic = NULL;
        }
    }

    m_mutex->unlock();
}

int ServerProcedureEndpoint::createEntities(std::string &serviceName)
{
    const char* const METHOD_NAME = "createEntities";

    if((m_readerTopic = m_transport.getParticipant()->create_topic(m_readerTypeName.c_str(), m_readerTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
    {
        DDS::StringSeq stringSeq(0);
        stringSeq.length(0);
        char value[285];

        SNPRINTF(value, 285, "header.remoteServiceName = '%s'", serviceName.c_str());

        if((m_filter = m_transport.getParticipant()->create_contentfilteredtopic(m_name, m_readerTopic,
                        value, stringSeq)) != NULL)
        {
            DDS::DataReaderQos rQos = DDS::DataReaderQos();

            m_transport.getSubscriber()->get_default_datareader_qos(rQos);
            rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
            rQos.history.depth = 100;
            ::util::dds::set_datareader_protocol(rQos);

            m_reader = m_transport.getSubscriber()->create_datareader(m_filter, rQos, this, DDS::DATA_AVAILABLE_STATUS);

            if(m_reader != NULL)
            {
                ::util::dds::set_redundant_feature(m_reader, rQos);

                if(!m_writerTypeName.empty())
                {
                    if((m_writerTopic = m_transport.getParticipant()->create_topic(m_writerTypeName.c_str(), m_writerTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                    {
                        DDS::DataWriterQos wQos = DDS:: DataWriterQos();

                        m_transport.getPublisher()->get_default_datawriter_qos(wQos);
                        wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
                        wQos.history.depth = 100;
                        ::util::dds::set_datawriter_protocol(wQos);

                        m_writer = m_transport.getPublisher()->create_datawriter(m_writerTopic, wQos, NULL, STATUS_MASK_NONE);

                        if(m_writer != NULL)
                        {
                            return 0;
                        }
                        else
                        {
                            printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
                        }

                        m_transport.getParticipant()->delete_topic(m_writerTopic);
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    return 0;
                }

                m_transport.getSubscriber()->delete_datareader(m_reader);
            }
            else
            {
                printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
            }

            m_transport.getParticipant()->delete_contentfilteredtopic(m_filter);
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create the request filter\n", CLASS_NAME, METHOD_NAME);
        }

        m_transport.getParticipant()->delete_topic(m_readerTopic);
    }
    else
    {
        printf("ERROR<%s::%s: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
    }

    return -1;
}

int ServerProcedureEndpoint::enableEntities()
{
    const char* const METHOD_NAME = "enableEntities";
    int returnedValue = -1;

    if(m_readerTopic->enable() == DDS::RETCODE_OK)
    {
        if(m_reader->enable() == DDS::RETCODE_OK)
        {
            // If not oneway operation.
            if(m_writer != NULL)
            {
                if(m_writerTopic->enable() == DDS::RETCODE_OK)
                {
                    if(m_writer->enable() == DDS::RETCODE_OK)
                    {
                        returnedValue = 0;
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot enable reply datawriter\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enable reply topic\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                returnedValue = 0;
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot enable request datareader\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot enable request topic\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

int ServerProcedureEndpoint::sendReply(void *data)
{
    const char* const METHOD_NAME = "sendReply";
	int returnedValue = -1;

    if(data != NULL)
    {
        if(m_writer != NULL)
        {
            DDS_InstanceHandle_t ih = DDS::HANDLE_NIL;

            if(DDS_DataWriter_write_untypedI(m_writer->get_c_datawriterI(), data, &ih) == DDS::RETCODE_OK)
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

void ServerProcedureEndpoint::on_data_available(DDS::DataReader* reader)
{
    const char* const METHOD_NAME = "on_data_available";
	DDS::SampleInfo info;
    void *data = calloc(1, m_dataSize);
    m_initialize_data(data);

	while(data != NULL && DDS_DataReader_read_or_take_next_sample_untypedI(reader->get_c_datareaderI(),
                data, &info, BOOLEAN_TRUE) == DDS::RETCODE_OK)
	{
		if(info.valid_data == BOOLEAN_TRUE)
		{
			m_transport.getStrategy().getImpl()->schedule(boost::bind(&ServerTransport::process, &m_transport, this, data));
            
            data = calloc(1, m_dataSize);
            m_initialize_data(data);
		}
	}

	if(data != NULL)
    {
        m_finalize_data(data);
        free(data);
	}
}
