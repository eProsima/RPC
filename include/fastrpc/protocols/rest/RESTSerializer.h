#ifndef TCP_SERIALIZER_HTTPSERIALIZER
#define TCP_SERIALIZER_HTTPSERIALIZER

#include "fastrpc/fastrpc_dll.h"

#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>
#include <map>

#include "fastrpc/protocols/rest/FastBuffer.h"
#include "fastrpc/protocols/rest/HTTPEntities.h"

namespace eprosima
{
    namespace fastrpc
    {
        namespace protocol
        {
            namespace rest
            {
			    /*!
				 * @brief This class serializes REST data to get an HTTP message suitable for HTTP communications
				 * @ingroup PROTOCOLMODULE
				 */
                class FASTRPC_DllAPI RESTSerializer
                {
                    private:
						// TODO Mirar con Ricardo

                        size_t m_numQueryParameters;

                        size_t m_nextTemplateParameterPos;

                        std::string m_templateParameterURI;

                        std::string m_templateParameterExpandURI;

                        std::vector<std::string> m_tags;

                        std::map<std::string, std::string> m_queryParameters;

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

                        std::string restoreBadCharacters(const std::string &str);

                    public:

						/*!
						 * @brief Default constructor
						 */
                        RESTSerializer();

						/*!
						 * @brief Default destructor
						 */
                        ~RESTSerializer();
						
						/*!
						 * @brief This function resets the buffer's current position to the beginning. 
						 */
                        void reset();

                        //RESTSerializer& serialize(uint32_t &integer);

                        //RESTSerializer& deserialize(uint32_t &integer);

						/*!
						 * @brief This function serializes a string
						 * @param string_t reference to the string to serialize
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& serialize(const std::string &string_t);
						
						/*!
						 * @brief This function deserializes a string
						 * @param string_t The variable that will store the character read from the buffer.
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& deserialize(std::string &string_t);
						
						/*!
						 * @brief This function serializes an HTTP method
						 * @param method reference to the method that will do the serialization.
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& serialize(HTTPMethod &method);
						
						/*!
						 * @brief This function deserializes an HTTP method
						 * @param method Variable that will store the character read from the buffer.
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& deserialize(HTTPMethod &method);
						
						/*!
						 * @brief This function serializes an HTTP URI.
						 * @param uri Reference to the URI to be serialized.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serialize(HTTPUri &uri);
						
						/*!
						 * @brief This function deserializes an HTTP URI.
						 * @param uri Variable that will store the URI read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPUri &uri);
						
						/*!
						 * @brief This function serializes an HTTP Version
						 * @param version Reference to the HTTPVersion to serialize
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& serialize(HTTPVersion &version);
						
						/*!
						 * @brief This function deserializes an HTTP Version.
						 * @param version Variable that will store the HTTPVersion read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPVersion &version);
						
						/*!
						 * @brief This function serializes an HTTP Body.
						 * @param data Reference to the HTTPData to serialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serialize(HTTPData &data);
						
						/*!
						 * @brief This function deserializes an HTTP Body.
						 * @param data Variable that will store the HTTPData read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPData &data);
						
						/*!
						 * @brief This function serializes an HTTP Response code.
						 * @param responseCode Reference to the response code (HTTPResponseCode) to serialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serialize(HTTPResponseCode &responseCode);
						
						/*!
						 * @brief This function deserializes an HTTP Response code.
						 * @param responseCode The variable that will store the response code (HTTPResponseCode) read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPResponseCode &responseCode);
						
						/*!
						 * @brief This function serializes an HTTP Parameter
						 * @param param Reference to the parameter to serialize
						 * @return Reference to the RESTSerializer object
						 */
                        RESTSerializer& serialize(HTTPParam &param);
						
						/*!
						 * @brief This function deserializes an HTTP Parameter.
						 * @param param The variable that will store the HTTPParam read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPParam &param);
						
						/*!
						 * @brief This function serializes a set of HTTP Parameters.
						 * @param params Reference to the parameter set to serialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serialize(HTTPParameters &params);
						
						/*!
						 * @brief This function deserializes an HTTP Parameters set.
						 * @param params The variable that will store the HTTPParameters object read from the buffer.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPParameters &params);
						
						/*!
						 * @brief This function serializes a set of HTTP Parameters.
						 * @param reference to the set of parameters to serialize.
						 * @param numElements number of parameters to serialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serialize(HTTPParameters &params, size_t numElements);
						
						/*!
						 * @brief This function deserializes a set of HTTP Parameters.
						 * @param params The variable that will store the character read from the buffer.
						 * @param numElements Nomber of parameters to deserialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserialize(HTTPParameters &params, size_t numElements);
						
						/*!
						 * @brief This function serializes an HTTP query parameter.
						 * @param uri HTTP URI with all the serialized parameters.
						 * @param paramName Parameter name.
						 * @param paramValue Parameter value.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serializeQueryParameter(std::string &uri, const std::string &paramName,
                                const std::string &paramValue);
						
						/*!
						 * @brief This function initializes the proccess to serialize the template parameters inside the URI.
						 * @param uri URI to serialize the template parameters in.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& beginSerializeTemplateParameters(std::string &&uri);
						
						/*!
						 * @brief This function serializes an HTTP template parameter in the URI.
						 * @param paramValue Reference to the parameter value to serialize.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& serializeTemplateParameter(const std::string &paramValue);
						
						/*!
						 * @brief This function end the proccess to serialize the template parameters inside the URI.
						 * @param uri Variable that will store the expanded URI with the template parameters.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& endSerializeTemplateParameters(std::string &uri);
						
						/*!
						 * @brief This function deserializes an HTTP URI.
						 * @param uri Variable that will store the character read from the buffer.
						 * @param baseUri Base URI for the RESTful application.
						 * @return Reference to the RESTSerializer object.
						 */
                        RESTSerializer& deserializeUri(const std::string &uri, const std::string baseUri);
                        
						/*!
						 * @brief Checks the existence of a path segment in a certain level in the URI.
						 * @param level Level of the path segment.
						 * @return true if it exists, false if it does not.
						 */
                        inline
                            bool existsTagLevel(const int level) const
                            {
                                return level < m_tags.size();
                            }

						/*!
						 * @brief Gets the path segment for a given level in the URI.
						 * @param level Level of the path segment.
						 * @return The tag for the given level.
						 */
                        inline
                            std::string getTag(const int level)
                            {
                                return m_tags[level];
                        }

						/*!
						 * @brief Checks the presence of a certain HTTP query parameter.
						 * @param name HTTP query parameter name.
						 * @return true if it exists, false if it does not.
						 */
                        inline
                            bool existsQueryParameter(const std::string &name) { return m_queryParameters.find(name) != m_queryParameters.end();}

							
						/*!
						 * @brief Gets the value of a certain HTTP query parameter.
						 * @param name HTTP query parameter name.
						 * @return HTTP query parameter value.
						 */
                        inline
                            std::string getQueryParameter(const std::string &name) {return m_queryParameters.at(name);}
                };

            } //namespace rest
        } //namespace protocol
    } //namespace fastrpc
} //namespace eProsima

#endif //TCP_SERIALIZER_HTTPSERIALIZER
