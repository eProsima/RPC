#ifndef _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
#define _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_

#include <exceptions/Exception.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class ServerNotFoundException : public Exception
        {
		public:

			ServerNotFoundException(const std::string &message) : Exception(message)
			{
			}

			ServerNotFoundException(std::string &&message) : Exception(message)
			{
			}

			virtual ~ServerNotFoundException() {}
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_