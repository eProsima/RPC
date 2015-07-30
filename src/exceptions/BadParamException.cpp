/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/BadParamException.h>

using namespace eprosima::rpc::exception;

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

