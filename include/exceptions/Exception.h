#ifndef _EXCEPTIONS_EXCEPTION_H_
#define _EXCEPTIONS_EXCEPTION_H_

#include "utils/ddsrpc.h"
#include <string>
#include <exception>

namespace eProsima
{
    namespace DDSRPC
    {
        class DDSRPC_WIN32_DLL_API Exception : public std::exception
        {
		public:

			virtual ~Exception() DDSRPC_USE_NOEXCEPT;

			virtual void raise() const = 0;

			virtual const char* what() const throw() override;

		protected:

			Exception(const std::string &message);

			Exception(std::string&& message);

			Exception(const Exception &ex);

			Exception(Exception&& ex);

			Exception& operator=(const Exception &ex);

			Exception& operator=(Exception&&);

		private:

			std::string m_message;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _EXCEPTIONS_EXCEPTION_H_
