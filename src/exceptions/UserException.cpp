/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "exceptions/UserException.h"


namespace eProsima
{
    namespace RPCDDS
    {	    
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
	} // namespace RPCDDS
} // namespace eProsima
