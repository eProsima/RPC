#ifndef _CLIENTREMOTESERVICE_H_
#define _CLIENTREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"

#include "utils/ddscs.h"
#include "utils/DDSCSMessages.h"

class DDSCS_WIN32_DLL_API ClientRemoteService
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
        ClientRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *replyTypeName, DDSDomainParticipant *clientParticipant);

        virtual ~ClientRemoteService();

        /**
         */
        DDSCSMessages execute(void *request, void* reply, unsigned int timeout);

    protected:
		// Prevents multiThreaded execution
		bool take();
		void give();

		// Foo dependent methods
        virtual int registerInstance(void *data) = 0;
		virtual DDS_ReturnCode_t write(void *data) = 0;
        virtual DDSCSMessages takeReply(void *reply, DDSQueryCondition *query) = 0;

		/**
         * \brief This field stores the name of the service.
         */
        char m_remoteServiceName[50];

        /**
         * \brief The publisher used to communicate with the server. Client -> Server
         */
        DDSPublisher *m_requestPublisher;

        /**
         * \brief The subscriber used to communicate with the server. Server -> Client.
         */
        DDSSubscriber *m_replySubscriber;

        /**
         * \brief The topic used to communicate with the server. Client -> Server
         */
        DDSTopic *m_requestTopic;

        /**
         * \brief The topic used to communicate with the server. Server -> Client
         */
        DDSTopic *m_replyTopic;

        /**
         * \brief The data writer used to communicate with the server. Client -> Server
         */
		DDSDataWriter *m_requestDataWriter;
        
        /**
         * \brief The data reader used to communicate with the server. Server -> Client
         */
		DDSDataReader *m_replyDataReader;

		/**
         * \brief The status condition used to wait for a matching publication (server).
         */
        DDSStatusCondition *m_matchingCondition;

		/**
         * \brief The waitset used to wait for a matching publication (server).
         */
        // TODO Es compartido por hilos. Cambiar.
        DDSWaitSet *m_matchingPubWaitset;

        int createEntities(DDSDomainParticipant *participant, const char *remoteServiceName,
                const char *requestTypeName, const char *replyTypeName);

        int enableEntities();

        /**
         * \brief This function initialize the condition and waitset used to received server communications.
         *
         * \return If the function works successful then returns 0. In other case -1 is returned.
         */
        int createConditions();

        int createServiceDetectSystem();

        DDSContentFilteredTopic *m_replyFilter;

        DDS_Long m_numSec;
		DDS_UnsignedLong m_clientServiceId[4];
        DDS_InstanceHandle_t m_ih;

		RTIOsapiSemaphore *mutex;
};
#endif // _CLIENTREMOTESERVICE_H_
