/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_USEREXCEPTION_H_
#define _EXCEPTIONS_USEREXCEPTION_H_

#include "exceptions/Exception.h"

#include <stdint.h>

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This abstract class is used to create user exceptions.
         * @ingroup EXCEPTIONMODULE
		 */
        class RPCDDS_DllAPI UserException : public Exception
        {
		public:

			/// \brief Default destructor.
			virtual ~UserException() throw();

			/// \brief This function throws the object as exception.
			virtual void raise() const = 0;

		protected:
		    
			/**
			 * \brief Default constructor.
			 */
			UserException();

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex UserException that will be copied.
			 */
			UserException(const UserException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex UserException that will be moved.
			 */
			UserException(UserException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex UserException that will be copied.
			 */
			UserException& operator=(const UserException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex UserException that will be moved.
			 */
			UserException& operator=(UserException&& ex);
        };
    } // namespace RPCDDS
} // namespace eProsima

#endif // _EXCEPTIONS_USEREXCEPTION_H_

