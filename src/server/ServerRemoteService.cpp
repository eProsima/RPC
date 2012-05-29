#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"
#include "utils/ThreadPoolManager.h"

static const char* const CLASS_NAME = "ServerRemoteService";

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName,
                                         const char *requestQosLibrary, const char *requestQosProfile, const char *replyTypeName,
                                         const char *replyQosLibrary, const char *replyQosProfile,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    server(server), requestSubscriber(NULL), replyPublisher(NULL), requestTopic(NULL),
    requestDataReader(NULL), createRequestData(createRequestData),
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
                        if(replyQosLibrary == NULL || replyQosProfile == NULL)
                        {
                            replyDataWriter = replyPublisher->create_datawriter(replyTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
                        }
                        else
                        {
                            replyDataWriter = replyPublisher->create_datawriter_with_profile(replyTopic, replyQosLibrary, replyQosProfile, NULL, DDS_STATUS_MASK_NONE);
                        }

                        if(replyDataWriter != NULL)
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
                                        if(requestQosLibrary == NULL || requestQosProfile == NULL)
                                        {
                                            requestDataReader = requestSubscriber->create_datareader(requestTopic, DDS_DATAREADER_QOS_DEFAULT, this, DDS_DATA_AVAILABLE_STATUS);
                                        }
                                        else
                                        {
                                            requestDataReader = requestSubscriber->create_datareader_with_profile(requestTopic, requestQosLibrary, requestQosProfile,
                                                this, DDS_DATA_AVAILABLE_STATUS);
                                        }

										if(requestDataReader != NULL)
                                        {
                                            strncpy(this->remoteServiceName, remoteServiceName, 50);

                                            // Obtain serverServiceId.
                                            DDS_DataWriterQos *wQos = new DDS_DataWriterQos();
                                            replyDataWriter->get_qos(*wQos);
                                            m_serverServiceId[0] = ((wQos->protocol.virtual_guid.value[0] << 24) & 0xFF000000) +
                                                ((wQos->protocol.virtual_guid.value[1] << 16) & 0xFF0000) +
                                                ((wQos->protocol.virtual_guid.value[2] << 8) & 0xFF00) +
                                                (wQos->protocol.virtual_guid.value[3] & 0xFF);
                                            m_serverServiceId[1] = ((wQos->protocol.virtual_guid.value[4] << 24) & 0xFF000000) +
                                                ((wQos->protocol.virtual_guid.value[5] << 16) & 0xFF0000) +
                                                ((wQos->protocol.virtual_guid.value[6] << 8) & 0xFF00) +
                                                (wQos->protocol.virtual_guid.value[7] & 0xFF);
                                            m_serverServiceId[2] = ((wQos->protocol.virtual_guid.value[8] << 24) & 0xFF000000) +
                                                ((wQos->protocol.virtual_guid.value[9] << 16) & 0xFF0000) +
                                                ((wQos->protocol.virtual_guid.value[10] << 8) & 0xFF00) +
                                                (wQos->protocol.virtual_guid.value[11] & 0xFF);
                                            m_serverServiceId[3] = ((wQos->protocol.virtual_guid.value[12] << 24) & 0xFF000000) +
                                                ((wQos->protocol.virtual_guid.value[13] << 16) & 0xFF0000) +
                                                ((wQos->protocol.virtual_guid.value[14] << 8) & 0xFF00) +
                                                (wQos->protocol.virtual_guid.value[15] & 0xFF);
                                            delete wQos;

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

DDS_UnsignedLong* ServerRemoteService::getServerServiceId()
{
    return m_serverServiceId;
}

fExecFunction ServerRemoteService::getExecFunction()
{
    return execFunction;
}

