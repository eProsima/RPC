#ifndef _THREADPOOLMANAGER_H_
#define _THREADPOOLMANAGER_H_

#include "ndds/ndds_cpp.h"

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
