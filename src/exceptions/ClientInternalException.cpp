#include <exceptions/ClientInternalException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		ClientInternalException::ClientInternalException(const std::string &message) : SystemException(message, 2)
		{
		}

		ClientInternalException::ClientInternalException(std::string&& message) : SystemException(std::move(message), 2)
		{
		}

		ClientInternalException::ClientInternalException(const ClientInternalException &ex) : SystemException(ex)
		{
		}

		ClientInternalException::ClientInternalException(ClientInternalException&& ex) : SystemException(std::move(ex))
		{
		}

		ClientInternalException& ClientInternalException::operator=(const ClientInternalException &ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(ex);
			}

			return *this;
		}

		ClientInternalException& ClientInternalException::operator=(ClientInternalException&& ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(std::move(ex));
			}

			return *this;
		}

		ClientInternalException::~ClientInternalException()
		{
		}

		void ClientInternalException::raise() const
		{
			throw *this;
		}
    } // namespace DDSRPC
} // namespace eProsima
