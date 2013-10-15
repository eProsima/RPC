/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPTRANSPORT_H_
#define _TRANSPORTS_HTTPTRANSPORT_H_

#include <malloc.h>
#include <string>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class HttpTransport
            {
                public:

                    ~HttpTransport();

                protected:

                    HttpTransport();

                    inline
                        const char* getWriteBuffer() const {return m_writeBuffer;}
                    
                    inline
                        size_t getWriteBufferUsage() const {return m_writeBufferUse;}

                    inline
                        void resetWriteBuffer(){m_writeBufferUse = 0;}

                    inline
                        char* getReadBuffer() const {return m_readBuffer;}

                    inline
                        size_t getReadBufferUsage() const {return m_readBufferUse;}

                    inline
                        void increaseReadBufferUsage(size_t numData) {m_readBufferUse += numData;}

                    inline
                        size_t getReadBufferLength() const {return m_readBufferLength;}

                    int resizeReadBuffer(size_t minSize);

                    bool write(const std::string &str);

                    bool write(const uint64_t uint64);

                private:

                    bool resizeWriteBuffer(size_t minSize);

                    char *m_writeBuffer;

                    size_t m_writeBufferLength;

                    size_t m_writeBufferUse;

                    char *m_readBuffer;

                    size_t m_readBufferLength;

                    size_t m_readBufferUse;
            };
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_HTTPTRANSPORT_H_
