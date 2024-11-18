/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#include <config.h>

#if RPC_WITH_FASTDDS

#include <transports/dds/components/RTPSProxyProcedureEndpoint.h>
#include <transports/dds/RTPSAsyncTask.h>
#include <protocols/dds/MessageHeader.h>
#include <utils/macros/snprintf.h>
#include <utils/macros/strdup.h>
#include <utils/Typedefs.h>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/publisher/qos/DataWriterQos.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/subscriber/qos/DataReaderQos.hpp>

#include <boost/thread/shared_mutex.hpp>
#include <boost/thread/condition_variable.hpp>

#ifdef __linux
#include <cinttypes>
#endif // ifdef __linux

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::RTPSProxyProcedureEndpoint";

namespace eprosima {
namespace rpc {
namespace transport {
namespace dds {
class RecvPoint
{
public:

    RecvPoint(
            void* reply)
        : received_(false)
        , reply_(reply)
        , task_(NULL)
    {
    }

    explicit RecvPoint(
            RTPSAsyncTask* task)
        : received_(false)
        , reply_(NULL)
        , task_(task)
    {
        if (task_ != NULL)
        {
            reply_ = task_->getReplyInstance();
        }
    }

    void* getReply()
    {
        return reply_;
    }

    RTPSAsyncTask* getTask()
    {
        return task_;
    }

    bool received_;
    boost::mutex mutex_;
    boost::condition_variable cond_;

private:

    void* reply_;

    RTPSAsyncTask* task_;
};
} // namespace dds
} // namespace transport
} // namespace rpc
} // namespace eprosima

using namespace eprosima::rpc;
using namespace ::transport::dds;

RTPSProxyProcedureEndpoint::RTPSProxyProcedureEndpoint(
        RTPSProxyTransport& transport)
    : m_transport(transport)
{
}

RTPSProxyProcedureEndpoint::~RTPSProxyProcedureEndpoint()
{
    // Remove asynchronous tasks.
    //TODO
    //m_transport.deleteAssociatedAsyncTasks(this);

    finalize();
}

