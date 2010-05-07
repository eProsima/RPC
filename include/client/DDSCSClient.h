#ifndef _DDSCSCLIENT_H_
#define _DDSCSCLIENT_H_

#include "ndds/ndds_cpp.h"
#include "utils/DDSCSMessages.h"
#include "utils/ddscs.h"

/**
 * \file
 * \brief This file contains the definition of the class DDSCSClient.
 */
class DDSCS_WIN32_DLL_API DDSCSClient
{
    protected:

        /**
         * \brief A constructor. The associated domain participant is created.
         *
         * \param The client identifier.
         * \param domainId The domain id's value that the client will have.
         */
        DDSCSClient(int domainId = 0);

        /// \brief The default destructor.
        virtual ~DDSCSClient();

        /**
         * \brief This function creates and adds a new remote service.
         *
         * \param remoteServiceName The name of the new remote service. Max 49 charancters. Cannot be NULL.
         * \param requestTypeName The name of the type used to send the function's parameters. Cannot be NULL.
         * \param replyTypeName The name of the type used to receiver the function's return values. Cannot be NULL.
         * \return If the function works succesfully, 0 is returned. In other case, -1 is returned.
         */

        DDSDomainParticipant* getParticipant();

		/*
		 * \brief This function return a pointer the identifier of the client.
		 * Type of client identifier is DDS_Long[3]. Don't modify client identifier.
		 */
        DDS_UnsignedLong* getClientId();

    private:

        /**
         * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
         * This pointer should never be NULL.
         */
        DDSDomainParticipant *m_participant;

        DDS_UnsignedLong m_clientId[3];

        /// \brief The domain identifier.
        int m_domainId;
};

#endif // _DDSCSCLIENT_H_
