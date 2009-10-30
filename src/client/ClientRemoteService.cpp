#include "client/ClientRemoteService.h"

ClientRemoteService::ClientRemoteService(const char *remoteServiceName, long clientId, const char *requestTypeName, const char *replyTypeName, DDSDomainParticipant *clientParticipant) : m_requestPublisher(NULL),
m_requestTopic(NULL), m_requestDataWriter(NULL), m_replySubscriber(NULL), m_replyWaitset(NULL), m_requestInstanceHandle(DDS_HANDLE_NIL), m_replyFilter(NULL), m_numSec(0), clientID(clientId)
{
	char topicNames[100];
	char filterLine[100];
	DDS_StringSeq parameters;

	parameters.ensure_length(1 , 1);
	parameters[0] = DDS_String_dup("0");

	if(clientParticipant != NULL)
	{
		if(remoteServiceName != NULL)
		{
			if((m_requestPublisher = clientParticipant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
			{
				if(requestTypeName != NULL)
				{
					strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
					strncat(topicNames, "-", 1);
					strncat(topicNames, requestTypeName, 49); topicNames[99] = '\0';
					if((m_requestTopic = clientParticipant->create_topic(topicNames, requestTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
					{
						if((m_requestDataWriter = (RemoteServiceWriter*)clientParticipant->create_datawriter(m_requestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
						{
							if((m_replySubscriber = clientParticipant->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
							{
								if(replyTypeName != NULL)
								{
									strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
									strncat(topicNames, "-", 1);
									strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';
									if((m_replyTopic = clientParticipant->create_topic(topicNames, replyTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
									{
										_snprintf(filterLine, 100, "%s%ld and %s", "clientId = ", clientId, "numSec = %0");
										if((m_replyFilter = clientParticipant->create_contentfilteredtopic(remoteServiceName, m_replyTopic, filterLine, parameters)) != NULL)
										{
											if((m_replyDataReader = (RemoteServiceReader*)clientParticipant->create_datareader(m_replyFilter, DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
											{
												if(createConditionAndWaitset() == 0)
												{
													strncpy(m_remoteServiceName, remoteServiceName, 50);
													return;
												}
												else
												{
													printf("ERROR <ClientRemoteService>: Cannot create waitset\n");
												}

												clientParticipant->delete_datareader(m_replyDataReader);
											}

											clientParticipant->delete_contentfilteredtopic(m_replyFilter);
										}

										clientParticipant->delete_topic(m_replyTopic);
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

								clientParticipant->delete_subscriber(m_replySubscriber);
							}
							else
							{
								printf("ERROR <ClientRemoteService>: Cannot create the reply subscriber\n");
							}

							clientParticipant->delete_datawriter(m_requestDataWriter);
						}
						else
						{
							printf("ERROR <ClientRemoteService>: Cannot create the request data writer\n");
						}

						clientParticipant->delete_topic(m_requestTopic);
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

				clientParticipant->delete_publisher(m_requestPublisher);
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

ClientRemoteService::~ClientRemoteService()
{
}

DDSCSMessages ClientRemoteService::execute(void *data, int timeout)
{
	DDSCSMessages returnedValue = CLIENT_ERROR;
	DDSConditionSeq replyActiveConditions;
	DDSConditionSeq noServerConditions;
	DDS_ReturnCode_t retCode;
	DDS_Duration_t tTimeout = {timeout, 0};
	DDS_StringSeq parameters;
	DDS_Char paramValue[25];

	if(data != NULL)
	{
		*(long*)data = clientID;
		((long*)data)[1] = m_numSec;
		if(m_replyFilter->get_expression_parameters(parameters) == DDS_RETCODE_OK)
		{
			_snprintf(paramValue, 25, "%lu", m_numSec);
			DDS_String_free(parameters[0]);
			parameters[0] = DDS_String_dup(paramValue);
			if(m_replyFilter->set_expression_parameters(parameters) != DDS_RETCODE_OK)
			{
				printf("ERROR <execute>: Setting the filter parameters\n");
			}
		}
		m_numSec++;

		if(DDS_InstanceHandle_equals(&m_requestInstanceHandle, &DDS_HANDLE_NIL) == DDS_BOOLEAN_FALSE)
		{
			m_requestInstanceHandle = m_requestDataWriter->register_instance(*(const char*)data);
		}
		
		// Matching server (Request DataReader) detection.
		// Drawbacks:
		//		1.- If the publication matched status is triggered between get_publication_matched_status()
		//          and wait() calls it will be missed.
		//      2.- If there is no matched entity the total wait time may be up to 2* tTimeout
		DDS_PublicationMatchedStatus pms;
		m_requestDataWriter->get_publication_matched_status(pms);
		if(pms.current_count < 1)
		{
			retCode = m_matchingPubWaitset->wait(noServerConditions, tTimeout);

			if(retCode == DDS_RETCODE_OK)
			{
				if(noServerConditions.length() == 0)
				{
					printf("WARNING <execute>: No server discovered.\n");
					returnedValue = NO_SERVER;
				}
			}
		}
		if(returnedValue != NO_SERVER && (m_requestDataWriter->write(*(char*)data, m_requestInstanceHandle) == DDS_RETCODE_OK))
		{
			retCode = m_replyWaitset->wait(replyActiveConditions, tTimeout);

			if(retCode == DDS_RETCODE_OK)
			{
				if(replyActiveConditions.length() == 0)
				{
					printf("WARNING <execute>:Wait timeout. Any conditions triggered\n");
					returnedValue = SERVER_TIMEOUT;
				}
				else
				{
					if(replyActiveConditions[0] == m_replyCondition)
					{
						returnedValue = OPERATION_SUCCESSFUL;
					}
				}
			}
			else if(retCode == DDS_RETCODE_TIMEOUT)
			{
				printf("WARNING <execute>: Wait timeout.\n");
				returnedValue = SERVER_TIMEOUT;
			}
			else
			{
				printf("ERROR <execute>: Some error occurs\n");
			}
		}
	}
	else
	{
		printf("ERROR<execute>: Bad parameter(data)\n");
	}

	return returnedValue;
}

int ClientRemoteService::createConditionAndWaitset()
{
	int returnedValue = -1;
	
	m_replyWaitset = new DDSWaitSet();

	if(m_replyWaitset != NULL)
	{
		if(m_replyDataReader != NULL)
		{
			m_replyCondition = m_replyDataReader->create_readcondition(DDS_NOT_READ_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

			if(m_replyCondition != NULL)
			{
				if(m_replyWaitset->attach_condition(m_replyCondition) == DDS_RETCODE_OK)
				{
					returnedValue = 0;
				}
			}
			else
			{
				printf("ERROR <createConditionAndWaitset>: Cannot allocate the condition\n");
			}

		}
		else
		{
			printf("ERROR <createConditionAndWaitset>: There is not reader\n");
		}
	}
	else
	{
		printf("ERROR <createConditionAndWaitset>: Cannot allocate the waitset\n");
	}
	if(returnedValue == 0){
		m_matchingPubWaitset = new DDSWaitSet();

		if(m_matchingPubWaitset != NULL)
		{
			if(m_requestDataWriter != NULL)
			{
				m_matchingCondition = m_requestDataWriter->get_statuscondition();

				if(m_matchingCondition != NULL)
				{
					m_matchingCondition->set_enabled_statuses(DDS_PUBLICATION_MATCHED_STATUS);
					if(m_matchingPubWaitset->attach_condition(m_matchingCondition) == DDS_RETCODE_OK)
					{
						returnedValue = 0;
					}
				}
				else
				{
					printf("ERROR <createConditionAndWaitset>: Cannot allocate the condition\n");
				}

			}
			else
			{
				printf("ERROR <createConditionAndWaitset>: There is not reader\n");
			}
		}
		else
		{
			printf("ERROR <createConditionAndWaitset>: Cannot allocate the waitset\n");
		}
	}

	return returnedValue;
}

int ClientRemoteService::getServerReply(void *requestData, void *replyData)
{
	int returnedValue = -1;
	bool exitLoop = false;
	DDS_SampleInfo info;
	DDS_StatusMask readerStatus;

	readerStatus = m_replyDataReader->get_status_changes();
	if(readerStatus & DDS_DATA_AVAILABLE_STATUS)
	{
		do
		{
			if(m_replyDataReader->take_next_sample(*(char*)replyData, info) == DDS_RETCODE_OK)
			{
				if(info.valid_data == DDS_BOOLEAN_TRUE)
				{
					if(((long*)requestData)[1] == ((long*)replyData)[1])
					{
						returnedValue = 0;
						exitLoop = true;
					}
				}
			}
			else
			{
				exitLoop = true;
			}
		}
		while(!exitLoop);
	}
	else
	{
		printf("ERROR <getServerReply>: Not new samples\n");
	}

	return returnedValue;
}
