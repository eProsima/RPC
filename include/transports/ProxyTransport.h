/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_PROXYTRANSPORT_H_
#define _TRANSPORTS_PROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/Transport.h"

namespace eprosima {
namespace rpcdds {
namespace transport {
/*!
 * @brief This interface is the base of all classes that implement a transport
 *        that could be used by a proxy.
 * @ingroup TRANSPORTMODULE
 */
class RPCDDS_DllAPI ProxyTransport : public Transport
{
public:

	//! \brief Default constructor.
	ProxyTransport(){}

	//! \brief Default destructor.
	virtual ~ProxyTransport(){}

	/*!
	 * @brief This function returns the type of the transport.
	 *        This function has to be implemented by the child classes.
	 */
	virtual const char* getType() const = 0;

	virtual bool connect() = 0;
	virtual bool send(const char* buffer) = 0;
	virtual char* receive() = 0;
};
}
 // namespace transport
}// namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_PROXYTRANSPORT_H_
