#ifndef _SERVER_SERVERSTRATEGY_H_
#define _SERVER_SERVERSTRATEGY_H_

#include "utils/Typedefs.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class Server;
        class ServerRPC;
        class ServerStrategy
        {
            public:

                virtual void schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service) = 0;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVERSTRATEGY_H_
