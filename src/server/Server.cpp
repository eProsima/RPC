#include "server/Server.h"
#include "server/ServerRPC.h"
#include "exceptions/InitializeException.h"
#include "utils/Utilities.h"
#include "transports/Transport.h"
#include "transports/UDPTransport.h"
#include "server/ServerStrategy.h"

#include "boost/config/user.hpp"
#include "boost/thread.hpp"

static const char* const CLASS_NAME ="eProsima::RPCDDS::Server";

namespace eProsima
{
	namespace RPCDDS
	{

		Server::Server(std::string serviceName, ServerStrategy *strategy, Transport *transport, int domainId) : m_serviceName(serviceName), m_domainId(domainId),
        m_strategy(strategy), m_participant(NULL), m_defaultTransport(false), m_transport(transport)
		{
			const char* const METHOD_NAME = "Server";
			std::string errorMessage;

            if(strategy != NULL)
            {
				if(m_transport == NULL)
				{
					m_transport = new UDPTransport();
					m_defaultTransport = true;
				}

				DDS::DomainParticipantQos participantQos;

	#if (defined(OPENDDS_WIN32) || defined(OPENDDS_LINUX))

				// Because OpenDDS, the first step is set the transport.
				m_transport->setTransport(participantQos);
	#endif

				// Because OpenDDS, the first step is set the transport.
				DDS::DomainParticipantFactory *factory = getFactory(m_domainId);

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

							return;
						}
						else
						{
							errorMessage = "cannot get the participant QoS";
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
            }
            else
            {				
			    errorMessage = "bad parameters";
            }

			printf("ERROR<%s::%s>: %s\n", CLASS_NAME, METHOD_NAME, errorMessage.c_str());
            throw InitializeException(std::move(errorMessage));
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

			deleteRPCs();

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

			if(m_defaultTransport && m_transport != NULL)
				delete m_transport;
		}

		DDS::DomainParticipant* Server::getParticipant() const
		{ 
			return m_participant;
		}

		int Server::setRPC(ServerRPC *newRPC)
		{
			const char* const METHOD_NAME ="getParticipant";
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

		void Server::serve()
		{
			const char* const METHOD_NAME = "serve";
			std::string errorMessage;

			std::list<ServerRPC*>::iterator it;

			for(it = m_rpcList.begin(); it != m_rpcList.end(); ++it)
			{
				if((*it)->start() != 0)
				{
					printf("ERROR<%s::%s>: Cannot start the RPC object %s\n", CLASS_NAME, METHOD_NAME, (*it)->getRPCName());
					throw InitializeException(std::string("Cannot start the RPC object ") + (*it)->getRPCName());
				}
			}

			printf("INFO<%s::%s>: Server is running\n", CLASS_NAME, METHOD_NAME);	
		}

		void Server::stop()
		{
			const char* const METHOD_NAME = "stop";
			for(std::list<ServerRPC*>::iterator it = m_rpcList.begin(); it != m_rpcList.end(); ++it)
			{
				(*it)->stop();
			}

			printf("INFO<%s::%s>: Server is stopped\n", CLASS_NAME, METHOD_NAME);
		}

		void Server::schedule(fExecFunction execFunction, void *data, ServerRPC *service)
		{
            m_strategy->schedule(execFunction, data, this, service);
		}

		const std::string& Server::getServiceName() const
		{
			return m_serviceName;
		}

	} // namespace RPCDDS
} // namespace eProsima
