#ifndef _EXCEPTIONS_RESOURCEEXCEPTION_H_
#define _EXCEPTIONS_RESOURCEEXCEPTION_H_

#include <exceptions/Exception.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class ResourceException : public Exception
        {
		public:

			ResourceException(const std::string &message) : Exception(message)
			{
			}

			ResourceException(std::string &&message) : Exception(std::move(message))
			{
			}

			virtual ~ResourceException() {}
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_RESOURCEEXCEPTION_H_
