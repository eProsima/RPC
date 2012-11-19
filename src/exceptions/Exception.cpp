#include "exceptions/Exception.h"

namespace eProsima
{
    namespace RPCDDS
    {
		Exception::Exception(const std::string &message) : m_message(message)
		{
		}

		Exception::Exception(std::string&& message) : m_message(std::move(message))
		{
		}

		Exception::Exception(const Exception &ex) : m_message(ex.m_message)
		{
		}

		Exception::Exception(Exception&& ex) : m_message(std::move(ex.m_message))
		{
		}

		Exception& Exception::operator=(const Exception &ex)
		{
			m_message = ex.m_message;
			return *this;
		}

		Exception& Exception::operator=(Exception&&)
		{
			m_message = std::move(m_message);
			return *this;
		}

		Exception::~Exception() RPCDDS_USE_NOEXCEPT
		{
		}

		const char* Exception::what() const throw()
		{
			return m_message.c_str();
		}
    } // namespace RPCDDS
} // namespace eProsima
