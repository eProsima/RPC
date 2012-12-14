/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "client/Client.h"
#include "client/AsyncThread.h"
#include "exceptions/InitializeException.h"
#include "transports/Transport.h"
#include "transports/UDPTransport.h"

static const char* const CLASS_NAME ="eProsima::RPCDDS::Client";

namespace eProsima
{
	namespace RPCDDS
	{

		Client::Client(std::string remoteServiceName, Transport *transport, int domainId, long milliseconds) : m_domainId(domainId), m_participant(NULL),
        m_timeout(milliseconds), m_defaultTransport(false), m_transport(transport), m_remoteServiceName(remoteServiceName)
		{
			const char* const METHOD_NAME ="Client";
			std::string errorMessage;

            if(m_transport == NULL)
            {
				m_transport = new UDPClientTransport();
				m_defaultTransport = true;
			}

            DDS::DomainParticipantQos participantQos;

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))

            // Because OpenDDS, the first step is set the transport.
            m_transport->setTransport(participantQos);
#endif
                
            DDS::DomainParticipantFactory *factory = getFactory(domainId);

            if(factory != NULL)
            {
                factory->get_default_participant_qos(participantQos);
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
                m_transport->setTransport(participantQos);
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

						// Create asynchronous tasks thread
						m_asyncThread = new AsyncThread();

						if(m_asyncThread != NULL)
						{
							if(m_asyncThread->init() == 0)
								return;
							else
							{
								errorMessage = "Cannot initialize the asynchronous thread";
								delete m_asyncThread;
							}
						}
						else
							errorMessage = "create asynchronous thread";
                    }

                    factory->delete_participant(m_participant);
                }
                else
                {
					errorMessage = "create_participant error";
                }
            }
            else
            {
				errorMessage = "create factory error";
            }

			printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
            throw InitializeException(std::move(errorMessage));
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

			if(m_defaultTransport && m_transport != NULL)
				delete m_transport;
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

		void Client::deleteAssociatedAsyncTasks(ClientRPC *rpc)
		{
			const char* const METHOD_NAME = "deleteAssociatedAsyncTasks";

            if(rpc != NULL)
            {
                m_asyncThread->deleteAssociatedAsyncTasks(rpc);
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
		}

		DDS::DomainParticipant* Client::getParticipant()
		{ 
			return m_participant;
		}

        long Client::getTimeout() const
        {
            return m_timeout;
        }

        void Client::setTimeout(long milliseconds)
        {
            m_timeout = milliseconds;
        }

		const std::string& Client::getRemoteServiceName() const
		{
			return m_remoteServiceName;
		}
	} // namespace RPCDDS
} // namespace eProsima
