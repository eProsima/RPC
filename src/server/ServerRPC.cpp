#include "server/ServerRPC.h"
#include "server/Server.h"
#include "utils/Utilities.h"

static const char* const CLASS_NAME = "eProsima::DDSRPC::ServerRPC";

namespace eProsima
{
	namespace DDSRPC
	{

		ServerRPC::ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
												 const char *replyTypeName, fExecFunction execFunction, DDS::DomainParticipant *serverParticipant) :
			m_server(server), m_requestSubscriber(NULL), m_replyPublisher(NULL), m_requestTopic(NULL),
			m_requestDataReader(NULL), m_execFunction(execFunction)
		{
			const char* const METHOD_NAME = "ServerRemoteService";

			if(createEntities(serverParticipant, rpcName, requestTypeName, replyTypeName))
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
				const char *requestTypeName, const char *replyTypeName)
		{
			const char* const METHOD_NAME = "createEntities";
			char topicNames[100];
			DDS::PublisherQos publisherQos;
			DDS::SubscriberQos subscriberQos;

            if(serverParticipant != NULL)
            {
                if(rpcName != NULL)
                {
                    if((m_requestSubscriber = serverParticipant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                    {
                        if(m_requestSubscriber->get_qos(subscriberQos) == DDS::RETCODE_OK)
                        {
                            subscriberQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_requestSubscriber->set_qos(subscriberQos);

                            if(requestTypeName != NULL)
                            {
                                strncpy(topicNames, rpcName, 49); topicNames[49] = '\0';
                                strncat(topicNames, "-", 1);
                                strncat(topicNames, requestTypeName, 49); topicNames[49] = '\0';
                                if((m_requestTopic = serverParticipant->create_topic(topicNames, requestTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                {
                                    DDS::DataReaderQos rQos = DDS::DataReaderQos();

                                    m_requestSubscriber->get_default_datareader_qos(rQos);
                                    rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;

                                    m_requestDataReader = m_requestSubscriber->create_datareader(m_requestTopic, rQos, this, DDS::DATA_AVAILABLE_STATUS);

                                    if(m_requestDataReader != NULL)
                                    {
                                        set_redundant_feature(m_requestDataReader, rQos);

                                        strncpy(m_rpcName, rpcName, 50);

                                        if(replyTypeName != NULL)
                                        {
                                            if((m_replyPublisher = serverParticipant->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                            {
                                                if(m_replyPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
                                                {
                                                    publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                                                    m_replyPublisher->set_qos(publisherQos);

                                                    strncpy(topicNames, rpcName, 49); topicNames[49] = '\0';
                                                    strncat(topicNames, "-", 1);
                                                    strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';
                                                    if((m_replyTopic = serverParticipant->create_topic(topicNames, replyTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                                    {
                                                        DDS::DataWriterQos wQos = DDS:: DataWriterQos();

                                                        m_replyPublisher->get_default_datawriter_qos(wQos);
                                                        wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;

                                                        m_replyDataWriter = m_replyPublisher->create_datawriter(m_replyTopic, wQos, NULL, STATUS_MASK_NONE);

                                                        if(m_replyDataWriter != NULL)
                                                        {
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

                                        m_requestSubscriber->delete_datareader(m_requestDataReader);
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
                                        // Obtain serverServiceId.
                                        get_guid(m_serverId, m_replyDataWriter);

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
