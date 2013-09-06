/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_

#include "utils/dds/Middleware.h"

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
                class Transport;

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
                        ProxyProcedureEndpoint(Transport *transport);

                        //! @brief Default destructor.
                        virtual ~ProxyProcedureEndpoint();

                        /*!
                         * @brief This function initializes the proxy procedure endpoint.
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the proxy procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the proxy procedure endpoint uses in the datareader. Cannot be NULL:
                         * @return 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int initialize(const char *name, const char *writertypename, const char *readertypename);

                        /*!
                         * @brief This function finalizes the proxy procedure endpoint.
                         * All entities and object created by this procedure endpoint are deleted.
                         */
                        void finalize();


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

                        //! @brief This function initializes the query conditions of the pool.
                        int initQueryPool();

                        /// @brief This function finalizes the query conditions of the pool.
                        void finalizeQueryPool();

                        //! @brief Mutex used to ensure that sequence number and query pool is safe-thread.
                        boost::mutex *m_mutex;

                        //! @brief Transport that created the proxy procedure endpoint.
                        Transport *m_transport;

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

                        //! @brief Pool of DDSQueryConditions that are used by the proxy procedure endpoint. It's length is 10.
                        DDS::QueryCondition **m_queryPool;

                        //! @brief The identifier used as proxy.
                        unsigned int m_proxyId[4];
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_DDS_COMPONENT_PROXYPROCEDUREENDPOINT_H_
