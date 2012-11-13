#include <exceptions/ServerTimeoutException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		ServerTimeoutException::ServerTimeoutException(const std::string &message) : SystemException(message, 5)
		{
		}

		ServerTimeoutException::ServerTimeoutException(std::string&& message) : SystemException(std::move(message), 5)
		{
		}

		ServerTimeoutException::ServerTimeoutException(const ServerTimeoutException &ex) : SystemException(ex)
		{
		}

		ServerTimeoutException::ServerTimeoutException(ServerTimeoutException&& ex) : SystemException(std::move(ex))
		{
		}

		ServerTimeoutException& ServerTimeoutException::operator=(const ServerTimeoutException &ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(ex);
			}

			return *this;
		}

		ServerTimeoutException& ServerTimeoutException::operator=(ServerTimeoutException&& ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(std::move(ex));
			}

			return *this;
		}

		ServerTimeoutException::~ServerTimeoutException()
		{
		}

		void ServerTimeoutException::raise() const
		{
			throw *this;
		}
    } // namespace DDSRPC
} // namespace eProsima
