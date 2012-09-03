#ifndef _SERVER_SERVER_H_
#define _SERVER_SERVER_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Typedefs.h"
#include "utils/Version.h"

#include <list>

#define DDSCS_DEFAULT_PERIOD_MILLISEC 5000
#define DDSCS_MIN_THREADS_DEFAULT 5

namespace eProsima
{
	namespace DDSRPC
	{

        class Transport;
		class ThreadPoolManager;
		class ServerRPC;
	 
		/**
		 * \file
		 * \brief This file contains the definition of the class DDSCSServer
		 */
		class DDSRPC_WIN32_DLL_API Server
		{

			public:

				void executeServer(unsigned int milliseconds = DDSCS_DEFAULT_PERIOD_MILLISEC);

				void schedule(fExecFunction execFunction, void *data, ServerRPC *service);

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param domainId The domain id's value that the client will have.
				 */
				Server(Transport *transport, int domainId = 0, unsigned int threadCount = DDSCS_MIN_THREADS_DEFAULT);

				/// \brief The default destructor.
				virtual ~Server();

				/**
				 * \brief This function creates and adds a new remote service.
				 *
				 * \param remoteServiceName The name of the new remote service. Max 49 charancters. Cannot be NULL.
				 * \param requestTypeName The name of the type used to send the function's parameters. Cannot be NULL.
				 * \param replyTypeName The name of the type used to receiver the function's return values. Cannot be NULL.
				 * \return If the function works succesfully, 0 is returned. In other case, -1 is returned.
				 */
				int setRPC(ServerRPC *newRPC);

				DDS::DomainParticipant* getParticipant();

			private:

				/// \brief The domain identifier.
				int m_domainId;

				/**
				 * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
				 * This pointer should never be NULL.
				 */
				DDS::DomainParticipant *m_participant;
        
				/// \brief The list that contains all the remote services.
				std::list<ServerRPC*> m_rpcList;

				ThreadPoolManager *m_threadPoolManager;

				void deleteRPCs();
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVER_H_
