#include "server/Server.h"
#include "server/ServerRPC.h"
#include "exceptions/ResourceException.h"
#include "utils/Utilities.h"

#include "boost/config/user.hpp"
#include "boost/threadpool.hpp"

static const char* const CLASS_NAME = "eProsima::DDSRPC::Server";

namespace eProsima
{
	namespace DDSRPC
	{

		class Job
		{
		public:
			Job(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
				: m_execFunction(execFunction), m_data(data), m_server(server), m_service(service)
			{
			}

			void run()
			{
				m_execFunction(m_server, m_data, m_service);
			}

		private:
			fExecFunction m_execFunction;
			void *m_data;
			Server *m_server;
			ServerRPC *m_service;
		};

		class ThreadPoolManager
		{
		public:
			ThreadPoolManager(unsigned int threadCount)
			{
				m_pool = new boost::threadpool::pool(threadCount);
			}

			boost::threadpool::pool* getPool()
			{
				return m_pool;
			}

		private:

			boost::threadpool::pool *m_pool;
		};

		Server::Server(int domainId, unsigned int threadCount) : m_domainId(domainId),
								 m_participant(NULL), m_threadPoolManager(NULL)
		{
			const char* const METHOD_NAME = "Server";
			DDS::DomainParticipantQos participantQOS;
            DDS::DomainParticipantFactory *factory = getFactory(domainId);

            if(factory != NULL)
            {
                // Creating the domain participant which is associated with the client
                m_participant = factory->create_participant(
                        domainId, PARTICIPANT_QOS_DEFAULT, 
                        NULL /* listener */, STATUS_MASK_NONE);

                if (m_participant != NULL)
                {
                    if(m_participant->get_qos(participantQOS) == DDS::RETCODE_OK)
                    {
                        participantQOS.entity_factory.autoenable_created_entities = BOOLEAN_FALSE;
                        m_participant->set_qos(participantQOS);

                        // ThreadPool with DDSCS_MIN_THREADS_DEFAULT threads
                        m_threadPoolManager = new ThreadPoolManager(threadCount);

                        if(m_threadPoolManager != NULL)
                            return;
                        else
                            printf("ERROR<%s::%s>: cannot create thread pool manager\n", CLASS_NAME, METHOD_NAME);
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

			if(m_threadPoolManager != NULL)
			{
				delete m_threadPoolManager;
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

		void Server::executeServer(unsigned int milliseconds)
		{
			while(1)
			{
				boost::this_thread::sleep(boost::posix_time::milliseconds(milliseconds));
			}
		}

		void Server::schedule(fExecFunction execFunction, void *data, ServerRPC *service)
		{
			printf("SCHEDULING %s\n", service->getRPCName());
			boost::shared_ptr<Job> job(new Job(execFunction, data, this, service));
			boost::threadpool::schedule(*m_threadPoolManager->getPool(), boost::bind(&Job::run, job));
		}

	} // namespace DDSRPC
} // namespace eProsima
