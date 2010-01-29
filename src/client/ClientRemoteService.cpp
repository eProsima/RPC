#include "client/ClientRemoteService.h"

ClientRemoteService::ClientRemoteService(const char *remoteServiceName, long clientId, const char *requestTypeName, const char *replyTypeName, DDSDomainParticipant *clientParticipant) : m_requestPublisher(NULL),
m_requestTopic(NULL), m_requestDataWriter(NULL), m_replySubscriber(NULL), m_replyWaitset(NULL), m_replyFilter(NULL), m_numSec(0), clientID(clientId)
{
	char topicNames[100];
	char filterLine[100];
	DDS_StringSeq parameters;

	if(clientParticipant != NULL)
	{
		mutex =  RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);
		if(mutex != NULL)
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
							if((m_requestDataWriter = clientParticipant->create_datawriter(m_requestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
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
											_snprintf(filterLine, 100, "%s%ld", "clientId = ", clientId);
											if((m_replyFilter = clientParticipant->create_contentfilteredtopic(remoteServiceName, m_replyTopic, filterLine, parameters)) != NULL)
											{
												if((m_replyDataReader = clientParticipant->create_datareader(m_replyFilter, DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
												{
													if(createConditions()){
														strncpy(m_remoteServiceName, remoteServiceName, 50);
														REDAInlineList_init(&threadLocalInfoList);
														return;
													}
													else{
														printf("ERROR <ClientRemoteService>: Cannot create waitset\n");
													}

													clientParticipant->delete_datareader(m_replyDataReader);
												}

												clientParticipant->delete_contentfilteredtopic(m_replyFilter);
											}

											clientParticipant->delete_topic(m_replyTopic);
										}
										else{
											printf("ERROR <ClientRemoteService>: Cannot create the reply topic\n");
										}
									}
									else{
										printf("ERROR <ClientRemoteService>: Bad parameter (replyTypeName)\n");
									}
									clientParticipant->delete_subscriber(m_replySubscriber);
								}
								else{
									printf("ERROR <ClientRemoteService>: Cannot create the reply subscriber\n");
								}
								clientParticipant->delete_datawriter(m_requestDataWriter);
							}
							else{
								printf("ERROR <ClientRemoteService>: Cannot create the request data writer\n");
							}
							clientParticipant->delete_topic(m_requestTopic);
						}
						else{
							printf("ERROR <ClientRemoteService>: Cannot create the request topic\n");
						}
					}
					else{
						printf("ERROR <ClientRemoteService>: Bad parameter (requestTypeName)\n");
					}
					clientParticipant->delete_publisher(m_requestPublisher);
				}
				else{
					printf("ERROR <ClientRemoteService>: Cannot create the request publisher\n");
				}
			}
			else{
				printf("ERROR <ClientRemoteService>: Bad parameter (remoteServiceName)\n");
			}
		}
		else{
			printf("ERROR <ClientRemoteService>: Cannot create mutex\n");
		}
	}
	else{
		printf("ERROR <ClientRemoteService>: Bad parameter (clientParticipant)\n");
	}
}

ClientRemoteService::~ClientRemoteService()
{
	if(mutex != NULL)
	{
		RTIOsapiSemaphore_delete(mutex);
		mutex = NULL;
	}
}



ThreadLocalInfo* ClientRemoteService::newInfo(RTI_UINT32 id)
{
	ThreadLocalInfo *info = new ThreadLocalInfo();
	info->localId = id;
	info->data = NULL;
	info->freshData = DDS_BOOLEAN_FALSE;
	info->waitSet = new DDSWaitSet();
	info->waitSet->attach_condition(m_newReplyInstanceCondition);
	info->instanceHandle = DDS_HANDLE_NIL;		
	REDAInlineList_addNodeToBackEA(&threadLocalInfoList, &info->parent);

	return info;
}

ThreadLocalInfo* ClientRemoteService::getInfo(RTI_UINT32 id)
{
	ThreadLocalInfo *info = NULL;
	info = (ThreadLocalInfo *)REDAInlineList_getFirst(&threadLocalInfoList);
	while(info != NULL && info->localId != id)
	{
		info = (ThreadLocalInfo *)info->parent.next;
	}
	return info;
}

ThreadLocalInfo* ClientRemoteService::getInfo()
{
	RTI_UINT32 id = RTIOsapiThread_getCurrentThreadID();

	ThreadLocalInfo *info = getInfo(id);

	return info != NULL ? info : newInfo(id);

}

void ClientRemoteService::removeInfo()
{
	ThreadLocalInfo *info = NULL;
	RTI_UINT32 id = RTIOsapiThread_getCurrentThreadID();
	info = (ThreadLocalInfo *)REDAInlineList_getFirst(&threadLocalInfoList);
	while(info != NULL && info->localId != id)
	{
		info = (ThreadLocalInfo *)info->parent.next;
	}
	if(info != NULL)
	{
		info->waitSet->detach_condition(m_newReplyInstanceCondition);
		info->waitSet->detach_condition(m_replyCondition);
		delete(info->waitSet);
		info->waitSet = NULL;
		info->data = NULL;
		info->instanceHandle = DDS_HANDLE_NIL;
		delete(info);
	}
}

