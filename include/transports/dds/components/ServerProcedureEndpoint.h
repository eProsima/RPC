/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_

#include "../../../rpc_dll.h"

#if RPC_WITH_RTIDDS

#include "../ServerTransport.h"
#include "../../components/Endpoint.h"
#include "../../../utils/Messages.h"

#include <string>

#if defined(_WIN32) && defined(NDDS_DLL_VARIABLE)
class __declspec(dllimport) DDSDataReaderListener;
class __declspec(dllimport) DDSListener;
#endif

#include "../../../utils/dds/Middleware.h"

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
                class ServerProcedureEndpoint : public Endpoint, public DDSDataReaderListener
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that creates the proxy procedure endpoint. It cannot be NULL.
                         */
                        RPC_DllAPI ServerProcedureEndpoint(ServerTransport &transport);

                        //! @brief Default destructor.
                        virtual RPC_DllAPI ~ServerProcedureEndpoint();

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
                        RPC_DllAPI int initialize(const char *name, const char *writertypename, const char *writertopicname,
                                const char *readertypename, const char *readertopicname,
                                Transport::Create_data create_data, Transport::Destroy_data destroy_data,
                                Transport::ProcessFunc, int dataSize);
						
						/*!
                         * @brief This method creates the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        RPC_DllAPI int start(const char* const &serviceName, const char* const &instanceName);

						/*!
                         * @brief This method deletes the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        RPC_DllAPI void stop();

						/*!
                         * @brief Gets the callback used to processes a request.
						 * @return Function callback used to processes a request.
                         */
                        inline RPC_DllAPI
                            Transport::ProcessFunc getProcessFunc(){return m_process_func;}

						/*!
                         * @brief Sends the reply.
                         * @param serviceName Name of the service.
                         */
                        RPC_DllAPI int sendReply(void *data);

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_data_available(DDSDataReader* reader);

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_requested_deadline_missed(
                                DDSDataReader* reader,
                                const DDS_RequestedDeadlineMissedStatus& status) {}

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_requested_incompatible_qos(
                                DDSDataReader* reader,
                                const DDS_RequestedIncompatibleQosStatus& status) {}

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_sample_rejected(
                                DDSDataReader* reader,
                                const DDS_SampleRejectedStatus& status) {}

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_liveliness_changed(
                                DDSDataReader* reader,
                                const DDS_LivelinessChangedStatus& status) {}

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_sample_lost(
                                DDSDataReader* reader,
                                const DDS_SampleLostStatus& status) {}

                        /// @brief DDS callback.
                        virtual RPC_DllAPI void on_subscription_matched(
                                DDSDataReader* reader,
                                const DDS_SubscriptionMatchedStatus& status) {}

                    private:

                        /*!
                         * @brief This function creates the DDS entities.
                         * @return A 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int createEntities(const std::string &serviceName, const std::string &instanceName);

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

                        std::string m_writerTopicName;

                        std::string m_readerTypeName;

                        std::string m_readerTopicName;

                        //!@brief The topic used to send.
                        DDSTopic *m_writerTopic;

                        //! @brief The topic used to receive.
                        DDSTopic *m_readerTopic;

                        DDSContentFilteredTopic *m_filter;

                        //! @brief The data writer used to send.
                        DDSDataWriter *m_writer;

                        //! @brief The data reader used to receive.
                        DDSDataReader *m_reader;

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

#endif // RPC_WITH_RTIDDS

#endif // _TRANSPORTS_DDS_COMPONENTS_SERVERPROCEDUREENDPOINT_H_
