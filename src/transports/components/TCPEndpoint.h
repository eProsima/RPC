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
    namespace rpc
    {
        namespace transport
        {
			/*!
			* @brief This class represents a TCP endpoint.
            * @ingroup TRANSPORTMODULE
			*/
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

					/*!
					 * @brief Default constructor.
					 */
                    TCPEndpoint(void);

					/*!
					 * @brief This method allocates memory for the internal buffers.
					 */
                    bool initializeBuffers();

					/*!
					 * @brief This method frees the memory from the internal buffers.
					 */
                    void finalizeBuffers();

					/*!
					 * @brief This method gets the read buffer.
					 * @return Read buffer.
					 */
                    inline
                        char* getReadBuffer() const {return m_readBuffer;}

					/*!
					 * @brief This method gets the used number of bytes of the read buffer.
					 * @return Read buffer's used number of bytes.
					 */
                    inline
                        size_t getReadBufferFillUse() const {return m_readBufferUse;}

					/*!
					 * @brief This method adds a certain number of bytes to the read buffer.
					 * @param numData Number of bytes to add to the total used bytes.
					 */
                    inline
                        void increaseReadBufferFillUse(size_t numData) {m_readBufferUse += numData;}

					/*!
					 * @brief This method gets the number of free bytes.
					 * @return Read buffer's free bytes.
					 */
                    inline
                        size_t getReadBufferEmptySpace() const {return m_readBufferLength - m_readBufferUse;}  

					/*!
					 * @brief This method gets the number of bytes not yet read from the read buffer.
					 * @return Number of bytes not yet read from the read buffer.
					 */
                    inline
                        size_t getReadBufferLeftSpace() const {return m_readBufferLength - m_readBufferCurrentPointer;}

					/*!
					 * @brief This method gets the read buffer length.
					 * @return Read buffer length.
					 */
                    inline
                        size_t getReadBufferLength() const {return m_readBufferLength;}

					/*!
					 * @brief This method gets the pointer to the current read position in the read buffer.
					 * @return Pointer to the current read position in the read buffer.
					 */
                    inline
                        char* getReadBufferCurrentPointer() const {return &m_readBuffer[m_readBufferCurrentPointer];}

					/*!
					 * @brief This method moves the read position in the read buffer.
					 * @param move Number of bytes to move.
					 */
                    inline
                        void increaseReadBufferCurrentPointer(size_t move){m_readBufferCurrentPointer += move;}

					/*!
					 * @brief This method gets the number of bytes not yet read from the used read buffer.
					 * @return Number of bytes not yet read from the used read buffer.
					 */
                    inline
                        size_t getReadBufferLeftUsedSpace() const {return m_readBufferUse - m_readBufferCurrentPointer;}

					/*!
					 * @brief Resizes the read buffer.
					 * @param minSize New size of the buffer.
					 * @return 0 on success, -1 on failure.
					 */
                    int resizeReadBuffer(size_t minSize);

					/*!
					 * @brief This method moves the unread bytes of the read buffer to the beginning of the buffer.
					 */
                    void refillReadBuffer();

					/*!
					 * @brief Gets the write buffer.
					 * @return The write buffer.
					 */
                    inline
                        char* getWriteBuffer() {return m_writeBuffer;}

					/*!
					 * @brief Gets the number of used bytes in the write buffer.
					 * @return Number of used bytes in the write buffer.
					 */
                    inline
                        size_t getWriteBufferUsage() const {return m_writeBufferUse;}

					/*!
					 * @brief Gets the length of the write buffer.
					 * @return Length of the write buffer.
					 */
                    inline
                        size_t getWriteBufferLength() const {return m_writeBufferLength;}

					/*!
					 * @brief Resizes the write buffer.
					 * @return true on success, false on failure.
					 */
                    bool resizeWriteBuffer(size_t minSize);

					/*!
					 * @brief Resets the write buffer.
					 */
                    inline
                        void resetWriteBuffer(){m_writeBufferUse = 0;}

					/*!
					 * @brief Writes a string in the write buffer.
					 * @param str String to write.
					 * @return true on success, false on failure.
					 */
                    bool write(const std::string &str);

					/*!
					 * @brief Writes an integer in the write buffer.
					 * @param num Integer to write.
					 * @return true on success, false on failure.
					 */
                    bool write(int32_t num);
                    
					/*!
					 * @brief This method checks if the connection with the endpoint is open or closed.
					 * @return true if the connection is open, false if it is closed.
					 */
                    bool isOpen();

					/*!
					 * @brief socket to connect to the endpoint.
					 */
                    boost::shared_ptr<boost::asio::ip::tcp::socket> socket_;

					/*!
					 * @brief io_service to connect to the endpoint.
					 */
                    boost::asio::io_service io_service_;

					/*!
					 * @brief Master io_service to connect to the endpoint.
					 */
                    boost::asio::io_service *master_io_service_;

					/*!
					 * @brief TCP endpoint to connect to the endpoint.
					 */
                    boost::asio::ip::tcp::endpoint endpoint_;

					/*!
					 * @brief Thread to run the communications with the endpoint.
					 */
                    boost::shared_ptr<boost::thread> thread_;

					/*!
					 * @brief Gets the socket to connect to the endpoint.
					 * @return Socket to connect to the endpoint.
					 */
                    boost::shared_ptr<boost::asio::ip::tcp::socket>& socket();
            };

        }
    }
}

#endif // _TRANSPORTS_COMPONENTS_TCPENDPOINT_H_
