#ifndef _CLIENT_CLIENT_H_
#define _CLIENT_CLIENT_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"

#include "ndds_namespace_cpp.h"

namespace eProsima
{
	namespace DDSRPC
	{
        class AsyncThread;
        class AsyncTask;

		/**
		 * \file
		 * \brief This file contains the definition of the class DDSCSClient.
		 */
		class DDSRPC_WIN32_DLL_API Client
		{
            public:

				DDS::DomainParticipant* getParticipant();

                int addAsyncTask(DDS::QueryCondition *query, AsyncTask *task);

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param The client identifier.
				 * \param domainId The domain id's value that the client will have.
				 */
				Client(int domainId = 0, const char *qosLibrary = NULL,
								 const char *qosProfile = NULL);

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
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_CLIENT_H_
