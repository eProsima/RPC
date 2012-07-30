#include "client/ClientRemoteService.h"
#include "eProsima_c/eProsimaMacros.h"

#include <boost/thread/mutex.hpp>

static const char* const CLASS_NAME = "ClientRemoteService";

ClientRemoteService::ClientRemoteService(const char *remoteServiceName, const char *requestTypeName,
                                         const char *requestQosLibrary, const char *requestQosProfile, const char *replyTypeName,
                                         const char *replyQosLibrary, const char *replyQosProfile, DDSDomainParticipant *clientParticipant) : m_requestPublisher(NULL),
m_replySubscriber(NULL), m_requestTopic(NULL), m_requestDataWriter(NULL), m_replyFilter(NULL), m_numSec(0), m_ih(DDS_HANDLE_NIL)
{
    const char* const METHOD_NAME = "ClientRemoteService";
    
    m_mutex =  new boost::mutex();

    if(m_mutex != NULL)
    {
        if(createEntities(clientParticipant, remoteServiceName, requestTypeName, requestQosLibrary,
            requestQosProfile, replyTypeName, replyQosLibrary, replyQosProfile))
        {
            if(enableEntities())
            {
                strncpy(m_remoteServiceName, remoteServiceName, 50);
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot enableEntities\n", CLASS_NAME, METHOD_NAME);
            }
        }
    }
    else{
        printf("ERROR<%s::%s>: Cannot create mutex\n", CLASS_NAME, METHOD_NAME);
    }
}

ClientRemoteService::~ClientRemoteService()
{
	if(m_mutex != NULL)
	{
		delete m_mutex;
		m_mutex = NULL;
	}
}

DDSCSMessages ClientRemoteService::execute(void *request, void *reply, unsigned int timeout)
{
    const char* const METHOD_NAME = "execute";
	DDSCSMessages returnedValue = CLIENT_ERROR;
    DDSWaitSet *waitSet = NULL;
    DDSStatusCondition *statusCondition = NULL;
	DDS_ReturnCode_t retCode;
	DDS_Duration_t tTimeout = {timeout/1000, (timeout%1000) * 1000000};
    DDS_UnsignedLong numSec = 0;
    char value[50];

	if(request != NULL)
	{
		*(DDS_UnsignedLong*)request = m_clientServiceId[0];
        ((DDS_UnsignedLong*)request)[1] = m_clientServiceId[1];
        ((DDS_UnsignedLong*)request)[2] = m_clientServiceId[2];
		((DDS_UnsignedLong*)request)[3] = m_clientServiceId[3];

        m_mutex->lock();
		/* Thread safe num_Sec handling */
		((DDS_Long*)request)[4] = m_numSec;
        numSec = m_numSec;
		m_numSec++;
		m_mutex->unlock();

		//info->data = reply;
		// Matching server (Request DataReader) detection.
		// Drawbacks:
		//		1.- If the publication matched status is triggered between get_publication_matched_status()
		//          and wait() calls it will be missed.
		//      2.- If there is no matched entity the total wait time may be up to 2* tTimeout

        waitSet = new DDSWaitSet();

        if(waitSet != NULL)
        {
            // Detect request datareader from server.
		    DDS_PublicationMatchedStatus pms;
		    m_requestDataWriter->get_publication_matched_status(pms);

		    if(pms.current_count < 1)
            {
                statusCondition = m_requestDataWriter->get_statuscondition();

                if(statusCondition != NULL)
                {
                    statusCondition->set_enabled_statuses(DDS_PUBLICATION_MATCHED_STATUS);
                    
                    if(waitSet->attach_condition(statusCondition) == DDS_RETCODE_OK)
                    {
                        DDSConditionSeq conds;
			            retCode = waitSet->wait(conds, tTimeout);

			            if((retCode == DDS_RETCODE_TIMEOUT) || (retCode == DDS_RETCODE_OK && conds.length() == 0))
                        {
                            printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                            returnedValue = NO_SERVER;
                        }

                        waitSet->detach_condition(statusCondition);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot get status condition from request datawriter.\n", CLASS_NAME, METHOD_NAME);
                }
		    }

            // Detect reply datawriter from server.
            DDS_SubscriptionMatchedStatus sms;
            m_replyDataReader->get_subscription_matched_status(sms);

            if(sms.current_count < 1)
            {
                statusCondition = m_replyDataReader->get_statuscondition();

                if(statusCondition != NULL)
                {
                    statusCondition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);
                    
                    if(waitSet->attach_condition(statusCondition) == DDS_RETCODE_OK)
                    {
                        DDSConditionSeq conds;
			            retCode = waitSet->wait(conds, tTimeout);

			            if((retCode == DDS_RETCODE_TIMEOUT) || (retCode == DDS_RETCODE_OK && conds.length() == 0))
                        {
                            printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                            returnedValue = NO_SERVER;
                        }

                        waitSet->detach_condition(statusCondition);
                    }
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot get status condition from reply datareader.\n", CLASS_NAME, METHOD_NAME);
                }
            }

            // Register instance.
            if(DDS_InstanceHandle_is_nil(&m_ih) && registerInstance(request) != 0)
                printf("WARNING<%s::%s>: Cannot register request instance\n", CLASS_NAME, METHOD_NAME);

		    if(returnedValue != NO_SERVER && (write(request) == DDS_RETCODE_OK))
		    {
                struct DDS_StringSeq stringSeq;

                stringSeq.ensure_length(5, 5);
                SNPRINTF(value, 50, "%u", m_clientServiceId[0]);
                stringSeq[0] = DDS_String_dup(value);
                SNPRINTF(value, 50, "%u", m_clientServiceId[1]);
                stringSeq[1] = DDS_String_dup(value);
                SNPRINTF(value, 50, "%u", m_clientServiceId[2]);
                stringSeq[2] = DDS_String_dup(value);
                SNPRINTF(value, 50, "%u", m_clientServiceId[3]);
                stringSeq[3] = DDS_String_dup(value);
                SNPRINTF(value, 50, "%u", numSec);
                stringSeq[4] = DDS_String_dup(value);

                DDSQueryCondition *query = m_replyDataReader->create_querycondition(DDS_NOT_READ_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE,
                    "clientServiceId[0] = %0 and clientServiceId[1] = %1 and clientServiceId[2] = %2 and clientServiceId[3] = %3 and numSec = %4",
                    stringSeq);
                
                if(query != NULL)
                {
                    retCode = waitSet->attach_condition(query);

                    if(retCode == DDS_RETCODE_OK)
                    {
                        DDSConditionSeq conds;
                        retCode = waitSet->wait(conds, tTimeout);

                        if(retCode == DDS_RETCODE_OK)
                        {
                            if(conds.length() == 1 && conds[0] == query)
                            {
                                returnedValue = takeReply(reply, query);
                            }
                        }
                        else if(retCode == DDS_RETCODE_TIMEOUT)
                        {
                            printf("WARNING <%s::%s>: Wait timeout.\n", CLASS_NAME, METHOD_NAME);
		                    returnedValue = SERVER_TIMEOUT;
                        }

                        waitSet->detach_condition(query);
                    }
                    else
                    {
                        printf("ERROR <%s::%s>: Cannot attach query condition\n", CLASS_NAME, METHOD_NAME);
                    }

                    m_replyDataReader->delete_readcondition(query);
                }
                else
                {
                    printf("ERROR <%s::%s>: Cannot create query condition\n", CLASS_NAME, METHOD_NAME);
                }
		    }
		    else
            {
			    printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
		    }

            delete waitSet;
        }
        else
        {
            printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
        }
	}
	else{
		printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
	}

	return returnedValue;
}

