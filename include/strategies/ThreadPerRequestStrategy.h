/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "strategies/ServerStrategy.h"
#include "rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
			class ThreadPerRequestStrategyImpl;

            /**
             * @brief This class implements the thread per request strategy.
             *        The server creates a new thread for every new incoming request.
             * @ingroup STRATEGIESMODULE 
             */
            class RPCDDS_DllAPI ThreadPerRequestStrategy : public ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    ThreadPerRequestStrategy();

                    /// \brief Default destructor.
                    virtual ~ThreadPerRequestStrategy();
					
					/*!
					 * @brief Gets the implementation of the strategy using Boost library
					 * @return Implementation of the strategy
					 */
                    ServerStrategyImpl* getImpl();

			    private:

					/*!
					 * @brief Implementation of the strategy using Boost library
					 */
					ThreadPerRequestStrategyImpl *m_impl;
            };
        } // namespace strategy
    } // namespace rpcdds
} //namespace eprosima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

