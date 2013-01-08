/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "strategies/SingleThreadStrategy.h"
#include "server/Server.h"

static const char* const CLASS_NAME = "SingleThreadStrategy";

namespace eProsima
{
    namespace RPCDDS
    {
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

    } // namespace RPCDDS
} // namespace eProsima

