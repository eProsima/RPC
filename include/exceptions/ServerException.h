#ifndef _EXCEPTIONS_SERVEREXCEPTION_H_
#define _EXCEPTIONS_SERVEREXCEPTION_H_

#include <exceptions/Exception.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class ServerException : public Exception
        {
		public:

			ServerException(const std::string &message) : Exception(message)
			{
			}

			virtual ~ServerException() {}
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVEREXCEPTION_H_