/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/HttpTransport.h"

#include <string.h>

const size_t BUFFER_INITIAL_LENGTH = 1024;
const size_t MAX_INT64_CHARS = 20;

using namespace eprosima::rpcdds;
using namespace transport;

HttpTransport::HttpTransport() : m_writeBuffer(NULL), m_writeBufferLength(BUFFER_INITIAL_LENGTH), m_writeBufferUse(0),
    m_readBuffer(NULL), m_readBufferLength(BUFFER_INITIAL_LENGTH), m_readBufferUse(0)
{
    m_writeBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

    if(m_writeBuffer != NULL)
    {
        m_readBuffer = (char*)calloc(BUFFER_INITIAL_LENGTH, sizeof(char));

        if(m_readBuffer != NULL)
            return;

        free(m_writeBuffer);
    }
    // throw initialization exception.
}

HttpTransport::~HttpTransport()
{
    if(m_writeBuffer != NULL)
        free(m_writeBuffer);
    if(m_readBuffer != NULL)
        free(m_readBuffer);
}

bool HttpTransport::resizeWriteBuffer(size_t minSize)
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

bool HttpTransport::write(const std::string &str)
{
    if((str.size() + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(str.size()))
    {
        memcpy(&m_writeBuffer[m_writeBufferUse], str.c_str(), str.size());
        m_writeBufferUse += str.size();
        printf("Buffer = %s\n", m_writeBuffer);
        return true;
    }

    return false;
}

bool HttpTransport::write(const uint64_t uint64)
{
    if((MAX_INT64_CHARS + m_writeBufferUse <= m_writeBufferLength) || resizeWriteBuffer(MAX_INT64_CHARS))
    {
        m_writeBufferUse += sprintf(&m_writeBuffer[m_writeBufferUse], "%lu", uint64);
        printf("Buffer = %s\n", m_writeBuffer);
        return true;
    }

    return false;
}

// 0 OK
// -1 Error.
int HttpTransport::resizeReadBuffer(size_t minSize)
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
