#include "server/DDSCSServer.h"

#ifndef ndds_utility_cpp_h
	#include "ndds_utility_cpp.h"
#endif

using namespace std;

DDSCSServer::DDSCSServer() : m_serverId(0), m_domainId(0), m_participant(NULL), m_threadPoolManager(NULL)
{
    DDS_DomainParticipantQos participantQOS;

    m_participant = DDSTheParticipantFactory->create_participant(
            m_domainId, DDS_PARTICIPANT_QOS_DEFAULT,
            NULL, DDS_STATUS_MASK_NONE);

    if (m_participant != NULL)
    {
        if(m_participant->get_qos(participantQOS) == DDS_RETCODE_OK)
        {
            m_serverId = participantQOS.wire_protocol.participant_id;
        }
    }
    else
    {
        printf("ERROR <DDSCSClient>: create_participant error\n");
    }

    m_threadPoolManager = new ThreadPoolManager(4);

    if(m_threadPoolManager == NULL)
    {
        printf("ERROR <DDSCSServer>: cannot create thread pool manager\n");
    }

    printf("INFO <DDSCSServer>: Created server with ID %ld\n", m_serverId);
}

DDSCSServer::DDSCSServer(int domainId) : m_serverId(0), m_domainId(domainId), m_participant(NULL), m_threadPoolManager(NULL)
{
    DDS_DomainParticipantQos participantQOS;

    // Creating the domain participant which is associated with the client
    m_participant = DDSTheParticipantFactory->create_participant(
            m_domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
            NULL /* listener */, DDS_STATUS_MASK_NONE);

    if (m_participant != NULL)
    {
        if(m_participant->get_qos(participantQOS) == DDS_RETCODE_OK)
        {
            m_serverId = participantQOS.wire_protocol.participant_id;
        }
    }
    else
    {
        printf("ERROR <DDSCSClient>: create_participant error\n");
    }

    m_threadPoolManager = new ThreadPoolManager(4);

    if(m_threadPoolManager == NULL)
    {
        printf("ERROR <DDSCSServer>: cannot create thread pool manager\n");
    }

    printf("INFO <DDSCSServer>: Created server with ID %ld\n", m_serverId);
}

DDSCSServer::~DDSCSServer()
{
    DDS_ReturnCode_t retcode;

    if(m_participant != NULL)
    {
        retcode = m_participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR <~DDSCSClient>: delete_contained_entities error %d\n", retcode);
        }

        retcode = DDSTheParticipantFactory->delete_participant(m_participant);
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR <~DDSCSClient> delete_participant error %d\n", retcode);
        }
    }

    if(m_threadPoolManager != NULL)
    {
        delete m_threadPoolManager;
    }
}

DDSDomainParticipant* DDSCSServer::getParticipant()
{ 
    return m_participant;
}

long DDSCSServer::getServerId()
{
    return m_serverId;
}

int DDSCSServer::createRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *replyTypeName,
        fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData,
        fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData,
        fExecFunction execFunction)
{
    int returnedValue = -1;
    long hashNumber = 0;

    ServerRemoteService *newRemoteService = NULL;

    if(remoteServiceName != NULL)
    {
        if(requestTypeName != NULL)
        {
            if(replyTypeName != NULL)
            {
                if((newRemoteService = new ServerRemoteService(remoteServiceName, m_serverId, requestTypeName, replyTypeName,
                                createRequestData, deleteRequestData, createReplyData,
                                deleteReplyData, execFunction, m_participant)) != NULL)
                {
                    hashNumber = getHashNumberOfService(remoteServiceName);
                    m_remoteServices.insert(pair<long, ServerRemoteService*>(hashNumber, newRemoteService));
                    returnedValue = 0;
                }
                else
                {
                    printf("ERROR <createRemoteService>: Cannot create the structure of the new remote service\n");
                }
            }
            else
            {
                printf("ERROR <createRemoteService>: Bad parameter (replyTypeName)\n");
            }
        }
        else
        {
            printf("ERROR <createRemoteService>: Bad parameter (requestTypeName)\n");
        }
    }
    else
    {
        printf("ERROR <createRemoteService>: Bad parameter (remoteServiceName)\n");
    }

    return returnedValue;
}

long DDSCSServer::getHashNumberOfService(const char *remoteServiceName)
{
    long hashNumber = 0;
    char *auxPointer = (char*)remoteServiceName;

    if(auxPointer != NULL)
    {
        while(auxPointer[0] != '\0')
        {
            hashNumber = (hashNumber + (long)auxPointer[0]) << 2;
            auxPointer++;
        }
    }

    return hashNumber;
}

void DDSCSServer::executeServer()
{
    map<long, ServerRemoteService*>::const_iterator it;
    DDS_Duration_t period = {0, 100};
    void *requestData = NULL;
    DDSCSMessages retValue;
	while(1)
    {
        for(it = m_remoteServices.begin(); it != m_remoteServices.end(); ++it)
        {
            if(it->second->getDataAvailable() == true)
            {
                while((requestData = it->second->getClientRequest()) != NULL)
                {
                    if((retValue = m_threadPoolManager->executeJob(it->second->getExecFunction(), requestData, this)) != OPERATION_SUCCESSFUL)
                    {
                        if(it->second->sendError(requestData, retValue) == -1)
                        {
                            printf("ERROR <executeServer>: Cannot send the error to the client\n");
                        }
                    }
                }
			}
        }
        NDDSUtility::sleep(period);
    }
}

int DDSCSServer::sendReply(const char *remoteServiceName, void *requestData, void *replyData)
{
    int returnedValue = -1;
    long hashNumber = 0;
    map<long, ServerRemoteService*>::const_iterator it;

    if(remoteServiceName != NULL)
    {
        if(requestData != NULL)
        {
            if(replyData != NULL)
            {
                hashNumber = getHashNumberOfService(remoteServiceName);
                ((long*)replyData)[0] = ((long*)requestData)[0];
                ((long*)replyData)[1] = ((long*)requestData)[1];
                ((long*)replyData)[2] = OPERATION_SUCCESSFUL;

                for(it = m_remoteServices.begin(); it != m_remoteServices.end(); ++it)
                {
                    if(it->first == hashNumber)
                    {
                        if(it->second->sendReply(replyData) == 0)
                        {
                            returnedValue = 0;
                            break;
                        }
                    }
                }
            }
            else
            {
                printf("ERROR <sendReply>>: Bad parameter (replyData)\n");
            }
        }
        else
        {
            printf("ERROR <sendReply>>: Bad parameter (requestData)\n");
        }
    }
    else
    {
        printf("ERROR <sendReply>>: Bad parameter (remoteServiceName)\n");
    }

    return returnedValue;
}
    
