/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPOOLSTRATEGY_H_
#define _STRATEGIES_THREADPOOLSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "rpcdds_dll.h"

#define RPCDDS_MIN_THREADS_DEFAULT 5

namespace eProsima
{
    namespace RPCDDS
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

				/**
				 * \brief This function schedules a incoming request in a free thread of the thread pool.
				 *
				 * \param execFunction Function that has to be call when the request will be processed.
				 * \param data The request. Cannot be NULL.
				 * \param server A pointer to the server. Cannot be NULL.
				 * \param service A pointer to the remote procedure service. Cannot be NULL.
				 */
                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);

            private:

                ThreadPoolStrategyImpl *m_impl;
        };
    } // namespace RPCDDS
} //namespace eProsima

#endif // _STRATEGIES_THREADPOOLSTRATEGY_H_
