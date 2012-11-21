/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVERPC_H_
#define _SERVER_SERVERRPC_H_

#include "utils/rpcdds.h"
#include "utils/Typedefs.h"
#include "utils/Messages.h"
#include "utils/Middleware.h"
#include <string>

namespace eProsima
{
	namespace RPCDDS
	{

		class Server;
		class ThreadPoolManager;

		/**
		 * \brief This class implements a remote procedure call in server side.
		 */
		class RPCDDS_WIN32_DLL_API ServerRPC : public DDS::DataReaderListener
		{
			public:

				/**
				 * \brief The default constructor.
				 *
				 * \param rpcName The name of this remote procedure. Cannot be NULL.
				 * \param requestTypeName The type name of the request topic that the RPC object manages. Cannot be NULL.
				 * \param replyTypeName The type name of the reply topic that te RPC object manages. Cannot be NULL:
				 * \param execFunction Funtion that will be called when a new request is received. Cannot be NULL.
				 */
				ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
					const char *replyTypeName, fExecFunction execFunction);

				/**
				 * \brief This function starts the RPC object to listen requests.
				 *        This function will create and enable the DDS entities.
				 *
				 * \return If the operation works successful then 0 value is returned. In other case -1 is returned.
				 */
				int start();

				/**
				 * \brief This function close the RPC object communications.
				 *        This function will destroy the DDS entities.
				 */
				void stop();

				/// \brief Default destructor.
				virtual ~ServerRPC();

				/**
				 * \brief This function returns the name of this object.
				 *
				 * \return The name of this object.
				 */
				const char* getRPCName() const;

				/// \brief This function returns the function that is called when a new request is recevied.
				fExecFunction getExecFunction() const;

				/**
				 * @brief This function is called when a reply wants to be sent.
				 *        This function has to be implemented by the derived class.
				 *
				 * @param request Pointer to the associated request that was received from the client. Cannot be NULL.
				 * @param reply Pointer to the reply that will be sent to the client. Cannot be NULL.
				 * @return 0 value is returned if the reply could be sent. In other case -1 is returned.
				 */
				virtual int sendReply(void* request, void *reply) = 0;

				/**
				 * @brief This function deletes a request that was received from a client.
				 *        This function has to be implemented by the derived class because that class knows the type of the request.
				 *
				 * @param request Pointer to the request. Cannot be NULL.
				 */
				virtual void deleteRequestData(void *request) = 0;

				/// @brief DDS callback.
				virtual void on_data_available(DDS::DataReader* reader) = 0;

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

		    protected:

				/**
				 * @brief This funcion returns the DDS datareader that receives the requests from clients.
				 *
				 * @return Pointer to the DDS datareader.
				 */
				DDS::DataReader* getRequestDatareader() const;

				/**
				 * @brief This funcion returns the DDS datawriter that sends the replies to clients.
				 *
				 * @return Pointer to the DDS datawriter.
				 */
				DDS::DataWriter* getReplyDatawriter() const;

				/**
				 * @brief This funcion returns the server that contains this remote procedure object.
				 *
				 * @return Pointer to the server.
				 */
				Server* getServer() const;

		    private:
					
				/**
				 * \brief This function creates the DDS entities of the server.
				 *
				 * \return 0 value is returned when all entities was created succesfully. In other case, -1 value is returned.
				 */
				int createEntities();

				/**
				 * \brief This function enables all DDS entities of the server.
				 *
				 * \return 0 value is returned when all entities was enabled succesfully. In other case, -1 value is returned.
				 */
				int enableEntities();

								/**
				 * \brief This field stores the name of the remote procedure.
				 */
				std::string m_rpcName;

				/// \brief The type name of the request topic that the RPC object manages.
				std::string m_requestTypeName;

				/// \brief  The type name of the reply topic that te RPC object manages.
				std::string m_replyTypeName;

				/**
				 * \brief This field stores a pointer to the server.
				 */
				Server *m_server;
				/**
				 * \brief The subscriber used to communicate with the client. Client -> Server
				 */
				DDS::Subscriber *m_requestSubscriber;

				/**
				 * \brief The publisher used to communicate with the client. Server -> Client.
				 */
				DDS::Publisher *m_replyPublisher;

				/**
				 * \brief The topic used to communicate with the server. Client -> Server
				 */
				DDS::Topic *m_requestTopic;

				/**
				 * \brief Content filter used to take the expected request from clients.
				 */
				DDS::ContentFilteredTopic *m_requestFilter;

				/**
				 * \brief The topic used to communicate with the server. Server -> Client
				 */
				DDS::Topic *m_replyTopic;

				/**
				 * \brief The data reader used to communicate with the client. Client -> Server
				 */
				DDS::DataReader *m_requestDataReader;
        
				/**
				 * \brief The data writer used to communicate with the client. Server -> Client
				 */
				DDS::DataWriter *m_replyDataWriter;

				fExecFunction m_execFunction;
		};

	} // namespace RPCDDS
} // namespace eProsima

#endif // _SERVER_SERVERRPC_H_
