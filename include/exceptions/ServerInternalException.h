#ifndef _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
#define _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_

#include <exceptions/SystemException.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API ServerInternalException : public SystemException
        {
		public:

			ServerInternalException(const std::string &message);

			ServerInternalException(std::string&& message);

			ServerInternalException(const ServerInternalException &ex);

			ServerInternalException(ServerInternalException&& ex);

			ServerInternalException& operator=(const ServerInternalException &ex);

			ServerInternalException& operator=(ServerInternalException&& ex);

			virtual ~ServerInternalException();

			virtual void raise() const;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_SERVERINTERNALEXCEPTION_H_
