#ifndef _STRATEGIES_THREADPOOLSTRATEGY_H_
#define _STRATEGIES_THREADPOOLSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "utils/ddsrpc.h"

#define DDSRPC_MIN_THREADS_DEFAULT 5

namespace eProsima
{
    namespace DDSRPC
    {
        class ThreadPoolStrategyImpl;

        class DDSRPC_WIN32_DLL_API ThreadPoolStrategy : public ServerStrategy
        {
            public:

                ThreadPoolStrategy(unsigned int threadCount = DDSRPC_MIN_THREADS_DEFAULT);

                ~ThreadPoolStrategy();

                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);

            private:

                ThreadPoolStrategyImpl *m_impl;
        };
    } // namespace DDSRPC
} //namespace eProsima

#endif // _STRATEGIES_THREADPOOLSTRATEGY_H_
