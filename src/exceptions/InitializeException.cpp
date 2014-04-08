/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <fastrpc/exceptions/InitializeException.h>

using namespace eprosima::fastrpc::exception;

InitializeException::InitializeException(const std::string &message) : SystemException(message, 1)
{
}

InitializeException::InitializeException(std::string&& message) : SystemException(std::move(message), 1)
{
}

InitializeException::InitializeException(const InitializeException &ex) : SystemException(ex)
{
}

InitializeException::InitializeException(InitializeException&& ex) : SystemException(std::move(ex))
{
}

InitializeException& InitializeException::operator=(const InitializeException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

InitializeException& InitializeException::operator=(InitializeException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

InitializeException::~InitializeException() throw()
{
}

void InitializeException::raise() const
{
    throw *this;
}
