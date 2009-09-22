#ifndef _THREAD_H_
#define _THREAD_H_

#include "ndds/ndds_cpp.h"


class DDSCSServer;

typedef enum ThreadStatus
{
    THREAD_WAITING = 0,
    THREAD_GETREADY,
    THREAD_RUNNING,
    THREAD_NOT_INITIALIZED
} ThreadStatus;

class Thread
{
    public:

        Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory);

        ~Thread();

        ThreadStatus getThreadStatus();

        int executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server);

    private:

        unsigned int m_identifier;

        char m_threadName[20];

        struct RTIOsapiThread *m_thread;

        ThreadStatus m_status;

        void *m_dataToProcess;

        DDSCSServer *m_server;

        void (*m_execFunction)(DDSCSServer*, void*);

        void run();

        static void* execute(void *threadObject);
};

#endif // _THREAD_H_
