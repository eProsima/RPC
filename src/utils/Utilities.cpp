/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "utils/Utilities.h"

#include "boost/thread.hpp"

static const char* const CLASS_NAME = "eProsima::RPCDDS::Utilities";

namespace eProsima
{
    namespace RPCDDS
    {
		void sleep(unsigned int milliseconds)
		{
			boost::this_thread::sleep_for(boost::chrono::milliseconds(milliseconds));
		}
    } // namespace RPCDDS
} //namespace eProsima
