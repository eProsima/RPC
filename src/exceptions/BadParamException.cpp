/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/exceptions/BadParamException.h"

using namespace eprosima::rpc::exception;

BadParamException::BadParamException(const std::string &message) : SystemException(message, 6)
{
}

BadParamException::BadParamException(std::string&& message) : SystemException(std::move(message), 6)
{
}

BadParamException::BadParamException(const BadParamException &ex) : SystemException(ex)
{
}

BadParamException::BadParamException(BadParamException&& ex) : SystemException(std::move(ex))
{
}

BadParamException& BadParamException::operator=(const BadParamException &ex)
{
    if(this != &ex)
    {
        SystemException::operator=(ex);
    }

    return *this;
}

BadParamException& BadParamException::operator=(BadParamException&& ex)
{
    if(this != &ex)
    {
        SystemException::operator=(std::move(ex));
    }

    return *this;
}

BadParamException::~BadParamException() throw()
{
}

void BadParamException::raise() const
{
    throw *this;
}

