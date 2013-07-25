/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "exceptions/SystemException.h"


namespace eProsima
{
    namespace RPCDDS
    {	    
		SystemException::SystemException(const std::string &message) : Exception(), m_message(message), m_minor(0)
		{
		}

		SystemException::SystemException(std::string&& message) : Exception(), m_message(std::move(message)), m_minor(0)
		{
		}

		SystemException::SystemException(const SystemException &ex) : Exception(ex), m_message(ex.m_message), m_minor(ex.m_minor)
		{
		}

		SystemException::SystemException(SystemException&& ex) : Exception(std::move(ex)), m_message(ex.m_message), m_minor(ex.m_minor)
		{
		}

		SystemException::SystemException(const std::string &message, int32_t minor) : Exception(), m_message(message), m_minor(minor)
		{
		}

		SystemException::SystemException(std::string&& message, int32_t minor) : Exception(), m_message(std::move(message)), m_minor(minor)
		{
		}

		SystemException& SystemException::operator=(const SystemException &ex)
		{
			Exception::operator=(ex);
			m_message = ex.m_message;
			m_minor = ex.m_minor;
			return *this;
		}

		SystemException& SystemException::operator=(SystemException&& ex)
		{
			Exception::operator=(std::move(ex));
			m_message = std::move(m_message);
			m_minor = ex.m_minor;
			return *this;
		}

		SystemException::~SystemException() throw()
		{
		}

		const int32_t& SystemException::minor() const
		{
			return m_minor;
		}

		void SystemException::minor(const int32_t &minor)
		{
			m_minor = minor;
		}

		const char* SystemException::what() const throw()
		{
			return m_message.c_str();
		}
	} // namespace RPCDDS
} // namespace eProsima
