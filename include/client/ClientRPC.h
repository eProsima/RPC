#ifndef _CLIENT_CLIENTRPC_H_
#define _CLIENT_CLIENTRPC_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace boost
{
    class mutex;
}

namespace eProsima
{
	namespace DDSRPC
	{
        class Client;
        class AsyncTask;

		class DDSRPC_WIN32_DLL_API ClientRPC
		{
			public:

				/**
				 * \brief The constructor.
				 *
				 * \param remoteServiceName The name of this service. Cannot be NULL.
				 * \param requestTypeName The name of the type used to send the function's parameters. Max: 49 characteres. Cannot be NULL.
				 * \param replyTypeName The name of the type used to received the function's return values. Max: 49 characteres. Cannot be NULL.
				 * \param clientParticipant Pointer to the domain participant used by the client. Cannot be NULL.
				 */
				ClientRPC(const char *rpcName, const char *requestTypeName, const char *replyTypeName,
					Client *client);

				virtual ~ClientRPC();

				/**
				 */
				ReturnMessage execute(void *request, void* reply, long timeout);

				ReturnMessage executeAsync(void *request, AsyncTask *task, long timeout);

                void deleteQuery(DDS::QueryCondition *query);

				virtual ReturnMessage takeReply(void *reply, DDS::QueryCondition *query) = 0;

			protected:

				// Foo dependent methods
				virtual int registerInstance(void *data) = 0;
				virtual DDS::ReturnCode_t write(void *data) = 0;

				int createEntities(DDS::DomainParticipant *participant, const char *rpcName,
						const char *requestTypeName, const char *replyTypeName);

				int enableEntities();

                ReturnMessage checkServerConnection(DDS::WaitSet *waitSet, long timeout);

				/**
				 * \brief This field stores the name of the service.
				 */
				char m_rpcName[50];

                Client *m_client;

				/**
				 * \brief The publisher used to communicate with the server. Client -> Server
				 */
				DDS::Publisher *m_requestPublisher;

				/**
				 * \brief The subscriber used to communicate with the server. Server -> Client.
				 */
				DDS::Subscriber *m_replySubscriber;

				/**
				 * \brief The topic used to communicate with the server. Client -> Server
				 */
				DDS::Topic *m_requestTopic;

				/**
				 * \brief The topic used to communicate with the server. Server -> Client
				 */
				DDS::Topic *m_replyTopic;

				/**
				 * \brief The data writer used to communicate with the server. Client -> Server
				 */
				DDS::DataWriter *m_requestDataWriter;
        
				/**
				 * \brief The data reader used to communicate with the server. Server -> Client
				 */
				DDS::DataReader *m_replyDataReader;

				/**
				 * \brief The status condition used to wait for a matching publication (server).
				 */
				DDS::StatusCondition *m_matchingCondition;

				DDS::ContentFilteredTopic *m_replyFilter;

				//CHECK
				unsigned int m_numSec;
				unsigned int m_clientServiceId[4];
				DDS::InstanceHandle_t m_ih;

				boost::mutex *m_mutex;
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_CLIENTRPC_H_
