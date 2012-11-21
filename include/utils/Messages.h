/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_MESSAGES_H_
#define _UTILS_MESSAGES_H_

namespace eProsima
{
	namespace RPCDDS
	{
		/**
		 * \brief This enumeration type defines the success of an operation or
		 *        the posible errors that occur in the operation.
		 */
		typedef enum ReturnMessage
		{
			/// \brief An error occurs in the server's proxy side.
			CLIENT_INTERNAL_ERROR = -2,
			/// \brief Timeout while the client is waiting the server's reply.
			SERVER_TIMEOUT,
			/// \brief An error occurs in the server side.
			SERVER_INTERNAL_ERROR,
			/// \brief Operation was succesful.
			OPERATION_SUCCESSFUL,
			/// \brief Server was not found.
			NO_SERVER
		} ReturnMessage;

	} // namespace RPCDDS
} // namespace eProsima

#endif // _UTILS_MESSAGES_H_
