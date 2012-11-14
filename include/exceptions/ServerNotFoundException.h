#ifndef _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
#define _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API ServerNotFoundException : public SystemException
        {
		public:

			ServerNotFoundException(const std::string &message);

			ServerNotFoundException(std::string&& message);

			ServerNotFoundException(const ServerNotFoundException &ex);

			ServerNotFoundException(ServerNotFoundException&& ex);

			ServerNotFoundException& operator=(const ServerNotFoundException &ex);

			ServerNotFoundException& operator=(ServerNotFoundException&& ex);

			virtual ~ServerNotFoundException() DDSRPC_USE_NOEXCEPT;

			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
