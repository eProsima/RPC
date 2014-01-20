/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/strategies/ThreadPoolStrategy.h"
#include "rpcdds/strategies/ServerStrategyImpl.h"
#include "rpcdds/transports/ServerTransport.h"

#include "boost/config/user.hpp"
#include "boost/threadpool.hpp"

static const char* const CLASS_NAME = "ThreadPoolStrategy";

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
            class ThreadPoolStrategyJob
            {
                public:
                    ThreadPoolStrategyJob(boost::function<void()> callback)
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

            class ThreadPoolStrategyImpl : public ServerStrategyImpl
            {
                public:

                    ThreadPoolStrategyImpl(unsigned int threadCount)
                    {
                        m_pool = new boost::threadpool::pool(threadCount);
                    }

                    virtual ~ThreadPoolStrategyImpl()
                    {
                        delete m_pool;
                    }

                    boost::threadpool::pool* getPool()
                    {
                        return m_pool;
                    }
					
					void schedule(boost::function<void()> callback)
					{
						boost::shared_ptr<ThreadPoolStrategyJob> job(new ThreadPoolStrategyJob(callback));
						boost::threadpool::schedule(*m_pool, boost::bind(&ThreadPoolStrategyJob::run, job));
					}

                private:

                    boost::threadpool::pool *m_pool;
            };
        } // namespace strategy
    } // namespace rpcdds
} // namespace eprosima

using namespace eprosima::rpcdds;
using namespace ::strategy;
using namespace ::transport;

ThreadPoolStrategy::ThreadPoolStrategy(unsigned int threadCount) : m_impl(NULL)
{
    m_impl = new ThreadPoolStrategyImpl(threadCount);
}

ThreadPoolStrategy::~ThreadPoolStrategy()
{
    if(m_impl != NULL)
        delete m_impl;
}

ServerStrategyImpl* ThreadPoolStrategy::getImpl()
{
	return m_impl;
}
