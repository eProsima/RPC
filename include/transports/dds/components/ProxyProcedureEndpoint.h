/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENTS_PROXYPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENTS_PROXYPROCEDUREENDPOINT_H_

#include "../../../rpc_dll.h"

#if RPC_WITH_RTIDDS

#include "../ProxyTransport.h"
#include "../../components/Endpoint.h"
#include "../../../utils/Messages.h"
#include "../../../protocols/dds/MessageHeader.h"

#include <cstdint>

namespace boost
{
    class mutex;
}

class DDSTopic;
class DDSContentFilteredTopic;
class DDSDataWriter;
class DDSDataReader;
class DDSQueryCondition;
class DDSWaitSet;


namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                class DDSAsyncTask;

                /*!
                 * @brief This class represents a remote endpoint used by a proxy.
                 * It also encapsulates the DDS datawriter and the DDS datareader.
				 * @ingroup TRANSPORTMODULE
                 */
                class RPC_DllAPI ProxyProcedureEndpoint : public Endpoint
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that is creating the proxy procedure endpoint. It cannot be NULL.
                         */
                        ProxyProcedureEndpoint(ProxyTransport &transport);

                        //! @brief Default destructor.
                        virtual ~ProxyProcedureEndpoint();

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
                        int initialize(const char *name, const char *writertypename,
                                const char *writertopicname, const char *readertypename,
                                const char *readertopicname, bool eprosima_types,
                                Transport::Copy_data copy_data, int dataSize);

                        /*!
                         * @brief This function finalizes the proxy procedure endpoint.
                         * All entities and objects created by this procedure endpoint are deleted.
                         */
                        void finalize();

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
                        eprosima::rpc::ReturnMessage send(void *request, void* reply);

						/*!
						 * @brief This function sends an asynchronous RPC call.
                         * It sends the request to the server and does not wait for the reply.
						 * Instead, the corresponding callback inside the DDSAsyncTask object
						 * will be invoked when the response arrives.
						 *
						 * @param request Pointer to the allocated request. It cannot be NULL.
						 * @param task Object containing information of the asynchronous task.
						 * @return Operation status. It can be CLIENT_INTERNAL_ERROR or NO_SERVER
						 */
                        eprosima::rpc::ReturnMessage send_async(void *request, DDSAsyncTask *task);

						/*!
						 * @brief Frees a DDS query condition. 
						 *
						 * @param query Query condition to free.
						 */
                        void freeQuery(DDSQueryCondition *query);

                        /*!
                         * @brief This function takes a sample from the datareader.
                         */
                        eprosima::rpc::ReturnMessage takeReply(void *reply, DDSQueryCondition *query);

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
                        int createEntities(const char *name, const char *writertypename, const char *writertopicname,
                                const char *readertypename, const char *readertopicname);

                        /*!
                         * @brief This function enables the DDS entities.
                         *
                         * @return 0 value is returned if all entities was enabled successfully. -1 in other case.
                         */
                        int enableEntities();

                        /*!
                         * @brief This function checks if the server was discovered.
                         *
                         * @param DDS WaitSet used to make do the checking.
                         * @param timeout Timeout used to do the checking. Its value is in milliseconds.
                         * @return FASTRPC return message.
                         */
                        ReturnMessage checkServerConnection(DDSWaitSet *waitSet, long timeout);

                        //! @brief This function initializes the query conditions of the pool.
                        int initQueryPool();

                        //! @brief This function finalizes the query conditions of the pool.
                        void finalizeQueryPool();

                        /*!
                         * @brief This function returns a free query condition from the pool.
                         *
                         * @return This function returns a free query condition. If all the query condition are in use, then a NULL pointer is returned.
                         */
                        DDSQueryCondition* getFreeQueryFromPool();

                        /*!
                         * @brief This function returns a used query condition to its freedom.
                         */
                        void returnUsedQueryToPool(DDSQueryCondition *query);

                        //! @brief Mutex used to ensure that sequence number and query pool is safe-thread.
                        boost::mutex *m_mutex;

                        //! @brief Transport that created the proxy procedure endpoint.
                        ProxyTransport &m_transport;

                        //!@brief The topic used to send.
                        DDSTopic *m_writerTopic;

                        //! @brief The topic used to receive.
                        DDSTopic *m_readerTopic;

                        //! @brief Content filter used to take an expected data.
                        DDSContentFilteredTopic *m_filter;

                        //! @brief The data writer used to send.
                        DDSDataWriter *m_writer;

                        //! @brief The data reader used to receive.
                        DDSDataReader *m_reader;

                        // TODO
                        bool m_eprosima_types;

                        //! @brief Pointer to the function used to copy data when it is received.
                        Transport::Copy_data m_copy_data;

                        int m_dataSize;

                        //! @brief Pool of DDSQueryConditions that are used by the proxy procedure endpoint. It's length is 10.
                        DDSQueryCondition **m_queryPool;

                        /// \brief First position of queries that are in use.
                        int m_queriesInUseLimiter;

                        //! @brief The identifier used as proxy.
                        eprosima::rpc::protocol::dds::GUID_t m_proxyId;

                        /// \brief The next sequence number for a request.
                        int64_t m_numSec;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_RTIDDS

#endif // _TRANSPORTS_DDS_COMPONENTS_PROXYPROCEDUREENDPOINT_H_
