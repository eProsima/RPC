#ifndef _CLIENT_ASYNCTHREAD_H_
#define _CLIENT_ASYNCTHREAD_H_

#include <map>
#include <boost/thread.hpp>

#include "ndds_namespace_cpp.h"

namespace eProsima
{
	namespace DDSRPC
	{
        class AsyncTask;

        typedef std::map<DDS::QueryCondition*, AsyncTask*> AsyncTaskMap;
        typedef std::pair<DDS::QueryCondition*, AsyncTask*> AsyncTaskPair;

        class AsyncThread
        {
            public:

                AsyncThread();

                int init();

                void exit();

                int addTask(DDS::QueryCondition *query, AsyncTask *task);

            private:

                void run();

                boost::thread m_thread;

                AsyncTaskMap m_map;

				boost::mutex *m_mutex;

                DDS::GuardCondition *m_guardWaitSet;

                DDS::WaitSet *m_waitSet;

                bool m_exit;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_ASYNCTHREAD_H_
