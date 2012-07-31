#ifndef _CLIENT_CLIENT_H_
#define _CLIENT_CLIENT_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"

#include "ndds_namespace_cpp.h"

namespace DDSRPC
{

	/**
	 * \file
	 * \brief This file contains the definition of the class DDSCSClient.
	 */
	class DDSRPC_WIN32_DLL_API Client
	{
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

			/**
			 * \brief This function creates and adds a new remote service.
			 *
			 * \param remoteServiceName The name of the new remote service. Max 49 charancters. Cannot be NULL.
			 * \param requestTypeName The name of the type used to send the function's parameters. Cannot be NULL.
			 * \param replyTypeName The name of the type used to receiver the function's return values. Cannot be NULL.
			 * \return If the function works succesfully, 0 is returned. In other case, -1 is returned.
			 */

			DDS::DomainParticipant* getParticipant();

		private:

			/// \brief The domain identifier.
			int m_domainId;

			/**
			 * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
			 * This pointer should never be NULL.
			 */
			DDS::DomainParticipant *m_participant;
	};

} // namespace DDSRPC

#endif // _CLIENT_CLIENT_H_
