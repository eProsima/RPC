#ifndef _CLIENTREMOTESERVICE_H_
#define _CLIENTREMOTESERVICE_H_

#include "ndds/ndds_cpp.h"

#include "utils/ddscs.h"
#include "utils/DDSCSMessages.h"

namespace boost
{
    class mutex;
}

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
        ClientRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *requestQosLibrary,
            const char *requestQosProfile, const char *replyTypeName, const char *replyQosLibrary, const char *replyQosProfile,
            DDSDomainParticipant *clientParticipant);

        virtual ~ClientRemoteService();

        /**
         */
        DDSCSMessages execute(void *request, void* reply, unsigned int timeout);

    protected:

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

        int createEntities(DDSDomainParticipant *participant, const char *remoteServiceName,
                const char *requestTypeName, const char *requestQosLibrary, const char *requestQosProfile,
                const char *replyTypeName, const char *replyQosLibrary, const char *replyQosProfile);

        int enableEntities();

        DDSContentFilteredTopic *m_replyFilter;

        DDS_UnsignedLong m_numSec;
		DDS_UnsignedLong m_clientServiceId[4];
        DDS_InstanceHandle_t m_ih;

        boost::mutex *m_mutex;
};
#endif // _CLIENTREMOTESERVICE_H_
