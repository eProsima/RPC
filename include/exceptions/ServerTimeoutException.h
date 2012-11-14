#ifndef _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
#define _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API ServerTimeoutException : public SystemException
        {
		public:

			ServerTimeoutException(const std::string &message);

			ServerTimeoutException(std::string&& message);

			ServerTimeoutException(const ServerTimeoutException &ex);

			ServerTimeoutException(ServerTimeoutException&& ex);

			ServerTimeoutException& operator=(const ServerTimeoutException &ex);

			ServerTimeoutException& operator=(ServerTimeoutException&& ex);

			virtual ~ServerTimeoutException() DDSRPC_USE_NOEXCEPT;

			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
