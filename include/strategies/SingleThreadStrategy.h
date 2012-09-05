#ifndef _STRATEGIES_SINGLETHREADSTRATEGY_H_
#define _STRATEGIES_SINGLETHREADSTRATEGY_H_

#include "server/ServerStrategy.h"
#include "utils/ddsrpc.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API SingleThreadStrategy : public ServerStrategy
        {
            public:

                SingleThreadStrategy();

                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service);
        };
    } // namespace DDSRPC
} //namespace eProsima

#endif // _STRATEGIES_SINGLETHREADSTRATEGY_H_
