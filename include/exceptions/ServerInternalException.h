/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
#define _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
		/**
		 * @brief This class is thrown as an exception when there is an error in the server side.
         * @ingroup EXCEPTIONMODULE
		 */
        class ServerInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is copied.
			 */
			RPC_DllAPI ServerInternalException(const std::string &message) : SystemException(message.c_str(), 3){}

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ServerInternalException that will be copied.
			 */
			RPC_DllAPI ServerInternalException(const ServerInternalException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ServerInternalException that will be moved.
			 */
			RPC_DllAPI ServerInternalException(ServerInternalException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerInternalException that will be copied.
			 */
			RPC_DllAPI ServerInternalException& operator=(const ServerInternalException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerInternalException that will be moved.
			 */
			RPC_DllAPI ServerInternalException& operator=(ServerInternalException&& ex);

			/// \brief Default constructor
			virtual RPC_DllAPI ~ServerInternalException() throw();

			/// \brief This function throws the object as an exception.
			virtual RPC_DllAPI void raise() const;
        };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
