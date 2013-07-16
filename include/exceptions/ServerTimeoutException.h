/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
#define _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This class is thrown as an exception when the remote procedure call exceeds the maximum time.
         * @ingroup EXCEPTIONMODULE
		 */
        class RPCDDS_DllAPI ServerTimeoutException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			ServerTimeoutException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
			 */
			ServerTimeoutException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ServerTimeoutException that will be copied.
			 */
			ServerTimeoutException(const ServerTimeoutException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ServerTimeoutException that will be moved.
			 */
			ServerTimeoutException(ServerTimeoutException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerTimeoutException that will be copied.
			 */
			ServerTimeoutException& operator=(const ServerTimeoutException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ServerTimeoutException that will be moved.
			 */
			ServerTimeoutException& operator=(ServerTimeoutException&& ex);

			/// \brief Default constructor
			virtual ~ServerTimeoutException() throw();

			/// \brief This function throws the object as exception.
			virtual void raise() const;
        };
    } // namespace RPCDDS
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
