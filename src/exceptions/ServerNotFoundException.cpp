#include <exceptions/ServerNotFoundException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		ServerNotFoundException::ServerNotFoundException(const std::string &message) : SystemException(message, 4)
		{
		}

		ServerNotFoundException::ServerNotFoundException(std::string&& message) : SystemException(std::move(message), 4)
		{
		}

		ServerNotFoundException::ServerNotFoundException(const ServerNotFoundException &ex) : SystemException(ex)
		{
		}

		ServerNotFoundException::ServerNotFoundException(ServerNotFoundException&& ex) : SystemException(std::move(ex))
		{
		}

		ServerNotFoundException& ServerNotFoundException::operator=(const ServerNotFoundException &ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(ex);
			}

			return *this;
		}

		ServerNotFoundException& ServerNotFoundException::operator=(ServerNotFoundException&& ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(std::move(ex));
			}

			return *this;
		}

		ServerNotFoundException::~ServerNotFoundException() DDSRPC_USE_NOEXCEPT
		{
		}

		void ServerNotFoundException::raise() const
		{
			throw *this;
		}
    } // namespace DDSRPC
} // namespace eProsima
