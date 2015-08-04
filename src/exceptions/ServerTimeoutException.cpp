/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/ServerTimeoutException.h>

using namespace eprosima::rpc::exception;

ServerTimeoutException::ServerTimeoutException(const ServerTimeoutException &ex) : SystemException(ex)
{
}

ServerTimeoutException::ServerTimeoutException(ServerTimeoutException&& ex) : SystemException(std::move(ex))
{
}

ServerTimeoutException& ServerTimeoutException::operator=(const ServerTimeoutException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

ServerTimeoutException& ServerTimeoutException::operator=(ServerTimeoutException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

ServerTimeoutException::~ServerTimeoutException() throw()
{
}

void ServerTimeoutException::raise() const
{
    throw *this;
}
