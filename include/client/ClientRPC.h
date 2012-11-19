#ifndef _CLIENT_CLIENTRPC_H_
#define _CLIENT_CLIENTRPC_H_

#include "utils/rpcdds.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace boost
{
    class mutex;
}

namespace eProsima
{
	namespace RPCDDS
	{
        class Client;
        class AsyncTask;

		/**
		 * \brief This class implements a remote procedure call in server's proxy side.
		 */
		class RPCDDS_WIN32_DLL_API ClientRPC
		{
			public:

				/**
				 * \brief The default constructor.
				 *
				 * \param rpcName The name associated with this RPC object. Cannot be NULL:
				 * \param requestTypeName The type name of the request topic that the RPC object manages. Cannot be NULL.
				 * \param replyTypeName The type name of the reply topic that te RPC object manages. Cannot be NULL:
				 * \param client Pointer to the eProsima::RPCDDS::Client class parent. Cannot be NULL.
				 */
				ClientRPC(const char *rpcName, const char *requestTypeName, const char *replyTypeName,
					Client *client);

				/// \brief The default destructor.
				virtual ~ClientRPC();

				/**
				 * \brief This function executes a synchronous RPC call.
				 * Usually this function sends the  request to the server and waits the reply.
				 * Wait mechanism is implemented with a DDS WaitSet.
				 *
				 * \param request Pointer to the allocated request. Cannot be NULL.
				 * \param reply Pointer to the allocated reply. This memory will be filled with the incomming data.
				 *        The pointer can be NULL and this means that the RPC call is oneway.
				 * \param timeout The timeout used to wait the reply from server. The value should be in milliseconds.
				 * \throw eProsima::RPCDDS::ServerTimeoutException
				 */
				ReturnMessage execute(void *request, void* reply, long timeout);

				/**
				 * \brief This function executes a asynchronous RPC call.
				 * This function sends the  request to the server, schedule the asynchronous task and return the execution.
				 *
				 * \param request Pointer to the allocated request. Cannot be NULL.
				 * \param task The asynchronous task that will be schedule to wait the reply. Cannot be NULL.
				 * \param timeout The timeout used to wait the reply from server. The value should be in milliseconds.
				 * \return The return message.
				 */
				ReturnMessage executeAsync(void *request, AsyncTask *task, long timeout);

				/**
				 *  \brief This auxiliar function is used to delete a DDS QueryCondition.
				 *
				 *  \param query DDS QueryCondition to be released.
				 */
                void deleteQuery(DDS::QueryCondition *query);

				/**
				 * \brief This function takes the reply from the DDS DataReader using the DDS QueryCondition.
				 *        This virtual function has to be implemented by the specific code.    
				 *
				 * \param reply Pointer to the allocated reply. This object is used to copy the received reply. Cannot be NULL.
				 * \param query DDS QueryCondition used to take the reply from the DDS Datareader. Cannot be NULL.
				 * \return The returned message.
				 */
				virtual ReturnMessage takeReply(void *reply, DDS::QueryCondition *query) = 0;

			protected:

				/**
				 * \brief This function writes the request using the DDS DataWriter.
				 *        This virtual function has to be implemented by the specific code.
				 *
				 * \param data Pointer to the request. Cannot be NULL.
				 * \return DDS return code that write function returns.
				 */
				virtual DDS::ReturnCode_t write(void *data) = 0;

				/**
				 * @brief This funcion returns the DDS datareader that receives the replies from the server.
				 *
				 * @return Pointer to the DDS datareader.
				 */
				DDS::DataReader* getReplyDatareader() const;

				/**
				 * @brief This funcion returns the DDS datawriter that sends the request to the client.
				 *
				 * @return Pointer to the DDS datawriter.
				 */
				DDS::DataWriter* getRequestDatawriter() const;

		private:

				/**
				 * \brief This function creates the DDS entities used by the RPC object.
				 *
				 * \param participant DDS Domain Participant used to create the DDS entities. Cannot be NULL.
				 * \param rpcName The name associated to this RPC. Cannot be NULL:
				 * \param requestTypeName The type name of the request topic. Cannot be NULL.
				 * \param replyTypeName The type name of the reply topic. Cannot be NULL.
				 * \return 0 value is returned if all entities was created succesfully. -1 in other case.
				 */
				int createEntities(DDS::DomainParticipant *participant, const char *rpcName,
						const char *requestTypeName, const char *replyTypeName);

				/**
				 * \brief This function enables the DDS entities.
				 *
				 * \return 0 value is returned if all entities was enabled succesfully. -1 in other case.
				 */
				int enableEntities();

				/**
				 * \brief This functio checks that the server was discovery.
				 *
				 * \param DDS WaitSet used to make the comprobation.
				 * \param timeout Timeout used to the comprobation. Its value is in milliseconds.
				 * \return RPCDDS return message.
				 */
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

				/**
				 * \brief Content filter used to take the expected reply from the server.
				 */
				DDS::ContentFilteredTopic *m_replyFilter;

				/// \brief The next sequence number for a request.
				unsigned int m_numSec;

				/// \brief The identifier used as client.
				unsigned int m_clientServiceId[4];

				/// \brief Mutex used to ensure that sequence number is safe-thread.
				boost::mutex *m_mutex;
		};

	} // namespace RPCDDS
} // namespace eProsima

#endif // _CLIENT_CLIENTRPC_H_
