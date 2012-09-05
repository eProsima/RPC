#ifndef _STRATEGIES_THREADPERREQUESTSTRATEGY_H_
#define _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

#include "server/ServerStrategy.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class ThreadPerRequestStrategyJob;

        class ThreadPerRequestStrategy : public ServerStrategy
        {
            public:

                ThreadPerRequestStrategy();

                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);

            private:

        };
    } // namespace DDSRPC
} //namespace eProsima

#endif // _STRATEGIES_THREADPERREQUESTSTRATEGY_H_

