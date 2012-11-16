#ifndef _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
#define _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		/**
		 * \brief This class is thrown as an exception when there is an error in the server side.
		 */
        class DDSRPC_WIN32_DLL_API ServerInternalException : public SystemException
        {
		public:

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is copied.
			 */
			ServerInternalException(const std::string &message);

			/**
			 * \brief Default constructor.
			 *
			 * \param message A error message. This message is moved.
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
			virtual ~ServerInternalException() DDSRPC_USE_NOEXCEPT;

			/// \brief This function throws the object as exception.
			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
