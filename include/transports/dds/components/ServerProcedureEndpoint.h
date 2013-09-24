/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENT_SERVERPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENT_SERVERPROCEDUREENDPOINT_H_

#include "transports/dds/ServerTransport.h"
#include "utils/dds/Middleware.h"
#include "utils/Messages.h"

#include <string>

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
                class ServerProcedureEndpoint : public DDS::DataReaderListener
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that is creating the proxy procedure endpoint. Cannot be NULL.
                         */
                        ServerProcedureEndpoint(ServerTransport &transport);

                        //! @brief Default destructor.
                        virtual ~ServerProcedureEndpoint();

                        int initialize(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Copy_data copy_data, int dataSize);

                        int start(std::string &serviceName);

                        void stop();

                        /// @brief DDS callback.
                        virtual void on_data_available(DDS::DataReader* reader);

                        /// @brief DDS callback.
                        virtual void on_requested_deadline_missed(
                                DDS::DataReader* reader,
                                const DDS::RequestedDeadlineMissedStatus& status) {}

                        /// @brief DDS callback.
                        virtual void on_requested_incompatible_qos(
                                DDS::DataReader* reader,
                                const DDS::RequestedIncompatibleQosStatus& status) {}

                        /// @brief DDS callback.
                        virtual void on_sample_rejected(
                                DDS::DataReader* reader,
                                const DDS::SampleRejectedStatus& status) {}

                        /// @brief DDS callback.
                        virtual void on_liveliness_changed(
                                DDS::DataReader* reader,
                                const DDS::LivelinessChangedStatus& status) {}

                        /// @brief DDS callback.
                        virtual void on_sample_lost(
                                DDS::DataReader* reader,
                                const DDS::SampleLostStatus& status) {}

                        /// @brief DDS callback.
                        virtual void on_subscription_matched(
                                DDS::DataReader* reader,
                                const DDS::SubscriptionMatchedStatus& status) {}

                    private:

                        /*!
                         * @brief This function creates the DDS entities.
                         * @return 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int createEntities(std::string &serviceName);

                        /*!
                         * @brief This function enables the DDS entities.
                         *
                         * @return 0 value is returned if all entities was enabled successfully. -1 in other case.
                         */
                        int enableEntities();


                        //! @brief Transport that created the proxy procedure endpoint.
                        ServerTransport &m_transport;

                        const char *m_name;

                        std::string m_writerTypeName;

                        std::string m_readerTypeName;

                        //!@brief The topic used to send.
                        DDS::Topic *m_writerTopic;

                        //! @brief The topic used to receive.
                        DDS::Topic *m_readerTopic;

                        DDS::ContentFilteredTopic *m_filter;

                        //! @brief The data writer used to send.
                        DDS::DataWriter *m_writer;

                        //! @brief The data reader used to receive.
                        DDS::DataReader *m_reader;

                        Transport::Copy_data m_copy_data;

                        int m_dataSize;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_DDS_COMPONENT_SERVERPROCEDUREENDPOINT_H_
