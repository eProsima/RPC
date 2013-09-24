/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "strategies/SingleThreadStrategy.h"
#include "transports/ServerTransport.h"

static const char* const CLASS_NAME = "SingleThreadStrategy";

using namespace eprosima::rpcdds;
using namespace ::strategy;
using namespace ::transport;

void SingleThreadStrategy::schedule(fExecFunction execFunction,
        ServerTransport &transport, void *data)
{
    const char* const METHOD_NAME = "schedule";

    if(execFunction != NULL && data != NULL)
    {
        execFunction(transport, data);
    }
    else
    {
        printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
    }
}
