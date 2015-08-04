/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_
#define _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_

#include <string>
#include <cstdint>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
			/*!
			 * @brief This class represents an HTTP message.
			 * @ingroup TRANSPORTMODULE
			 */
            class HttpMessage
            {
                public:

					/*!
					 * @brief This enumerator represents the supported HTTP request methods.
					 */
                    typedef enum Methods
                    {
                        HTTP_METHOD_GET = 0,
                        HTTP_METHOD_PUT,
                        HTTP_METHOD_POST,
                        HTTP_METHOD_DELETE,
                        HTTP_METHOD_INVALID
                    } Methods;

					/*!
					 * @brief Default constructor.
					 */
                    HttpMessage() : m_method(HTTP_METHOD_INVALID), m_body_content_length(0),
                        m_responseCode(0), m_versionCompatible(false)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

					/*!
					 * @brief Copy constructor.
					 * @param httpMessage Original HTTPMessage object to copy the data from
					 */
                    HttpMessage(const HttpMessage &httpMessage) : m_method(httpMessage.m_method), m_host(httpMessage.m_host), m_uri(httpMessage.m_uri),
                        m_body_data(httpMessage.m_body_data), m_body_content_length(httpMessage.m_body_content_length),
                        m_body_content_type(httpMessage.m_body_content_type), m_responseCode(httpMessage.m_responseCode),
                        m_responseStatus(httpMessage.m_responseStatus), m_versionCompatible(httpMessage.m_versionCompatible)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

					/*!
					 * @brief Move constructor.
					 * @param httpMessage Original HTTPMessage object to move the data from.
					 */
                    HttpMessage(HttpMessage &&httpMessage) : m_method(httpMessage.m_method), m_host(std::move(httpMessage.m_host)), m_uri(std::move(httpMessage.m_uri)),
                        m_body_data(std::move(httpMessage.m_body_data)), m_body_content_length(httpMessage.m_body_content_length),
                        m_body_content_type(std::move(httpMessage.m_body_content_type)), m_responseCode(httpMessage.m_responseCode),
                        m_responseStatus(std::move(httpMessage.m_responseStatus)), m_versionCompatible(httpMessage.m_versionCompatible)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

					/*!
					 * @brief Sets the HTTP method of the request message
					 * @param method HTTP request method to set
					 */
                    void setMethod(const Methods method){m_method = method;}
					
					/*!
					 * @brief Gets the HTTP method of the request message as an enumerator
					 * @return Enumerator representation of the HTTP method
					 */
                    Methods getMethod(){return m_method;}
					
					/*!
					 * @brief Gets the HTTP method a of the request message s a string
					 * @return String representation of the HTTP method
					 */
                    const std::string& getMethodStr() const
                    {
                        return m_methods[m_method];
                    }

					/*!
					 * @brief Copies the HTTP host.
					 * @param host URL of the HTTP host. This string will be the content of the 'Host' header.
					 */
                    void setHost(const std::string &host){m_host = host;}
					
					/*!
					 * @brief Moves the HTTP host
					 * @param host URL of the HTTP host. This string will be the content of the 'Host' header.
					 */
                    void setHost(std::string &&host){m_host = std::move(host);}
					
					/*!
					 * @brief Gets the HTTP host
					 * @return URL of the HTTP host
					 */
                    const std::string& getHost() const{return m_host;}

					/*!
					 * @brief Copies the resource URI. This will be the requested resource in an HTTP request.
					 * @param uri URI of the requested resource
					 */
                    void setUri(const std::string &uri){m_uri = uri;}
					
					/*!
					 * @brief Moves the resource URI. This will be the requested resource in an HTTP request.
					 * @param uri URI of the requested resource
					 */
                    void setUri(std::string &&uri){m_uri = std::move(uri);}
					
					/*!
					 * @brief Gets the resource URI
					 * @return URI of the requested resource
					 */
                    const std::string& getUri() const{return m_uri;}

					/*!
					 * @brief Copies the content of the Content-Type header.
					 * @param body_content_type Content of the Content-Type header
					 */
                    void setBodyContentType(const std::string &body_content_type){m_body_content_type = body_content_type;}
					
					/*!
					 * @brief Moves the content of the Content-Type header.
					 * @param body_content_type Content of the Content-Type header
					 */
                    void setBodyContentType(std::string &&body_content_type){m_body_content_type = std::move(body_content_type);}
					
					/*!
					 * @brief Gets the content of the Content-Type header.
					 * @return Content of the Content-Type header
					 */
                    const std::string& getBodyContentType() const{return m_body_content_type;}
					
					/*!
					 * @brief Copies the content of the Content-Length header.
					 * @param body_content_length Content of the Content-Length header
					 */
                    void setBodyContentLength(const std::string &body_content_length){m_body_content_length = atoi(body_content_length.c_str());}
					
					/*!
					 * @brief Gets the content of the Content-Length header.
					 * @return Content of the Content-Length header
					 */
                    size_t getBodyContentLength() const {return m_body_content_length;}

					/*!
					 * @brief Copies the body of the HTTP message.
					 * @param body_data Body of the HTTP message
					 */
                    void setBodyData(const std::string &body_data){m_body_data = body_data;}
					
					/*!
					 * @brief Moves the body of the HTTP message.
					 * @param body_data Body of the HTTP message
					 */
                    void setBodyData(std::string &&body_data){m_body_data = std::move(body_data);}
					
					/*!
					 * @brief Gets the body of the HTTP message.
					 * @return Body of the HTTP message
					 */
                    const std::string& getBodyData() const{return m_body_data;}
					
					/*!
					 * @brief Copies the HTTP response numeric code.
					 * @param responseCode HTTP response code.
					 */
                    void setResponseCode(int32_t responseCode) {m_responseCode = responseCode;}
					
					/*!
					 * @brief Gets the HTTP response numeric code.
					 * @return HTTP response code.
					 */
                    int32_t getResponseCode() const {return m_responseCode;}

					/*!
					 * @brief Copies the response status, a brief string explanation about the HTTP code.
					 * @param responseStatus HTTP status.
					 */
                    void setResponseStatus(const std::string &responseStatus){m_responseStatus = responseStatus;}
					
					/*!
					 * @brief Moves the response status, a brief string explanation about the HTTP code.
					 * @param responseStatus HTTP status.
					 */
                    void setResponseStatus(std::string &&responseStatus){m_responseStatus = std::move(responseStatus);}
					
					/*!
					 * @brief Gets the response status, a brief string explanation about the HTTP code.
					 * @return HTTP status.
					 */
                    const std::string& getResponseStatus() const{return m_responseStatus;}

					/*!
					 * @brief Sets a boolean indicating if the HTTP version is 1.1.
					 * @param b This boolean has to be true for HTTP version 1.1 and false otherwise
					 */
                    void setVersionCompatible(bool b){m_versionCompatible = b;}
					
					/*!
					 * @brief Gets a boolean indicating if the HTTP version is 1.1.
					 * @return b True for HTTP version 1.1 and false otherwise
					 */
                    bool getVersionCompatible() const{return m_versionCompatible;}
					
					/*!
					 * @brief This methods indicates wether the HTTP message contains the optional HTTP response status message.
					 * @return b True if the HTTP status is present and false otherwise
					 */
					bool getContainsResponseStatus(){return m_responseStatus.size() > 0;}

                private:

                    std::string m_methods[4];
                    Methods m_method;
                    // TODO Pensar si quitar el Host y que lo ponga el transporte con la configuración del usuario.
                    std::string m_host;
                    std::string m_uri;
                    std::string m_body_data;
                    size_t m_body_content_length;
                    std::string m_body_content_type;
                    int32_t m_responseCode;
                    std::string m_responseStatus;
                    bool m_versionCompatible;
            };
        } // namespace transport
    } // namespace rpc
} // namespace eprosima
#endif // _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_
