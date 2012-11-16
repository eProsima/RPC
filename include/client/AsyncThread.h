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

		/**
		 * \brief This class is a separated thread used to manage asynchronous tasks.
		 */
        class AsyncThread
        {
            public:

				/// \brief Default constructor.
                AsyncThread();

				/**
				 * \brief This function initializes all internal objects.
				 *
				 * \return 0 value is returned if all objects was created succesfully. In other case -1 value is returned.
				 */
                int init();

				/// \brief This function deletes the internal objects.
                void exit();

				/**
				 * \brief This function adds a new asynchronous task.
				 *
				 * \param query Associated DDS QueryCondition to the asynchronous task. Cannot be NULL.
				 * \param task The new asynchronous task. Cannot be NULL.
				 * \param timeout The time in milliseconds that will be waiting to the reply.
				 * \return 0 value is returned if function works succesfully. In other case, -1 value is returned.
				 */
                int addTask(DDS::QueryCondition *query, AsyncTask *task, long timeout);

            private:

				/// \brief This function is executed by the new created thread.
                void run();

				/// \brief The separated thread that executes the functionality of this object..
                boost::thread m_thread;

				/// \brief Vector with all asynchronous tasks.
                AsyncVector m_vector;

				/// \brief Mutex
				boost::mutex *m_mutex;
				/// \brief Variable condition.
                boost::condition_variable m_cond_wake_up;

                DDS::GuardCondition *m_guardWaitSet;

                DDS::WaitSet *m_waitSet;

                DDS::Duration_t m_timeout;

                bool m_exit;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _CLIENT_ASYNCTHREAD_H_
