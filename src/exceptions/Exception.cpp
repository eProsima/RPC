/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <exceptions/Exception.h>

using namespace eprosima::rpc::exception;

Exception::Exception()
{
}

Exception::Exception(const Exception& /*ex*/)
{
}

Exception::Exception(Exception&& /*ex*/)
{
}

Exception& Exception::operator=(const Exception& /*ex*/)
{
    return *this;
}

Exception& Exception::operator=(Exception&& /*ex*/)
{
    return *this;
}

Exception::~Exception() throw()
{
}
