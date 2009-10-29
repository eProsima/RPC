
#ifndef _DDSCS_THREAD_H_
#define _DDSCS_THREAD_H_

#include "ndds/ndds_cpp.h"

class DDSCSServer;
class ServerRemoteService;
class ThreadPoolManager;
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

        Thread(unsigned int identifier, struct RTIOsapiThreadFactory *threadFactory, ThreadPoolManager *manager);

        ~Thread();

        int setThreadStatus(ThreadStatus s);

		int executeJob(void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*), void *data, DDSCSServer *server, ServerRemoteService *service);

		REDAInlineListNode* getNode()
		{
			return (REDAInlineListNode*)&listNode;
		}

		void stop();

    private:
        unsigned int id;

		ThreadStatus status;

		ThreadPoolManager *manager;

		char threadName[20];

        struct RTIOsapiThread *osThread;

	    struct ThreadNode listNode;

		struct RTIOsapiSemaphore *waitSemaphore;

		struct RTIOsapiSemaphore *mutex;

        void *execFunctionData;

        ServerRemoteService *service;

		DDSCSServer* server;

        void (*execFunction)(DDSCSServer*, void*, ServerRemoteService*);

        void run();
		
		void cleanup();

        static void* execute(void *threadObject);		
};

#endif // _DDSCS_THREAD_H_
