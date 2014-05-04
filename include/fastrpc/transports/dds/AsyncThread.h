/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_ASYNCTHREAD_H_
#define _TRANSPORTS_DDS_ASYNCTHREAD_H_

#include "fastrpc/utils/dds/Middleware.h"

#include <vector>
#include <boost/thread.hpp>

namespace eprosima
{
    namespace fastrpc
    {
        namespace transport
        {
            namespace dds
            {
                class DDSAsyncTask;
                class ProxyProcedureEndpoint;

                typedef std::pair<DDS::QueryCondition*, DDSAsyncTask*> AsyncTaskPair;
                typedef std::pair<boost::posix_time::time_duration, AsyncTaskPair> AsyncListPair;
                typedef std::vector<AsyncListPair> AsyncVector;

                /**
                 * @brief This class is a separated thread used to manage asynchronous tasks.
                 * @ingroup TRANSPORTMODULE
                 */
                class AsyncThread
                {
                    public:

                        /// \brief Default constructor.
                        AsyncThread();

                        /**
                         * \brief This function initializes all internal objects.
                         *
                         * \return 0 value is returned if all the objects was succesfully created. -1 in other case
                         */
                        int init();

                        /// \brief This function deletes the internal objects.
                        void exit();

                        /**
                         * \brief This function adds a new asynchronous task.
                         *
                         * \param query Associated DDS::QueryCondition to the asynchronous task. Cannot be NULL.
                         * \param task The new asynchronous task. Cannot be NULL.
                         * \param timeout The time in milliseconds to wait for the reply.
                         * \return 0 if the function succesfully works. -1 in other case
                         */
                        int addTask(DDS::QueryCondition *query, DDSAsyncTask *task, long timeout);

                        /**
                         * @brief This function deletes all the asynchronous tasks associated with the ProxyProcedureEndpoint endpoint.
                         *
                         * @param pe Pointer to the ProxyProcedureEndpoint. It cannot be NULL.
                         */
                        void deleteAssociatedAsyncTasks(ProxyProcedureEndpoint *pe);

                    private:

                        /// \brief This function is executed by the new created thread.
                        void run();

                        /// \brief The separated thread that executes the functionality of this object.
                        boost::thread m_thread;

                        /// \brief Vector with all asynchronous tasks.
                        AsyncVector m_vector;

                        /// \brief Mutex
                        boost::mutex *m_mutex;
                        /// \brief Variable condition.
                        boost::condition_variable m_cond_wake_up;

                        /// \brief Variable used to wake up a WaitSet.
                        DDS::GuardCondition *m_guardWaitSet;

                        /// \brief Object that waits for incoming data publications on a Topic.
                        DDS::WaitSet *m_waitSet;

                        /// \brief Timeout for not being waiting an undefined amount of time.
                        DDS::Duration_t m_timeout;

                        /// \brief Boolean variable used to exit from the Thread.
                        bool m_exit;
                };
            } // namespace proxy
        } // namespace transport
    } // namespace fastrpc
} // namespace eprosima

#endif // _TRANSPORTS_DDS_ASYNCTHREAD_H_
