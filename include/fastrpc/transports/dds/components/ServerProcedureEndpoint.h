/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_

#include "fastrpc/fastrpc_dll.h"
#include "fastrpc/transports/dds/ServerTransport.h"
#include "fastrpc/transports/components/Endpoint.h"
#include "fastrpc/utils/dds/Middleware.h"
#include "fastrpc/utils/Messages.h"

#include <string>

namespace boost
{
    class mutex;
}

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This class represents a remote endpoint used by a proxy.
                 * Also this class encapsulate the DDS datawriter and the DDS datareader.
				 * @ingroup TRANSPORTMODULE
                 */
                class FASTRPC_DllAPI ServerProcedureEndpoint : public Endpoint, public DDS::DataReaderListener
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that creates the proxy procedure endpoint. It cannot be NULL.
                         */
                        ServerProcedureEndpoint(ServerTransport &transport);

                        //! @brief Default destructor.
                        virtual ~ServerProcedureEndpoint();

						/*! TODO Actualizar
						 * @brief Initializes the endpoint.
						 *
						 * @param name The name associated with this procedure endpoint. It cannot be NULL.
						 * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. It cannot be NULL.
						 * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. It cannot be NULL.
						 * @param initialize_data Pointer to the function to initialize DataReader received data
						 * @param finalize_data Pointer to the function to finalize DataReader received data
						 * @param ProcessFunc Pointer to the function invoked when a message is received from the server
						 * @param dataSize Size of the DataReader data structure
						 */
                        int initialize(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Create_data create_data, Transport::Destroy_data destroy_data,
                                Transport::ProcessFunc, int dataSize);
						
						/*!
                         * @brief This method creates the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        int start(std::string &serviceName, std::string &instanceName);

						/*!
                         * @brief This method deletes the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        void stop();

						/*!
                         * @brief Gets the callback used to processes a request.
						 * @return Function callback used to processes a request.
                         */
                        inline
                            Transport::ProcessFunc getProcessFunc(){return m_process_func;}

						/*!
                         * @brief Sends the reply.
                         * @param serviceName Name of the service.
                         */
                        int sendReply(void *data);

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
                         * @return A 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int createEntities(std::string &serviceName, std::string &instanceName);

                        /*!
                         * @brief This function enables the DDS entities.
                         *
                         * @return A 0 value is returned if all entities were enabled successfully. -1 in other case.
                         */
                        int enableEntities();


                        //! @brief Transport that has created the proxy procedure endpoint.
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

                        Transport::Create_data m_create_data;

                        Transport::Destroy_data m_destroy_data;

                        Transport::ProcessFunc m_process_func;

                        int m_dataSize;

                        boost::mutex *m_mutex;

                        int m_started;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima
#endif // _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_
