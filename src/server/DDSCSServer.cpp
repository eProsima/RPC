#include "server/DDSCSServer.h"

#include "boost/threadpool.hpp"

class Job
{
public:
	Job(void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*), void *data, DDSCSServer *server, ServerRemoteService *service)
		: m_execFunction(execFunction), m_data(data), m_server(server), m_service(service)
	{
	}

	void run()
	{
		m_execFunction(m_server, m_data, m_service);
	}

private:
	void (*m_execFunction)(DDSCSServer*, void*, ServerRemoteService*);
	void *m_data;
	DDSCSServer *m_server;
	ServerRemoteService *m_service;
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

DDSCSServer::DDSCSServer(int domainId, unsigned int threadCount,
                         const char *qosLibrary, const char *qosProfile) : domainId(domainId),
                         participant(NULL), threadPoolManager(NULL)
{
	DDS_DomainParticipantQos participantQOS;
	DDS_Long serverId = 0;

	// Creating the domain participant which is associated with the client
    if(qosLibrary == NULL || qosProfile == NULL)
    {
	    participant = DDSTheParticipantFactory->create_participant(
		    domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
		    NULL /* listener */, DDS_STATUS_MASK_NONE);
    }
    else
    {
        participant = DDSTheParticipantFactory->create_participant_with_profile(
            domainId, qosLibrary, qosProfile,
            NULL /* listener */, DDS_STATUS_MASK_NONE);
    }

	if (participant != NULL)
	{
		if(participant->get_qos(participantQOS) == DDS_RETCODE_OK)
		{
			serverId = participantQOS.wire_protocol.participant_id;

            participantQOS.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
            participant->set_qos(participantQOS);
		}
	}
	else
	{
		printf("ERROR <DDSCSClient>: create_participant error\n");
		goto fin;
	}

	// ThreadPool with DDSCS_MIN_THREADS_DEFAULT threads
	threadPoolManager = new ThreadPoolManager(threadCount);

	if(threadPoolManager == NULL)
	{
		printf("ERROR <DDSCSServer>: cannot create thread pool manager\n");
		goto fin;
	}

	printf("INFO <DDSCSServer>: Created server with ID %d\n", serverId);
fin:
	return;
}

void DDSCSServer::deleteServices()
{
	ServerRemoteService *service = NULL;
	std::list<ServerRemoteService*>::iterator it = m_remoteServicesList.begin();

	while(it != m_remoteServicesList.end())
	{
		service = *it;
		it = m_remoteServicesList.erase(it);
		delete service;
	}
}

DDSCSServer::~DDSCSServer()
{
	DDS_ReturnCode_t retcode;

	if(participant != NULL)
	{
		retcode = participant->delete_contained_entities();
		if (retcode != DDS_RETCODE_OK) {
			printf("ERROR <~DDSCSClient>: delete_contained_entities error %d\n", retcode);
		}

		retcode = DDSTheParticipantFactory->delete_participant(participant);
		if (retcode != DDS_RETCODE_OK) {
			printf("ERROR <~DDSCSClient> delete_participant error %d\n", retcode);
		}
	}

	if(threadPoolManager != NULL)
	{
		delete threadPoolManager;
	}

	deleteServices();
}

DDSDomainParticipant* DDSCSServer::getParticipant()
{ 
	return participant;
}

int DDSCSServer::setRemoteService(ServerRemoteService *newRemoteService)
{
	int returnedValue = -1;

	if(newRemoteService != NULL)
	{
		m_remoteServicesList.push_back(newRemoteService);
		returnedValue = 0;
	}
	else
	{
		printf("ERROR <createRemoteService>: Cannot create the structure of the new remote service\n");
	}

	return returnedValue;
}

void DDSCSServer::executeServer(DDS_Long seconds, DDS_UnsignedLong nanoseconds)
{
	DDS_Duration_t period = {seconds,nanoseconds};
	while(1)
	{
		NDDSUtility::sleep(period);
	}
}

void DDSCSServer::schedule(void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*), void *data, ServerRemoteService *service)
{
    printf("SCHEDULING %s\n", service->getRemoteServiceName());
	boost::shared_ptr<Job> job(new Job(execFunction, data, this, service));
	boost::threadpool::schedule(*threadPoolManager->getPool(), boost::bind(&Job::run, job));
}
