/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "fastrpc/strategies/ServerStrategy.h"
#include "fastrpc/fastrpc_dll.h"

namespace eprosima
{
    namespace fastrpc
    {
        namespace strategy
        {
			class ThreadPerRequestStrategyImpl;

            /**
             * @brief This class implements the thread per request strategy.
             *        The server creates a new thread for every new incoming request.
             * @ingroup STRATEGIESMODULE 
             */
            class FASTRPC_DllAPI ThreadPerRequestStrategy : public ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    ThreadPerRequestStrategy();

                    /// \brief Default destructor.
                    virtual ~ThreadPerRequestStrategy();
					
					/*!
					 * @brief Gets the implementation of the strategy using Boost library.
					 * @return Strategy implementation.
					 */
                    ServerStrategyImpl* getImpl();

			    private:

					/*!
					 * @brief Strategy implementation using Boost library
					 */
					ThreadPerRequestStrategyImpl *m_impl;
            };
        } // namespace strategy
    } // namespace fastrpc
} //namespace eprosima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

