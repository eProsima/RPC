/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_COMPONENTS_RTPSSERVERPROCEDUREENDPOINT_H_
#define _TRANSPORTS_DDS_COMPONENTS_RTPSSERVERPROCEDUREENDPOINT_H_

#include "../../../fastrpc_dll.h"
#include "../RTPSServerTransport.h"
#include "../../components/Endpoint.h"
#include "../../../utils/Messages.h"

#include <fastrtps/subscriber/SubscriberListener.h>
#include <fastrtps/rtps/common/MatchingInfo.h>

#include <string>

namespace boost
{
    class mutex;
}

namespace eprosima
{
    namespace fastrtps
    {
        class Publisher;
        class Subscriber;
    }

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
                class RTPSServerProcedureEndpoint : public Endpoint, public eprosima::fastrtps::SubscriberListener
                {
                    public:

                        /*!
                         * @brief Default constructor.
                         * @param Transport that creates the proxy procedure endpoint. It cannot be NULL.
                         */
                        FASTRPC_DllAPI RTPSServerProcedureEndpoint(RTPSServerTransport &transport);

                        //! @brief Default destructor.
                        virtual FASTRPC_DllAPI ~RTPSServerProcedureEndpoint();

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
                        FASTRPC_DllAPI int initialize(const char *name, const char *writertypename, const char *writertopicname,
                                const char *readertypename, const char *readertopicname,
                                RTPSTransport::Create_data create_data, RTPSTransport::Destroy_data destroy_data,
                                RTPSTransport::ProcessFunc, int dataSize);
						
						/*!
                         * @brief This method creates the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        FASTRPC_DllAPI int start(const char* const &serviceName, const char* const &instanceName);

						/*!
                         * @brief This method deletes the DDS entities needed to run this DDS Endpoint.
                         * @param serviceName Name of the service.
                         */
                        FASTRPC_DllAPI void stop();

						/*!
                         * @brief Gets the callback used to processes a request.
						 * @return Function callback used to processes a request.
                         */
                        inline FASTRPC_DllAPI
                            RTPSTransport::ProcessFunc getProcessFunc(){return m_process_func;}

						/*!
                         * @brief Sends the reply.
                         * @param serviceName Name of the service.
                         */
                        FASTRPC_DllAPI int sendReply(void *data);

                        /// @brief DDS callback.
                        virtual FASTRPC_DllAPI void onNewDataMessage(eprosima::fastrtps::Subscriber *sub);

                        virtual void onSubscriptionMatched(eprosima::fastrtps::Subscriber* /*sub*/, eprosima::fastrtps::rtps::MatchingInfo /*info*/){}



                    private:

                        /*!
                         * @brief This function creates the DDS entities.
                         * @return A 0 value is returned if the initialization works successfully. In other case -1 is returned.
                         */
                        int createEntities(const std::string &serviceName, const std::string &instanceName);

                        //! @brief Transport that has created the proxy procedure endpoint.
                        RTPSServerTransport &m_transport;

                        const char *m_name;

                        std::string m_writerTypeName;

                        std::string m_writerTopicName;

                        std::string m_readerTypeName;

                        std::string m_readerTopicName;

                        //! @brief The data writer used to send.
                        eprosima::fastrtps::Publisher *m_writer;

                        //! @brief The data reader used to receive.
                        eprosima::fastrtps::Subscriber *m_reader;

                        RTPSTransport::Create_data m_create_data;

                        RTPSTransport::Destroy_data m_destroy_data;

                        RTPSTransport::ProcessFunc m_process_func;

                        int m_dataSize;

                        boost::mutex *m_mutex;

                        int m_started;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima
#endif // _TRANSPORTS_DDS_COMPONENTS_RTPSSERVERPROCEDUREENDPOINT_H_
