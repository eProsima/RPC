/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
#define _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This class is thrown as an exception when there is an error in the proxy side.
         * @ingroup EXCEPTIONMODULE
		 */
        class RPCDDS_DllAPI ClientInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			ClientInternalException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
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

			/// \brief This function throws the object as exception.
			virtual void raise() const;
        };
    } // namespace RPCDDS
} // namespace eProsima
#endif // _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
