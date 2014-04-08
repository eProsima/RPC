/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <fastrpc/exceptions/ClientInternalException.h>

using namespace eprosima::fastrpc::exception;

ClientInternalException::ClientInternalException(const std::string &message) : SystemException(message, 2)
{
}

ClientInternalException::ClientInternalException(std::string&& message) : SystemException(std::move(message), 2)
{
}

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
