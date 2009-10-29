#include "utils/Thread.h"
#include "utils/ThreadPoolManager.h"
#include "server/ServerRemoteService.h"

Thread::Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory, ThreadPoolManager *manager) :
id(identifier), manager(manager), status(THREAD_NOT_INITIALIZED), osThread(NULL), execFunctionData(NULL),
    execFunction(NULL), server(NULL), service(NULL)
{
	REDAInlineListNode_init(&listNode.parent);
	listNode.thread = this;
	if(threadFactory != NULL)
	{
		_snprintf(threadName, 20, "thread %lu", id); 
		threadName[19] = '\0';
		osThread = RTIOsapiThreadFactory_createThread(threadFactory, threadName, RTI_OSAPI_THREAD_PRIORITY_NORMAL,
			   RTI_OSAPI_THREAD_OPTION_DEFAULT, 4096, (void*(*)(void*))execute, this);

		if(osThread != NULL)
		{
			waitSemaphore = RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_BINARY, NULL);
			mutex =  RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);
			if(waitSemaphore != NULL && mutex != NULL)
			{
	
				status = THREAD_WAITING;
			}
			else
			{
				printf("ERROR <Thread>: Cannot create locks\n");
			}
		}
		else
		{
			printf("ERROR <Thread>: Cannot create the thread factory\n");
		}
	}
	else
	{
		printf("ERROR <Thread>: Cannot get the thread factory\n");
	}
}

Thread::~Thread()
{
	if(waitSemaphore != NULL)
	{
		RTIOsapiSemaphore_delete(waitSemaphore);
		waitSemaphore = NULL;
	}
	if(mutex != NULL)
	{
		RTIOsapiSemaphore_delete(mutex);
		mutex = NULL;
	}
	// TO_DO: Check state
	// should stop here and wait for the thread to finish? Now is the PoolManager job, but...
	RTIOsapiThread_delete(osThread);
}


// This method is required to be static for passing it as function pointer to de C RTIOsapiThread library
void* Thread::execute(void *threadObject)
{
    Thread *self = (Thread*)threadObject;

    if(self != NULL)
    {
        self->run();
    }

    return NULL;
}
void Thread::stop()
{
	if(RTIOsapiSemaphore_take(mutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take Thread mutex\n", __FUNCTION__);
	}
	else
	{
		status = THREAD_DIE;
		if(RTIOsapiSemaphore_give(waitSemaphore) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give waitSemaphore mutex\n", __FUNCTION__);
		}
		if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give Thread mutex\n", __FUNCTION__);
		}
	}
}

// Thread unsafe: Call only after aquiring mutex
void Thread::cleanup()
{
	// Clean up execution always
	execFunctionData = NULL;
	server = NULL;
	service = NULL;
	execFunction = NULL;
	status = THREAD_WAITING;
}


void Thread::run()
{
	int waitFailCounter = 0;
	bool exceptionThrown = false;
    while(status != THREAD_DIE)
    {
		// Must take the mutex here
		if(RTIOsapiSemaphore_take(mutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to take Thread mutex\n", __FUNCTION__);
		}
		else
		{
			exceptionThrown = false;
			try{
				if(status == THREAD_GETREADY)
				{
					printf("Thread %lu\n", id);

					execFunction(server, execFunctionData, service);
				}
			}
			catch(...)
			{
				cleanup();
				exceptionThrown = true;
				if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
				{
					printf("%s: failed to give Thread mutex\n", __FUNCTION__);
					exceptionThrown = false;
				}
			}
			// Don't know if its safe giving twice the mutex...
			if(!exceptionThrown)
			{
				cleanup();
				if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
				{
					printf("%s: failed to give Thread mutex\n", __FUNCTION__);
				}
			}
        }
		
		//Call this after releasing thread mutex to avoid deadlock with ThreadPoolManager::stopThreads();
		manager->threadReady(this);

		// There's no Lost Wakeup bug since RTI_OSAPI_SEMAPHORE_KIND_BINARY maintains the set state.
		// If another thread have done a give previously to this take this thread won't block.
		if(RTIOsapiSemaphore_take(waitSemaphore, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			waitFailCounter++;
			printf("%s: failed to take Thread semaphore, try %d.\n", __FUNCTION__, waitFailCounter);
			if(waitFailCounter >= 5)
			{
				// Too much errors: ends Thread
				setThreadStatus(THREAD_DIE);
				break;
			}
		}
		else
		{
			// waitSemaphore taken: resets fail counter.		
			waitFailCounter = 0;
		}

    }
}

int Thread::setThreadStatus(ThreadStatus s)
{
	int retCode = 0;
	if(RTIOsapiSemaphore_take(mutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take Thread mutex\n", __FUNCTION__);
		retCode = -1;
	}
	else
	{
		status = s;
		if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give Thread mutex\n", __FUNCTION__);
		}
	}
	return retCode;
}

int Thread::executeJob(void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*), void *data, DDSCSServer *server, ServerRemoteService *service)
{
    int returnedValue = -1;

	if(RTIOsapiSemaphore_take(mutex, NULL) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
	{
		printf("%s: failed to take Thread mutex\n", __FUNCTION__);
	}
	else
	{
	    if(status == THREAD_WAITING)
		{
			execFunctionData = data;
			this->server = server;
			this->service = service;
			this->execFunction = execFunction;
			status = THREAD_GETREADY;
			returnedValue = 0;
			// Awake thread.
			if(RTIOsapiSemaphore_give(waitSemaphore) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
			{
				printf("%s: failed to give Thread Semaphore\n", __FUNCTION__);
			}
		}
		if(RTIOsapiSemaphore_give(mutex) != RTI_OSAPI_SEMAPHORE_STATUS_OK)
		{
			printf("%s: failed to give Thread mutex\n", __FUNCTION__);
		}
	}
    return returnedValue;
}
