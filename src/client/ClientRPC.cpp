#include "client/ClientRPC.h"
#include "client/Client.h"
#include "client/AsyncTask.h"
#include "utils/Typedefs.h"
#include "utils/Utilities.h"
#include "eProsima_c/eProsimaMacros.h"
#include "exceptions/InitializeException.h"
#include "MessageHeader.h"

#include "boost/config/user.hpp"
#include "boost/thread/mutex.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

static const char* const CLASS_NAME = "eProsima::DDSRPC::ClientRPC";

namespace eProsima
{
	namespace DDSRPC
	{

		ClientRPC::ClientRPC(const char *rpcName, const char *requestTypeName, const char *replyTypeName, Client *client) :
            m_client(client), m_requestPublisher(NULL),
		m_replySubscriber(NULL), m_requestTopic(NULL), m_requestDataWriter(NULL), m_replyFilter(NULL), m_numSec(0), m_ih(DDS::HANDLE_NIL)
		{
			const char* const METHOD_NAME = "ClientRPC";
			std::string errorMessage;
    
			m_mutex =  new boost::mutex();

			if(m_mutex != NULL)
			{
				if(createEntities(client->getParticipant(), rpcName, requestTypeName, replyTypeName))
				{
					if(enableEntities())
					{
						strncpy(m_rpcName, rpcName, 50);
						return;
					}
					else
					{
						errorMessage = "Cannot enable the DDS entities";
					}
				}
				else
				{
					errorMessage = "Cannot create the DDS entities";
				}
			}
			else
			{
				errorMessage = "Cannot create the mutex";
			}

			printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
            throw InitializeException(errorMessage);
		}

		ClientRPC::~ClientRPC()
		{
			if(m_mutex != NULL)
			{
				delete m_mutex;
				m_mutex = NULL;
			}

			if(m_replyDataReader != NULL)
			    m_replySubscriber->delete_datareader(m_replyDataReader);
			if(m_replyFilter != NULL)
				m_client->getParticipant()->delete_contentfilteredtopic(m_replyFilter);
			if(m_replyTopic != NULL)
				m_client->getParticipant()->delete_topic(m_replyTopic);
			if(m_replySubscriber != NULL)
				 m_client->getParticipant()->delete_subscriber(m_replySubscriber);
			if(m_requestDataWriter != NULL)
				m_requestPublisher->delete_datawriter(m_requestDataWriter);
			if(m_requestTopic)
				m_client->getParticipant()->delete_topic(m_requestTopic);
			if(m_requestPublisher != NULL)
				m_client->getParticipant()->delete_publisher(m_requestPublisher);
		}

