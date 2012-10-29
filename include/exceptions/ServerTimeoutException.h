#ifndef _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
#define _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_

#include <exceptions/Exception.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class ServerTimeoutException : public Exception
        {
		public:

			ServerTimeoutException(const std::string &message) : Exception(message)
			{
			}

			virtual ~ServerTimeoutException() {}
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_