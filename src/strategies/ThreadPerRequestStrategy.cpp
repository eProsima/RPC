/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/strategies/ThreadPerRequestStrategy.h"
#include "fastrpc/strategies/ServerStrategyImpl.h"
#include "fastrpc/transports/ServerTransport.h"

#include "boost/thread.hpp"

static const char* const CLASS_NAME = "ThreadPerRequestStrategy";

namespace eprosima
{
    namespace fastrpc
    {
        namespace strategy
        {
            class ThreadPerRequestStrategyJob
            {
                public:
                    ThreadPerRequestStrategyJob(boost::function<void()> callback)
                        : m_callback(callback)
                    {
                    }

                    void run()
                    {
                        m_callback();
                    }

                private:
                    
                    boost::function<void()> m_callback;
            };

			class ThreadPerRequestStrategyImpl : public ServerStrategyImpl
            {
                public:

                    /// \brief Default constructor.
                    ThreadPerRequestStrategyImpl(){};

                    /// \brief Default destructor.
                    virtual ~ThreadPerRequestStrategyImpl(){};

                    /**
                     * \brief This function creates a new thread that will process the request.
                     *
                     * \param data The request. Cannot be NULL.
                     */
                    void schedule(boost::function<void()> callback)
					{
						boost::shared_ptr<ThreadPerRequestStrategyJob> job(new ThreadPerRequestStrategyJob(callback));
						boost::thread thread(boost::bind(&ThreadPerRequestStrategyJob::run, job));
						thread.detach();
					}
            };
        } // namespace strategy
    } // namespace fastrpc
} // namespace eprosima

using namespace eprosima::fastrpc;
using namespace ::strategy;
using namespace ::transport;

ThreadPerRequestStrategy::ThreadPerRequestStrategy() : m_impl(NULL)
{
    m_impl = new ThreadPerRequestStrategyImpl();
}

ThreadPerRequestStrategy::~ThreadPerRequestStrategy()
{
    if(m_impl != NULL)
        delete m_impl;
}

ServerStrategyImpl* ThreadPerRequestStrategy::getImpl()
{
	return m_impl;
}
