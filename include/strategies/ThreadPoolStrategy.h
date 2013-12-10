/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPOOLSTRATEGY_H_
#define _STRATEGIES_THREADPOOLSTRATEGY_H_

#include "strategies/ServerStrategy.h"
#include "rpcdds_dll.h"

#define RPCDDS_MIN_THREADS_DEFAULT 5

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
            class ThreadPoolStrategyImpl;

            /**
             * @brief This class implements a thread pool strategy.
             *        The server schedules the incoming requests in a free thread of the thread pool.
             * @ingroup STRATEGIESMODULE 
             */
            class RPCDDS_DllAPI ThreadPoolStrategy : public ServerStrategy
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param threadCount Number of thread that will manage by the thread pool. Default value: 5.
                     */
                    ThreadPoolStrategy(unsigned int threadCount = RPCDDS_MIN_THREADS_DEFAULT);

                    /// \brief Default destructor.
                    ~ThreadPoolStrategy();

                    ServerStrategyImpl* getImpl();

                private:

                    ThreadPoolStrategyImpl *m_impl;
            };
        } // namespace strategy
    } // namespace rpcdds
} //namespace eprosima

#endif // _STRATEGIES_THREADPOOLSTRATEGY_H_
