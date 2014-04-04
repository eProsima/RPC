/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <rpcdds/exceptions/BadParamException.h>

using namespace eprosima::rpcdds::exception;

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

