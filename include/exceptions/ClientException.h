#ifndef _EXCEPTIONS_CLIENTEXCEPTION_H_
#define _EXCEPTIONS_CLIENTEXCEPTION_H_

#include <exceptions/Exception.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class ClientException : public Exception
        {
		public:

			ClientException(const std::string &message) : Exception(message)
			{
			}

			virtual ~ClientException() {}
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_CLIENTEXCEPTION_H_