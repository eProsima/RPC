#include "strategies/SingleThreadStrategy.h"
#include "server/Server.h"

static const char* const CLASS_NAME = "SingleThreadStrategy";

namespace eProsima
{
    namespace DDSRPC
    {

        SingleThreadStrategy::SingleThreadStrategy()
        {
        }

        void SingleThreadStrategy::schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
        {
            const char* const METHOD_NAME = "schedule";

            if(execFunction != NULL && data != NULL && server != NULL && service != NULL)
            {
                execFunction(server, data, service);
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }

    } // namespace DDSRPC
} // namespace eProsima

