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
            class ThreadPerRequestStrategyJob;

            /**
             * @brief This class implements the thread per request strategy.
             *        The server creates a new thread per new incoming request.
             * @ingroup STRATEGIESMODULE 
             */
            class RPCDDS_DllAPI ThreadPerRequestStrategy : public ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    ThreadPerRequestStrategy(){};

                    /// \brief Default destructor.
                    virtual ~ThreadPerRequestStrategy(){};

                    /**
                     * \brief This function creates a new thread that will process the request.
                     *
                     * \param data The request. Cannot be NULL.
                     */
                    void schedule(boost::function<void()> callback);
            };
        } // namespace strategy
    } // namespace rpcdds
} //namespace eprosima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

