#include "utils/Thread.h"
#include "server/DDSCSServer.h"

Thread::Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory) :
id(identifier), status(THREAD_NOT_INITIALIZED), osThread(NULL), execFunctionData(NULL),
    execFunction(NULL), server(NULL)
{
	REDAInlineListNode_init(&listNode.parent);
	if(threadFactory != NULL)
	{
		_snprintf(threadName, 20, "thread %lu", id); 
		threadName[19] = '\0';
		osThread = RTIOsapiThreadFactory_createThread(threadFactory, threadName, RTI_OSAPI_THREAD_PRIORITY_NORMAL,
			   RTI_OSAPI_THREAD_OPTION_DEFAULT, 4096, (void*(*)(void*))execute, this);

		if(osThread != NULL)
		{
			status = THREAD_WAITING;
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
	RTIOsapiThread_delete(osThread);
}

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
}

void Thread::run()
{
    struct RTINtpTime sleepPeriod = {0, 100};
    while(status != THREAD_DIE)
    {
        if(status == THREAD_GETREADY)
        {
            printf("Thread %lu\n", id);

            execFunction(server, execFunctionData);

            execFunctionData = NULL;
            server = NULL;
            execFunction = NULL;
            status = THREAD_WAITING;
        }
    }
}

ThreadStatus Thread::getThreadStatus()
{
    return status;
}

int Thread::executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server)
{
    int returnedValue = -1;
    if(status == THREAD_WAITING)
    {
        execFunctionData = data;
        this->server = server;
        this->execFunction = execFunction;
        status = THREAD_GETREADY;
        returnedValue = 0;
    }

    return returnedValue;
}
