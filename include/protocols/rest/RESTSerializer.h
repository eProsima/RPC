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
    namespace rpcdds
    {
        namespace protocol
        {
            namespace rest
            {
                class RESTSerializer
                {
                    private:

                        size_t m_numQueryParameters;

                        size_t m_nextTemplateParameterPos;

                        std::string m_templateParameterURI;

                        std::string m_templateParameterExpandURI;

                        // Serializer data

                        FastBuffer buffer_;

                        FastBuffer::iterator m_currentPosition_;

                        FastBuffer::iterator m_alignPosition_;

                        FastBuffer::iterator m_lastPosition_;

                        //size_t m_lastDataSize_;

                        // Backup data

                        FastBuffer::iterator m_currentPosition_bck;

                        FastBuffer::iterator m_alignPosition_bck;

                        //size_t m_lastDataSize_bck;

                        //Functions

                        void state(RESTSerializer &serializer);

                        void setState();

                        bool resize(size_t minSizeInc);

                        //inline size_t alignment(size_t dataSize) const {return dataSize > m_lastDataSize_ ? (dataSize - ((m_currentPosition_ - m_alignPosition_) % dataSize)) & (dataSize-1) : 0;}

                        inline void makeAlign(size_t align){m_currentPosition_ += align;}

                        std::string substituteBadCharacters(const std::string &str);

                    public:

                        RESTSerializer();

                        ~RESTSerializer();

                        void reset();

                        //RESTSerializer& serialize(uint32_t &integer);

                        //RESTSerializer& deserialize(uint32_t &integer);

                        RESTSerializer& serialize(const std::string &string_t);

                        RESTSerializer& deserialize(std::string &string_t);

                        RESTSerializer& serialize(HTTPMethod &method);

                        RESTSerializer& deserialize(HTTPMethod &method);

                        RESTSerializer& serialize(HTTPUri &uri);

                        RESTSerializer& deserialize(HTTPUri &uri);

                        RESTSerializer& serialize(HTTPVersion &version);

                        RESTSerializer& deserialize(HTTPVersion &version);

                        RESTSerializer& serialize(HTTPData &data);

                        RESTSerializer& deserialize(HTTPData &data);

                        RESTSerializer& serialize(HTTPResponseCode &responseCode);

                        RESTSerializer& deserialize(HTTPResponseCode &responseCode);

                        RESTSerializer& serialize(HTTPParam &param);

                        RESTSerializer& deserialize(HTTPParam &param);

                        RESTSerializer& serialize(HTTPParameters &params);

                        RESTSerializer& deserialize(HTTPParameters &params);

                        RESTSerializer& serialize(HTTPParameters &params, size_t numElements);

                        RESTSerializer& deserialize(HTTPParameters &params, size_t numElements);

                        RESTSerializer& serializeQueryParameter(std::string &uri, const std::string &paramName,
                                const std::string &paramValue);

                        RESTSerializer& beginSerializeTemplateParameters(std::string &&uri);

                        RESTSerializer& serializeTemplateParameter(const std::string &paramValue);

                        RESTSerializer& endSerializeTemplateParameters(std::string &uri);
                };

            } //namespace rest
        } //namespace protocol
    } //namespace rpcdds
} //namespace eProsima

#endif //TCP_SERIALIZER_HTTPSERIALIZER
