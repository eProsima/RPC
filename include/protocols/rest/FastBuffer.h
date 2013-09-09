#ifndef TCP_SERIALIZER_FASTBUFFER
#define TCP_SERIALIZER_FASTBUFFER

#include <stdint.h>
#include <cstdio>
#include <string.h>
#include <cstddef>

namespace eProsima
{

	namespace httpser
	{

		class _FastBuffer_iterator
		{
		public:

			_FastBuffer_iterator() : m_buffer(NULL), m_currentPosition(NULL) {}

			explicit _FastBuffer_iterator(char *buffer, size_t index) : m_buffer(buffer), m_currentPosition(&m_buffer[index]){}

			inline void operator<<(const _FastBuffer_iterator &iterator)
			{
				ptrdiff_t diff = m_currentPosition - m_buffer;
				m_buffer = iterator.m_buffer;
				m_currentPosition = m_buffer + diff;
			}

			inline void operator>>(const _FastBuffer_iterator &iterator)
			{
				ptrdiff_t diff = iterator.m_currentPosition - iterator.m_buffer;
				m_currentPosition = m_buffer + diff;
			}

			template<typename _T>
			inline void operator<<(const _T &data)
			{
				*((_T*)m_currentPosition) = data;
			}

			template<typename _T>
			inline void operator>>(_T &data)
			{
				data = *((_T*)m_currentPosition);
			}

			inline void memcopy(const void* src, const size_t size)
			{
				memcpy(m_currentPosition, src, size);
			}

			inline void rmemcopy(void* dst, const size_t size)
			{
				memcpy(dst, m_currentPosition, size);
			}

			inline void operator+=(size_t numBytes)
			{
				m_currentPosition += numBytes;
			}

			inline size_t operator-(const _FastBuffer_iterator &it) const
			{
				return m_currentPosition - it.m_currentPosition;
			}

			 inline _FastBuffer_iterator operator++()
			{
				++m_currentPosition;
				return *this;
			}

			inline _FastBuffer_iterator operator++(int)
			{
				_FastBuffer_iterator tmp = *this;
				++*this;
				return tmp;
			}

			inline char* operator&()
			{
				return m_currentPosition;
			}

		private:

			char *m_buffer;

			char *m_currentPosition;
		};

		class FastBuffer
		{
		public:
			
			typedef _FastBuffer_iterator iterator;

			FastBuffer();

			FastBuffer(char* const buffer, const size_t bufferSize);

			inline char* getBuffer() const { return m_buffer;}

			inline size_t getBufferSize() const { return m_bufferSize;}

			inline iterator begin()
			{
				return (iterator(m_buffer, 0));
			}

			inline iterator end()
			{
				return (iterator(m_buffer, m_bufferSize));
			}

			bool resize(size_t minSizeInc);

		private:

			char *m_buffer;

			size_t m_bufferSize;

			bool m_internalBuffer;
		};

	} //namespace httpser

} //namespace eProsima

#endif //TCP_SERIALIZER_FASTBUFFER
