#ifndef _THREADPOOLMANAGER_H_
#define _THREADPOOLMANAGER_H_

#ifndef osapi_h
#define osapi_h
#include "osapi/osapi_threadFactory.h"
#endif // osapi_h

#include <vector>
#include "DDSCSMessages.h"

class Thread;
class DDSCSServer;

class ThreadPoolManager
{
    public:

        ThreadPoolManager(unsigned int maxThreads);

        ~ThreadPoolManager();

        DDSCSMessages executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server);

    private:

        unsigned int m_maxThreads;

        unsigned int m_numThreads;

        std::vector<Thread*> m_threads;

        struct RTIOsapiThreadFactory *m_threadFactory;
};

#endif // _THREADPOOLMANAGER_H_
