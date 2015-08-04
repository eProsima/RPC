/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/UserException.h>

#include <utility>

using namespace eprosima::rpc::exception;

UserException::UserException() : Exception()
{
}

UserException::UserException(const UserException &ex) : Exception(ex)
{
}

UserException::UserException(UserException&& ex) : Exception(std::move(ex))
{
}

UserException& UserException::operator=(const UserException &ex)
{
    Exception::operator=(ex);
    return *this;
}

UserException& UserException::operator=(UserException&& ex)
{
    Exception::operator=(std::move(ex));
    return *this;
}

UserException::~UserException() throw()
{
}
