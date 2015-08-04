/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_MESSAGES_H_
#define _UTILS_MESSAGES_H_

namespace eprosima
{
	namespace rpc
	{
		/**
		 * \brief This enumeration type defines the success of an operation and
		 *        the possible errors that can occur during the operation.
		 */
		typedef enum ReturnMessage
		{
            OK,
            UNIMPLEMENTED,
            BAD_PARAMETER,
            PRECONDITION_NOT_MET,
            OUT_OF_RESOURCES,
            NOT_ENABLED,
            ALREADY_DELETED,
            ILLEGAL_OPERATION,
            /// \brief Timeout while the client is waiting the server reply.
            TIMEOUT,
            INITIALIZE_ERROR,
            /// \brief An error occurs on the server's proxy side.
            CLIENT_INTERNAL_ERROR,
            /// \brief An error occurs on the server side.
            SERVER_INTERNAL_ERROR,
            /// \brief Server was not found.
            SERVER_NOT_FOUND,
            UNKNOWN
        } ReturnMessage;

	} // namespace rpc
} // namespace eprosima

#endif // _UTILS_MESSAGES_H_
