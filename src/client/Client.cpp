#include "client/Client.h"
#include "client/AsyncThread.h"
#include "exceptions/ResourceException.h"
#include "utils/Utilities.h"
#include "transports/Transport.h"

static const char* const CLASS_NAME = "eProsima::DDSRPC::Client";

namespace eProsima
{
	namespace DDSRPC
	{

		Client::Client(Transport *transport, int domainId, long milliseconds) : m_domainId(domainId), m_participant(NULL),
        m_timeout(milliseconds)
		{
			const char* const METHOD_NAME = "Client";

            if(transport != NULL)
            {
                DDS::DomainParticipantQos participantQos;

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))

                // Because OpenDDS, the first step is set the transport.
                transport->setTransport(participantQos);
#endif
                
                DDS::DomainParticipantFactory *factory = getFactory(domainId);

                if(factory != NULL)
                {
                    factory->get_default_participant_qos(participantQos);
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
                    transport->setTransport(participantQos);
#endif
                    // Creating the domain participant which is associated with the client
                    m_participant = factory->create_participant(
                            m_domainId, participantQos, 
                            NULL /* listener */, STATUS_MASK_NONE);

                    if (m_participant != NULL)
                    {
                        if(m_participant->get_qos(participantQos) == DDS::RETCODE_OK)
                        {
                            participantQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_participant->set_qos(participantQos);

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
                }
                else
                {
                    printf("ERROR<%s:%s>: create factory error\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s:%s>: bad parameters\n", CLASS_NAME, METHOD_NAME);
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

        int Client::addAsyncTask(DDS::QueryCondition *query, AsyncTask *task, long timeout)
        {
            const char* const METHOD_NAME = "addAsyncTask";
            int returnedValue = -1;

            if(query != NULL && task != NULL)
            {
                returnedValue = m_asyncThread->addTask(query, task, timeout);
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

		DDS::DomainParticipant* Client::getParticipant()
		{ 
			return m_participant;
		}

        long Client::getTimeout()
        {
            return m_timeout;
        }

        void Client::setTimeout(long milliseconds)
        {
            m_timeout = milliseconds;
        }

	} // namespace DDSRPC
} // namespace eProsima
