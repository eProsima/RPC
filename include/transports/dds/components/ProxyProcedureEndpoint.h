/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_

#include "transports/dds/ProxyTransport.h"
#include "utils/dds/Middleware.h"
#include "utils/Messages.h"

namespace boost
{
    class mutex;
}

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class represents a remote endpoint used by a proxy.
                 * Also this class encapsulate the DDS datawriter and the DDS datareader.
                 */
                class ProxyProcedureEndpoint
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that is creating the proxy procedure endpoint. Cannot be NULL.
                         */
                        ProxyProcedureEndpoint(ProxyTransport &transport);

                        //! @brief Default destructor.
                        virtual ~ProxyProcedureEndpoint();

                        /*!
                         * @brief This function initializes the proxy procedure endpoint.
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the proxy procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the proxy procedure endpoint uses in the datareader. Cannot be NULL:
                         * @param copy_data Pointer to the function used to copy data when it is received.
                         * @return 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int initialize(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Copy_data copy_data, int dataSize);

                        /*!
                         * @brief This function finalizes the proxy procedure endpoint.
                         * All entities and object created by this procedure endpoint are deleted.
                         */
                        void finalize();

                        /*!
                         * @brief This function sends a synchronous RPC call.
                         * Usually this function sends the  request to the server and waits the reply.
                         * Wait mechanism is implemented with a DDS WaitSet.
                         *
                         * @param request Pointer to the allocated request. Cannot be NULL.
                         * @param reply Pointer to the allocated reply. This memory will be filled with the incomming data.
                         *        The pointer can be NULL and this means that the RPC call is oneway.
                         * @param remoteServiceName The remote service name that will be called.
                         * @param timeout The timeout used to wait the reply from server. The value should be in milliseconds.
                         * @throw eProsima::RPCDDS::ServerTimeoutException
                         */
                        eprosima::rpcdds::ReturnMessage send(void *request, void* reply, const char *remoteServiceName, long timeout);

                    private:

                        /*!
                         * @brief This function creates the DDS entities.
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the proxy procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the proxy procedure endpoint uses in the datareader. Cannot be NULL:
                         * @return 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int createEntities(const char *name, const char *writertypename, const char *readertypename);

                        /*!
                         * @brief This function enables the DDS entities.
                         *
                         * @return 0 value is returned if all entities was enabled successfully. -1 in other case.
                         */
                        int enableEntities();

                        /*!
                         * @brief This functio checks that the server was discovery.
                         *
                         * @param DDS WaitSet used to make the comprobation.
                         * @param timeout Timeout used to the comprobation. Its value is in milliseconds.
                         * @return RPCDDS return message.
                         */
                        ReturnMessage checkServerConnection(DDS::WaitSet *waitSet, long timeout);

                        //! @brief This function initializes the query conditions of the pool.
                        int initQueryPool();

                        //! @brief This function finalizes the query conditions of the pool.
                        void finalizeQueryPool();

                        /*!
                         * @brief This function returns a free query condition from the pool.
                         *
                         * @return This function return a free query condition. If all query condition are in use, then NULL pointer is returned.
                         */
                        DDS::QueryCondition* getFreeQueryFromPool();

                        /*!
                         * @brief This function returns a used query condition to its freedom.
                         */
                        void returnUsedQueryToPool(DDS::QueryCondition *query);

                        /*!
                         * @brief This function take a sample from the datareader.
                         */
                        eprosima::rpcdds::ReturnMessage takeReply(void *reply, DDS::QueryCondition *query);

                        //! @brief Mutex used to ensure that sequence number and query pool is safe-thread.
                        boost::mutex *m_mutex;

                        //! @brief Transport that created the proxy procedure endpoint.
                        ProxyTransport &m_transport;

                        //!@brief The topic used to send.
                        DDS::Topic *m_writerTopic;

                        //! @brief The topic used to receive.
                        DDS::Topic *m_readerTopic;

                        //! @brief Content filter used to take an expected data.
                        DDS::ContentFilteredTopic *m_filter;

                        //! @brief The data writer used to send.
                        DDS::DataWriter *m_writer;

                        //! @brief The data reader used to receive.
                        DDS::DataReader *m_reader;

                        //! @brief Pointer to the function used to copy data when it is received.
                        Transport::Copy_data m_copy_data;

                        int m_dataSize;

                        //! @brief Pool of DDSQueryConditions that are used by the proxy procedure endpoint. It's length is 10.
                        DDS::QueryCondition **m_queryPool;

                        /// \brief First position of queries that are in use.
                        int m_queriesInUseLimiter;

                        //! @brief The identifier used as proxy.
                        unsigned int m_proxyId[4];

                        /// \brief The next sequence number for a request.
                        unsigned int m_numSec;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_
