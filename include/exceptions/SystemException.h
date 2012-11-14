#ifndef _EXCEPTIONS_SYSTEMEXCEPTION_H_
#define _EXCEPTIONS_SYSTEMEXCEPTION_H_

#include "exceptions/Exception.h"

#include <stdint.h>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API SystemException : public Exception
        {
		public:

			virtual ~SystemException() DDSRPC_USE_NOEXCEPT;

			const int32_t& minor() const;

			void minor(const int32_t &minor);

			virtual void raise() const = 0;

		protected:
		    
			SystemException(const std::string &message);

			SystemException(std::string&& message);

			SystemException(const SystemException &ex);

			SystemException(SystemException&& ex);

			SystemException(const std::string &message, int32_t minor);

			SystemException(std::string&& message, int32_t minor);

			SystemException& operator=(const SystemException &ex);

			SystemException& operator=(SystemException&& ex);

		private:

			int32_t m_minor;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _EXCEPTIONS_SYSTEMEXCEPTION_H_
