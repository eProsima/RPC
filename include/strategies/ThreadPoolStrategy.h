/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPOOLSTRATEGY_H_
#define _STRATEGIES_THREADPOOLSTRATEGY_H_

#include "ServerStrategy.h"

#define FASTRPC_MIN_THREADS_DEFAULT 5

namespace eprosima
{
    namespace rpc
    {
        namespace strategy
        {
            class ThreadPoolStrategyImpl;

            /**
             * @brief This class implements a thread pool strategy.
             *        The server schedules the incoming requests in a free thread of the thread pool.
             * @ingroup STRATEGIESMODULE 
             */
            class RPC_DllAPI ThreadPoolStrategy : public ServerStrategy
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param threadCount Number of threads the thread pool will manage. Default value: 5.
                     */
                    ThreadPoolStrategy(unsigned int threadCount = FASTRPC_MIN_THREADS_DEFAULT);

                    /// \brief Default destructor.
                    ~ThreadPoolStrategy();
					
					/*!
					 * @brief Gets the implementation of the strategy using Boost library.
					 * @return Implementation of the strategy.
					 */
                    ServerStrategyImpl* getImpl();

                private:

					/*!
					 * @brief Implementation of the strategy using Boost library.
					 */
                    ThreadPoolStrategyImpl *m_impl;
            };
        } // namespace strategy
    } // namespace rpc
} //namespace eprosima

#endif // _STRATEGIES_THREADPOOLSTRATEGY_H_
