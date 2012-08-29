#ifndef _SERVER_SERVERPC_H_
#define _SERVER_SERVERRPC_H_

#include "utils/ddsrpc.h"
#include "utils/Typedefs.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace eProsima
{
	namespace DDSRPC
	{

		class Server;
		class ThreadPoolManager;

		class DDSRPC_WIN32_DLL_API ServerRPC : public DDS::DataReaderListener
		{
			public:

				/**
				 * \brief The constructor.
				 *
				 * \param remoteServiceName The name of this service. Cannot be NULL.
				 * \param requestTypeName The name of the type used to send the function's parameters. Max: 49 characteres. Cannot be NULL.
				 * \param replyTypeName The name of the type used to received the function's return values. Max: 49 characteres. Cannot be NULL.
				 * \param serverParticipant Pointer to the domain participant used by the server. Cannot be NULL.
				 */
				ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
					const char *replyTypeName, fExecFunction execFunction, DDS::DomainParticipant *serverParticipant);

				char* getRPCName();

				//CHECK DDS_UnsignedLong
				unsigned int* getServerId();

				fExecFunction getExecFunction();

				int createEntities(DDS::DomainParticipant *participant, const char *rpcName,
						const char *requestTypeName, const char *replyTypeName);

				int enableEntities();

				virtual int sendReply(void* request, void *reply, ReturnMessage errorMessage = OPERATION_SUCCESSFUL) = 0;

				virtual void deleteRequestData(void *request) = 0;

				virtual void on_data_available(DDS::DataReader* reader) = 0;

				virtual void on_requested_deadline_missed(
						DDS::DataReader* reader,
						const DDS::RequestedDeadlineMissedStatus& status) {}

				virtual void on_requested_incompatible_qos(
						DDS::DataReader* reader,
						const DDS::RequestedIncompatibleQosStatus& status) {}

				virtual void on_sample_rejected(
						DDS::DataReader* reader,
						const DDS::SampleRejectedStatus& status) {}

				virtual void on_liveliness_changed(
						DDS::DataReader* reader,
						const DDS::LivelinessChangedStatus& status) {}

				virtual void on_sample_lost(
						DDS::DataReader* reader,
						const DDS::SampleLostStatus& status) {}

				virtual void on_subscription_matched(
						DDS::DataReader* reader,
						const DDS::SubscriptionMatchedStatus& status) {}

			protected:

				/**
				 * \brief This field stores the name of the service.
				 */
				char m_rpcName[50];

				/**
				 * \brief This field stores a pointer to the ThreadPoolManager.
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

				//CHECK
				unsigned int m_serverId[4];
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVERRPC_H_
