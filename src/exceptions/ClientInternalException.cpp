/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/ClientInternalException.h>

using namespace eprosima::rpc::exception;

ClientInternalException::ClientInternalException(const ClientInternalException &ex) : SystemException(ex)
{
}

ClientInternalException::ClientInternalException(ClientInternalException&& ex) : SystemException(std::move(ex))
{
}

ClientInternalException& ClientInternalException::operator=(const ClientInternalException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

ClientInternalException& ClientInternalException::operator=(ClientInternalException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

ClientInternalException::~ClientInternalException() throw()
{
}

void ClientInternalException::raise() const
{
    throw *this;
}
