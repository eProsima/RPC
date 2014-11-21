#include "fastrpc/transports/components/TCPEndpoint.h"
#include "fastrpc/utils/macros/snprintf.h"

#include <iostream>
#include <vector>
#include <boost/bind.hpp>

using namespace eprosima::rpc;
using namespace ::transport;

const size_t BUFFER_INITIAL_LENGTH = 1024;

TCPEndpoint::TCPEndpoint(void) : m_readBuffer(NULL), m_readBufferLength(0),
    m_readBufferUse(0), m_readBufferCurrentPointer(0), m_writeBuffer(NULL), m_writeBufferLength(0),
    m_writeBufferUse(0)
{
	this->socket_ = boost::shared_ptr<boost::asio::ip::tcp::socket>(
			new boost::asio::ip::tcp::socket(io_service_));
}

bool TCPEndpoint::initializeBuffers()
{
    m_readBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

    if(m_readBuffer != NULL)
    {
        m_writeBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

        if(m_writeBuffer != NULL)
        {
            m_readBufferLength = BUFFER_INITIAL_LENGTH;
            m_writeBufferLength = BUFFER_INITIAL_LENGTH;
            return true;
        }

        free(m_readBuffer);
    }

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
    if((m_readBufferLength + minSize) <= (2 * m_readBufferLength))
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
        m_readBuffer = (char*)realloc(m_readBuffer, m_readBufferLength + minSize);

        if(m_readBuffer != NULL)
        {
            m_readBufferLength = m_readBufferLength + minSize;
            return 0;
        }
    }

    return -1;
}

void TCPEndpoint::refillReadBuffer()
{
    if(getReadBufferLeftUsedSpace() > 0)
    {
        memmove(m_readBuffer, &m_readBuffer[m_readBufferCurrentPointer], getReadBufferLeftUsedSpace());
    }

    m_readBufferUse = getReadBufferLeftUsedSpace();
    m_readBufferCurrentPointer = 0;
}

bool TCPEndpoint::resizeWriteBuffer(size_t minSize)
{
    if((m_writeBufferUse + minSize) <= (2 * m_writeBufferLength))
    {
        m_writeBuffer = (char*)realloc(m_writeBuffer, 2 * m_writeBufferLength);

        if(m_writeBuffer != NULL)
        {
            m_writeBufferLength *= 2;
            return true;
        }
    }
    else
    {
        m_writeBuffer = (char*)realloc(m_writeBuffer, m_writeBufferUse + minSize);

        if(m_writeBuffer != NULL)
        {
            m_writeBufferLength = m_writeBufferUse + minSize;
            return true;
        }
    }

    return false;
}

bool TCPEndpoint::write(const std::string &str)
{
    if((str.size() + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(str.size()))
    {
        memcpy(&m_writeBuffer[m_writeBufferUse], str.c_str(), str.size());
        m_writeBufferUse += str.size();
        return true;
    }

    return false;
}

bool TCPEndpoint::write(int32_t num)
{
    char aux[23];

    SNPRINTF(aux, 23, "%d", num);

    if((strlen(aux) + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(strlen(aux)))
    {
        memcpy(&m_writeBuffer[m_writeBufferUse], aux, strlen(aux));
        m_writeBufferUse += strlen(aux);
        return true;
    }

    return false;
}

bool TCPEndpoint::isOpen()
{
    return socket_->is_open();
}

boost::shared_ptr<boost::asio::ip::tcp::socket>& TCPEndpoint::socket() {
	return socket_;
}
