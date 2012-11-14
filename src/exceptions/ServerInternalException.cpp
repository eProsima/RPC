#include <exceptions/ServerInternalException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		ServerInternalException::ServerInternalException(const std::string &message) : SystemException(message, 3)
		{
		}

		ServerInternalException::ServerInternalException(std::string&& message) : SystemException(std::move(message), 3)
		{
		}

		ServerInternalException::ServerInternalException(const ServerInternalException &ex) : SystemException(ex)
		{
		}

		ServerInternalException::ServerInternalException(ServerInternalException&& ex) : SystemException(std::move(ex))
		{
		}

		ServerInternalException& ServerInternalException::operator=(const ServerInternalException &ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(ex);
			}

			return *this;
		}

		ServerInternalException& ServerInternalException::operator=(ServerInternalException&& ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(std::move(ex));
			}

			return *this;
		}

		ServerInternalException::~ServerInternalException() DDSRPC_USE_NOEXCEPT
		{
		}

		void ServerInternalException::raise() const
		{
			throw *this;
		}
    } // namespace DDSRPC
} // namespace eProsima
