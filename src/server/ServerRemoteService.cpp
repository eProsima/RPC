#include "server/ServerRemoteService.h"
#include "server/DDSCSServer.h"
#include "utils/ThreadPoolManager.h"

static const char* const CLASS_NAME = "ServerRemoteService";

ServerRemoteService::ServerRemoteService(const char *remoteServiceName, DDSCSServer* server, const char *requestTypeName,
                                         const char *requestQosLibrary, const char *requestQosProfile, const char *replyTypeName,
                                         const char *replyQosLibrary, const char *replyQosProfile,
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant) :
    server(server), requestSubscriber(NULL), replyPublisher(NULL), requestTopic(NULL),
    requestDataReader(NULL), execFunction(execFunction)
{
    const char* const METHOD_NAME = "ServerRemoteService";

    if(createEntities(serverParticipant, remoteServiceName, requestTypeName, requestQosLibrary,
            requestQosProfile, replyTypeName, replyQosLibrary, replyQosProfile))
    {
        if(enableEntities())
        {
            	REDAInlineListNode_init(&listNode.parent);
	            listNode.service = this;
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot enableEntities\n", CLASS_NAME, METHOD_NAME);
        }
    }
}

int ServerRemoteService::createEntities(DDSDomainParticipant *serverParticipant, const char *remoteServiceName,
        const char *requestTypeName, const char *requestQosLibrary, const char *requestQosProfile,
        const char *replyTypeName, const char *replyQosLibrary, const char *replyQosProfile)
{
    const char* const METHOD_NAME = "createEntities";
    char topicNames[100];
    DDS_PublisherQos publisherQos;
    DDS_SubscriberQos subscriberQos;

    if(serverParticipant != NULL)
    {
        if(remoteServiceName != NULL)
        {
            if((replyPublisher = serverParticipant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
            {
                if(replyPublisher->get_qos(publisherQos) == DDS_RETCODE_OK)
                {
                    publisherQos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
                    replyPublisher->set_qos(publisherQos);

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
                                    if(requestSubscriber->get_qos(subscriberQos) == DDS_RETCODE_OK)
                                    {
                                        subscriberQos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
                                        requestSubscriber->set_qos(subscriberQos);

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
                                                    DDS_DataReaderQos *requestReaderQos = new DDS_DataReaderQos();
                                                    requestDataReader->get_qos(*requestReaderQos);
                                                    requestReaderQos->property.value.ensure_length(requestReaderQos->property.value.length() + 1,
                                                        requestReaderQos->property.value.maximum() + 1);
                                                    requestReaderQos->property.value[requestReaderQos->property.value.length() - 1].name = 
                                                        DDS_String_dup("dds.data_reader.state.filter_redundant_samples");
                                                    requestReaderQos->property.value[requestReaderQos->property.value.length() - 1].value =
                                                        DDS_String_dup("0");
                                                    requestDataReader->set_qos(*requestReaderQos);
                                                    delete requestReaderQos;

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

                                                    return 1;
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
                                    }
                                    else
                                    {
                                        printf("ERROR <%s::%s>: Cannot get the subscriber qos\n", CLASS_NAME, METHOD_NAME);
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
                }
                else
                {
                    printf("ERROR <%s::%s>: Cannot get the publisher qos\n", CLASS_NAME, METHOD_NAME);
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
            printf("ERROR<%s::%s>: Bad parameter (remoteServiceName)\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s: Bad parameter (serverParticipant)\n", CLASS_NAME, METHOD_NAME);
    }

    return 0;
}

int ServerRemoteService::enableEntities()
{
    const char* const METHOD_NAME = "enableEntities";
    int returnedValue = 0;

    if(replyPublisher->enable() == DDS_RETCODE_OK)
    {
        if(replyTopic->enable() == DDS_RETCODE_OK)
        {
            if(replyDataWriter->enable() == DDS_RETCODE_OK)
            {
                if(requestSubscriber->enable() == DDS_RETCODE_OK)
                {
                    if(requestTopic->enable() == DDS_RETCODE_OK)
                    {
                        if(requestDataReader->enable() == DDS_RETCODE_OK)
                        {
                            returnedValue = 1;
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot enable request datareader\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot enable request topic\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enable request subscriber\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot enable reply datawriter\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot enable reply topic\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot enable reply publisher\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
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

