#ifndef _SERVERREMOTESERVICE_H_
#define _SERVERREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"
#include "utils/RemoteServiceWriter.h"
#include "utils/RemoteServiceReader.h"
#include "utils/DDSCSTypedefs.h"
#include "utils/DDSCSMessages.h"

class ThreadPoolManager;
class ServerRemoteService;

typedef void(*execFunction)(ServerRemoteService*, void*);

typedef struct ServiceNode
{
	REDAInlineListNode parent;
	ServerRemoteService *service;
} ServiceNode;


class ServerRemoteService : public DDSDataReaderListener
{
    public:

        /**
         * \brief The constructor.
         *
         * \param remoteServiceName The name of this service. Cannot be NULL.
         * \param requestTypeName The name of the type used to send the function's parameters. Max: 49 characteres. Cannot be NULL.
         * \param replyTypeName The name of the type used to received the function's return values. Max: 49 characteres. Cannot be NULL.
         * \param serverParticipant Pointer to the domain participant used by the server. Cannot be NULL.
         */
        ServerRemoteService(const char *remoteServiceName, ThreadPoolManager* pool, const char *requestTypeName, const char *replyTypeName,
                fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData,
                fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData,
                fExecFunction execFunction, DDSDomainParticipant *clientParticipant);

        char* getRemoteServiceName();

		REDAInlineListNode* getNode()
		{
			return (REDAInlineListNode*)&listNode;
		}


		int sendReply(void* requestData, void *replyData);
        int sendReply(void *replyData);

        execFunction getExecFunction();
        
        int sendError(void *requestData, DDSCSMessages errorMessage);

        virtual void on_requested_deadline_missed(
                DDSDataReader* /*reader*/,
                const DDS_RequestedDeadlineMissedStatus& /*status*/) {}

        virtual void on_requested_incompatible_qos(
                DDSDataReader* /*reader*/,
                const DDS_RequestedIncompatibleQosStatus& /*status*/) {}

        virtual void on_sample_rejected(
                DDSDataReader* /*reader*/,
                const DDS_SampleRejectedStatus& /*status*/) {}

        virtual void on_liveliness_changed(
                DDSDataReader* /*reader*/,
                const DDS_LivelinessChangedStatus& /*status*/) {}

        virtual void on_sample_lost(
                DDSDataReader* /*reader*/,
                const DDS_SampleLostStatus& /*status*/) {}

        virtual void on_subscription_matched(
                DDSDataReader* /*reader*/,
                const DDS_SubscriptionMatchedStatus& /*status*/) {}

        virtual void on_data_available(DDSDataReader* reader);

    private:

		struct ServiceNode listNode;

        /**
         * \brief This field stores the name of the service.
         */
        char remoteServiceName[50];

        /**
         * \brief This field stores a pointer to the ThreadPoolManager.
         */
		ThreadPoolManager *threadPoolManager;
        /**
         * \brief The subscriber used to communicate with the client. Client -> Server
         */
        DDSSubscriber *requestSubscriber;

        /**
         * \brief The publisher used to communicate with the client. Server -> Client.
         */
        DDSPublisher *replyPublisher;

        /**
         * \brief The topic used to communicate with the server. Client -> Server
         */
        DDSTopic *requestTopic;

        /**
         * \brief The topic used to communicate with the server. Server -> Client
         */
        DDSTopic *replyTopic;

        /**
         * \brief The data reader used to communicate with the client. Client -> Server
         */
        RemoteServiceReader *requestDataReader;
        
        /**
         * \brief The data writer used to communicate with the client. Server -> Client
         */
        RemoteServiceWriter *replyDataWriter;


        fCreateRequestData createRequestData;

        fDeleteRequestData deleteRequestData;

        fCreateReplyData createReplyData;

        fDeleteReplyData deleteReplyData;

        fExecFunction execFunction;

};

#endif // _SERVERREMOTESERVICE_H_