int ClientRemoteService::createEntities(DDSDomainParticipant *participant, const char *remoteServiceName,
        const char *requestTypeName, const char *requestQosLibrary, const char *requestQosProfile,
        const char *replyTypeName, const char *replyQosLibrary, const char *replyQosProfile)
{
    const char* const METHOD_NAME = "createEntities";
    char topicNames[100];
    char filterLine[250];
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
                            if(requestQosLibrary == NULL || requestQosProfile == NULL)
                            {
                                m_requestDataWriter = m_requestPublisher->create_datawriter(m_requestTopic, DDS_DATAWRITER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
                            }
                            else
                            {
                                m_requestDataWriter = m_requestPublisher->create_datawriter_with_profile(m_requestTopic, requestQosLibrary, requestQosProfile,
                                    NULL, DDS_STATUS_MASK_NONE);
                            }
                            if(m_requestDataWriter != NULL)
                            {                              
                                // Obtain clientServiceId.
                                DDS_DataWriterQos *wQos = new DDS_DataWriterQos();
                                m_requestDataWriter->get_qos(*wQos);
                                m_clientServiceId[0] = ((wQos->protocol.virtual_guid.value[0] << 24) & 0xFF000000) +
                                    ((wQos->protocol.virtual_guid.value[1] << 16) & 0xFF0000) +
                                    ((wQos->protocol.virtual_guid.value[2] << 8) & 0xFF00) +
                                    (wQos->protocol.virtual_guid.value[3] & 0xFF);
                                m_clientServiceId[1] = ((wQos->protocol.virtual_guid.value[4] << 24) & 0xFF000000) +
                                    ((wQos->protocol.virtual_guid.value[5] << 16) & 0xFF0000) +
                                    ((wQos->protocol.virtual_guid.value[6] << 8) & 0xFF00) +
                                    (wQos->protocol.virtual_guid.value[7] & 0xFF);
                                m_clientServiceId[2] = ((wQos->protocol.virtual_guid.value[8] << 24) & 0xFF000000) +
                                    ((wQos->protocol.virtual_guid.value[9] << 16) & 0xFF0000) +
                                    ((wQos->protocol.virtual_guid.value[10] << 8) & 0xFF00) +
                                    (wQos->protocol.virtual_guid.value[11] & 0xFF);
                                m_clientServiceId[3] = ((wQos->protocol.virtual_guid.value[12] << 24) & 0xFF000000) +
                                    ((wQos->protocol.virtual_guid.value[13] << 16) & 0xFF0000) +
                                    ((wQos->protocol.virtual_guid.value[14] << 8) & 0xFF00) +
                                    (wQos->protocol.virtual_guid.value[15] & 0xFF);
                                delete wQos;

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
                                                SNPRINTF(filterLine, 250, "clientServiceId[0] = %u and clientServiceId[1] = %u and clientServiceId[2] = %u and clientServiceId[3] = %u",
                                                    m_clientServiceId[0], m_clientServiceId[1], m_clientServiceId[2], m_clientServiceId[3]);
                                                if((m_replyFilter = participant->create_contentfilteredtopic(remoteServiceName, m_replyTopic, filterLine, parameters)) != NULL)
                                                {
                                                    if(replyQosLibrary == NULL || replyQosProfile == NULL)
                                                    {
                                                        m_replyDataReader = m_replySubscriber->create_datareader(m_replyFilter, DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
                                                    }
                                                    else
                                                    {
                                                        m_replyDataReader = m_replySubscriber->create_datareader_with_profile(m_replyFilter, replyQosLibrary, replyQosProfile,
                                                            NULL, DDS_STATUS_MASK_NONE);
                                                    }

                                                    if(m_replyDataReader != NULL)
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

