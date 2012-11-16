#ifndef _EXCEPTIONS_INITIALIZEEXCEPTION_H_
#define _EXCEPTIONS_INITIALIZEEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		/**
		 * \brief This class is thrown as an exception when there is an error initializating an object.
		 */
        class DDSRPC_WIN32_DLL_API InitializeException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			InitializeException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
			 */
			InitializeException(std::string&& message);

			/**
			 * \brief Default copy constructor.
			 *
			 * \param ex InitializeException that will be copied.
			 */
			InitializeException(const InitializeException &ex);

			/**
			 * \brief Default move constructor.
			 *
			 * \param ex InitializeException that will be moved.
			 */
			InitializeException(InitializeException&& ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex InitializeException that will be copied.
			 */
			InitializeException& operator=(const InitializeException &ex);

			/**
			 * \brief Assigment operation.
			 *
			 * \param ex InitializeException that will be moved.
			 */
			InitializeException& operator=(InitializeException&& ex);

			/// \brief Default constructor
			virtual ~InitializeException() DDSRPC_USE_NOEXCEPT;

			/// \brief This function throws the object as exception.
			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_INITIALIZEEXCEPTION_H_
