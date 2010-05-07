#include "client/ClientRemoteService.h"

static const char* const CLASS_NAME = "ClientRemoteService";

ClientRemoteService::ClientRemoteService(const char *remoteServiceName, DDS_UnsignedLong *clientId, const char *requestTypeName, const char *replyTypeName, DDSDomainParticipant *clientParticipant) : m_requestPublisher(NULL),
m_requestTopic(NULL), m_requestDataWriter(NULL), m_replySubscriber(NULL), m_replyWaitset(NULL), m_replyFilter(NULL), m_numSec(0)
{
    const char* const METHOD_NAME = "ClientRemoteService";

    clientID[0] = clientId[0];
    clientID[1] = clientId[1];
    clientID[2] = clientId[2];
    
    mutex =  RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);

    if(mutex != NULL)
    {
        if(createEntities(clientParticipant, remoteServiceName, requestTypeName, replyTypeName))
        {
            if(createServiceDetectSystem())
            {
                if(enableEntities())
                {
                    if(createConditions()){
                        strncpy(m_remoteServiceName, remoteServiceName, 50);
                        REDAInlineList_init(&threadLocalInfoList);
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enableEntities\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
            }
        }
    }
    else{
        printf("ERROR<%s::%s>: Cannot create mutex\n", CLASS_NAME, METHOD_NAME);
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

DDSCSMessages ClientRemoteService::execute(void *request, void *reply, unsigned int timeout)
{
    const char* const METHOD_NAME = "execute";
	DDSCSMessages returnedValue = CLIENT_ERROR;
	DDSConditionSeq replyActiveConditions;
	DDSConditionSeq noServerConditions;
	DDS_ReturnCode_t retCode;
	DDS_Duration_t tTimeout = {timeout/1000, (timeout%1000) * 1000000};
	ThreadLocalInfo *info;

	if(request != NULL)
	{
		*(DDS_UnsignedLong*)request = clientID[0];
        ((DDS_UnsignedLong*)request)[1] = clientID[1];
        ((DDS_UnsignedLong*)request)[2] = clientID[2];
		((DDS_UnsignedLong*)request)[3] = RTIOsapiThread_getCurrentThreadID();

		if(take())
		{
			info = getInfo();
			/* Thread safe num_Sec handling */
			((DDS_Long*)request)[4] = m_numSec;
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

			if(pms.current_count < 1)
            {
				retCode = m_matchingPubWaitset->wait(noServerConditions, tTimeout);

				if((retCode == DDS_RETCODE_TIMEOUT) || (retCode == DDS_RETCODE_OK && noServerConditions.length() == 0))
                {
                    printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                    returnedValue = NO_SERVER;
                }
			}
			if(returnedValue != NO_SERVER && (write(request) == DDS_RETCODE_OK))
			{
				// Without guard conditions this algorithm DO NOT guarantee a maximum Timeout
				// The code would be cleaner if i would be sure about the returned active conditions
				// on multiple waitsets attached to the same condition.
				do
                {
					if(DDS_InstanceHandle_is_nil(&info->instanceHandle))
                    {
						retCode = info->waitSet->wait(replyActiveConditions, tTimeout);

						if(retCode == DDS_RETCODE_OK)
                        {
							returnedValue = handleNewInstance(info, replyActiveConditions);
						}
					}
					else
                    {
						retCode = info->waitSet->wait(replyActiveConditions, tTimeout);

						if(retCode == DDS_RETCODE_OK)
                        {
							returnedValue = handleNewSample(info, request, replyActiveConditions);
						}
					}

					if(retCode == DDS_RETCODE_TIMEOUT)
                    {
						printf("WARNING <%s::%s>: Wait timeout.\n", CLASS_NAME, METHOD_NAME);
						returnedValue = SERVER_TIMEOUT;
					}
				}
                while(returnedValue == RECEIVED_OTHER_REQUEST);
			}
			else
            {
				returnedValue = CLIENT_ERROR;
				printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
			}
		}
		else{
			printf("ERROR<%s::%s>: failed to take mutex\n", CLASS_NAME, METHOD_NAME);
		}
	}
	else{
		printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
	}

	return returnedValue;
}

bool ClientRemoteService::take()
{
	return RTIOsapiSemaphore_take(mutex, NULL) == RTI_OSAPI_SEMAPHORE_STATUS_OK;
}

void ClientRemoteService::give()
{
    const char* const METHOD_NAME = "give";
	if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
    {
		printf("ERROR <%s::%s>: failed to give mutex\n", CLASS_NAME, METHOD_NAME);
	}
}

int ClientRemoteService::createEntities(DDSDomainParticipant *participant, const char *remoteServiceName,
        const char *requestTypeName, const char *replyTypeName)
{
    const char* const METHOD_NAME = "createEntities";
    char topicNames[100];
    char filterLine[100];
    DDS_StringSeq parameters;
    DDS_PublisherQos publisherQos;
    DDS_SubscriberQos subscriberQos;

    if(participant != NULL)
    {
        if(remoteServiceName != NULL)
        {
            if((m_requestPublisher = participant->create_publisher(DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
            {
                if(m_requestPublisher->get_qos(publisherQos) == DDS_RETCODE_OK)
                {
                    publisherQos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
                    m_requestPublisher->set_qos(publisherQos);

                    if(requestTypeName != NULL)
                    {
                        strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                        strncat(topicNames, "-", 1);
                        strncat(topicNames, requestTypeName, 49); topicNames[99] = '\0';

                        if((m_requestTopic = participant->create_topic(topicNames, requestTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                        {
                            if((m_requestDataWriter = m_requestPublisher->create_datawriter(m_requestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                            {
                                if((m_replySubscriber = participant->create_subscriber(DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                                {
                                    if(m_replySubscriber->get_qos(subscriberQos) == DDS_RETCODE_OK)
                                    {
                                        subscriberQos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
                                        m_replySubscriber->set_qos(subscriberQos);

                                        if(replyTypeName != NULL)
                                        {
                                            strncpy(topicNames, remoteServiceName, 49); topicNames[49] = '\0';
                                            strncat(topicNames, "-", 1);
                                            strncat(topicNames, replyTypeName, 49); topicNames[99] = '\0';

                                            if((m_replyTopic = participant->create_topic(topicNames, replyTypeName, DDS_TOPIC_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                                            {
                                                _snprintf(filterLine, 100, "clientId[0] = %u and clientId[1] = %u and clientId[2] = %u", clientID[0], clientID[1], clientID[2]);
                                                if((m_replyFilter = participant->create_contentfilteredtopic(remoteServiceName, m_replyTopic, filterLine, parameters)) != NULL)
                                                {
                                                    if((m_replyDataReader = m_replySubscriber->create_datareader(m_replyFilter, DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE)) != NULL)
                                                    {
                                                        return 1;
                                                    }

                                                    participant->delete_contentfilteredtopic(m_replyFilter);
                                                }

                                                participant->delete_topic(m_replyTopic);
                                            }
                                            else
                                            {
                                                printf("ERROR<%s::%s>: Cannot create the reply topic\n", CLASS_NAME, METHOD_NAME);
                                            }
                                        }
                                        else
                                        {
                                            printf("ERROR<%s::%s>: Bad parameter (replyTypeName)\n", CLASS_NAME, METHOD_NAME);
                                        }
                                    }
                                    else
                                    {
                                        printf("ERROR <%s::%s>: Cannot get the subscriber qos\n", CLASS_NAME, METHOD_NAME);
                                    }

                                    participant->delete_subscriber(m_replySubscriber);
                                }
                                else
                                {
                                    printf("ERROR<%s::%s>: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
                                }

                                m_requestPublisher->delete_datawriter(m_requestDataWriter);
                            }
                            else
                            {
                                printf("ERROR<%s::%s>: Cannot create the request data writer\n", CLASS_NAME, METHOD_NAME);
                            }

                            participant->delete_topic(m_requestTopic);
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot create the request topic\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Bad parameter (requestTypeName)\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR <%s::%s>: Cannot get the publisher qos\n", CLASS_NAME, METHOD_NAME);
                }

                participant->delete_publisher(m_requestPublisher);
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create the request publisher\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Bad parameter (remoteServiceName)\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameter (participant)\n", CLASS_NAME, METHOD_NAME);
    }

    return 0;
}

int ClientRemoteService::enableEntities()
{
    const char* const METHOD_NAME = "enableEntities";
    int returnedValue = 0;

    if(m_requestPublisher->enable() == DDS_RETCODE_OK)
    {
        if(m_requestTopic->enable() == DDS_RETCODE_OK)
        {
            if(m_requestDataWriter->enable() == DDS_RETCODE_OK)
            {
                if(m_replySubscriber->enable() == DDS_RETCODE_OK)
                {
                    if(m_replyTopic->enable() == DDS_RETCODE_OK)
                    {
                        if(m_replyDataReader->enable() == DDS_RETCODE_OK)
                        {
                            returnedValue = 1;
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot enable reply datareader\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot enable reply topic\n", CLASS_NAME, METHOD_NAME);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot enable reply subscriber\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot enable request datawriter\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot enable request topic\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else
    {
        printf("ERROR<%s::%s>: Cannot enable request publisher\n", CLASS_NAME, METHOD_NAME);
    }

    return returnedValue;
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

	return returnedValue;
}

int ClientRemoteService::createServiceDetectSystem()
{
    const char* const METHOD_NAME = "createServiceDetectSystem";
    int returnedValue = 0;

    m_matchingPubWaitset = new DDSWaitSet();

    if(m_matchingPubWaitset != NULL)
    {
        if(m_requestDataWriter != NULL)
        {
            m_matchingCondition = m_requestDataWriter->get_statuscondition();

            if(m_matchingCondition != NULL)
            {
                m_matchingCondition->set_enabled_statuses(DDS_PUBLICATION_MATCHED_STATUS);
                returnedValue = m_matchingPubWaitset->attach_condition(m_matchingCondition) == DDS_RETCODE_OK;
            }
            else{
                printf("ERROR<%s::%s>: Cannot allocate the condition\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else{
            printf("ERROR<%s::%s>: There is not reader\n", CLASS_NAME, METHOD_NAME);
        }
    }
    else{
        printf("ERROR<%s::%s>: Cannot allocate the waitset\n", CLASS_NAME, METHOD_NAME);
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

