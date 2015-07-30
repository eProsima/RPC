/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_SINGLETHREADSTRATEGY_H_
#define _STRATEGIES_SINGLETHREADSTRATEGY_H_

#include "ServerStrategy.h"

namespace eprosima
{
    namespace rpc
    {
        namespace strategy
        {
			class SingleThreadStrategyImpl;

            /**
             * @brief This class implements the sigle thread strategy.
             *        The server uses a reception thread to execute all the requests.
             * @ingroup STRATEGIESMODULE 
             */
            class RPC_DllAPI SingleThreadStrategy : public ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    SingleThreadStrategy();

                    /// \brief Default destructor.
                    virtual ~SingleThreadStrategy();
					
					/*!
					 * @brief Gets the implementation of the strategy using Boost library.
					 * @return Implementation of the strategy
					 */
					ServerStrategyImpl* getImpl();

			    private:

					/*!
					 * @brief Implementation of the strategy using Boost library
					 */
					SingleThreadStrategyImpl *m_impl;
            };
        } // namespace strategy
    } // namespace rpc
} //namespace eprosima

#endif // _STRATEGIES_SINGLETHREADSTRATEGY_H_
