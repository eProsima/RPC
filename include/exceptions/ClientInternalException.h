/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
#define _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
		/**
		 * @brief This class is thrown as an exception when there is an error in the proxy side.
         * @ingroup EXCEPTIONMODULE
		 */
        class ClientInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is copied.
			 */
			RPC_DllAPI ClientInternalException(const std::string &message) : SystemException(message.c_str(), 2) {}

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ClientInternalException that will be copied.
			 */
			RPC_DllAPI ClientInternalException(const ClientInternalException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ClientInternalException that will be moved.
			 */
			RPC_DllAPI ClientInternalException(ClientInternalException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ClientInternalException that will be copied.
			 */
			RPC_DllAPI ClientInternalException& operator=(const ClientInternalException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ClientInternalException that will be moved.
			 */
			RPC_DllAPI ClientInternalException& operator=(ClientInternalException&& ex);

			/// \brief Default constructor
			virtual RPC_DllAPI ~ClientInternalException() throw();

			/// \brief This function throws the object as an exception.
			virtual RPC_DllAPI void raise() const;
        };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
