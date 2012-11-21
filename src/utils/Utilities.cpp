/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "utils/Utilities.h"

#if (defined(RTI_WIN32) || defined(OPENDDS_WIN32))
#include <Windows.h>
#elif (defined(RTI_LINUX) || defined(OPENDDS_LINUX))
#include <unistd.h>
#endif

static const char* const CLASS_NAME = "eProsima::RPCDDS::Utilities";

namespace eProsima
{
    namespace RPCDDS
    {
		void sleep(unsigned int milliseconds)
		{
#if (defined(RTI_WIN32) || defined(OPENDDS_WIN32))
			Sleep(milliseconds);
#elif (defined(RTI_LINUX) || defined(OPENDDS_LINUX))
			usleep(milliseconds * 1000);
#endif
		}
    } // namespace RPCDDS
} //namespace eProsima
