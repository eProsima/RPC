#include "client/DDSCSClient.h"

using namespace std;

DDSCSClient::DDSCSClient() : m_clientId(0), m_domainId(0), m_participant(NULL)
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
            m_clientId = participantQOS.wire_protocol.participant_id;
        }
    }
    else
    {
        printf("ERROR <DDSCSClient>: create_participant error\n");
    }

    printf("INFO <DDSCSClient>: Created client with ID %ld\n", m_clientId);
}

DDSCSClient::DDSCSClient(int domainId) : m_clientId(0), m_domainId(domainId), m_participant(NULL)
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
            m_clientId = participantQOS.wire_protocol.participant_id;
        }
    }
    else
    {
        printf("ERROR <DDSCSClient>: create_participant error\n");
    }

    printf("INFO <DDSCSClient>: Created client with ID %ld\n", m_clientId);
}

DDSCSClient::~DDSCSClient()
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
}

int DDSCSClient::createRemoteService(const char *remoteServiceName, const char *requestTypeName, const char *replyTypeName)
{
    int returnedValue = -1;
    long hashNumber = 0;

    ClientRemoteService *newRemoteService = NULL;

    if(remoteServiceName != NULL)
    {
        if(requestTypeName != NULL)
        {
            if(replyTypeName != NULL)
            {
                if((newRemoteService = new ClientRemoteService(remoteServiceName, m_clientId, requestTypeName, replyTypeName, m_participant)) != NULL)
                {
                    hashNumber = getHashNumberOfService(remoteServiceName);
                    m_remoteServices.insert(pair<long, ClientRemoteService*>(hashNumber, newRemoteService));
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

long DDSCSClient::getHashNumberOfService(const char *remoteServiceName)
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

DDSDomainParticipant* DDSCSClient::getParticipant()
{ 
    return m_participant;
}

DDSCSMessages DDSCSClient::executeRemoteService(void *requestData, const char *remoteServiceName, void *replyData, int timeout)
{
    long hashNumber = 0;
    map<long, ClientRemoteService*>::const_iterator it;
    DDSCSMessages returnedValue = CLIENT_ERROR;

    if(remoteServiceName != NULL)
    {
        hashNumber = getHashNumberOfService(remoteServiceName);
        *(long*)requestData = m_clientId;

        for(it = m_remoteServices.begin(); it != m_remoteServices.end(); ++it)
        {
            if(it->first == hashNumber)
            {
                if((returnedValue = it->second->execute(requestData, timeout)) == OPERATION_SUCCESSFUL)
                {
                    returnedValue = RECEIVED_OTHER_REQUEST;
                    if(it->second->getServerReply(requestData, replyData) == 0)
                    {
                        returnedValue = (DDSCSMessages)((long*)replyData)[2];
                    }
                    break;
                }
            }
        }
    }
    else
    {
        printf("ERROR <executeRemoteService>>: Bad parameter (remoteServiceName)\n");
    }

    return returnedValue;
}

long DDSCSClient::getClientId()
{
    return m_clientId;
}
