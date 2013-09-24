/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "strategies/ThreadPerRequestStrategy.h"
#include "transports/ServerTransport.h"

#include "boost/thread.hpp"

static const char* const CLASS_NAME = "ThreadPerRequestStrategy";

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
            class ThreadPerRequestStrategyJob
            {
                public:
                    ThreadPerRequestStrategyJob(fExecFunction execFunction,
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
        } // namespace strategy
    } // namespace rpcdds
} // namespace eprosima

using namespace eprosima::rpcdds;
using namespace ::strategy;
using namespace ::transport;

void ThreadPerRequestStrategy::schedule(fExecFunction execFunction,
        ServerTransport &transport, void *data)
{
    const char* const METHOD_NAME = "schedule";

    if(execFunction != NULL && data != NULL)
    {
        boost::shared_ptr<ThreadPerRequestStrategyJob> job(new ThreadPerRequestStrategyJob(execFunction, transport, data));
        boost::thread thread(boost::bind(&ThreadPerRequestStrategyJob::run, job));
        thread.detach();
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}
