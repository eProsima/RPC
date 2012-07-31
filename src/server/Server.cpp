#include "server/Server.h"
#include "server/ServerRPC.h"

#include "boost/threadpool.hpp"

static const char* const CLASS_NAME = "DDSRPC::Server";

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

	Server::Server(int domainId, unsigned int threadCount,
							 const char *qosLibrary, const char *qosProfile) : m_domainId(domainId),
							 m_participant(NULL), m_threadPoolManager(NULL)
	{
		const char* const METHOD_NAME = "Server";
		DDS::DomainParticipantQos participantQOS;
		DDS_Long serverId = 0;

		// Creating the domain participant which is associated with the client
		if(qosLibrary == NULL || qosProfile == NULL)
		{
			m_participant = TheParticipantFactory->create_participant(
				domainId, DDS::PARTICIPANT_QOS_DEFAULT, 
				NULL /* listener */, DDS::STATUS_MASK_NONE);
		}
		else
		{
			m_participant = TheParticipantFactory->create_participant_with_profile(
				domainId, qosLibrary, qosProfile,
				NULL /* listener */, DDS::STATUS_MASK_NONE);
		}

		if (m_participant != NULL)
		{
			if(m_participant->get_qos(participantQOS) == DDS::RETCODE_OK)
			{
				serverId = participantQOS.wire_protocol.participant_id;

				participantQOS.entity_factory.autoenable_created_entities = DDS::BOOLEAN_FALSE;
				m_participant->set_qos(participantQOS);
			}
		}
		else
		{
			printf("ERROR<%s::%s>: create_participant error\n", CLASS_NAME, METHOD_NAME);
			goto fin;
		}

		// ThreadPool with DDSCS_MIN_THREADS_DEFAULT threads
		m_threadPoolManager = new ThreadPoolManager(threadCount);

		if(m_threadPoolManager == NULL)
		{
			printf("ERROR<%s::%s>: cannot create thread pool manager\n", CLASS_NAME, METHOD_NAME);
			goto fin;
		}

		printf("INFO<%s::%s>: Created server with ID %d\n", CLASS_NAME, METHOD_NAME, serverId);
	fin:
		return;
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
