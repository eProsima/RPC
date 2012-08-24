#include "server/ServerRPC.h"
#include "server/Server.h"

static const char* const CLASS_NAME = "eProsima::DDSRPC::ServerRPC";

namespace eProsima
{
	namespace DDSRPC
	{

		ServerRPC::ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
												 const char *requestQosLibrary, const char *requestQosProfile, const char *replyTypeName,
												 const char *replyQosLibrary, const char *replyQosProfile,
				fExecFunction execFunction, DDS::DomainParticipant *serverParticipant) :
			m_server(server), m_requestSubscriber(NULL), m_replyPublisher(NULL), m_requestTopic(NULL),
			m_requestDataReader(NULL), m_execFunction(execFunction)
		{
			const char* const METHOD_NAME = "ServerRemoteService";

			if(createEntities(serverParticipant, rpcName, requestTypeName, requestQosLibrary,
					requestQosProfile, replyTypeName, replyQosLibrary, replyQosProfile))
			{
				if(enableEntities())
				{
				}
				else
				{
					printf("ERROR<%s::%s>: Cannot enableEntities\n", CLASS_NAME, METHOD_NAME);
				}
			}
		}

		int ServerRPC::createEntities(DDS::DomainParticipant *serverParticipant, const char *rpcName,
				const char *requestTypeName, const char *requestQosLibrary, const char *requestQosProfile,
				const char *replyTypeName, const char *replyQosLibrary, const char *replyQosProfile)
		{
			const char* const METHOD_NAME = "createEntities";
			char topicNames[100];
			DDS::PublisherQos publisherQos;
			DDS::SubscriberQos subscriberQos;

            if(serverParticipant != NULL)
            {
                if(rpcName != NULL)
                {
                    if((m_requestSubscriber = serverParticipant->create_subscriber(DDS::SUBSCRIBER_QOS_DEFAULT, NULL, DDS::STATUS_MASK_NONE)) != NULL)
                    {
                        if(m_requestSubscriber->get_qos(subscriberQos) == DDS::RETCODE_OK)
                        {
                            subscriberQos.entity_factory.autoenable_created_entities = DDS::BOOLEAN_FALSE;
                            m_requestSubscriber->set_qos(subscriberQos);

                            if(requestTypeName != NULL)
                            {
                                strncpy(topicNames, rpcName, 49); topicNames[49] = '\0';
                                strncat(topicNames, "-", 1);
                                strncat(topicNames, requestTypeName, 49); topicNames[49] = '\0';
                                if((m_requestTopic = serverParticipant->create_topic(topicNames, requestTypeName, DDS::TOPIC_QOS_DEFAULT, NULL, DDS::STATUS_MASK_NONE)) != NULL)
                                {
                                    if(requestQosLibrary == NULL || requestQosProfile == NULL)
                                    {
                                        m_requestDataReader = m_requestSubscriber->create_datareader(m_requestTopic, DDS::DATAREADER_QOS_DEFAULT, this, DDS::DATA_AVAILABLE_STATUS);
                                    }
                                    else
                                    {
                                        m_requestDataReader = m_requestSubscriber->create_datareader_with_profile(m_requestTopic, requestQosLibrary, requestQosProfile,
                                                this, DDS::DATA_AVAILABLE_STATUS);
                                    }

                                    if(m_requestDataReader != NULL)
                                    {
                                        DDS::DataReaderQos *requestReaderQos = new DDS::DataReaderQos();
                                        m_requestDataReader->get_qos(*requestReaderQos);
                                        requestReaderQos->property.value.ensure_length(requestReaderQos->property.value.length() + 1,
                                                requestReaderQos->property.value.maximum() + 1);
                                        requestReaderQos->property.value[requestReaderQos->property.value.length() - 1].name = 
                                            DDS::String_dup("dds.data_reader.state.filter_redundant_samples");
                                        requestReaderQos->property.value[requestReaderQos->property.value.length() - 1].value =
                                            DDS::String_dup("0");
                                        m_requestDataReader->set_qos(*requestReaderQos);
                                        delete requestReaderQos;

                                        strncpy(m_rpcName, rpcName, 50);

                                        if(replyTypeName != NULL)
                                        {
                                            if((m_replyPublisher = serverParticipant->create_publisher(DDS::PUBLISHER_QOS_DEFAULT, NULL, DDS::STATUS_MASK_NONE)) != NULL)
                                            {
                                                if(m_replyPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
                                                {
                                                    publisherQos.entity_factory.autoenable_created_entities = DDS::BOOLEAN_FALSE;
                                                    m_replyPublisher->set_qos(publisherQos);

                                                    strncpy(topicNames, rpcName, 49); topicNames[49] = '\0';
                                                    strncat(topicNames, "-", 1);
                                                    strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';
                                                    if((m_replyTopic = serverParticipant->create_topic(topicNames, replyTypeName, DDS::TOPIC_QOS_DEFAULT, NULL, DDS::STATUS_MASK_NONE)) != NULL)
                                                    {
                                                        if(replyQosLibrary == NULL || replyQosProfile == NULL)
                                                        {
                                                            m_replyDataWriter = m_replyPublisher->create_datawriter(m_replyTopic, DDS::DATAWRITER_QOS_DEFAULT, NULL, DDS::STATUS_MASK_NONE);
                                                        }
                                                        else
                                                        {
                                                            m_replyDataWriter = m_replyPublisher->create_datawriter_with_profile(m_replyTopic, replyQosLibrary, replyQosProfile, NULL, DDS::STATUS_MASK_NONE);
                                                        }

                                                        if(m_replyDataWriter != NULL)
                                                        {
                                                            // Obtain serverServiceId.
                                                            DDS::DataWriterQos *wQos = new DDS::DataWriterQos();
                                                            m_replyDataWriter->get_qos(*wQos);
                                                            m_serverId[0] = ((wQos->protocol.virtual_guid.value[0] << 24) & 0xFF000000) +
                                                                ((wQos->protocol.virtual_guid.value[1] << 16) & 0xFF0000) +
                                                                ((wQos->protocol.virtual_guid.value[2] << 8) & 0xFF00) +
                                                                (wQos->protocol.virtual_guid.value[3] & 0xFF);
                                                            m_serverId[1] = ((wQos->protocol.virtual_guid.value[4] << 24) & 0xFF000000) +
                                                                ((wQos->protocol.virtual_guid.value[5] << 16) & 0xFF0000) +
                                                                ((wQos->protocol.virtual_guid.value[6] << 8) & 0xFF00) +
                                                                (wQos->protocol.virtual_guid.value[7] & 0xFF);
                                                            m_serverId[2] = ((wQos->protocol.virtual_guid.value[8] << 24) & 0xFF000000) +
                                                                ((wQos->protocol.virtual_guid.value[9] << 16) & 0xFF0000) +
                                                                ((wQos->protocol.virtual_guid.value[10] << 8) & 0xFF00) +
                                                                (wQos->protocol.virtual_guid.value[11] & 0xFF);
                                                            m_serverId[3] = ((wQos->protocol.virtual_guid.value[12] << 24) & 0xFF000000) +
                                                                ((wQos->protocol.virtual_guid.value[13] << 16) & 0xFF0000) +
                                                                ((wQos->protocol.virtual_guid.value[14] << 8) & 0xFF00) +
                                                                (wQos->protocol.virtual_guid.value[15] & 0xFF);
                                                            delete wQos;

                                                            return 1;
                                                        }
                                                        else
                                                        {
                                                            printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
                                                        }

                                                        serverParticipant->delete_topic(m_replyTopic);
                                                    }
                                                    else
                                                    {
                                                        printf("ERROR<%s::%s: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                                                    }
                                                }
                                                else
                                                {
                                                    printf("ERROR <%s::%s>: Cannot get the publisher qos\n", CLASS_NAME, METHOD_NAME);
                                                }

                                                serverParticipant->delete_publisher(m_replyPublisher);
                                            }
                                            else
                                            {
                                                printf("ERROR<%s::%s: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
                                            }
                                        }
                                        else
                                        {
                                            return 1;
                                        }

                                        serverParticipant->delete_datareader(m_requestDataReader);
                                    }
                                    else
                                    {
                                        printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
                                    }

                                    serverParticipant->delete_topic(m_requestTopic);
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

                        serverParticipant->delete_subscriber(m_requestSubscriber);
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
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

		int ServerRPC::enableEntities()
		{
			const char* const METHOD_NAME = "enableEntities";
			int returnedValue = 0;

            if(m_requestSubscriber->enable() == DDS::RETCODE_OK)
            {
                if(m_requestTopic->enable() == DDS::RETCODE_OK)
                {
                    if(m_requestDataReader->enable() == DDS::RETCODE_OK)
                    {
                        // If not oneway operation.
                        if(m_replyPublisher != NULL)
                        {
                            if(m_replyPublisher->enable() == DDS::RETCODE_OK)
                            {
                                if(m_replyTopic->enable() == DDS::RETCODE_OK)
                                {
                                    if(m_replyDataWriter->enable() == DDS::RETCODE_OK)
                                    {
                                        returnedValue = 1;
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
                        }
                        else
                        {
                            returnedValue = 1;
                        }
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

            return returnedValue;
        }

		char* ServerRPC::getRPCName()
		{
			return m_rpcName;
		}

		unsigned int* ServerRPC::getServerId()
		{
			return m_serverId;
		}

		fExecFunction ServerRPC::getExecFunction()
		{
			return m_execFunction;
		}

	} // namespace DDSRPC
} // namespace eProsima
