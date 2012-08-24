#ifndef _CLIENT_ASYNCTHREAD_H_
#define _CLIENT_ASYNCTHREAD_H_

#include <vector>
#include <boost/thread.hpp>

#include "utils/Version.h"

namespace eProsima
{
	namespace DDSRPC
	{
        class AsyncTask;

        typedef std::pair<DDS::QueryCondition*, AsyncTask*> AsyncTaskPair;
        typedef std::pair<boost::posix_time::time_duration, AsyncTaskPair> AsyncListPair;
        typedef std::vector<AsyncListPair> AsyncVector;

        class AsyncThread
        {
            public:

                AsyncThread();

                int init();

                void exit();

                int addTask(DDS::QueryCondition *query, AsyncTask *task, long timeout);

            private:

                void run();

                boost::thread m_thread;

                AsyncVector m_vector;

				boost::mutex *m_mutex;
                boost::condition_variable m_cond_wake_up;

                DDS::GuardCondition *m_guardWaitSet;

                DDS::WaitSet *m_waitSet;

                DDS::Duration_t m_timeout;

                bool m_exit;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_ASYNCTHREAD_H_
