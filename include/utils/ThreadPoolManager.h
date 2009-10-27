#ifndef _THREADPOOLMANAGER_H_
#define _THREADPOOLMANAGER_H_

#include "ndds/ndds_cpp.h"

#include "DDSCSMessages.h"

#define DDSCS_MAX_THREADS_DEFAULT	20
#define DDSCS_MIN_THREADS_DEFAULT	 5

#define DDSCS_END_THREAD_WAIT {10,0}

class Thread;
class DDSCSServer;

class ThreadPoolManager
{
    public:

		ThreadPoolManager(unsigned int maxThreads = DDSCS_MAX_THREADS_DEFAULT);

        ~ThreadPoolManager();

        DDSCSMessages executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server);

		// Thread safe: To be called by each thread after serving a request.
		int threadReady(Thread *thread);

		bool isReady(){
			return initialized;
		};

    private:
		bool initialized;
		DDS_Duration_t  threadsEndWaitPeriod;

        unsigned int threadCount;

        struct RTIOsapiThreadFactory *threadFactory;
		
		struct RTIOsapiSemaphore *readyListMutex;
		struct RTIOsapiSemaphore *busyListMutex;

		struct REDAInlineList readyList;
		struct REDAInlineList busyList;

		// Thread unsafe: internal use after aquiring mutexes
		// The thread is removed from ready list and added to busy list
		Thread* getThread(void);

		// Thread unsafe: internal use after aquiring mutexes
		void changeThread(Thread * thread, REDAInlineList* sourceList, REDAInlineList* destList);

		// Thread unsafe: internal use after aquiring mutexes
		void stopThreads(REDAInlineList *list);

		// Thread unsafe: internal use after aquiring mutexes
		void deleteThreads(REDAInlineList *list);
};

#endif // _THREADPOOLMANAGER_H_
