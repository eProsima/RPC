#ifndef _DDSCSCLIENT_H_
#define _DDSCSCLIENT_H_

#include "dds_cpp/dds_cpp_domain.h"
#include "client/ClientRemoteService.h"
#include "utils/DDSCSMessages.h"
#include <map>

/**
 * \file
 * \brief This file contains the definition of the class DDSCSClient.
 */
class DDSCSClient
{
    protected:

        /**
         * \brief The default constructor. The client is created with the domain id's value as zero.
         * In the contructor, the associated domain participant is created.
         *
         * \param The client identifier.
         */
        DDSCSClient();

        /**
         * \brief A constructor. The associated domain participant is created.
         *
         * \param The client identifier.
         * \param domainId The domain id's value that the client will have.
         */
        DDSCSClient(int domainId);

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
        int createRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *replyTypeName);

        DDSCSMessages executeRemoteService(void *requestData, const char *remoteServiceName, void *replyData, int timeout = 2);

        DDSDomainParticipant* getParticipant();

        long getClientId();

    private:

        /**
         * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
         * This pointer should never be NULL.
         */
        DDSDomainParticipant *m_participant;

        long m_clientId;

        /// \brief The domain identifier.
        int m_domainId;

        /// \brief The map contains all the remote services.
        std::map<long, ClientRemoteService*> m_remoteServices;

        // Return the hast number of a service.
        long getHashNumberOfService(const char *remoteServiceName);
};

#endif // _DDSCSCLIENT_H_
