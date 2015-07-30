/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPPROXYTRANSPORT_H_
#define _TRANSPORTS_HTTPPROXYTRANSPORT_H_

#include "../rpc_dll.h"
#include "TCPProxyTransport.h"

#include <cstdint>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class HttpMessage;
            /*!
             * @brief This interface is the base of all proxy classes that implement an HTTP transport.
             * @ingroup TRANSPORTMODULE
             */
            class RPC_DllAPI HttpProxyTransport : public ProxyTransport
            {
                public:

                    /*! 
					 * @brief Default constructor.
					 * @param serverAddress Server IP address or URL.
					 */
                    HttpProxyTransport(const char* const &serverAddress);

                    //! \brief Default destructor.
                    virtual ~HttpProxyTransport();

                    /*!
                     * @brief This function returns the type of the transport. In this case, it is HTTP.
                     */
                    virtual const char* getType() const {return "HTTP";}

					/*!
					 * @brief Starts an HTTP connection with an HTTP server.
					 * @return true if the operation is successful, false otherwise.
					 */
                    bool connect();

					/*!
					 * @brief Sends an HTTP request to the server.
					 * @param buffer Buffer containing the HTTP message.
					 * @param bufferSize This parameter is not used in this class.
					 * @return true if the operation is successful, false otherwise.
					 */
                    bool send(const void* buffer, const size_t bufferSize);

					/*!
					 * @brief Receives an HTTP response from the server.
					 * @param buffer Buffer that will contain the HTTP message.
					 * @param bufferSize This parameter is not used in this class.
					 * @param dataToRead Number of bytes received.
					 * @return -1 if the operation fails.
					 */
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
    }// namespace rpc
} // namespace eprosima
#endif // _TRANSPORTS_HTTPPROXYTRANSPORT_H_
