/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "strategies/ThreadPoolStrategy.h"
#include "server/Server.h"

#include "boost/config/user.hpp"
#include "boost/threadpool.hpp"

static const char* const CLASS_NAME = "ThreadPoolStrategy";

namespace eProsima
{
    namespace RPCDDS
    {
        class ThreadPoolStrategyJob
        {
            public:
                ThreadPoolStrategyJob(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
                    : m_execFunction(execFunction), m_data(data), m_server(server), m_service(service)
                {
                }

                void run()
                {
                    m_execFunction(m_server, m_data, m_service);
                }

            private:
                fExecFunction m_execFunction;
                void *m_data;
                Server *m_server;
                ServerRPC *m_service;
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

        ThreadPoolStrategy::ThreadPoolStrategy(unsigned int threadCount) : m_impl(NULL)
        {
            m_impl = new ThreadPoolStrategyImpl(threadCount);
        }

        ThreadPoolStrategy::~ThreadPoolStrategy()
        {
            if(m_impl != NULL)
                delete m_impl;
        }

        void ThreadPoolStrategy::schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
        {
            const char* const METHOD_NAME = "schedule";

            if(execFunction != NULL && data != NULL && server != NULL && service != NULL)
            {
                boost::shared_ptr<ThreadPoolStrategyJob> job(new ThreadPoolStrategyJob(execFunction, data, server, service));
                boost::threadpool::schedule(*m_impl->getPool(), boost::bind(&ThreadPoolStrategyJob::run, job));
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }

    } // namespace RPCDDS
} // namespace eProsima
