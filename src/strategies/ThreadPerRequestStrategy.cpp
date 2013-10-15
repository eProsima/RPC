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
        } // namespace strategy
    } // namespace rpcdds
} // namespace eprosima

using namespace eprosima::rpcdds;
using namespace ::strategy;
using namespace ::transport;

void ThreadPerRequestStrategy::schedule(boost::function<void()> callback)
{
    boost::shared_ptr<ThreadPerRequestStrategyJob> job(new ThreadPerRequestStrategyJob(callback));
    boost::thread thread(boost::bind(&ThreadPerRequestStrategyJob::run, job));
    thread.detach();
}
