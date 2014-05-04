/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
#define _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_

#include <fastrpc/exceptions/SystemException.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace exception
        {
		/**
		 * @brief This class is thrown as an exception when there is an error in the proxy side.
         * @ingroup EXCEPTIONMODULE
		 */
        class FASTRPC_DllAPI ClientInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is copied.
			 */
			ClientInternalException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message An error message. This message is moved.
			 */
			ClientInternalException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex ClientInternalException that will be copied.
			 */
			ClientInternalException(const ClientInternalException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex ClientInternalException that will be moved.
			 */
			ClientInternalException(ClientInternalException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ClientInternalException that will be copied.
			 */
			ClientInternalException& operator=(const ClientInternalException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex ClientInternalException that will be moved.
			 */
			ClientInternalException& operator=(ClientInternalException&& ex);

			/// \brief Default constructor
			virtual ~ClientInternalException() throw();

			/// \brief This function throws the object as an exception.
			virtual void raise() const;
        };
        } // namespace exception
    } // namespace fastrpc
} // namespace eprosima
#endif // _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
