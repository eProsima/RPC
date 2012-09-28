#include "server/Server.h"
#include "server/ServerRPC.h"
#include "exceptions/ResourceException.h"
#include "utils/Utilities.h"
#include "transports/Transport.h"
#include "server/ServerStrategy.h"

#include "boost/config/user.hpp"
#include "boost/thread.hpp"

static const char* const CLASS_NAME = "eProsima::DDSRPC::Server";

namespace eProsima
{
	namespace DDSRPC
	{

		Server::Server(ServerStrategy *strategy, Transport *transport, int domainId) : m_domainId(domainId),
        m_strategy(strategy), m_participant(NULL)
		{
			const char* const METHOD_NAME = "Server";

            if(strategy != NULL && transport != NULL)
            {
                DDS::DomainParticipantQos participantQos;

#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))

                // Because OpenDDS, the first step is set the transport.
                transport->setTransport(participantQos);
#endif

                // Because OpenDDS, the first step is set the transport.
                DDS::DomainParticipantFactory *factory = getFactory(domainId);

                if(factory != NULL)
                {
                    factory->get_default_participant_qos(participantQos);
#if (defined(RTI_WIN32) || defined(RTI_LINUX))
                    transport->setTransport(participantQos);
#endif
                    // Creating the domain participant which is associated with the client
                    m_participant = factory->create_participant(
                            domainId, participantQos, 
                            NULL /* listener */, STATUS_MASK_NONE);

                    if (m_participant != NULL)
                    {
                        if(m_participant->get_qos(participantQos) == DDS::RETCODE_OK)
                        {
                            participantQos.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                            m_participant->set_qos(participantQos);

							printf("INFO<%s::%s>: Server is running\n", CLASS_NAME, METHOD_NAME);

                            return;
                        }
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: create_participant error\n", CLASS_NAME, METHOD_NAME);
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

		void Server::deleteRPCs()
		{
			ServerRPC *rpc = NULL;
			std::list<ServerRPC*>::iterator it = m_rpcList.begin();

			while(it != m_rpcList.end())
			{
				rpc = *it;
				it = m_rpcList.erase(it);
				delete rpc;
			}
		}

		Server::~Server()
		{
			const char* const METHOD_NAME = "~Server";
			DDS::ReturnCode_t retcode;

			if(m_participant != NULL)
			{
				retcode = m_participant->delete_contained_entities();
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s::%s>: delete_contained_entities error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}

				retcode = TheParticipantFactory->delete_participant(m_participant);
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s::%s> delete_participant error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}
			}

			deleteRPCs();
		}

		DDS::DomainParticipant* Server::getParticipant()
		{ 
			return m_participant;
		}

		int Server::setRPC(ServerRPC *newRPC)
		{
			const char* const METHOD_NAME = "getParticipant";
			int returnedValue = -1;

			if(newRPC != NULL)
			{
				m_rpcList.push_back(newRPC);
				returnedValue = 0;
			}
			else
			{
				printf("ERROR<%s::%s>: Cannot create the structure of the new remote service\n", CLASS_NAME, METHOD_NAME);
			}

			return returnedValue;
		}

		void Server::wait(unsigned int milliseconds)
		{
			while(1)
			{
				boost::this_thread::sleep(boost::posix_time::milliseconds(milliseconds));
			}
		}

		void Server::schedule(fExecFunction execFunction, void *data, ServerRPC *service)
		{
            m_strategy->schedule(execFunction, data, this, service);
		}

	} // namespace DDSRPC
} // namespace eProsima
