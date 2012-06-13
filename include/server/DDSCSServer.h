#ifndef _DDSCSSERVER_H_
#define _DDSCSSERVER_H_

#include "ndds/ndds_cpp.h"
#include "utils/ddscs.h"
#include "utils/DDSCSMessages.h"
#include "utils/ThreadPoolManager.h"
#include "utils/DDSCSTypedefs.h"
#include "server/ServerRemoteService.h"

#define DDSCS_DEFAULT_PERIOD_SEC 5
#define DDSCS_DEFAULT_PERIOD_NSEC 0

/**
 * \file
 * \brief This file contains the definition of the class DDSCSServer
 */
class DDSCS_WIN32_DLL_API DDSCSServer
{

    public:

		ThreadPoolManager* getPool();

		void executeServer(DDS_Long seconds = DDSCS_DEFAULT_PERIOD_SEC, DDS_UnsignedLong nanoseconds = DDSCS_DEFAULT_PERIOD_NSEC);

		void schedule(void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*), void *data, ServerRemoteService *service);

    protected:

        /**
         * \brief A constructor. The associated domain participant is created.
         *
         * \param domainId The domain id's value that the client will have.
         */
        DDSCSServer(int domainId = 0, unsigned int threadCount = DDSCS_MIN_THREADS_DEFAULT,
            const char *qosLibrary = NULL, const char *qosProfile = NULL);

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
        int setRemoteService(ServerRemoteService *newRemoteService);

        DDSDomainParticipant* getParticipant();

    private:

        /// \brief The domain identifier.
        int domainId;

        /**
         * \brief Each client is associated with a DDSDomainParticipant. This participant have to be created in the client creation.
         * This pointer should never be NULL.
         */
        DDSDomainParticipant *participant;
        
        /// \brief The list that contains all the remote services.
        REDAInlineList remoteServicesList;

        ThreadPoolManager *threadPoolManager;

		void deleteServices();
};
#endif // _DDSCSSERVER_H_
