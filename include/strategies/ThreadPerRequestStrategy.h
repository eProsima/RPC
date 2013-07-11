/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "rpcdds_dll.h"

namespace eProsima
{
    namespace RPCDDS
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
				 * \param execFunction Function that has to be call when the request will be processed.
				 * \param data The request. Cannot be NULL.
				 * \param server A pointer to the server. Cannot be NULL.
				 * \param service A pointer to the remote procedure service. Cannot be NULL.
				 */
                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);

            private:

        };
    } // namespace RPCDDS
} //namespace eProsima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

