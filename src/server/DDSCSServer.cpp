#include "server/DDSCSServer.h"

#include "ndds_utility_cpp.h"

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

	REDAInlineList_init(&remoteServicesList);

	printf("INFO <DDSCSServer>: Created server with ID %d\n", serverId);
fin:
	return;
}

void DDSCSServer::deleteServices()
{
	ServiceNode *node;	
	int i, count = REDAInlineList_getSize(&remoteServicesList);
	// Try to clean up even if mutex take have failed...
	for(i = 0; i < count; i++)
	{
		node = (ServiceNode*)REDAInlineList_getFirst(&remoteServicesList);
		REDAInlineList_removeNodeEA(&remoteServicesList, &node->parent);
		delete node->service;
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
		REDAInlineList_addNodeToBackEA(&remoteServicesList, newRemoteService->getNode());
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
	threadPoolManager->schedule(execFunction, data, this, service);
}
