#ifndef _DDSCSSERVER_H_
#define _DDSCSSERVER_H_

#include <map>
#include "ndds/ndds_cpp.h"
#include "utils/ddscs.h"
#include "utils/DDSCSMessages.h"
#include "utils/ThreadPoolManager.h"
#include "utils/DDSCSTypedefs.h"
#include "server/ServerRemoteService.h"


/**
 * \file
 * \brief This file contains the definition of the class DDSCSServer
 */
class DDSCS_WIN32_DLL_API DDSCSServer
{

    public:

        void executeServer();

        int sendReply(const char *remoteServiceName, void *requestData, void *replyData);

    protected:

        /**
         * \brief The default constructor. The server is created with the domain id's value as zero.
         * In the contructor, the associated domain participant is created.
         *
         * \param The server identifier.
         */
        DDSCSServer();

        /**
         * \brief A constructor. The associated domain participant is created.
         *
         * \param The client identifier.
         * \param domainId The domain id's value that the client will have.
         */
        DDSCSServer(int domainId);

        /// \brief The default destructor.
        virtual ~DDSCSServer();

        /**
         * \brief This function creates and adds a new remote service.
         *
         * \param remoteServiceName The name of the new remote service. Max 49 charancters. Cannot be NULL.
         * \param requestTypeName The name of the type used to send the function's parameters. Cannot be NULL.
         * \param replyTypeName The name of the type used to receiver the function's return values. Cannot be NULL.
         * \return If the function works succesfully, 0 is returned. In other case, -1 is returned.
         */
        int createRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *replyTypeName,
                fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData, 
                fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData, fExecFunction execFunction);

        DDSDomainParticipant* getParticipant();

        long getServerId();

    private:

        /**
         * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
         * This pointer should never be NULL.
         */
        DDSDomainParticipant *m_participant;

        long m_serverId;

        /// \brief The domain identifier.
        int m_domainId;
        
        /// \brief The map contains all the remote services.
        std::map<long, ServerRemoteService*> m_remoteServices;

        ThreadPoolManager *m_threadPoolManager;

        // Return the hast number of a service.
        long getHashNumberOfService(const char *remoteServiceName);
};
#endif // _DDSCSSERVER_H_
