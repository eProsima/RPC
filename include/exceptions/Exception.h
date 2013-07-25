/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_EXCEPTION_H_
#define _EXCEPTIONS_EXCEPTION_H_

#include "rpcdds_dll.h"
#include <string>
#include <exception>

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This abstract class is used to create exceptions.
         * @ingroup EXCEPTIONMODULE
		 */
        class RPCDDS_DllAPI Exception : public std::exception
        {
		public:

			/// \brief Default destructor.
			virtual ~Exception() throw();

			/// \brief This function throws the object as exception.
			virtual void raise() const = 0;

		protected:

			/**
			 * \brief Default constructor.
			 */
			Exception();

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex Exception that will be copied.
			 */
			Exception(const Exception &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex Exception that will be moved.
			 */
			Exception(Exception&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex Exception that will be copied.
			 */
			Exception& operator=(const Exception &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex Exception that will be moved.
			 */
			Exception& operator=(Exception&&);
        };
    } // namespace RPCDDS
} // namespace eProsima

#endif // _EXCEPTIONS_EXCEPTION_H_
