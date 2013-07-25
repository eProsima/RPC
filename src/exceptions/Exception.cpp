/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "exceptions/Exception.h"

namespace eProsima
{
    namespace RPCDDS
    {
		Exception::Exception()
		{
		}

		Exception::Exception(const Exception &ex)
		{
		}

		Exception::Exception(Exception&& ex)
		{
		}

		Exception& Exception::operator=(const Exception &ex)
		{
			return *this;
		}

		Exception& Exception::operator=(Exception&&)
		{
			return *this;
		}

		Exception::~Exception() throw()
		{
		}
    } // namespace RPCDDS
} // namespace eProsima
