/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include <strategies/SingleThreadStrategy.h>
#include "ServerStrategyImpl.h"
#include <transports/ServerTransport.h>

static const char* const CLASS_NAME = "SingleThreadStrategy";

namespace eprosima
{
    namespace rpc
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
    } // namespace rpc
} //namespace eprosima

using namespace eprosima::rpc;
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
