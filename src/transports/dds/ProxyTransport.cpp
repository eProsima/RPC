/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/dds/ProxyTransport.h"
#include "transports/dds/components/ProxyProcedureEndpoint.h"
#include "exceptions/InitializeException.h"

#include <string>

using namespace eprosima::rpcdds;
using namespace ::transport::dds;
using namespace ::util::dds;
using namespace ::exception;

static const char* const CLASS_NAME = "eprosima::rpcdds::transport::dds::ProxyTransport";

ProxyTransport::ProxyTransport(int domainId) : Transport(domainId)
{
}

ProxyTransport::~ProxyTransport()
{
    // TODO Delete map
}

const char* getType() const
{
    return "DDS";
}

int ProxyTransport::createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename)
{
    const char* const METHOD_NAME = "createProcedureEndpoint";
    ProxyProcedureEndpoint *pe = new ProxyProcedureEndpoint(this);

    if(pe != NULL)
    {
        if(pe->initialize(name, writertypename, readertypename))
        {
            std::pair<std::map<const char*, ProxyProcedureEndpoint*>::iterator, bool> retmap = m_procedureEndpoints.insert(std::pair<const char*, ProxyProcedureEndpoint*>(name, pe));

            if(retmap.second == true)
            {
                return 0;
            }
            else
            {
                printf("ERROR<%s::%s>: A procedure endpoint with the same name exists\n", CLASS_NAME, METHOD_NAME);
            }
        }

        delete pe;
    }

    return -1;
}
