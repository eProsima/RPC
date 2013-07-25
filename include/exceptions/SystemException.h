/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SYSTEMEXCEPTION_H_
#define _EXCEPTIONS_SYSTEMEXCEPTION_H_

#include "exceptions/Exception.h"

#include <stdint.h>

namespace eProsima
{
    namespace RPCDDS
    {
		/**
		 * @brief This abstract class is used to create internal RPCDDS exceptions.
         * @ingroup EXCEPTIONMODULE
		 */
        class RPCDDS_DllAPI SystemException : public Exception
        {
		public:

			/// \brief Default destructor.
			virtual ~SystemException() throw();

			/**
			 * \brief This function returns the number associated with the system exception.
			 *
			 * \return The number associated with the system exception.
			 */
			const int32_t& minor() const;

			/**
			 * \brief This function sets the number that will be associated with the system exception.
			 *
			 * \param minor The number that will be associated with the system exception.
			 */
			void minor(const int32_t &minor);

			/// \brief This function throws the object as exception.
			virtual void raise() const = 0;
			/**
			 * \brief This function returns the error message.
			 *
			 * \return The error message.
			 */
			virtual const char* what() const throw();

		protected:
		    
			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			SystemException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
			 */
			SystemException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex SystemException that will be copied.
			 */
			SystemException(const SystemException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex SystemException that will be moved.
			 */
			SystemException(SystemException&& ex);

			/**
			 * \brief Constructor.
			 *
			 * \param message A error message. This message is copied.
			 * \param minor The number that will be associated with the system exception.
			 */
			SystemException(const std::string &message, int32_t minor);

			/**
			 * \brief Constructor.
			 *
			 * \param message A error message. This message is moved.
			 * \param minor The number that will be associated with the system exception.
			 */
			SystemException(std::string&& message, int32_t minor);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex SystemException that will be copied.
			 */
			SystemException& operator=(const SystemException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex SystemException that will be moved.
			 */
			SystemException& operator=(SystemException&& ex);

		private:

			std::string m_message;

			int32_t m_minor;
        };
    } // namespace RPCDDS
} // namespace eProsima

#endif // _EXCEPTIONS_SYSTEMEXCEPTION_H_
