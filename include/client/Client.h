#ifndef _CLIENT_CLIENT_H_
#define _CLIENT_CLIENT_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace eProsima
{
	namespace DDSRPC
	{
        class Transport;
        class AsyncThread;
        class AsyncTask;

		/**
		 * \brief This class implements the common functionalities that all server proxies have.
		 */
		class DDSRPC_WIN32_DLL_API Client
		{
            public:

				/**
				 * \brief This function returns the DDS domain participant that use this server proxy.
				 *
				 * \return Pointer to the DDS domain participant.
				 */
				DDS::DomainParticipant* getParticipant();

				/**
				 * \brief This function adds a asynchronous task to the asynchronous thread.
				 *
				 * \param query The DDS query condition that is used to take the request. Cannot be NULL.
				 * \param task The asynchronos task created and associated with a request. Cannot be NULL.
				 * \param timeout The timeout used for this request.
				 * \return 0 value is returned if function works successfully. In other case -1 is returned.
				 */
                int addAsyncTask(DDS::QueryCondition *query, AsyncTask *task, long timeout);

				/**
				 * \brief This function gets the timeout used when a request is sent.
				 *
				 * \return The time out used by the server proxy. It is in milliseconds.
				 */
                long getTimeout();

				/**
				 * \brief This function sets te timeout that the server proxy will use in each request.
				 *
				 * \para milliseconds The timeout in milliseconds.
				 */
                void setTimeout(long milliseconds);

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param transport The transport that will be use the server proxy.
				 * \param domainId The domain id's value that the server proxy will set in the domain participant.
				 * \param milliseconds Timout in milliseconds for all requests.
				 * \exception eProsima::DDSRPC::ResourceException 
				 */
				Client(Transport *transport, int domainId = 0, long milliseconds = 10000);

				/// \brief The default destructor.
				virtual ~Client();

			private:

				/// \brief The domain identifier.
				int m_domainId;

				/**
				 * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
				 * This pointer should never be NULL.
				 */
				DDS::DomainParticipant *m_participant;

                AsyncThread *m_asyncThread;

                long m_timeout;
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_CLIENT_H_
