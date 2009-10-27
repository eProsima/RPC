#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"

void ServerRemoteService::on_data_available(DDSDataReader* reader)
{
    m_dataAvailable = true;
}

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, long serverId, const char *requestTypeName, const char *replyTypeName,
        fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData,
        fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    m_requestSubscriber(NULL), m_requestTopic(NULL), m_requestDataReader(NULL),
    m_replyPublisher(NULL), m_dataAvailable(false), m_createRequestData(createRequestData),
    m_deleteRequestData(deleteRequestData), m_execFunction(execFunction),
    m_createReplyData(createReplyData), m_deleteReplyData(deleteReplyData)
{
    char topicNames[100];
	DDS_DataReaderQos requestReaderQos;

    if(serverParticipant != NULL)
    {
        if(remoteServiceName != NULL)
        {
            if((m_replyPublisher = serverParticipant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
            {
                if(replyTypeName != NULL)
                {
                    strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                    strncat(topicNames, "-", 1);
                    strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';
                    if((m_replyTopic = serverParticipant->create_topic(topicNames, replyTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                    {
                        if((m_replyDataWriter = (RemoteServiceWriter*)serverParticipant->create_datawriter(m_replyTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                        {
                            if((m_requestSubscriber = serverParticipant->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                            {
                                if(requestTypeName != NULL)
                                {
                                    strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                                    strncat(topicNames, "-", 1);
                                    strncat(topicNames, requestTypeName, 49); topicNames[49] = '\0';
                                    if((m_requestTopic = serverParticipant->create_topic(topicNames, requestTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                                    {
										if((m_requestDataReader = (RemoteServiceReader*)serverParticipant->create_datareader(m_requestTopic, DDS_DATAREADER_QOS_DEFAULT, this, DDS_DATA_AVAILABLE_STATUS)) != NULL)
                                        {
                                            strncpy(m_remoteServiceName, remoteServiceName, 50);
                                            return;
                                        }


                                        serverParticipant->delete_topic(m_requestTopic);
                                    }
                                    else
                                    {
                                        printf("ERROR <ClientRemoteService>: Cannot create the reply topic\n");
                                    }
                                }
                                else
                                {
                                    printf("ERROR <ClientRemoteService>: Bad parameter (replyTypeName)\n");
                                }

                                serverParticipant->delete_subscriber(m_requestSubscriber);
                            }
                            else
                            {
                                printf("ERROR <ClientRemoteService>: Cannot create the reply subscriber\n");
                            }

                            serverParticipant->delete_datawriter(m_replyDataWriter);
                        }
                        else
                        {
                            printf("ERROR <ClientRemoteService>: Cannot create the request data writer\n");
                        }

                        serverParticipant->delete_topic(m_replyTopic);
                    }
                    else
                    {
                        printf("ERROR <ClientRemoteService>: Cannot create the request topic\n");
                    }
                }
                else
                {
                    printf("ERROR <ClientRemoteService>: Bad parameter (requestTypeName)\n");
                }

                serverParticipant->delete_publisher(m_replyPublisher);
            }
            else
            {
                printf("ERROR <ClientRemoteService>: Cannot create the request publisher\n");
            }
        }
        else
        {
            printf("ERROR <ClientRemoteService>: Bad parameter (remoteServiceName)\n");
        }
    }
    else
    {
        printf("ERROR <ClientRemoteService>: Bad parameter (clientParticipant)\n");
    }
}

bool ServerRemoteService::getDataAvailable()
{
    bool returnedValue = m_dataAvailable;
    
    m_dataAvailable = false;

    return returnedValue;
}

char* ServerRemoteService::getRemoteServiceName()
{
    return m_remoteServiceName;
}

void* ServerRemoteService::getClientRequest()
{
    void* data = NULL;
    DDS_SampleInfo info;

    data = m_createRequestData();

    if(data != NULL)
    {
        if((m_requestDataReader->take_next_sample(*(char*)data, info) != DDS_RETCODE_OK) ||
			(info.valid_data != DDS_BOOLEAN_TRUE))
        {
            m_deleteRequestData(data);
            data = NULL;
        }
    }
    else
    {
        printf("ERROR <getClientRequest>: Cannot allocate request data\n");
    }

    return data;
}

execFunction ServerRemoteService::getExecFunction()
{
    return m_execFunction;
}

int ServerRemoteService::sendReply(void *replyData)
{
    int returnedValue = -1;

    if(replyData != NULL)
    {
        if(m_replyDataWriter->write(*(char*)replyData, DDS_HANDLE_NIL) == DDS_RETCODE_OK)
        {
            returnedValue = 0;
        }
    }
    else
    {
        printf("ERROR <sendReply>: Bad parameter (replyData)\n");
    }

    return returnedValue;
}

int ServerRemoteService::sendError(void *requestData, DDSCSMessages errorMessage)
{
    int returnedValue = -1;
    void *replyData = NULL;

    replyData = m_createReplyData();

    if(replyData != NULL)
    {
        ((long*)replyData)[0] = ((long*)requestData)[0];
        ((long*)replyData)[1] = ((long*)requestData)[1];
        ((long*)replyData)[2] = errorMessage;

        if(m_replyDataWriter->write(*(char*)replyData, DDS_HANDLE_NIL) == DDS_RETCODE_OK)
        {
            returnedValue = 0;
        }

        m_deleteReplyData(replyData);
        m_deleteRequestData(requestData);
    }
    else
    {
        printf("ERROR <sendReply>: Bad parameter (replyData)\n");
    }


    return returnedValue;
}
