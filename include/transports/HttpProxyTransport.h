/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPPROXYTRANSPORT_H_
#define _TRANSPORTS_HTTPPROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/TCPProxyTransport.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class HttpMessage;
            /*!
             * @brief This interface is the base of all classes that implement a transport
             *        that could be used by a proxy.
             * @ingroup TRANSPORTMODULE
             */
            class RPCDDS_DllAPI HttpProxyTransport : public ProxyTransport
            {
                public:

                    //! \brief Default constructor.
                    HttpProxyTransport(const std::string &serverAddress);

                    //! \brief Default destructor.
                    virtual ~HttpProxyTransport();

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const {return "HTTP";}

                    bool connect();
                    bool send(const void* buffer, const size_t bufferSize);
                    int receive(void *buffer, const size_t bufferSize, size_t &dataToRead);

                private:

                    inline
                        void resetWriteBuffer(){m_writeBufferUse = 0;}

                    bool write(const std::string &str);

                    bool write(const uint64_t uint64);

                    bool resizeWriteBuffer(size_t minSize);

                    inline
                        size_t getReadBufferEmptySpace() const {return m_readBufferLength - m_readBufferUse;}  

                    int resizeReadBuffer(size_t minSize);

                    inline
                        void increaseReadBufferFillUse(size_t numData) {m_readBufferUse += numData;}

                    inline
                        size_t getReadBufferLeaveUsedSpace() const {return m_readBufferUse - m_readBufferCurrentPointer;}

                    inline
                        size_t getReadBufferLeaveSpace() const {return m_readBufferLength - m_readBufferCurrentPointer;}

                    inline
                        char* getReadBufferCurrentPointer() const {return &m_readBuffer[m_readBufferCurrentPointer];}

                    inline
                        void increaseReadBufferCurrentPointer(size_t move){m_readBufferCurrentPointer += move;}

                    void refillReadBuffer();

                    int readHeaders(HttpMessage &httpMessage);

                    int readVersion(HttpMessage &httpMessage);

                    int readResponseCode(HttpMessage &httpMessage);

                    int readHeaderLines(HttpMessage &httpMessage);

                    int readResponseStatus(HttpMessage &httpMessage);

                    TCPProxyTransport m_tcptransport;

                    char *m_writeBuffer;

                    size_t m_writeBufferLength;

                    size_t m_writeBufferUse;

                    char *m_readBuffer;

                    size_t m_readBufferLength;

                    size_t m_readBufferUse;

                    size_t m_readBufferCurrentPointer;
            };
        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_HTTPPROXYTRANSPORT_H_
