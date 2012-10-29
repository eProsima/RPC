#ifndef _EXCEPTIONS_EXCEPTION_H_
#define _EXCEPTIONS_EXCEPTION_H_

#include <string>

namespace eProsima
{
    namespace DDSRPC
    {
        class Exception
        {
		public:

			Exception(const std::string &message) : m_message(message)
			{
			}

			Exception(std::string &&message)
			{
				m_message = std::move(message);
			}

			virtual ~Exception(){}

			virtual std::string getMessage() const throw()
            {
                return m_message;
            }

		private:

			std::string m_message;
        };
    } // namespace DDSRPC
} // namespace eProsima

#endif // _EXCEPTIONS_EXCEPTION_H_