int RTPSProxyProcedureEndpoint::initialize(
        const char* name,
        const char* writertypename,
        const char* writertopicname,
        const char* readertypename,
        const char* readertopicname,
        RTPSTransport::Create_data create_data,
        RTPSTransport::Copy_data copy_data,
        RTPSTransport::Destroy_data destroy_data,
        size_t dataSize)
{
    const char* const METHOD_NAME = "initialize";
    m_create_data = create_data;
    m_copy_data = copy_data;
    m_destroy_data = destroy_data;
    m_dataSize = dataSize;
    matched_mutex_ = new boost::shared_mutex();
    matched_sub_cond_ = new boost::condition_variable_any();
    matched_pub_cond_ = new boost::condition_variable_any();

    if (matched_mutex_ != NULL && matched_sub_cond_ != NULL && matched_pub_cond_ != NULL)
    {
        if (createEntities(name, writertypename, writertopicname,
                readertypename, readertopicname) == 0)
        {
            // Not oneway
            if (m_reader != NULL)
            {
                data_ = m_create_data();

                if (data_ != NULL)
                {
                    return 0;
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create data\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                return 0;
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

void RTPSProxyProcedureEndpoint::finalize()
{
    if (data_ != NULL)
    {
        m_destroy_data(data_);
    }

    // if not operation oneway.
    if (m_reader != nullptr)
    {
        m_transport.get_subscriber()->delete_datareader(m_reader);
    }

    if (m_writer != nullptr)
    {
        m_transport.get_publisher()->delete_datawriter(m_writer);
    }

    if (matched_pub_cond_ != NULL)
    {
        delete matched_pub_cond_;
        matched_pub_cond_ = NULL;
    }

    if (matched_sub_cond_ != NULL)
    {
        delete matched_sub_cond_;
        matched_sub_cond_ = NULL;
    }

    if (matched_mutex_ != NULL)
    {
        delete matched_mutex_;
        matched_mutex_ = NULL;
    }
}

int RTPSProxyProcedureEndpoint::createEntities(
        const char* name,
        const char* writertypename,
        const char* writertopicname,
        const char* readertypename,
        const char* readertopicname)
{
    const char* const METHOD_NAME = "createEntities";

    if (name != NULL)
    {
        if (writertypename != NULL)
        {
            m_wtopic = m_transport.get_participant()->create_topic(writertopicname, writertypename,
                            fastdds::dds::TOPIC_QOS_DEFAULT);

            if (nullptr != m_wtopic)
            {
                fastdds::dds::DataWriterQos wQos;

                wQos.reliability().kind = fastdds::dds::RELIABLE_RELIABILITY_QOS;
                wQos.history().depth = 100;

                m_writer = m_transport.get_publisher()->create_datawriter(m_wtopic, wQos, this);

                if (m_writer != nullptr)
                {
                    // Is not oneway operation
                    if (readertypename != NULL)
                    {
                        m_rtopic = m_transport.get_participant()->create_topic(readertopicname, readertypename,
                                        fastdds::dds::TOPIC_QOS_DEFAULT);

                        if (nullptr != m_rtopic)
                        {
                            fastdds::dds::DataReaderQos rQos;

                            rQos.reliability().kind = fastdds::dds::RELIABLE_RELIABILITY_QOS;
                            rQos.history().depth = 100;

                            m_reader = m_transport.get_subscriber()->create_datareader(m_rtopic, rQos, this);

                            if (m_reader != nullptr)
                            {
                                return 0;
                            }
                        }
                    }
                    else
                    {
                        return 0;
                    }

                    m_transport.get_publisher()->delete_datawriter(m_writer);
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create the data writer\n", CLASS_NAME, METHOD_NAME);
                }
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

ReturnMessage RTPSProxyProcedureEndpoint::checkServerConnection(
        long timeout)
{
    boost::shared_lock<boost::shared_mutex> lock(*matched_mutex_);

    if (num_matched_sub_ == 0 && m_reader != nullptr)
    {
        matched_sub_cond_->wait_for(lock, boost::chrono::milliseconds(timeout));

        if (num_matched_sub_ == 0)
        {
            return SERVER_NOT_FOUND;
        }
    }

    if (num_matched_pub_ == 0)
    {
        matched_pub_cond_->wait_for(lock, boost::chrono::milliseconds(timeout));

        if (num_matched_pub_ == 0)
        {
            return SERVER_NOT_FOUND;
        }
    }

    return OK;
}

ReturnMessage RTPSProxyProcedureEndpoint::send(
        void* request,
        void* reply)
{
    const char* const METHOD_NAME = "send";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
    eprosima::rpc::protocol::dds::rpc::RequestHeader* requestHeader = NULL;
    int64_t numSec = 0;

    if (request != NULL)
    {
        requestHeader = reinterpret_cast<eprosima::rpc::protocol::dds::rpc::RequestHeader*>(request);
        requestHeader->requestId().writer_guid().guidPrefix(m_proxyId.guidPrefix());
        requestHeader->requestId().writer_guid().entityId().entityKey(m_proxyId.entityId().entityKey());
        requestHeader->requestId().writer_guid().entityId().entityKind(m_proxyId.entityId().entityKind());
        requestHeader->instanceName(m_transport.getInstanceName());

        {
            std::unique_lock<std::mutex> lock(m_mutex);
            numSec = m_numSec;
            // Thread safe num_Sec handling
            int32_t high = (numSec >> 32) & 0xFFFFFFFF;
            uint32_t low = (numSec & 0xFFFFFFFF);
            requestHeader->requestId().sequence_number().high(high);
            requestHeader->requestId().sequence_number().low(low);
            ++m_numSec;
        }

        if (checkServerConnection(m_transport.getTimeout()) == OK)
        {
            RecvPoint* recvpoint = nullptr;

            // Its not a oneway function.
            if (m_reader != nullptr && reply != NULL)
            {
                recvpoint = new RecvPoint(reply);
                // Insert reply in map before sending the data.
                std::unique_lock<std::mutex> lock(recv_mutex_);
                recv_threads.insert(std::pair<int64_t, RecvPoint&>(numSec, *recvpoint));
            }

            fastdds::dds::ReturnCode_t retWrite = m_writer->write(request);

            // Its not a oneway function.
            if (recvpoint != nullptr)
            {
                if (fastdds::dds::RETCODE_OK == retWrite)
                {
                    boost::unique_lock<boost::mutex> lock(recvpoint->mutex_);

                    if (!recvpoint->received_)
                    {
                        if (recvpoint->cond_.wait_for(lock,
                                boost::chrono::milliseconds(m_transport.getTimeout())) != boost::cv_status::timeout)
                        {
                            returnedValue = OK;
                        }
                        else
                        {
                            returnedValue = TIMEOUT;
                        }
                    }
                    else
                    {
                        returnedValue = OK;
                    }
                }
                else
                {
                    printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
                }

                std::unique_lock<std::mutex> lock(recv_mutex_);

                std::map<int64_t, RecvPoint&>::iterator it = recv_threads.find(numSec);

                if (it != recv_threads.end())
                {
                    recv_threads.erase(it);
                }

                delete recvpoint;
            }
            else if (retWrite)
            {
                returnedValue = OK;
            }
            else
            {
                printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
            returnedValue = SERVER_NOT_FOUND;
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

ReturnMessage RTPSProxyProcedureEndpoint::send_async(
        void* request,
        RTPSAsyncTask* task)
{
    const char* const METHOD_NAME = "send_async";
    ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
    eprosima::rpc::protocol::dds::rpc::RequestHeader* requestHeader = NULL;
    int64_t numSec = 0;

    if (request != NULL)
    {
        requestHeader = reinterpret_cast<eprosima::rpc::protocol::dds::rpc::RequestHeader*>(request);
        requestHeader->requestId().writer_guid().guidPrefix(m_proxyId.guidPrefix());
        requestHeader->requestId().writer_guid().entityId().entityKey(m_proxyId.entityId().entityKey());
        requestHeader->requestId().writer_guid().entityId().entityKind(m_proxyId.entityId().entityKind());
        requestHeader->instanceName(m_transport.getInstanceName());


        {
            std::unique_lock<std::mutex> lock(m_mutex);
            numSec = m_numSec;
            // Thread safe num_Sec handling
            int32_t high = (numSec >> 32) & 0xFFFFFFFF;
            uint32_t low = (numSec & 0xFFFFFFFF);
            requestHeader->requestId().sequence_number().high(high);
            requestHeader->requestId().sequence_number().low(low);
            ++m_numSec;
        }

        if (checkServerConnection(m_transport.getTimeout()) == OK)
        {
            RecvPoint* recvpoint = nullptr;

            {
                recvpoint = new RecvPoint(task);
                std::unique_lock<std::mutex> lock(recv_mutex_);
                recv_threads.insert(std::pair<int64_t, RecvPoint&>(numSec, *recvpoint));
            }

            if (fastdds::dds::RETCODE_OK == m_writer->write(request))
            {
                returnedValue = OK;
            }
            else
            {
                printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);

                std::unique_lock<std::mutex> lock(recv_mutex_);
                std::map<int64_t, RecvPoint&>::iterator it = recv_threads.find(numSec);

                if (it != recv_threads.end())
                {
                    recv_threads.erase(it);
                }

                delete recvpoint;
            }
        }
        else
        {
            printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
            returnedValue = SERVER_NOT_FOUND;
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
}

void RTPSProxyProcedureEndpoint::on_data_available(
        fastdds::dds::DataReader* reader)
{
    eprosima::fastdds::dds::SampleInfo info;

    std::unique_lock<std::mutex> lock(recv_mutex_);

    if (fastdds::dds::RETCODE_OK == reader->take_next_sample(data_, &info))
    {
        if (fastdds::dds::ALIVE_INSTANCE_STATE == info.instance_state && info.valid_data)
        {
            eprosima::rpc::protocol::dds::rpc::ReplyHeader* replyHeader =
                    reinterpret_cast<eprosima::rpc::protocol::dds::rpc::ReplyHeader*>(data_);

            if (replyHeader->relatedRequestId().writer_guid().guidPrefix()[0] == m_proxyId.guidPrefix()[0] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[1] == m_proxyId.guidPrefix()[1] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[2] == m_proxyId.guidPrefix()[2] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[3] == m_proxyId.guidPrefix()[3] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[4] == m_proxyId.guidPrefix()[4] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[5] == m_proxyId.guidPrefix()[5] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[6] == m_proxyId.guidPrefix()[6] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[7] == m_proxyId.guidPrefix()[7] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[8] == m_proxyId.guidPrefix()[8] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[9] == m_proxyId.guidPrefix()[9] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[10] == m_proxyId.guidPrefix()[10] &&
                    replyHeader->relatedRequestId().writer_guid().guidPrefix()[11] == m_proxyId.guidPrefix()[11] &&
                    replyHeader->relatedRequestId().writer_guid().entityId().entityKey()[0] ==
                    m_proxyId.entityId().entityKey()[0] &&
                    replyHeader->relatedRequestId().writer_guid().entityId().entityKey()[1] ==
                    m_proxyId.entityId().entityKey()[1] &&
                    replyHeader->relatedRequestId().writer_guid().entityId().entityKey()[2] ==
                    m_proxyId.entityId().entityKey()[2] &&
                    replyHeader->relatedRequestId().writer_guid().entityId().entityKind() ==
                    m_proxyId.entityId().entityKind())
            {
                int64_t numSec = replyHeader->relatedRequestId().sequence_number().high();

                numSec <<= 32;
                numSec &= 0xFFFFFFFF00000000;
                numSec += replyHeader->relatedRequestId().sequence_number().low();

                std::map<int64_t, RecvPoint&>::iterator it = recv_threads.find(numSec);

                if (it != recv_threads.end())
                {
                    RecvPoint* rp = &it->second;
                    m_copy_data(rp->getReply(), data_);

                    if (rp->getTask() == NULL)
                    {
                        boost::unique_lock<boost::mutex> lockC(rp->mutex_);
                        rp->received_ = true;
                        lockC.unlock();
                        rp->cond_.notify_one();
                    }
                    // Async task
                    else
                    {
                        recv_threads.erase(it);
                        RTPSAsyncTask* task = rp->getTask();
                        delete rp;
                        lock.unlock();
                        task->execute();
                    }
                }
            }
        }
    }
}

void RTPSProxyProcedureEndpoint::on_subscription_matched(
        fastdds::dds::DataReader*,
        const fastdds::dds::SubscriptionMatchedStatus& info)
{
    boost::upgrade_lock<boost::shared_mutex> lock(*matched_mutex_);
    boost::upgrade_to_unique_lock<boost::shared_mutex> uniqueLock(lock);

    if (1 == info.current_count_change)
    {
        ++num_matched_sub_;

        if (num_matched_sub_ == 1)
        {
            matched_sub_cond_->notify_all();
        }
    }
    else
    {
        --num_matched_sub_;
    }
}

void RTPSProxyProcedureEndpoint::on_publication_matched(
        fastdds::dds::DataWriter*,
        const fastdds::dds::PublicationMatchedStatus& info)
{
    boost::upgrade_lock<boost::shared_mutex> lock(*matched_mutex_);
    boost::upgrade_to_unique_lock<boost::shared_mutex> uniqueLock(lock);

    if (1 == info.current_count_change)
    {
        ++num_matched_pub_;

        if (num_matched_pub_ == 1)
        {
            matched_pub_cond_->notify_all();
        }
    }
    else
    {
        --num_matched_pub_;
    }
}

#endif // RPC_WITH_FASTDDS
