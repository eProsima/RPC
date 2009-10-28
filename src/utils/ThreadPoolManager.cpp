#include "utils/ThreadPoolManager.h"
#include "utils/Thread.h"
#include "server/ServerRemoteService.h"

ThreadPoolManager::ThreadPoolManager(unsigned int maxThreads) : initialized(false), threadsEndWaitPeriod(DDS_DURATION_ZERO), threadCount(maxThreads),
threadFactory(NULL), readyListMutex(NULL), busyListMutex(NULL)
{
	Thread *thread;

    threadFactory = RTIOsapiThreadFactory_newDefault();

    readyListMutex = RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);
    busyListMutex = RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);

	if (readyListMutex != NULL && busyListMutex != NULL)
	{
		REDAInlineList_init(&readyList);
		REDAInlineList_init(&busyList);

        if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to take ready list mutex\n", __FUNCTION__);
            goto fin;
        }
	    for(unsigned int i = 0; i < threadCount; i++)
		{
			thread = new Thread(i, threadFactory, this);
			REDAInlineList_addNodeToBackEA(&readyList, thread->getNode());
	    }
        if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
            printf("%s: failed to give ready list mutex\n", __FUNCTION__);
            goto fin;
        }
	}
	initialized = true;
fin:
	return;
}

// Call only after aquiring list mutex. 
void ThreadPoolManager::stopThreads(REDAInlineList *list)
{
	ThreadNode *node;
	if(REDAInlineList_getSize(list) > 0)
	{
		node = (ThreadNode*)REDAInlineList_getFirst(list);
		do
		{
			node->thread->stop();
			node = (ThreadNode*)node->parent.next;
		}while(node != NULL);
	}
}


void ThreadPoolManager::deleteThreads(REDAInlineList *list)
{
	ThreadNode *node;	
	int i, count = REDAInlineList_getSize(list);
	// Try to clean up even if mutex take have failed...
	for(i = 0; i < count; i++)
	{
		node = (ThreadNode*)REDAInlineList_getFirst(list);
		REDAInlineList_removeNodeEA(list, &node->parent);
		delete node->thread;
	}
}

ThreadPoolManager::~ThreadPoolManager()
{
	// Always take readyListMutex first to avoid deadlocks
	if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take ready list mutex\n", __FUNCTION__);
	}
	if(RTIOsapiSemaphore_take(busyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take busy list mutex\n", __FUNCTION__);
	}
	// Try to clean up even if mutex take have failed...
	
	stopThreads(&readyList);
	stopThreads(&busyList);

	// Always give readyListMutex last to avoid deadlocks
	if(RTIOsapiSemaphore_give(busyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to give busy list mutex\n", __FUNCTION__);
	}
	if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to give ready list mutex\n", __FUNCTION__);
	}
	
	// Wait for threads to stop
	NDDSUtility::sleep(threadsEndWaitPeriod);


	// Always take readyListMutex first to avoid deadlocks
	if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take ready list mutex\n", __FUNCTION__);
	}
	if(RTIOsapiSemaphore_take(busyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take busy list mutex\n", __FUNCTION__);
	}
	
	deleteThreads(&readyList);
	deleteThreads(&busyList);

	// Always give readyListMutex last to avoid deadlocks
	if(RTIOsapiSemaphore_give(busyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to give busy list mutex\n", __FUNCTION__);
	}
	if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to give ready list mutex\n", __FUNCTION__);
	}

	RTIOsapiThreadFactory_delete(threadFactory);
}


// Thread unsafe: internal use after aquiring mutexes
Thread* ThreadPoolManager::getThread(void)
{
	ThreadNode *node;
	Thread* ret = NULL;
	if(REDAInlineList_getSize(&readyList) > 0)
	{
		node = (ThreadNode*)REDAInlineList_getFirst(&readyList);
		changeThread(node->thread, &readyList, &busyList);
		ret = node->thread;
	}

	return ret;
}

// Thread unsafe: internal use after aquiring mutexes
void ThreadPoolManager::changeThread(Thread * thread, REDAInlineList* sourceList, REDAInlineList* destList)
{
	//TO_DO: Shouldn't we check anything?
	REDAInlineList_removeNodeEA(sourceList, thread->getNode());
	REDAInlineList_addNodeToBackEA(destList, thread->getNode());
}

int ThreadPoolManager::threadReady(Thread *thread)
{
	int result = SERVER_ERROR;
	// Always take readyListMutex first to avoid deadlocks
	if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take ready list mutex\n", __FUNCTION__);
	}else
	{
		if(RTIOsapiSemaphore_take(busyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to take busy list mutex\n", __FUNCTION__);

			if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
			{
				printf("%s: failed to give ready list mutex\n", __FUNCTION__);
			}
		}
		else
		{
			changeThread(thread, &busyList, &readyList);
			result = OPERATION_SUCCESSFUL;
			if(RTIOsapiSemaphore_give(busyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
			{
				printf("%s: failed to give busy list mutex\n", __FUNCTION__);
			}
		}
		if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give ready list mutex\n", __FUNCTION__);
		}
	}
	return result;
}

void ThreadPoolManager::schedule(void (*execFunction)(ServerRemoteService*, void*), void *data, ServerRemoteService *service)
{
    DDSCSMessages result = WITHOUT_RESOURCES;
	Thread *thread;

	// Always take readyListMutex first to avoid deadlocks
	if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take ready list mutex\n", __FUNCTION__);
	}else
	{
		if(REDAInlineList_getSize(&readyList) > 0)
		{
			if(RTIOsapiSemaphore_take(busyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
			{
				printf("%s: failed to take busy list mutex\n", __FUNCTION__);
				result = SERVER_ERROR;

				if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
				{
					printf("%s: failed to give ready list mutex\n", __FUNCTION__);
				}
			}
			else
			{
				thread = getThread();
				if(thread != NULL)
				{
					if(thread->executeJob(execFunction, data, service) == 0)
					{
						result = OPERATION_SUCCESSFUL;
					}
					else
					{
						result = SERVER_ERROR;
					}
				}
				if(RTIOsapiSemaphore_give(busyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
				{
					printf("%s: failed to give busy list mutex\n", __FUNCTION__);
				}
			}
		}
		if(RTIOsapiSemaphore_give(readyListMutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give ready list mutex\n", __FUNCTION__);
		}
	}

	if (result != OPERATION_SUCCESSFUL)
	{
		// This is done in DataReader thread, which may look wrong.
		// But if execution get here is due to:
		//   1. No free thread to process the request
		//   2. Locking errors
		// each of them are sign of serious problems. 
		// More serious at least, than using DataReader thread for sending an error response.
		service->sendError(data, result);
	}
}
