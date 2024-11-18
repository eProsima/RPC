/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENTS_RTPSPROXYPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENTS_RTPSPROXYPROCEDUREENDPOINT_H_

#include "../../../rpc_dll.h"

#if RPC_WITH_FASTDDS

#include <cstdint>
#include <map>

#include "../RTPSProxyTransport.h"
#include "../../components/Endpoint.h"
#include "../../../utils/Messages.h"
#include "../../../protocols/dds/MessageHeader.h"

#include <fastdds/fastdds_dll.hpp>
#include <fastdds/dds/subscriber/DataReaderListener.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/rtps/common/MatchingInfo.hpp>

namespace boost {
class shared_mutex;
class condition_variable_any;
} // namespace boost

namespace eprosima {
namespace fastdds {
namespace dds {
class DataReader;
class DataWriter;
class Topic;
} // namespace dds
} // namespace fastrtps

namespace rpc {
namespace transport {
namespace dds {
class RTPSAsyncTask;
class RecvPoint;

/*!
 * @brief This class represents a remote endpoint used by a proxy.
 * It also encapsulates the DDS datawriter and the DDS datareader.
 * @ingroup TRANSPORTMODULE
 */
class RTPSProxyProcedureEndpoint : public Endpoint, public fastdds::dds::DataReaderListener,
    public fastdds::dds::DataWriterListener
{
public:

    /*!
     * @brief Default constructor.
     * @param Transport that is creating the proxy procedure endpoint. It cannot be NULL.
     */
    RPC_DllAPI RTPSProxyProcedureEndpoint(
            RTPSProxyTransport& transport);

    //! @brief Default destructor.
    virtual RPC_DllAPI ~RTPSProxyProcedureEndpoint();

    /*!
     * @brief This function initializes the proxy procedure endpoint.
     *
     * @param name The name associated with this proxy procedure endpoint. It cannot be NULL.
     * @param writertypename The type name of the topic that the proxy procedure endpoint uses in the datawriter. It cannot be NULL.
     * @param writertopicname The name of the topic that the proxy procedure endpoint uses in the datawriter. It cannot be NULL.
     * @param readertypename The type name of the topic that the proxy procedure endpoint uses in the datareader. It cannot be NULL.
     * @param readerttopicname The name of the topic that the proxy procedure endpoint uses in the datareader. It cannot be NULL.
     * @param copy_data Pointer to the function used to copy the data when it is received.
     * @return 0 if the initialization works. -1 in other case.
     * TODO
     */
    RPC_DllAPI int initialize(
            const char* name,
            const char* writertypename,
            const char* writertopicname,
            const char* readertypename,
            const char* readertopicname,
            RTPSTransport::Create_data create_data,
            RTPSTransport::Copy_data copy_data,
            RTPSTransport::Destroy_data destroy_data,
            size_t dataSize);

    /*!
     * @brief This function finalizes the proxy procedure endpoint.
     * All entities and objects created by this procedure endpoint are deleted.
     */
    RPC_DllAPI void finalize();

    /*!
     * @brief This function sends a synchronous RPC call.
     * It sends the request to the server and waits for the reply.
     * The wait mechanism is implemented with a DDS WaitSet.
     *
     * @param request Pointer to the allocated request. It cannot be NULL.
     * @param reply Pointer to the allocated reply. This memory will be filled with the incoming data.
     *        The pointer can be NULL and this means that the RPC call is oneway.
     * @return Operation status
     * @throw eprosima::rpc::exception::ServerTimeoutException.
     */
    RPC_DllAPI rpc::ReturnMessage send(
            void* request,
            void* reply);

    /*!
     * @brief This function sends an asynchronous RPC call.
     * It sends the request to the server and does not wait for the reply.
     * Instead, the corresponding callback inside the RTPSAsyncTask object
     * will be invoked when the response arrives.
     *
     * @param request Pointer to the allocated request. It cannot be NULL.
     * @param task Object containing information of the asynchronous task.
     * @return Operation status. It can be CLIENT_INTERNAL_ERROR or NO_SERVER
     */
    RPC_DllAPI rpc::ReturnMessage send_async(
            void* request,
            RTPSAsyncTask* task);

    /// @brief DDS callback.
    RPC_DllAPI void on_data_available(
            fastdds::dds::DataReader* reader) override;

    RPC_DllAPI void on_subscription_matched(
            fastdds::dds::DataReader* reader,
            const fastdds::dds::SubscriptionMatchedStatus& info) override;

    RPC_DllAPI void on_publication_matched(
            fastdds::dds::DataWriter* reader,
            const fastdds::dds::PublicationMatchedStatus& info) override;

private:

    /*!
     * @brief This function creates the DDS entities.
     * @param name The name associated with this proxy procedure endpoint. It cannot be NULL.
     * @param writertypename The type name of the topic that the proxy procedure endpoint uses in the datawriter. It cannot be NULL.
     * @param writertopicname The name of the topic that the proxy procedure endpoint uses in the datawriter. It cannot be NULL.
     * @param readertypename The type name of the topic that the proxy procedure endpoint uses in the datareader. It cannot be NULL.
     * @param readertopicname The name of the topic that the proxy procedure endpoint uses in the datareader. It cannot be NULL.
     * @return 0 value is returned if the initialization works successfully. In other case -1 is returned.
     */
    int createEntities(
            const char* name,
            const char* writertypename,
            const char* writertopicname,
            const char* readertypename,
            const char* readertopicname);

    /*!
     * @brief This function checks if the server was discovered.
     * @param timeout Timeout used to do the checking. Its value is in milliseconds.
     * @return FASTRPC return message.
     */
    ReturnMessage checkServerConnection(
            long timeout);

    void addAsyncTask(
            RTPSAsyncTask* task,
            int64_t numSec);

    //! @brief Mutex used to ensure that sequence number and query pool is safe-thread.
    std::mutex m_mutex;

    std::mutex recv_mutex_;

    std::map<int64_t, RecvPoint&> recv_threads;

    boost::shared_mutex* matched_mutex_ {nullptr};

    boost::condition_variable_any* matched_sub_cond_ {nullptr};

    boost::condition_variable_any* matched_pub_cond_ {nullptr};

    unsigned int num_matched_sub_ {0};

    unsigned int num_matched_pub_ {0};

    //! @brief Transport that created the proxy procedure endpoint.
    RTPSProxyTransport& m_transport;

    fastdds::dds::Topic* m_wtopic {nullptr};

    //! @brief The data writer used to send.
    fastdds::dds::DataWriter* m_writer {nullptr};

    fastdds::dds::Topic* m_rtopic {nullptr};

    //! @brief The data reader used to receive.
    fastdds::dds::DataReader* m_reader {nullptr};

    //! @brief The identifier used as proxy.
    rpc::protocol::dds::GUID_t m_proxyId;

    /// \brief The next sequence number for a request.
    int64_t m_numSec {0};

    RTPSTransport::Create_data m_create_data {nullptr};

    RTPSTransport::Copy_data m_copy_data {nullptr};

    RTPSTransport::Destroy_data m_destroy_data {nullptr};

    size_t m_dataSize {0};

    void* data_ {nullptr};
};
}             // namespace dds
}         // namespace transport
}     // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS

#endif // _TRANSPORTS_DDS_COMPONENTS_RTPSPROXYPROCEDUREENDPOINT_H_