DDSCSMessages ClientRemoteService::execute(void *request, void *reply, int timeout)
{
	DDSCSMessages returnedValue = CLIENT_ERROR;
	DDSConditionSeq replyActiveConditions;
	DDSConditionSeq noServerConditions;
	DDS_ReturnCode_t retCode;
	DDS_Duration_t tTimeout = {timeout, 0};
	ThreadLocalInfo *info;

	if(request != NULL)
	{
		*(long*)request = clientID;
		((long*)request)[1] = RTIOsapiThread_getCurrentThreadID();
		if(take())
		{
			info = getInfo();
			/* Thread safe num_Sec handling */
			((long*)request)[2] = m_numSec;
			m_numSec++;
			give();
			info->data = reply;
			// Matching server (Request DataReader) detection.
			// Drawbacks:
			//		1.- If the publication matched status is triggered between get_publication_matched_status()
			//          and wait() calls it will be missed.
			//      2.- If there is no matched entity the total wait time may be up to 2* tTimeout
			DDS_PublicationMatchedStatus pms;
			m_requestDataWriter->get_publication_matched_status(pms);
			if(pms.current_count < 1){
				retCode = m_matchingPubWaitset->wait(noServerConditions, tTimeout);

				if(retCode == DDS_RETCODE_OK){
					if(noServerConditions.length() == 0){
						printf("WARNING <execute>: No server discovered.\n");
						returnedValue = NO_SERVER;
					}
				}
			}
			if(returnedValue != NO_SERVER && (write(request) == DDS_RETCODE_OK))
			{
				// Without guard conditions this algorithm DO NOT guarantee a maximum Timeout
				// The code would be cleaner if i would be sure about the returned active conditions
				// on multiple waitsets attached to the same condition.
				do{
					if(DDS_InstanceHandle_is_nil(&info->instanceHandle)){
						retCode = info->waitSet->wait(replyActiveConditions, tTimeout);

						if(retCode == DDS_RETCODE_OK){
							returnedValue = handleNewInstance(info, replyActiveConditions);
						}
					}
					else{
						retCode = info->waitSet->wait(replyActiveConditions, tTimeout);
						if(retCode == DDS_RETCODE_OK){
							returnedValue = handleNewSample(info, request, replyActiveConditions);
						}
					}
					if(retCode == DDS_RETCODE_TIMEOUT){
						printf("WARNING <execute>: Wait timeout.\n");
						returnedValue = SERVER_TIMEOUT;
					}
				}while(returnedValue == RECEIVED_OTHER_REQUEST);
			}
			else{
				returnedValue = CLIENT_ERROR;
				printf("ERROR <execute>: Some error occurs\n");
			}
		}
		else{
			printf("ERROR<execute>: failed to take mutex\n");
		}
	}
	else{
		printf("ERROR<execute>: Bad parameter(data)\n");
	}

	return returnedValue;
}

bool ClientRemoteService::take()
{
	return RTIOsapiSemaphore_take(mutex, NULL) == RTI_OSAPI_SEMAPHORE_STATUS_OK;
}

void ClientRemoteService::give()
{
	if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK){
		printf("ERROR <ClientRemoteService::give>: failed to give mutex\n");
	}
}

int ClientRemoteService::createConditions()
{
	int returnedValue = 0;
	if(m_replyDataReader != NULL){
		m_newReplyInstanceCondition = m_replyDataReader->create_readcondition(DDS_NOT_READ_SAMPLE_STATE, DDS_NEW_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
		m_replyCondition = m_replyDataReader->create_readcondition(DDS_NOT_READ_SAMPLE_STATE, DDS_NOT_NEW_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

		returnedValue = m_newReplyInstanceCondition != NULL && m_replyCondition != NULL;
	}
	else{
		printf("ERROR <createConditionAndWaitset>: There is not reader\n");
	}

	if(returnedValue)
	{
		returnedValue = 0;
		m_matchingPubWaitset = new DDSWaitSet();

		if(m_matchingPubWaitset != NULL)
		{
			if(m_requestDataWriter != NULL)
			{
				m_matchingCondition = m_requestDataWriter->get_statuscondition();

				if(m_matchingCondition != NULL){
					m_matchingCondition->set_enabled_statuses(DDS_PUBLICATION_MATCHED_STATUS);
					returnedValue = m_matchingPubWaitset->attach_condition(m_matchingCondition) == DDS_RETCODE_OK;
				}
				else{
					printf("ERROR <createConditionAndWaitset>: Cannot allocate the condition\n");
				}
			}
			else{
				printf("ERROR <createConditionAndWaitset>: There is not reader\n");
			}
		}
		else{
			printf("ERROR <createConditionAndWaitset>: Cannot allocate the waitset\n");
		}
	}

	return returnedValue;
}

void ClientRemoteService::replyRead()
{
	RTI_UINT32 id = RTIOsapiThread_getCurrentThreadID();
	if(take())
	{
		ThreadLocalInfo *info = getInfo(id);
		if(info != NULL){
			info->freshData = DDS_BOOLEAN_FALSE;
		}
		give();
	}
}

