/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
#define _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_

#include "fastrpc/exceptions/SystemException.h"

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
        class FASTRPC_DllAPI ServerInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is copied.
			 */
			ServerInternalException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is moved.
			 */
			ServerInternalException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ServerInternalException that will be copied.
			 */
			ServerInternalException(const ServerInternalException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ServerInternalException that will be moved.
			 */
			ServerInternalException(ServerInternalException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerInternalException that will be copied.
			 */
			ServerInternalException& operator=(const ServerInternalException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerInternalException that will be moved.
			 */
			ServerInternalException& operator=(ServerInternalException&& ex);

			/// \brief Default constructor
			virtual ~ServerInternalException() throw();

			/// \brief This function throws the object as an exception.
			virtual void raise() const;
        };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
