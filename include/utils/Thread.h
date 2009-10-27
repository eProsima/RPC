#ifndef _THREAD_H_
#define _THREAD_H_

#include "ndds/ndds_cpp.h"


class DDSCSServer;
class Thread;

typedef enum ThreadStatus
{
    THREAD_WAITING = 0,
    THREAD_GETREADY,
    THREAD_RUNNING,
    THREAD_NOT_INITIALIZED, 
	THREAD_DIE
} ThreadStatus;

typedef struct ThreadNode
{
	REDAInlineListNode parent;
	Thread *thread;
} ThreadNode;

class Thread
{
    public:

        Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory);

        ~Thread();

        ThreadStatus getThreadStatus();

		int executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server);

		REDAInlineListNode* getParent()
		{
			return (REDAInlineListNode*)&listNode;
		}

		void stop();

    private:
        unsigned int id;

		ThreadStatus status;

		char threadName[20];

        struct RTIOsapiThread *osThread;

	    struct ThreadNode listNode;

		struct RTIOsapiSemaphore *waitSemaphore;

		struct RTIOsapiSemaphore *mutex;

        void *execFunctionData;

        DDSCSServer *server;

        void (*execFunction)(DDSCSServer*, void*);

        void run();

        static void* execute(void *threadObject);		
};

#endif // _THREAD_H_
