/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/ServerNotFoundException.h>

using namespace eprosima::rpc::exception;

ServerNotFoundException::ServerNotFoundException(const ServerNotFoundException &ex) : SystemException(ex)
{
}

ServerNotFoundException::ServerNotFoundException(ServerNotFoundException&& ex) : SystemException(std::move(ex))
{
}

ServerNotFoundException& ServerNotFoundException::operator=(const ServerNotFoundException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

ServerNotFoundException& ServerNotFoundException::operator=(ServerNotFoundException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

ServerNotFoundException::~ServerNotFoundException() throw()
{
}

void ServerNotFoundException::raise() const
{
    throw *this;
}
