#ifndef _SERVERREMOTESERVICE_H_
#define _SERVERREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"
#include "utils/RemoteServiceWriter.h"
#include "utils/RemoteServiceReader.h"
#include "utils/DDSCSTypedefs.h"
#include "utils/DDSCSMessages.h"

class DDSCSServer;

typedef void(*execFunction)(DDSCSServer*, void*);

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
        ServerRemoteService(const char *remoteServiceName, long serverId, const char *requestTypeName, const char *replyTypeName,
                fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData,
                fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData,
                fExecFunction execFunction, DDSDomainParticipant *clientParticipant);

        bool getDataAvailable();

        char* getRemoteServiceName();

        void* getClientRequest();

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

        /**
         * \brief This field stores the name of the service.
         */
        char m_remoteServiceName[50];

        /**
         * \brief The subscriber used to communicate with the client. Client -> Server
         */
        DDSSubscriber *m_requestSubscriber;

        /**
         * \brief The publisher used to communicate with the client. Server -> Client.
         */
        DDSPublisher *m_replyPublisher;

        /**
         * \brief The topic used to communicate with the server. Client -> Server
         */
        DDSTopic *m_requestTopic;

        /**
         * \brief The topic used to communicate with the server. Server -> Client
         */
        DDSTopic *m_replyTopic;

        /**
         * \brief The data reader used to communicate with the client. Client -> Server
         */
        RemoteServiceReader *m_requestDataReader;
        
        /**
         * \brief The data writer used to communicate with the client. Server -> Client
         */
        RemoteServiceWriter *m_replyDataWriter;

        bool m_dataAvailable;

        fCreateRequestData m_createRequestData;

        fDeleteRequestData m_deleteRequestData;

        fCreateReplyData m_createReplyData;

        fDeleteReplyData m_deleteReplyData;

        fExecFunction m_execFunction;

};

#endif // _SERVERREMOTESERVICE_H_
