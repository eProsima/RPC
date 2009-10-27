#include "utils/ThreadPoolManager.h"
#include "utils/Thread.h"
#include "server/DDSCSServer.h"

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
			thread = new Thread(i, threadFactory);
			REDAInlineList_addNodeToBackEA(&readyList, thread->getParent());
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
		REDAInlineList_removeNodeEA(&readyList, &node->parent);
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
	REDAInlineList_removeNodeEA(sourceList, thread->getParent());
	REDAInlineList_addNodeToBackEA(destList, thread->getParent());
}


DDSCSMessages ThreadPoolManager::executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server)
{
    DDSCSMessages returnedValue = WITHOUT_RESOURCES;
	Thread *thread;

	// Always take readyListMutex first to avoid deadlocks
	if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take ready list mutex\n", __FUNCTION__);
	}else
	{
		if(REDAInlineList_getSize(&readyList) > 0)
		{
			if(RTIOsapiSemaphore_take(readyListMutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
			{
				printf("%s: failed to take ready list mutex\n", __FUNCTION__);
				returnedValue = SERVER_ERROR;

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
					if(thread->executeJob(execFunction, data, server) == 0)
					{
						returnedValue = OPERATION_SUCCESSFUL;
					}
					else
					{
						returnedValue = SERVER_ERROR;
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

    return returnedValue;
}
