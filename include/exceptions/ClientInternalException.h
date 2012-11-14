#ifndef _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
#define _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API ClientInternalException : public SystemException
        {
		public:

			ClientInternalException(const std::string &message);

			ClientInternalException(std::string&& message);

			ClientInternalException(const ClientInternalException &ex);

			ClientInternalException(ClientInternalException&& ex);

			ClientInternalException& operator=(const ClientInternalException &ex);

			ClientInternalException& operator=(ClientInternalException&& ex);

			virtual ~ClientInternalException() DDSRPC_USE_NOEXCEPT;

			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_CLIENTINTERNALEXCEPTION_H_
