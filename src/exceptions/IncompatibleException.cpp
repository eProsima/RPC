/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/IncompatibleException.h>

using namespace eprosima::rpc::exception;

IncompatibleException::IncompatibleException(const IncompatibleException &ex) : SystemException(ex)
{
}

IncompatibleException::IncompatibleException(IncompatibleException&& ex) : SystemException(std::move(ex))
{
}

IncompatibleException& IncompatibleException::operator=(const IncompatibleException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

IncompatibleException& IncompatibleException::operator=(IncompatibleException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

IncompatibleException::~IncompatibleException() throw()
{
}

void IncompatibleException::raise() const
{
    throw *this;
}
