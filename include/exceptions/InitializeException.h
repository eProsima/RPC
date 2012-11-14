#ifndef _EXCEPTIONS_INITIALIZEEXCEPTION_H_
#define _EXCEPTIONS_INITIALIZEEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API InitializeException : public SystemException
        {
		public:

			InitializeException(const std::string &message);

			InitializeException(std::string&& message);

			InitializeException(const InitializeException &ex);

			InitializeException(InitializeException&& ex);

			InitializeException& operator=(const InitializeException &ex);

			InitializeException& operator=(InitializeException&& ex);

			virtual ~InitializeException() DDSRPC_USE_NOEXCEPT;

			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_INITIALIZEEXCEPTION_H_
