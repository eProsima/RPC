/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/transports/dds/components/ProxyProcedureEndpoint.h"
#include "fastrpc/transports/dds/DDSAsyncTask.h"
#include "fastrpc/protocols/dds/MessageHeader.h"
#include "fastrpc/utils/macros/snprintf.h"
#include "fastrpc/utils/Typedefs.h"
#include "fastrpc/utils/dds/Middleware.h"

#include "boost/config/user.hpp"
#include "boost/thread/mutex.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::ProxyProcedureEndpoint";

#define QUERY_POOL_LENGTH 10

using namespace eprosima::rpc;
using namespace ::transport::dds;

ProxyProcedureEndpoint::ProxyProcedureEndpoint(ProxyTransport &transport) : m_mutex(NULL), m_transport(transport), m_writerTopic(NULL),
    m_readerTopic(NULL), m_filter(NULL), m_writer(NULL), m_reader(NULL), m_eprosima_types(true),
    m_copy_data(NULL), m_dataSize(0), m_queryPool(NULL), m_queriesInUseLimiter(QUERY_POOL_LENGTH),
    m_numSec(0)
{
}

ProxyProcedureEndpoint::~ProxyProcedureEndpoint()
{
    // Remove asynchronous tasks.
    m_transport.deleteAssociatedAsyncTasks(this);

    finalize();
}

