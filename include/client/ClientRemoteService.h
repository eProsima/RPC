#ifndef _CLIENTREMOTESERVICE_H_
#define _CLIENTREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"

#include "utils/ddscs.h"
#include "utils/DDSCSMessages.h"

typedef struct ThreadLocalInfo{
	struct REDAInlineListNode parent;
	RTI_UINT32 localId;
	void * data;
	DDS_Boolean freshData;
	DDS_InstanceHandle_t instanceHandle;
	DDSWaitSet *waitSet;
} ThreadLocalInfo;

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
        ClientRemoteService(const char *remoteServiceName, long clientId, const char *requestTypeName, const char *replyTypeName, DDSDomainParticipant *clientParticipant);

        virtual ~ClientRemoteService();

        /**
         */
        DDSCSMessages execute(void *request, void* reply, unsigned int timeout);
        void replyRead();

		// Clean Thread local resources
		void removeInfo();

    protected:
		// Prevents multiThreaded execution
		bool take();
		void give();
		// Should be called only after take()
		ThreadLocalInfo * newInfo(RTI_UINT32 id);
		ThreadLocalInfo * getInfo(RTI_UINT32 id);
		ThreadLocalInfo * getInfo();

		// Foo dependent methods
		virtual DDS_ReturnCode_t write(void *data) = 0;
		virtual DDSCSMessages handleNewInstance(ThreadLocalInfo *info, DDSConditionSeq& conditionSeq) = 0;
		virtual DDSCSMessages handleNewSample(ThreadLocalInfo *info, void *request, DDSConditionSeq& conditionSeq) = 0;

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
         * \brief The read condition used to detect new Reply Topic instances.
         */
        DDSReadCondition *m_newReplyInstanceCondition;

		/**
         * \brief The read condition used to receive server's replies.
         */
        DDSReadCondition *m_replyCondition;

		/**
         * \brief The status condition used to wait for a matching publication (server).
         */
        DDSStatusCondition *m_matchingCondition;

        /**
         * \brief The waitset used to receive server replies.
         */
        DDSWaitSet *m_replyWaitset;

		/**
         * \brief The waitset used to wait for a matching publication (server).
         */
        DDSWaitSet *m_matchingPubWaitset;

        /**
         * \brief This function initialize the condition and waitset used to received server communications.
         *
         * \return If the function works successful then returns 0. In other case -1 is returned.
         */
        int createConditions();

        DDSContentFilteredTopic *m_replyFilter;

        unsigned long m_numSec;
		long clientID;

		RTIOsapiSemaphore *mutex;

		//Multithreaded client handling
		REDAInlineList threadLocalInfoList;

};
#endif // _CLIENTREMOTESERVICE_H_
