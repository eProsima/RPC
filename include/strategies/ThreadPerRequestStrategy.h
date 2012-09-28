#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "utils/ddsrpc.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class ThreadPerRequestStrategyJob;

		/**
		 * \brief This class implements the thread per request strategy.
		 *        The server creates a new thread per new incoming request.
		 */
        class DDSRPC_WIN32_DLL_API ThreadPerRequestStrategy : public ServerStrategy
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
    } // namespace DDSRPC
} //namespace eProsima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

