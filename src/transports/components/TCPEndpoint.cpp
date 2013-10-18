#include "transports/components/TCPEndpoint.h"

#include <iostream>
#include <vector>
#include <boost/bind.hpp>

using namespace eprosima::rpcdds;
using namespace ::transport;

const size_t BUFFER_INITIAL_LENGTH = 1024;

TCPEndpoint::TCPEndpoint(void) : m_readBuffer(NULL), m_readBufferLength(BUFFER_INITIAL_LENGTH),
    m_readBufferUse(0), m_readBufferCurrentPointer(0)
{
	this->socket_ = boost::shared_ptr<boost::asio::ip::tcp::socket>(
			new boost::asio::ip::tcp::socket(io_service_));
}

bool TCPEndpoint::initializeBuffers()
{
    m_readBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

    if(m_readBuffer != NULL)
        return true;

    return false;
}

void TCPEndpoint::finalizeBuffers()
{
    if(m_readBuffer != NULL)
    {
        free(m_readBuffer);
        m_readBuffer = NULL;
    }
}

// 0 OK
// -1 Error.
int TCPEndpoint::resizeReadBuffer(size_t minSize)
{
    if((m_readBufferUse + minSize) <= (2 * m_readBufferLength))
    {
        m_readBuffer = (char*)realloc(m_readBuffer, 2 * m_readBufferLength);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength *= 2;
            return 0;
        }
    }
    else
    {
        m_readBuffer = (char*)realloc(m_readBuffer, m_readBufferUse + minSize);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength = m_readBufferUse + minSize;
            return 0;
        }
    }

    return -1;
}

void TCPEndpoint::refillReadBuffer()
{
    if(getReadBufferLeaveUsedSpace() > 0)
    {
        memmove(m_readBuffer, &m_readBuffer[m_readBufferCurrentPointer], getReadBufferLeaveUsedSpace());
        m_readBufferUse = getReadBufferLeaveUsedSpace();
        m_readBufferCurrentPointer = 0;
    }
}

boost::shared_ptr<boost::asio::ip::tcp::socket>& TCPEndpoint::socket() {
	return socket_;
}
