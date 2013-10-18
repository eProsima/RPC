#ifndef _TRANSPORTS_COMPONENTS_TCPENDPOINT_H_
#define _TRANSPORTS_COMPONENTS_TCPENDPOINT_H_

#include "transports/components/Endpoint.h"
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/enable_shared_from_this.hpp>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class TCPEndpoint : public boost::enable_shared_from_this<TCPEndpoint>, public Endpoint,
            private boost::noncopyable
            {
                private:

                    char *m_readBuffer;

                    size_t m_readBufferLength;

                    size_t m_readBufferUse;

                    size_t m_readBufferCurrentPointer;

                    char *m_writeBuffer;

                    size_t m_writeBufferLength;

                    size_t m_writeBufferUse;

                public:
                    TCPEndpoint(void);

                    bool initializeBuffers();

                    void finalizeBuffers();

                    inline
                        char* getReadBuffer() const {return m_readBuffer;}

                    inline
                        size_t getReadBufferFillUse() const {return m_readBufferUse;}

                    inline
                        void increaseReadBufferFillUse(size_t numData) {m_readBufferUse += numData;}

                    inline
                        size_t getReadBufferEmptySpace() const {return m_readBufferLength - m_readBufferUse;}  

                    inline
                        size_t getReadBufferLeaveSpace() const {return m_readBufferLength - m_readBufferCurrentPointer;}

                    inline
                        size_t getReadBufferLength() const {return m_readBufferLength;}

                    inline
                        char* getReadBufferCurrentPointer() const {return &m_readBuffer[m_readBufferCurrentPointer];}

                    inline
                        void increaseReadBufferCurrentPointer(size_t move){m_readBufferCurrentPointer += move;}

                    inline
                        size_t getReadBufferLeaveUsedSpace() const {return m_readBufferUse - m_readBufferCurrentPointer;}

                    int resizeReadBuffer(size_t minSize);

                    void refillReadBuffer();

                    inline
                        char* getWriteBuffer() {return m_writeBuffer;}

                    inline
                        size_t getWriteBufferUsage() const {return m_writeBufferUse;}

                    inline
                        size_t getWriteBufferLength() const {return m_writeBufferLength;}

                    bool resizeWriteBuffer(size_t minSize);

                    inline
                        void resetWriteBuffer(){m_writeBufferUse = 0;}

                    bool write(const std::string &str);

                    bool write(int32_t num);
                    
                    bool isOpen();

                    boost::shared_ptr<boost::asio::ip::tcp::socket> socket_;

                    boost::asio::io_service io_service_;
                    boost::asio::io_service *master_io_service_;

                    boost::asio::ip::tcp::endpoint endpoint_;

                    boost::shared_ptr<boost::thread> thread_;

                    typedef boost::shared_ptr<TCPEndpoint> pointer;

                    boost::shared_ptr<boost::asio::ip::tcp::socket>& socket();
            };

        }
    }
}

#endif // _TRANSPORTS_COMPONENTS_TCPENDPOINT_H_
