/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "strategies/ThreadPoolStrategy.h"
#include "transports/ServerTransport.h"

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
                    ThreadPoolStrategyJob(fExecFunction execFunction,
                            eprosima::rpcdds::transport::ServerTransport &transport, void *data)
                        : m_execFunction(execFunction), m_transport(transport), m_data(data)
                    {
                    }

                    void run()
                    {
                        m_execFunction(m_transport, m_data);
                    }

                private:
                    fExecFunction m_execFunction;
                    eprosima::rpcdds::transport::ServerTransport &m_transport;
                    void *m_data;
            };

            class ThreadPoolStrategyImpl
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

void ThreadPoolStrategy::schedule(fExecFunction execFunction,
        ServerTransport &transport, void *data)
{
    const char* const METHOD_NAME = "schedule";

    if(execFunction != NULL && data != NULL)
    {
        boost::shared_ptr<ThreadPoolStrategyJob> job(new ThreadPoolStrategyJob(execFunction, transport, data));
        boost::threadpool::schedule(*m_impl->getPool(), boost::bind(&ThreadPoolStrategyJob::run, job));
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}
