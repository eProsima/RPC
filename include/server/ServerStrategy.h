/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVERSTRATEGY_H_
#define _SERVER_SERVERSTRATEGY_H_

#include "utils/Typedefs.h"
#include "utils/rpcdds.h"

namespace eProsima
{
    namespace RPCDDS
    {
        class Server;
        class  ServerRPC;

		/**
		 * @brief This class is the base of all classes that implement a server strategy
		 *        that could be used by the server.
         * @ingroup SERVERMODULE
		 */
        class RPCDDS_WIN32_DLL_API ServerStrategy
        {
            public:

				/// \brief Default constructor.
				ServerStrategy(){};

				/// \brief Default destructor.
				virtual ~ServerStrategy(){};

				/**
				 * \brief This function schedules a incoming request.
				 *        This function has to be implemented by the derived classes.
				 *
				 * \param execFunction Function that has to be call when the request will be processed.
				 * \param data The request. Cannot be NULL.
				 * \param server A pointer to the server. Cannot be NULL.
				 * \param service A pointer to the remote procedure service. Cannot be NULL.
				 */
                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service) = 0;
        };
    } // namespace RPCDDS
} // namespace eProsima

#endif // _SERVER_SERVERSTRATEGY_H_
