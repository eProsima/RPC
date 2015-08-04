/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/ServerInternalException.h>

using namespace eprosima::rpc::exception;

ServerInternalException::ServerInternalException(const ServerInternalException &ex) : SystemException(ex)
{
}

ServerInternalException::ServerInternalException(ServerInternalException&& ex) : SystemException(std::move(ex))
{
}

ServerInternalException& ServerInternalException::operator=(const ServerInternalException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

ServerInternalException& ServerInternalException::operator=(ServerInternalException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

ServerInternalException::~ServerInternalException() throw()
{
}

void ServerInternalException::raise() const
{
    throw *this;
}
