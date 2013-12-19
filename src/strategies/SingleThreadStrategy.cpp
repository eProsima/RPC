/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "rpcdds/strategies/SingleThreadStrategy.h"
#include "rpcdds/strategies/ServerStrategyImpl.h"
#include "rpcdds/transports/ServerTransport.h"

static const char* const CLASS_NAME = "SingleThreadStrategy";

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
			class SingleThreadStrategyImpl : public ServerStrategyImpl
			{
				public:

					SingleThreadStrategyImpl(){};

					virtual ~SingleThreadStrategyImpl(){};

					void schedule(boost::function<void()> callback)
					{
						const char* const METHOD_NAME = "schedule";

						if(!callback.empty())
						{
							callback();
						}
						else
						{
							printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
						}
					}
			};
         } // namespace strategy
    } // namespace rpcdds
} //namespace eprosima

using namespace eprosima::rpcdds;
using namespace ::strategy;
using namespace ::transport;

SingleThreadStrategy::SingleThreadStrategy() : m_impl(NULL)
{
    m_impl = new SingleThreadStrategyImpl();
}

SingleThreadStrategy::~SingleThreadStrategy()
{
    if(m_impl != NULL)
        delete m_impl;
}

ServerStrategyImpl* SingleThreadStrategy::getImpl()
{
	return m_impl;
}
