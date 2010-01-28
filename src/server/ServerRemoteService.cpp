#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"
#include "utils/ThreadPoolManager.h"

//void ServerRemoteService::on_data_available(DDSDataReader* reader)
//{
//     void* data = NULL;
//    DDS_SampleInfo info;
//
//    data = createRequestData();
//
//    if(data != NULL)
//    {
//        if((requestDataReader->take_next_sample(*(char*)data, info) != DDS_RETCODE_OK) ||
//			(info.valid_data != DDS_BOOLEAN_TRUE))
//        {
//            deleteRequestData(data);
//            data = NULL;
//		}
//		else
//		{
//			server->getPool()->schedule(getExecFunction(), data, server, this);
//		}
//    }
//    else
//    {
//        printf("ERROR <getClientRequest>: Cannot allocate request data\n");
//    }
//}

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName, const char *replyTypeName,
        fCreateRequestData createRequestData, fDeleteRequestData deleteRequestData,
        fCreateReplyData createReplyData, fDeleteReplyData deleteReplyData,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    server(server), requestSubscriber(NULL), requestTopic(NULL), requestDataReader(NULL),
    replyPublisher(NULL), createRequestData(createRequestData),
    deleteRequestData(deleteRequestData), execFunction(execFunction),
    createReplyData(createReplyData), deleteReplyData(deleteReplyData)
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

int ServerRemoteService::sendReply(void* requestData, void *replyData)
{
	int returnedValue = -1;
    if(requestData != NULL)
    {
        if(replyData != NULL)
        {
            ((long*)replyData)[0] = ((long*)requestData)[0];
            ((long*)replyData)[1] = ((long*)requestData)[1];
            ((long*)replyData)[2] = ((long*)requestData)[2];
            ((long*)replyData)[3] = OPERATION_SUCCESSFUL;
			returnedValue = sendReply(replyData);

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

    return returnedValue;
}

//int ServerRemoteService::sendReply(void *replyData)
//{
//    int returnedValue = -1;
//
//    if(replyDataWriter->write(*(char*)replyData, DDS_HANDLE_NIL) == DDS_RETCODE_OK)
//    {
//		returnedValue = 0;
//    }
//    return returnedValue;
//}
//
//int ServerRemoteService::sendError(void *requestData, DDSCSMessages errorMessage)
//{
//    int returnedValue = -1;
//    void *replyData = NULL;
//
//    replyData = createReplyData();
//
//    if(replyData != NULL)
//    {
//        ((long*)replyData)[0] = ((long*)requestData)[0];
//        ((long*)replyData)[1] = ((long*)requestData)[1];
//        ((long*)replyData)[2] = errorMessage;
//
//        if(replyDataWriter->write(*(char*)replyData, DDS_HANDLE_NIL) == DDS_RETCODE_OK)
//        {
//            returnedValue = 0;
//        }
//
//        deleteReplyData(replyData);
//        deleteRequestData(requestData);
//    }
//    else
//    {
//        printf("ERROR <sendReply>: Bad parameter (replyData)\n");
//    }
//
//
//    return returnedValue;
//}
