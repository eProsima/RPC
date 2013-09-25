#ifndef TCP_SERIALIZER_HTTPSERIALIZER
#define TCP_SERIALIZER_HTTPSERIALIZER

#include <iostream>
#include <stdint.h>
#include <string>
#include <array>
#include <vector>

#include "protocols/rest/FastBuffer.h"
#include "protocols/rest/HTTPEntities.h"

namespace eprosima
{
	
	namespace httpser
	{
		
		class HTTPSerializer
		{
		private:

			// Serializer data

			FastBuffer &buffer_;

			FastBuffer::iterator m_currentPosition_;

			FastBuffer::iterator m_alignPosition_;

			FastBuffer::iterator m_lastPosition_;

			//size_t m_lastDataSize_;

			// Backup data

			FastBuffer::iterator m_currentPosition_bck;

			FastBuffer::iterator m_alignPosition_bck;

			//size_t m_lastDataSize_bck;

			//Functions

			void state(HTTPSerializer &serializer);

			void setState();

			bool resize(size_t minSizeInc);

			//inline size_t alignment(size_t dataSize) const {return dataSize > m_lastDataSize_ ? (dataSize - ((m_currentPosition_ - m_alignPosition_) % dataSize)) & (dataSize-1) : 0;}

			inline void makeAlign(size_t align){m_currentPosition_ += align;}
			
		public:

			HTTPSerializer(FastBuffer &buffer);

			~HTTPSerializer();

			void reset();
			
			//HTTPSerializer& serialize(uint32_t &integer);

			//HTTPSerializer& deserialize(uint32_t &integer);

			HTTPSerializer& serialize(std::string &string_t);

			HTTPSerializer& serialize(std::string &&string_t) { return serialize(std::move(string_t)); }

			HTTPSerializer& deserialize(std::string &string_t);

			HTTPSerializer& serialize(HTTPMethod &method);
			
			HTTPSerializer& deserialize(HTTPMethod &method);

			HTTPSerializer& serialize(HTTPUri &uri);

			HTTPSerializer& deserialize(HTTPUri &uri);

			HTTPSerializer& serialize(HTTPVersion &version);

			HTTPSerializer& deserialize(HTTPVersion &version);

			HTTPSerializer& serialize(HTTPData &data);

			HTTPSerializer& deserialize(HTTPData &data);

			HTTPSerializer& serialize(HTTPResponseCode &responseCode);

			HTTPSerializer& deserialize(HTTPResponseCode &responseCode);

			HTTPSerializer& serialize(HTTPParam &param);

			HTTPSerializer& deserialize(HTTPParam &param);

			HTTPSerializer& serialize(HTTPParameters &params);

			HTTPSerializer& deserialize(HTTPParameters &params);
			
			HTTPSerializer& serialize(HTTPParameters &params, size_t numElements);

			HTTPSerializer& deserialize(HTTPParameters &params, size_t numElements);
		};
	
	} //namespace httpser

} //namespace eProsima

#endif //TCP_SERIALIZER_HTTPSERIALIZER
