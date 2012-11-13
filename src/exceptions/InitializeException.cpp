#include <exceptions/InitializeException.h>

namespace eProsima
{
    namespace DDSRPC
    {
		InitializeException::InitializeException(const std::string &message) : SystemException(message, 1)
		{
		}

		InitializeException::InitializeException(std::string&& message) : SystemException(std::move(message), 1)
		{
		}

		InitializeException::InitializeException(const InitializeException &ex) : SystemException(ex)
		{
		}

		InitializeException::InitializeException(InitializeException&& ex) : SystemException(std::move(ex))
		{
		}

		InitializeException& InitializeException::operator=(const InitializeException &ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(ex);
			}

			return *this;
		}

		InitializeException& InitializeException::operator=(InitializeException&& ex)
		{
			if(this != &ex)
			{
				SystemException::operator=(std::move(ex));
			}

			return *this;
		}

		InitializeException::~InitializeException()
		{
		}

		void InitializeException::raise() const
		{
			throw *this;
		}
    } // namespace DDSRPC
} // namespace eProsima
