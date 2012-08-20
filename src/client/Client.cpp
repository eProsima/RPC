#include "client/Client.h"
#include "client/AsyncThread.h"
#include "exceptions/ResourceException.h"

static const char* const CLASS_NAME = "eProsima::DDSRPC::Client";

namespace eProsima
{
	namespace DDSRPC
	{

		Client::Client(int domainId, const char *qosLibrary,
								 const char *qosProfile) : m_domainId(domainId), m_participant(NULL)
		{
			const char* const METHOD_NAME = "Client";
			DDS::DomainParticipantQos participantQOS;

			// Creating the domain participant which is associated with the client
			if(qosLibrary == NULL || qosProfile == NULL)
			{
				m_participant = TheParticipantFactory->create_participant(
						m_domainId, DDS::PARTICIPANT_QOS_DEFAULT, 
						NULL /* listener */, DDS::STATUS_MASK_NONE);
			}
			else
			{
				m_participant = TheParticipantFactory->create_participant_with_profile(
					m_domainId, qosLibrary, qosProfile,
					NULL /* listener */, DDS::STATUS_MASK_NONE);
			}

			if (m_participant != NULL)
			{
				if(m_participant->get_qos(participantQOS) == DDS::RETCODE_OK)
				{
					participantQOS.entity_factory.autoenable_created_entities = DDS::BOOLEAN_FALSE;
					m_participant->set_qos(participantQOS);

                    m_asyncThread = new AsyncThread();

                    if(m_asyncThread != NULL)
                    {
                        if(m_asyncThread->init() == 0)
                            return;
                        else
                        {
                            printf("ERROR<%s:%s>: Cannot initialize the asynchronous thread\n", CLASS_NAME, METHOD_NAME);
                            delete m_asyncThread;
                        }
                    }
                    else
                        printf("ERROR<%s:%s>: create asynchronous thread\n", CLASS_NAME, METHOD_NAME);
				}

                TheParticipantFactory->delete_participant(m_participant);
			}
			else
			{
				printf("ERROR<%s:%s>: create_participant error\n", CLASS_NAME, METHOD_NAME);
			}

            throw ResourceException();
		}

		Client::~Client()
		{
			const char* const METHOD_NAME = "~Client";
			DDS::ReturnCode_t retcode;

            if(m_asyncThread != NULL)
            {
                m_asyncThread->exit();
                delete m_asyncThread;
            }

			if(m_participant != NULL)
			{
				retcode = m_participant->delete_contained_entities();
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s:%s>: delete_contained_entities error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}

				retcode = TheParticipantFactory->delete_participant(m_participant);
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s:%s> delete_participant error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}
			}
		}

        int Client::addAsyncTask(DDS::QueryCondition *query, AsyncTask *task)
        {
            const char* const METHOD_NAME = "addAsyncTask";
            int returnedValue = -1;

            if(query != NULL && task != NULL)
            {
                returnedValue = m_asyncThread->addTask(query, task);
            }
            else
            {
                printf("ERROR<%s::%S>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

		DDS::DomainParticipant* Client::getParticipant()
		{ 
			return m_participant;
		}

	} // namespace DDSRPC
} // namespace eProsima
