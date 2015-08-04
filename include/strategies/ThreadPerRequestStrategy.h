/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "ServerStrategy.h"

namespace eprosima
{
    namespace rpc
    {
        namespace strategy
        {
			class ThreadPerRequestStrategyImpl;

            /**
             * @brief This class implements the thread per request strategy.
             *        The server creates a new thread for every new incoming request.
             * @ingroup STRATEGIESMODULE 
             */
            class RPC_DllAPI ThreadPerRequestStrategy : public ServerStrategy
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
    } // namespace rpc
} //namespace eprosima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

