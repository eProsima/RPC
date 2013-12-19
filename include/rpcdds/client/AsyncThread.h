/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CLIENT_ASYNCTHREAD_H_
#define _CLIENT_ASYNCTHREAD_H_

#include "rpcdds/utils/dds/Middleware.h"
#include <vector>
#include <boost/thread.hpp>

namespace eprosima
{
    namespace rpcdds
    {
        namespace proxy
        {
            class AsyncTask;
            class ClientRPC;

            typedef std::pair<DDS::QueryCondition*, AsyncTask*> AsyncTaskPair;
            typedef std::pair<boost::posix_time::time_duration, AsyncTaskPair> AsyncListPair;
            typedef std::vector<AsyncListPair> AsyncVector;

            /**
             * @brief This class is a separated thread used to manage asynchronous tasks.
             * @ingroup CLIENTMODULE
             */
            class AsyncThread
            {
                public:

                    /// \brief Default constructor.
                    AsyncThread();

                    /**
                     * \brief This function initializes all internal objects.
                     *
                     * \return 0 value is returned if all the objects was created succesfully. In other case -1 value is returned.
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

                    /**
                     * @brief This function deletes all the asynchronous tasks associated with the RPC endpoint.
                     *
                     * @param rpc Pointer to the RPC endpoint. It cannot be NULL.
                     */
                    void deleteAssociatedAsyncTasks(ClientRPC *rpc);

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
    } // namespace rpcdds
} // namespace eprosima

#endif // _CLIENT_ASYNCTHREAD_H_
