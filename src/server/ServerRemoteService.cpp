#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"
#include "utils/ThreadPoolManager.h"

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName, const char *replyTypeName,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    server(server), requestSubscriber(NULL), requestTopic(NULL), requestDataReader(NULL),
    replyPublisher(NULL), createRequestData(createRequestData),
    deleteRequestData(deleteRequestData), execFunction(execFunction)
{
    char topicNames[100];
	DDS_DataReaderQos requestReaderQos;

	REDAInlineListNode_init(&listNode.parent);
	listNode.service = this;

    if(serverParticipant != NULL)
    {
        if(remoteServiceName != NULL)
        {
            if((replyPublisher = serverParticipant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
            {
                if(replyTypeName != NULL)
                {
                    strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                    strncat(topicNames, "-", 1);
                    strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';
                    if((replyTopic = serverParticipant->create_topic(topicNames, replyTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                    {
                        if((replyDataWriter = serverParticipant->create_datawriter(replyTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                        {
                            if((requestSubscriber = serverParticipant->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                            {
                                if(requestTypeName != NULL)
                                {
                                    strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                                    strncat(topicNames, "-", 1);
                                    strncat(topicNames, requestTypeName, 49); topicNames[49] = '\0';
                                    if((requestTopic = serverParticipant->create_topic(topicNames, requestTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                                    {
										if((requestDataReader = serverParticipant->create_datareader(requestTopic, DDS_DATAREADER_QOS_DEFAULT, this, DDS_DATA_AVAILABLE_STATUS)) != NULL)
                                        {
                                            strncpy(this->remoteServiceName, remoteServiceName, 50);
                                            return;
                                        }


                                        serverParticipant->delete_topic(requestTopic);
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

                                serverParticipant->delete_subscriber(requestSubscriber);
                            }
                            else
                            {
                                printf("ERROR <ClientRemoteService>: Cannot create the reply subscriber\n");
                            }

                            serverParticipant->delete_datawriter(replyDataWriter);
                        }
                        else
                        {
                            printf("ERROR <ClientRemoteService>: Cannot create the request data writer\n");
                        }

                        serverParticipant->delete_topic(replyTopic);
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

                serverParticipant->delete_publisher(replyPublisher);
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

char* ServerRemoteService::getRemoteServiceName()
{
    return remoteServiceName;
}

execFunction ServerRemoteService::getExecFunction()
{
    return execFunction;
}

