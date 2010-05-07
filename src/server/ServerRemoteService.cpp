#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"
#include "utils/ThreadPoolManager.h"

static const char* const CLASS_NAME = "ServerRemoteService";

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName, const char *replyTypeName,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    server(server), requestSubscriber(NULL), requestTopic(NULL), requestDataReader(NULL),
    replyPublisher(NULL), createRequestData(createRequestData),
    deleteRequestData(deleteRequestData), execFunction(execFunction)
{
    const char* const METHOD_NAME = "ServerRemoteService";
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
                        if((replyDataWriter = replyPublisher->create_datawriter(replyTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
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
										if((requestDataReader = requestSubscriber->create_datareader(requestTopic, DDS_DATAREADER_QOS_DEFAULT, this, DDS_DATA_AVAILABLE_STATUS)) != NULL)
                                        {
                                            strncpy(this->remoteServiceName, remoteServiceName, 50);
                                            return;
                                        }


                                        serverParticipant->delete_topic(requestTopic);
                                    }
                                    else
                                    {
                                        printf("ERROR<%s::%s: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
                                    }
                                }
                                else
                                {
                                    printf("ERROR<%s::%s: Bad parameter (replyTypeName)\n", CLASS_NAME, METHOD_NAME);
                                }

                                serverParticipant->delete_subscriber(requestSubscriber);
                            }
                            else
                            {
                                printf("ERROR<%s::%s: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
                            }

                            serverParticipant->delete_datawriter(replyDataWriter);
                        }
                        else
                        {
                            printf("ERROR<%s::%s: Cannot create the request data writer\n", CLASS_NAME, METHOD_NAME);
                        }

                        serverParticipant->delete_topic(replyTopic);
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s: Bad parameter (requestTypeName)\n", CLASS_NAME, METHOD_NAME);
                }

                serverParticipant->delete_publisher(replyPublisher);
            }
            else
            {
                printf("ERROR<%s::%s: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s: Bad parameter (remoteServiceName)\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s: Bad parameter (clientParticipant)\n", CLASS_NAME, METHOD_NAME);
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