int ProxyProcedureEndpoint::initialize(const char *name, const char *writertypename,
        const char *readertypename, bool eprosima_types,
        Transport::Copy_data copy_data, int dataSize)
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
                if(m_reader == NULL || initQueryPool() == 0)
                {
                    m_eprosima_types = eprosima_types;
                    m_copy_data = copy_data;
                    m_dataSize = dataSize;
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

        m_transport.getSubscriber()->delete_datareader(m_reader);

        if(m_filter != NULL)
            m_transport.getParticipant()->delete_contentfilteredtopic(m_filter);
        if(m_readerTopic != NULL)
            m_transport.getParticipant()->delete_topic(m_readerTopic);
    }

    if(m_writer != NULL)
        m_transport.getPublisher()->delete_datawriter(m_writer);
    if(m_writerTopic)
        m_transport.getParticipant()->delete_topic(m_writerTopic);

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
            if((m_writerTopic = m_transport.getParticipant()->create_topic(writertypename, writertypename, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
            {
                DDS::DataWriterQos wQos = DDS::DataWriterQos();

                m_transport.getPublisher()->get_default_datawriter_qos(wQos);

                // TODO
                wQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
                wQos.history.depth = 100;
                ::util::dds::set_datawriter_protocol(wQos);

                m_writer = m_transport.getPublisher()->create_datawriter(m_writerTopic, wQos, NULL, STATUS_MASK_NONE);

                if(m_writer != NULL)
                {                              
                    // Is not oneway operation
                    if(readertypename != NULL)
                    {
                        if((m_readerTopic = m_transport.getParticipant()->create_topic(readertypename, readertypename, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                        {
                            DDS::StringSeq stringSeq(4);
                            stringSeq.length(4);
                            stringSeq[0] = strdup("0");
                            stringSeq[1] = strdup("0");
                            stringSeq[2] = strdup("0");
                            stringSeq[3] = strdup("0");

                            if((m_filter = m_transport.getParticipant()->create_contentfilteredtopic(name, m_readerTopic,
                                            "_header.clientId.value_1 = %0 and _header.clientId.value_2 = %1 and _header.clientId.value_3 = %2 and _header.clientId.value_4 = %3",
                                            stringSeq)) != NULL)
                            {
                                DDS::DataReaderQos rQos = DDS::DataReaderQos();

                                m_transport.getSubscriber()->get_default_datareader_qos(rQos);

                                // TODO
                                rQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
                                rQos.history.depth = 100;
                                ::util::dds::set_max_query_condition_filters(rQos);
                                ::util::dds::set_datareader_protocol(rQos);

                                m_reader = m_transport.getSubscriber()->create_datareader(m_filter, rQos, NULL, STATUS_MASK_NONE);

                                if(m_reader != NULL)
                                {
                                    return 0;
                                }

                                m_transport.getParticipant()->delete_contentfilteredtopic(m_filter);
                            }
                            else
                            {
                                printf("ERROR<%s::%s>: Cannot create the content filter\n", CLASS_NAME, METHOD_NAME);
                            }

                            m_transport.getParticipant()->delete_topic(m_readerTopic);
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

                    m_transport.getPublisher()->delete_datawriter(m_writer);
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create the data writer\n", CLASS_NAME, METHOD_NAME);
                }

                m_transport.getParticipant()->delete_topic(m_writerTopic);
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

    if(m_writerTopic->enable() == DDS_RETCODE_OK)
    {
        if(m_writer->enable() == DDS_RETCODE_OK)
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

                if(m_readerTopic->enable() == DDS_RETCODE_OK)
                {
                    if(m_reader->enable() == DDS_RETCODE_OK)
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
                "_header.requestSequenceNumber = %0", stringSeq);
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

DDS::QueryCondition* ProxyProcedureEndpoint::getFreeQueryFromPool()
{
    DDS::QueryCondition *returnedValue = NULL;

    // If there is a free query condition.
    if(m_queriesInUseLimiter != 0)
    {
        returnedValue = m_queryPool[--m_queriesInUseLimiter];
    }

    return returnedValue;
}

void ProxyProcedureEndpoint::returnUsedQueryToPool(DDS::QueryCondition *query)
{
    int count = m_queriesInUseLimiter;

    if(query != NULL)
    {
        // Search the position of the query.
        for(; count < QUERY_POOL_LENGTH; ++count)
        {
            if(m_queryPool[count] == query)
                break;
        }

        // Check that the query was found.
        if(count != QUERY_POOL_LENGTH)
        {
            if(count != m_queriesInUseLimiter)
            {
                DDS::QueryCondition *tmp = m_queryPool[m_queriesInUseLimiter];
                m_queryPool[m_queriesInUseLimiter] = m_queryPool[count];
                m_queryPool[count] = tmp;
            }

            ++m_queriesInUseLimiter;
        }
    }
}

void ProxyProcedureEndpoint::freeQuery(DDS::QueryCondition *query)
{
    const char* const METHOD_NAME = "freeQuery";

    if(query != NULL)
    {
        m_mutex->lock();
        returnUsedQueryToPool(query);
        m_mutex->unlock();
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}

ReturnMessage ProxyProcedureEndpoint::send(void *request, void *reply)
{
    const char* const METHOD_NAME = "send";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
    DDS::WaitSet *waitSet = NULL;
    DDS::ReturnCode_t retCode;
    boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(m_transport.getTimeout());
    unsigned int numSec = 0;
    char value[50];
    void *auxPointerToRequest = NULL;
    char **auxPointerToRemoteServiceName = NULL;
    eprosima::rpc::protocol::dds::RequestHeader *requestHeader = NULL;
    DDS::QueryCondition *query = NULL;

    if(request != NULL)
    {
        if(m_eprosima_types)
        {
            requestHeader = reinterpret_cast<eprosima::rpc::protocol::dds::RequestHeader*>(request);
            requestHeader->clientId().value_1(m_proxyId[0]);
            requestHeader->clientId().value_2(m_proxyId[1]);
            requestHeader->clientId().value_3(m_proxyId[2]);
            requestHeader->clientId().value_4(m_proxyId[3]);
            requestHeader->remoteServiceName(m_transport.getRemoteServiceName());
        }
        else
        {
            auxPointerToRequest = request;
            *(unsigned int*)auxPointerToRequest = m_proxyId[0];
            ((unsigned int*)auxPointerToRequest)[1] = m_proxyId[1];
            ((unsigned int*)auxPointerToRequest)[2] = m_proxyId[2];
            ((unsigned int*)auxPointerToRequest)[3] = m_proxyId[3];
            auxPointerToRequest = (unsigned int*)auxPointerToRequest + 4;
            *(char**)auxPointerToRequest = (char*)m_transport.getRemoteServiceName();
            auxPointerToRemoteServiceName = (char**)auxPointerToRequest;
            auxPointerToRequest = (char**)auxPointerToRequest + 1;
        }

        m_mutex->lock();
        /* Thread safe num_Sec handling */
        if(m_eprosima_types)
            requestHeader->requestSequenceNumber(m_numSec);
        else
            *(unsigned int*)auxPointerToRequest = m_numSec;
        numSec = m_numSec;
        ++m_numSec;

        // Take a free query condition.
        // Its not a oneway function.
        if(m_reader != NULL && reply != NULL)
            query = getFreeQueryFromPool();
        m_mutex->unlock();

        if(m_reader == NULL || reply == NULL || query != NULL)
        {
            waitSet = new DDS::WaitSet();

            if(waitSet != NULL)
            {
                if(checkServerConnection(waitSet, m_transport.getTimeout()) == OPERATION_SUCCESSFUL)
                {
                    DDS_InstanceHandle_t ih = DDS_HANDLE_NIL;

                    if(DDS_DataWriter_write_untypedI(m_writer->get_c_datawriterI(), request, &ih) == DDS_RETCODE_OK)
                    {
                        // Its not a oneway function.
                        if(m_reader != NULL && reply != NULL)
                        {
                            DDS::StringSeq stringSeq(1);

                            stringSeq.length(1);
                            SNPRINTF(value, 50, "%u", numSec);
                            stringSeq[0] = strdup(value);
                            retCode = query->set_query_parameters(stringSeq);

                            if(retCode == DDS_RETCODE_OK)
                            {
                                retCode = waitSet->attach_condition(query);

                                if(retCode == DDS_RETCODE_OK)
                                {
                                    DDS::ConditionSeq conds;
                                    DDS_TIMEOUT(ddsTimeout, tTimeout);

                                    retCode = waitSet->wait(conds, ddsTimeout);

                                    if(retCode == DDS_RETCODE_OK)
                                    {
                                        if(conds.length() == 1 && conds[0] == query)
                                        {
                                            returnedValue = takeReply(reply, query);
                                        }
                                    }
                                    else if(retCode == DDS::RETCODE_TIMEOUT)
                                    {
                                        printf("WARNING <%s::%s>: Time out expiration.\n", CLASS_NAME, METHOD_NAME);
                                        returnedValue = SERVER_TIMEOUT;
                                    }

                                    waitSet->detach_condition(query);
                                }
                                else
                                {
                                    printf("ERROR <%s::%s>: Cannot attach query condition\n", CLASS_NAME, METHOD_NAME);
                                }
                            }
                            else
                            {
                                printf("ERROR <%s::%s>: Cannot set the sequence number to the query condition\n", CLASS_NAME, METHOD_NAME);
                            }
                        }
                        else
                        {
                            returnedValue = OPERATION_SUCCESSFUL;
                        }
                    }
                    else
                    {
                        printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                    returnedValue = NO_SERVER;
                }

                delete waitSet;
            }
            else
            {
                printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
            }

            // Its not a oneway function.
            if(m_reader != NULL)
            {
                m_mutex->lock();
                returnUsedQueryToPool(query);
                m_mutex->unlock();
            }
        }
        else
        {
            printf("ERROR <%s::%s>: Cannot get a free query condition\n", CLASS_NAME, METHOD_NAME);
        }

        if(!m_eprosima_types)
        {
            // Set the remoteServiceName to NULL.
            *auxPointerToRemoteServiceName = NULL;
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

ReturnMessage ProxyProcedureEndpoint::send_async(void *request, DDSAsyncTask *task)
{
    const char* const METHOD_NAME = "send_async";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
    DDS::WaitSet *waitSet = NULL;
    DDS::ReturnCode_t retCode;
    unsigned int numSec = 0;
    char value[50];
    void *auxPointerToRequest = NULL;
    char **auxPointerToRemoteServiceName = NULL;
    eprosima::rpc::protocol::dds::RequestHeader *requestHeader = NULL;
    DDS::QueryCondition *query = NULL;

    if(request != NULL)
    {
        if(m_eprosima_types)
        {
            requestHeader = reinterpret_cast<eprosima::rpc::protocol::dds::RequestHeader*>(request);
            requestHeader->clientId().value_1(m_proxyId[0]);
            requestHeader->clientId().value_2(m_proxyId[1]);
            requestHeader->clientId().value_3(m_proxyId[2]);
            requestHeader->clientId().value_4(m_proxyId[3]);
            requestHeader->remoteServiceName(m_transport.getRemoteServiceName());
        }
        else
        {
            auxPointerToRequest = request;
            *(unsigned int*)auxPointerToRequest = m_proxyId[0];
            ((unsigned int*)auxPointerToRequest)[1] = m_proxyId[1];
            ((unsigned int*)auxPointerToRequest)[2] = m_proxyId[2];
            ((unsigned int*)auxPointerToRequest)[3] = m_proxyId[3];
            auxPointerToRequest = (unsigned int*)auxPointerToRequest + 4;
            *(char**)auxPointerToRequest = (char*)m_transport.getRemoteServiceName();
            auxPointerToRemoteServiceName = (char**)auxPointerToRequest;
            auxPointerToRequest = (char**)auxPointerToRequest + 1;
        }

        m_mutex->lock();
        /* Thread safe num_Sec handling */
        if(m_eprosima_types)
            requestHeader->requestSequenceNumber(m_numSec);
        else
            *(unsigned int*)auxPointerToRequest = m_numSec;
        numSec = m_numSec;
        ++m_numSec;

        // Take a free query condition.
        query = getFreeQueryFromPool();
        m_mutex->unlock();

        if(query != NULL)
        {
            waitSet = new DDS::WaitSet();

            if(waitSet != NULL)
            {
                if(checkServerConnection(waitSet, m_transport.getTimeout()) == OPERATION_SUCCESSFUL)
                {
                    DDS_InstanceHandle_t ih = DDS_HANDLE_NIL;

                    if(DDS_DataWriter_write_untypedI(m_writer->get_c_datawriterI(), request, &ih) == DDS_RETCODE_OK)
                    {
                        DDS::StringSeq stringSeq(1);

                        stringSeq.length(1);
                        SNPRINTF(value, 50, "%u", numSec);
                        stringSeq[0] = strdup(value);
                        retCode = query->set_query_parameters(stringSeq);

                        if(retCode == DDS_RETCODE_OK)
                        {
                            task->setProcedureEndpoint(this);
                            if(m_transport.addAsyncTask(query, task, m_transport.getTimeout()) == 0)
                                returnedValue = OPERATION_SUCCESSFUL;
                            else
                                printf("ERROR <%s::%s>: Cannot add asynchronous task\n", CLASS_NAME, METHOD_NAME);
                        }
                        else
                        {
                            printf("ERROR <%s::%s>: Cannot set the sequence number to the query condition\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                    returnedValue = NO_SERVER;
                }

                delete waitSet;
            }
            else
            {
                printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
            }

            // If something was wrong.
            if(returnedValue != OPERATION_SUCCESSFUL)
            {
                m_mutex->lock();
                returnUsedQueryToPool(query);
                m_mutex->unlock();
            }
        }
        else
        {
            printf("ERROR <%s::%s>: Cannot get a free query condition\n", CLASS_NAME, METHOD_NAME);
        }

        if(!m_eprosima_types)
        {
            // Set the remoteServiceName to NULL.
            *auxPointerToRemoteServiceName = NULL;
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

ReturnMessage ProxyProcedureEndpoint::checkServerConnection(DDS::WaitSet *waitSet, long timeout)
{
    const char* const METHOD_NAME = "checkServerConnection";
    ReturnMessage returnedValue = OPERATION_SUCCESSFUL;
    DDS::StatusCondition *statusCondition = NULL;
    DDS::ReturnCode_t retCode;
    boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(timeout);
    DDS_TIMEOUT(ddsTimeout, tTimeout);

    if(waitSet != NULL)
    {
        // Detect request datareader from server.
        DDS::PublicationMatchedStatus pms;
        m_writer->get_publication_matched_status(pms);

        if(pms.current_count < 1)
        {
            returnedValue = NO_SERVER;
            statusCondition = m_writer->get_statuscondition();

            if(statusCondition != NULL)
            {
                statusCondition->set_enabled_statuses(DDS::PUBLICATION_MATCHED_STATUS);

                if(waitSet->attach_condition(statusCondition) == DDS_RETCODE_OK)
                {
                    DDS::ConditionSeq conds;

                    retCode = waitSet->wait(conds, ddsTimeout);

                    if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS_RETCODE_OK && conds.length() == 0))
                        returnedValue = OPERATION_SUCCESSFUL;

                    waitSet->detach_condition(statusCondition);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot get status condition from request datawriter.\n", CLASS_NAME, METHOD_NAME);
            }
        }

        if(returnedValue == OPERATION_SUCCESSFUL && m_reader != NULL)
        {
            // Detect reply datawriter from server.
            DDS::SubscriptionMatchedStatus sms;
            m_reader->get_subscription_matched_status(sms);

            if(sms.current_count < 1)
            {
                returnedValue = NO_SERVER;
                statusCondition = m_reader->get_statuscondition();

                if(statusCondition != NULL)
                {
                    statusCondition->set_enabled_statuses(DDS::SUBSCRIPTION_MATCHED_STATUS);

                    if(waitSet->attach_condition(statusCondition) == DDS_RETCODE_OK)
                    {
                        DDS::ConditionSeq conds;
                        retCode = waitSet->wait(conds, ddsTimeout);

                        if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS_RETCODE_OK && conds.length() == 0))
                        {
                            returnedValue = OPERATION_SUCCESSFUL;
                        }

                        waitSet->detach_condition(statusCondition);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot get status condition from reply datareader.\n", CLASS_NAME, METHOD_NAME);
                }
            }
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

ReturnMessage ProxyProcedureEndpoint::takeReply(void *reply, DDS::QueryCondition *query)
{
    const char* const METHOD_NAME = "takeReply";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;

    if(reply != NULL && query != NULL)
    {
        DDS::Boolean loaned = BOOLEAN_TRUE;
        void **sampleArray = NULL;
        int sampleCount = 0;
        DDS::SampleInfoSeq infoSeq;

        infoSeq.ensure_length(1, 1);

        DDS::ReturnCode_t retCode = DDS_DataReader_read_or_take_w_condition_untypedI(
                m_reader->get_c_datareaderI(), &loaned, &sampleArray, &sampleCount,
                &infoSeq, 1, 1, BOOLEAN_TRUE, reply, m_dataSize, 1,
                (DDS_ReadCondition*)query->get_c_condition(), BOOLEAN_TRUE);

        if(retCode == DDS_RETCODE_OK)
        {
            if(sampleCount == 1)
            { 
				if (infoSeq[0].valid_data)
				{
                    if(loaned)
                    {
                        m_copy_data(reply, sampleArray[0]);
                        DDS_DataReader_return_loan_untypedI(m_reader->get_c_datareaderI(),
                                sampleArray, sampleCount, &infoSeq);
                    }

                    returnedValue = OPERATION_SUCCESSFUL;
                }
            }
		    else
		    {
				printf("ERROR<%s::%s>: Empty returned data.\n", CLASS_NAME, METHOD_NAME);
		    }
        }
		else if(retCode == DDS::RETCODE_NO_DATA)
		{
			printf("ERROR<%s::%s>: no data.\n", CLASS_NAME, METHOD_NAME);
			returnedValue = SERVER_TIMEOUT;
		}
		else
		{
			printf("ERROR<%s::%s>: take error %d\n", CLASS_NAME, METHOD_NAME, retCode);
		}
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}
