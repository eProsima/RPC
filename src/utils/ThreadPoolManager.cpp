#include "utils/ThreadPoolManager.h"
#include "utils/Thread.h"
#include "server/DDSCSServer.h"

ThreadPoolManager::ThreadPoolManager(unsigned int maxThreads) : m_maxThreads(maxThreads),
    m_numThreads(0), m_threadFactory(NULL)
{
    m_threadFactory = RTIOsapiThreadFactory_newDefault();
    m_threads.reserve(maxThreads);

    for(unsigned int i = 0; i < m_maxThreads; i++)
    {
        m_threads.push_back(new Thread(i, m_threadFactory));
    }
}

ThreadPoolManager::~ThreadPoolManager()
{
    std::vector<Thread*>::iterator it;

    for(it = m_threads.begin(); it != m_threads.end(); ++it)
    {
        delete (*it);
    }

    m_threads.clear();

    RTIOsapiThreadFactory_delete(m_threadFactory);
}

DDSCSMessages ThreadPoolManager::executeJob(void (*execFunction)(DDSCSServer*, void*), void *data, DDSCSServer *server)
{
    DDSCSMessages returnedValue = WITHOUT_RESOURCES;
    std::vector<Thread*>::iterator it;

    for(it = m_threads.begin(); it != m_threads.end(); ++it)
    {
        if((*it)->getThreadStatus() == THREAD_WAITING)
        {
            if((*it)->executeJob(execFunction, data, server) == 0)
            {
                returnedValue = OPERATION_SUCCESSFUL;
            }
            else
            {
                returnedValue = SERVER_ERROR;
            }
            break;
        }
    }

    return returnedValue;
}
