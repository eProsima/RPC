#include "utils/Thread.h"
#include "server/DDSCSServer.h"

Thread::Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory) :
    m_identifier(identifier), m_status(THREAD_NOT_INITIALIZED), m_thread(NULL), m_dataToProcess(NULL),
    m_execFunction(NULL), m_server(NULL)
{
   if(threadFactory != NULL)
   {
       _snprintf(m_threadName, 20, "thread %lu", m_identifier); m_threadName[19] = '\0';
       m_thread = RTIOsapiThreadFactory_createThread(threadFactory, m_threadName, RTI_OSAPI_THREAD_PRIORITY_NORMAL,
               RTI_OSAPI_THREAD_OPTION_DEFAULT, 4096, (void*(*)(void*))execute, this);

       if(m_thread != NULL)
       {
           m_status = THREAD_WAITING;
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
    RTIOsapiThread_delete(m_thread);
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
void Thread::run()
{
    struct RTINtpTime sleepPeriod = {0, 100};
    while(1)
    {
        if(m_status == THREAD_GETREADY)
        {
            printf("Thread %lu\n", m_identifier);

            m_execFunction(m_server, m_dataToProcess);

            m_dataToProcess = NULL;
            m_server = NULL;
            m_execFunction = NULL;

            m_status = THREAD_WAITING;
        }

        if(RTIOsapiThread_sleep(&sleepPeriod) == RTI_FALSE)
        {
            printf("ERROR <run>: Cannot sleep\n");
        }
    }
}

ThreadStatus Thread::getThreadStatus()
{
    return m_status;
}

int Thread::executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server)
{
    int returnedValue = -1;

    if(m_status == THREAD_WAITING)
    {
        m_dataToProcess = data;
        m_server = server;
        m_execFunction = execFunction;
        m_status = THREAD_GETREADY;
        returnedValue = 0;
    }

    return returnedValue;
}
