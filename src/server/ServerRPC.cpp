/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "server/ServerRPC.h"
#include "server/Server.h"
#include "eProsima_c/eProsimaMacros.h"
#include "exceptions/InitializeException.h"

static const char* const CLASS_NAME = "eProsima::RPCDDS::ServerRPC";

namespace eProsima
{
	namespace RPCDDS
	{

		ServerRPC::ServerRPC(const char *rpcName, Server* server, const char *requestTypeName,
												 const char *replyTypeName, fExecFunction execFunction) :
			m_rpcName(rpcName), m_requestTypeName(requestTypeName), m_replyTypeName(replyTypeName), m_server(server), m_requestSubscriber(NULL),
			m_replyPublisher(NULL), m_requestTopic(NULL), m_requestFilter(NULL), m_requestDataReader(NULL), m_execFunction(execFunction)
		{
		}

		ServerRPC::~ServerRPC()
		{
		}

		int ServerRPC::start()
		{
			const char* const METHOD_NAME = "ServerRemoteService";
			int returnedValue = -1;

			if(createEntities() == 0)
			{
				if((returnedValue = enableEntities()) != 0)
				{
					printf("ERROR<%s::%s>: Cannot enable the DDS entities\n", CLASS_NAME, METHOD_NAME);
				}
			}
			else
			{
				printf("ERROR<%s::%s>: Cannot create the DDS entities\n", CLASS_NAME, METHOD_NAME);
			}

            return returnedValue;
		}

		void ServerRPC::stop()
		{
			if(m_replyDataWriter != NULL)
			{
				m_replyPublisher->delete_datawriter(m_replyDataWriter);
				m_replyDataWriter = NULL;
			}
			if(m_replyTopic != NULL)
			{
				m_server->getParticipant()->delete_topic(m_replyTopic);
				m_replyTopic = NULL;
			}
			if(m_replyPublisher != NULL)
			{
				m_server->getParticipant()->delete_publisher(m_replyPublisher);
				m_replyPublisher = NULL;
			}
			if(m_requestDataReader != NULL)
			{
				m_requestSubscriber->delete_datareader(m_requestDataReader);
				m_requestDataReader = NULL;
			}
			if(m_requestFilter != NULL)
			{
				m_server->getParticipant()->delete_contentfilteredtopic(m_requestFilter);
				m_requestFilter = NULL;
			}
			if(m_requestTopic != NULL)
			{
				m_server->getParticipant()->delete_topic(m_requestTopic);
				m_requestTopic = NULL;
			}
			if(m_requestSubscriber != NULL)
			{
				m_server->getParticipant()->delete_subscriber(m_requestSubscriber);
				m_requestSubscriber = NULL;
			}
		}

		int ServerRPC::createEntities()
		{
			const char* const METHOD_NAME = "createEntities";
			DDS::PublisherQos publisherQos;
			DDS::SubscriberQos subscriberQos;

			if((m_requestSubscriber = m_server->getParticipant()->create_subscriber(SUBSCRIBER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
            {
                if(m_requestSubscriber->get_qos(subscriberQos) == DDS::RETCODE_OK)
                {
                    subscriberQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                    m_requestSubscriber->set_qos(subscriberQos);

                    if((m_requestTopic = m_server->getParticipant()->create_topic(m_requestTypeName.c_str(), m_requestTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                    {
						DDS::StringSeq stringSeq(1);
						char value[257];

						stringSeq.length(1);
						SNPRINTF(value, 257, "'%s'", m_server->getServiceName().c_str());
						stringSeq[0] = strdup(value);

						if((m_requestFilter = m_server->getParticipant()->create_contentfilteredtopic(m_rpcName.c_str(), m_requestTopic,
										"header.remoteServiceName = %0", stringSeq)) != NULL)
						{
							DDS::DataReaderQos rQos = DDS::DataReaderQos();

							m_requestSubscriber->get_default_datareader_qos(rQos);
							rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
							rQos.history.depth = 100;

							m_requestDataReader = m_requestSubscriber->create_datareader(m_requestFilter, rQos, this, DDS::DATA_AVAILABLE_STATUS);

							if(m_requestDataReader != NULL)
							{
								set_redundant_feature(m_requestDataReader, rQos);

								if(!m_replyTypeName.empty())
								{
									if((m_replyPublisher = m_server->getParticipant()->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
									{
										if(m_replyPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
										{
											publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
											m_replyPublisher->set_qos(publisherQos);

											if((m_replyTopic = m_server->getParticipant()->create_topic(m_replyTypeName.c_str(), m_replyTypeName.c_str(), TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
											{
												DDS::DataWriterQos wQos = DDS:: DataWriterQos();

												m_replyPublisher->get_default_datawriter_qos(wQos);
												wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
												wQos.history.depth = 100;

												m_replyDataWriter = m_replyPublisher->create_datawriter(m_replyTopic, wQos, NULL, STATUS_MASK_NONE);

												if(m_replyDataWriter != NULL)
												{
													return 0;
												}
												else
												{
													printf("ERROR<%s::%s: Cannot create the reply data writer\n", CLASS_NAME, METHOD_NAME);
												}

												m_server->getParticipant()->delete_topic(m_replyTopic);
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

										m_server->getParticipant()->delete_publisher(m_replyPublisher);
									}
									else
									{
										printf("ERROR<%s::%s: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
									}
								}
								else
								{
									return 0;
								}

								m_requestSubscriber->delete_datareader(m_requestDataReader);
							}
							else
							{
								printf("ERROR<%s::%s: Cannot create the request data reader\n", CLASS_NAME, METHOD_NAME);
							}

							m_server->getParticipant()->delete_contentfilteredtopic(m_requestFilter);
						}
						else
						{
							printf("ERROR<%s::%s>: Cannot create the request filter\n", CLASS_NAME, METHOD_NAME);
						}

                        m_server->getParticipant()->delete_topic(m_requestTopic);
                    }
                    else
                    {
                        printf("ERROR<%s::%s: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR <%s::%s>: Cannot get the subscriber qos\n", CLASS_NAME, METHOD_NAME);
                }

                m_server->getParticipant()->delete_subscriber(m_requestSubscriber);
            }
            else
            {
                printf("ERROR<%s::%s: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
            }

			return -1;
		}

		int ServerRPC::enableEntities()
		{
			const char* const METHOD_NAME = "enableEntities";
			int returnedValue = -1;

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
                                        returnedValue = 0;
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
                            returnedValue = 0;
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

		const char* ServerRPC::getRPCName() const
		{
			return m_rpcName.c_str();
		}

		fExecFunction ServerRPC::getExecFunction() const
		{
			return m_execFunction;
		}

		DDS::DataReader* ServerRPC::getRequestDatareader() const
		{
			return m_requestDataReader;
		}

		DDS::DataWriter* ServerRPC::getReplyDatawriter() const
		{
			return m_replyDataWriter;
		}

		Server* ServerRPC::getServer() const
		{
			return m_server;
		}

	} // namespace RPCDDS
} // namespace eProsima