		ReturnMessage ClientRPC::execute(void *request, void *reply, long timeout)
		{
			const char* const METHOD_NAME = "execute";
			ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
			DDS::WaitSet *waitSet = NULL;
			DDS::ReturnCode_t retCode;
            boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(timeout);
			unsigned int numSec = 0;
			char value[50];

			if(request != NULL)
			{
				RequestHeader *reqhead = (RequestHeader*)request;
				reqhead->clientId.value_1 = m_clientServiceId[0];
				reqhead->clientId.value_2 = m_clientServiceId[1];
				reqhead->clientId.value_3 = m_clientServiceId[2];
				reqhead->clientId.value_4 = m_clientServiceId[3];
				reqhead->remoteServiceName = (char*)m_client->getRemoteServiceName().c_str();

				m_mutex->lock();
				/* Thread safe num_Sec handling */
				reqhead->requestSequenceNumber = m_numSec;
				numSec = m_numSec;
				m_numSec++;
				m_mutex->unlock();

				//info->data = reply;
				// Matching server (Request DataReader) detection.
				// Drawbacks:
				//		1.- If the publication matched status is triggered between get_publication_matched_status()
				//          and wait() calls it will be missed.
				//      2.- If there is no matched entity the total wait time may be up to 2* tTimeout

				waitSet = new DDS::WaitSet();

				if(waitSet != NULL)
				{
                    if(checkServerConnection(waitSet, timeout) == OPERATION_SUCCESSFUL)
                    {
                        // Register instance.
                        if(DDS_InstanceHandle_is_nil(&m_ih) && registerInstance(request) != 0)
                            printf("WARNING<%s::%s>: Cannot register request instance\n", CLASS_NAME, METHOD_NAME);

                        if(write(request) == DDS::RETCODE_OK)
                        {
                            // Its not a oneway function.
                            if(m_replySubscriber != NULL)
                            {
                                DDS::StringSeq stringSeq(5);

                                stringSeq.length(5);
                                SNPRINTF(value, 50, "%u", m_clientServiceId[0]);
                                stringSeq[0] = strdup(value);
                                SNPRINTF(value, 50, "%u", m_clientServiceId[1]);
                                stringSeq[1] = strdup(value);
                                SNPRINTF(value, 50, "%u", m_clientServiceId[2]);
                                stringSeq[2] = strdup(value);
                                SNPRINTF(value, 50, "%u", m_clientServiceId[3]);
                                stringSeq[3] = strdup(value);
                                SNPRINTF(value, 50, "%u", numSec);
                                stringSeq[4] = strdup(value);

                                DDS::QueryCondition *query = m_replyDataReader->create_querycondition(DDS::NOT_READ_SAMPLE_STATE, DDS::ANY_VIEW_STATE, DDS::ANY_INSTANCE_STATE,
                                        "header.clientId.value_1 = %0 and header.clientId.value_2 = %1 and header.clientId.value_3 = %2 and header.clientId.value_4 = %3 and header.requestSequenceNumber = %4",
                                        stringSeq);

                                if(query != NULL)
                                {
                                    retCode = waitSet->attach_condition(query);

                                    if(retCode == DDS::RETCODE_OK)
                                    {
                                        DDS::ConditionSeq conds;
                                        DDS_TIMEOUT(ddsTimeout, tTimeout);

                                        retCode = waitSet->wait(conds, ddsTimeout);

                                        if(retCode == DDS::RETCODE_OK)
                                        {
                                            if(conds.length() == 1 && conds[0] == query)
                                            {
                                                returnedValue = takeReply(reply, query);
                                            }
                                        }
                                        else if(retCode == DDS::RETCODE_TIMEOUT)
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
                                returnedValue = OPERATION_SUCCESSFUL;
                            }
                        }
                        else
                        {
                            printf("ERROR <%s::%s>: Some error occurs\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                    else
                    {
                        printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                        returnedValue = NO_SERVER;
                    }

					delete waitSet;
				}
				else
				{
					printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
				}
				
				// Set the remoteServiceName to NULL.
				reqhead->remoteServiceName = NULL;
			}
			else
            {
				printf("ERROR<%s::%s>: Bad parameter(data)\n", CLASS_NAME, METHOD_NAME);
			}

			return returnedValue;
		}

        ReturnMessage ClientRPC::executeAsync(void *request, AsyncTask *task, long timeout)
        {
			const char* const METHOD_NAME = "executeAsync";
			ReturnMessage returnedValue = CLIENT_INTERNAL_ERROR;
			DDS::WaitSet *waitSet = NULL;
			unsigned int numSec = 0;
			char value[50];

            if(request != NULL && task != NULL)
            {
				*(unsigned int*)request = m_clientServiceId[0];
				((unsigned int*)request)[1] = m_clientServiceId[1];
				((unsigned int*)request)[2] = m_clientServiceId[2];
				((unsigned int*)request)[3] = m_clientServiceId[3];

				m_mutex->lock();
				/* Thread safe num_Sec handling */
				((unsigned int*)request)[4] = m_numSec;
				numSec = m_numSec;
				m_numSec++;
				m_mutex->unlock();

				waitSet = new DDS::WaitSet();

				if(waitSet != NULL)
				{
                    if(checkServerConnection(waitSet, timeout) == OPERATION_SUCCESSFUL)
                    {
                        // Register instance.
                        if(DDS_InstanceHandle_is_nil(&m_ih) && registerInstance(request) != 0)
                            printf("WARNING<%s::%s>: Cannot register request instance\n", CLASS_NAME, METHOD_NAME);

                        if(write(request) == DDS::RETCODE_OK)
                        {
                            DDS::StringSeq stringSeq(5);

                            stringSeq.length(5);
                            SNPRINTF(value, 50, "%u", m_clientServiceId[0]);
                            stringSeq[0] = strdup(value);
                            SNPRINTF(value, 50, "%u", m_clientServiceId[1]);
                            stringSeq[1] = strdup(value);
                            SNPRINTF(value, 50, "%u", m_clientServiceId[2]);
                            stringSeq[2] = strdup(value);
                            SNPRINTF(value, 50, "%u", m_clientServiceId[3]);
                            stringSeq[3] = strdup(value);
                            SNPRINTF(value, 50, "%u", numSec);
                            stringSeq[4] = strdup(value);

                            DDS::QueryCondition *query = m_replyDataReader->create_querycondition(DDS::NOT_READ_SAMPLE_STATE, DDS::ANY_VIEW_STATE, DDS::ANY_INSTANCE_STATE,
                                    "header.clientId.value_1 = %0 and header.clientId.value_2 = %1 and header.clientId.value_3 = %2 and header.clientId.value_4 = %3 and header.requestSequenceNumber = %4",
                                    stringSeq);

                            if(query != NULL)
                            {
                                // Set the timeout.
                                task->setClientRPC(this);
                                if(m_client->addAsyncTask(query, task, timeout) == 0)
                                    returnedValue = OPERATION_SUCCESSFUL;
                                else
                                    printf("ERROR <%s::%s>: Cannot add asynchronous task\n", CLASS_NAME, METHOD_NAME);
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
                    }
                    else
                    {
                        printf("WARNING<%s::%s>: No server discovered.\n", CLASS_NAME, METHOD_NAME);
                        returnedValue = NO_SERVER;
                    }

					delete waitSet;
				}
				else
				{
					printf("ERROR <%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
				}
            }
			else
            {
				printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
			}

            return returnedValue;
        }

        ReturnMessage ClientRPC::checkServerConnection(DDS::WaitSet *waitSet, long timeout)
        {
            const char* const METHOD_NAME = "checkServerConnection";
            ReturnMessage returnedValue = OPERATION_SUCCESSFUL;
			DDS::StatusCondition *statusCondition = NULL;
			DDS::ReturnCode_t retCode;
            boost::posix_time::time_duration tTimeout = boost::posix_time::milliseconds(timeout);
            DDS_TIMEOUT(ddsTimeout, tTimeout);

            if(waitSet != NULL)
            {
                // Detect request datareader from server.
                DDS::PublicationMatchedStatus pms;
                m_requestDataWriter->get_publication_matched_status(pms);

                if(pms.current_count < 1)
                {
                    returnedValue = NO_SERVER;
                    statusCondition = m_requestDataWriter->get_statuscondition();

                    if(statusCondition != NULL)
                    {
                        statusCondition->set_enabled_statuses(DDS::PUBLICATION_MATCHED_STATUS);

                        if(waitSet->attach_condition(statusCondition) == DDS::RETCODE_OK)
                        {
                            DDS::ConditionSeq conds;

                            retCode = waitSet->wait(conds, ddsTimeout);

                            if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS::RETCODE_OK && conds.length() == 0))
                                returnedValue = OPERATION_SUCCESSFUL;

                            waitSet->detach_condition(statusCondition);
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot get status condition from request datawriter.\n", CLASS_NAME, METHOD_NAME);
                    }
                }

                if(returnedValue == OPERATION_SUCCESSFUL && m_replySubscriber != NULL)
                {
                    // Detect reply datawriter from server.
                    DDS::SubscriptionMatchedStatus sms;
                    m_replyDataReader->get_subscription_matched_status(sms);

                    if(sms.current_count < 1)
                    {
                        returnedValue = NO_SERVER;
                        statusCondition = m_replyDataReader->get_statuscondition();

                        if(statusCondition != NULL)
                        {
                            statusCondition->set_enabled_statuses(DDS::SUBSCRIPTION_MATCHED_STATUS);

                            if(waitSet->attach_condition(statusCondition) == DDS::RETCODE_OK)
                            {
                                DDS::ConditionSeq conds;
                                retCode = waitSet->wait(conds, ddsTimeout);

                                if(!(retCode == DDS::RETCODE_TIMEOUT) && !(retCode == DDS::RETCODE_OK && conds.length() == 0))
                                {
                                    returnedValue = OPERATION_SUCCESSFUL;
                                }

                                waitSet->detach_condition(statusCondition);
                            }
                        }
                        else
                        {
                            printf("ERROR<%s::%s>: Cannot get status condition from reply datareader.\n", CLASS_NAME, METHOD_NAME);
                        }
                    }
                }
            }
			else
            {
				printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
			}

            return returnedValue;
        }

		int ClientRPC::createEntities(DDS::DomainParticipant *participant, const char *rpcName,
				const char *requestTypeName, const char *replyTypeName)
		{
			const char* const METHOD_NAME = "createEntities";
			DDS::PublisherQos publisherQos;
			DDS::SubscriberQos subscriberQos;

			if(participant != NULL)
			{
				if(rpcName != NULL)
				{
					if((m_requestPublisher = participant->create_publisher(PUBLISHER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
					{
						if(m_requestPublisher->get_qos(publisherQos) == DDS::RETCODE_OK)
						{
							publisherQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
							m_requestPublisher->set_qos(publisherQos);

							if(requestTypeName != NULL)
							{
								if((m_requestTopic = participant->create_topic(requestTypeName, requestTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
								{
                                    DDS::DataWriterQos wQos = DDS::DataWriterQos();

                                    m_requestPublisher->get_default_datawriter_qos(wQos);

                                    wQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;
                                        
                                    m_requestDataWriter = m_requestPublisher->create_datawriter(m_requestTopic, wQos, NULL, STATUS_MASK_NONE);

									if(m_requestDataWriter != NULL)
									{                              
                                        // Is not oneway operation
                                        if(replyTypeName != NULL)
                                        {
                                            if((m_replySubscriber = participant->create_subscriber(SUBSCRIBER_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                            {
                                                if(m_replySubscriber->get_qos(subscriberQos) == DDS::RETCODE_OK)
                                                {
                                                    subscriberQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                                                    m_replySubscriber->set_qos(subscriberQos);

                                                    if((m_replyTopic = participant->create_topic(replyTypeName, replyTypeName, TOPIC_QOS_DEFAULT, NULL, STATUS_MASK_NONE)) != NULL)
                                                    {
                                                        DDS::StringSeq stringSeq(4);
														stringSeq.length(4);
                                                        stringSeq[0] = strdup("0");
                                                        stringSeq[1] = strdup("0");
                                                        stringSeq[2] = strdup("0");
                                                        stringSeq[3] = strdup("0");

                                                        if((m_replyFilter = participant->create_contentfilteredtopic(rpcName, m_replyTopic,
                                                                        "header.clientId.value_1 = %0 and header.clientId.value_2 = %1 and header.clientId.value_3 = %2 and header.clientId.value_4 = %3",
                                                                        stringSeq)) != NULL)
                                                        {
                                                            DDS::DataReaderQos rQos = DDS::DataReaderQos();

                                                            m_replySubscriber->get_default_datareader_qos(rQos);

                                                            rQos.reliability.kind = DDS::RELIABLE_RELIABILITY_QOS;

                                                            m_replyDataReader = m_replySubscriber->create_datareader(m_replyFilter, rQos, NULL, STATUS_MASK_NONE);

                                                            if(m_replyDataReader != NULL)
                                                            {
                                                                return 1;
                                                            }

                                                            participant->delete_contentfilteredtopic(m_replyFilter);
                                                        }
														else
														{
															printf("ERROR<%s::%s>: Cannot create the reply filter\n", CLASS_NAME, METHOD_NAME);
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
                                                    printf("ERROR <%s::%s>: Cannot get the subscriber qos\n", CLASS_NAME, METHOD_NAME);
                                                }

                                                participant->delete_subscriber(m_replySubscriber);
                                            }
                                            else
                                            {
                                                printf("ERROR<%s::%s>: Cannot create the reply subscriber\n", CLASS_NAME, METHOD_NAME);
                                            }
                                        }
                                        else
                                        {
                                            return 1;
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

		int ClientRPC::enableEntities()
		{
			const char* const METHOD_NAME = "enableEntities";
			int returnedValue = 0;

			if(m_requestPublisher->enable() == DDS::RETCODE_OK)
			{
				if(m_requestTopic->enable() == DDS::RETCODE_OK)
				{
					if(m_requestDataWriter->enable() == DDS::RETCODE_OK)
                    {
                        // Obtain clientServiceId.
                        get_guid(m_clientServiceId, m_requestDataWriter);

                        // Set identifier to filter topic.
                        DDS::StringSeq stringSeq(4);
                        char value[50];

                        stringSeq.length(4);
                        SNPRINTF(value, 50, "%u", m_clientServiceId[0]);
                        stringSeq[0] = strdup(value);
                        SNPRINTF(value, 50, "%u", m_clientServiceId[1]);
                        stringSeq[1] = strdup(value);
                        SNPRINTF(value, 50, "%u", m_clientServiceId[2]);
                        stringSeq[2] = strdup(value);
                        SNPRINTF(value, 50, "%u", m_clientServiceId[3]);
                        stringSeq[3] = strdup(value);

                        m_replyFilter->set_expression_parameters(stringSeq);

                        // if not operation oneway.
                        if(m_replySubscriber != NULL)
                        {
                            if(m_replySubscriber->enable() == DDS::RETCODE_OK)
                            {
                                if(m_replyTopic->enable() == DDS::RETCODE_OK)
                                {
                                    if(m_replyDataReader->enable() == DDS::RETCODE_OK)
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
                            returnedValue = 1;
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

        void ClientRPC::deleteQuery(DDS::QueryCondition *query)
        {
            const char* const METHOD_NAME = "deleteQuery";

            if(query != NULL)
            {
                m_replyDataReader->delete_readcondition(query);
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }

	} // namespace DDSRPC
} // namespace eProsima
