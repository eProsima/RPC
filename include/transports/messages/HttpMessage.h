/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_
#define _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_

#include <string>
#include <stdint.h>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class HttpMessage
            {
                public:

                    typedef enum Methods
                    {
                        HTTP_METHOD_GET = 0,
                        HTTP_METHOD_PUT,
                        HTTP_METHOD_POST,
                        HTTP_METHOD_DELETE,
                        HTTP_METHOD_INVALID
                    } Methods;

                    HttpMessage() : m_method(HTTP_METHOD_INVALID), m_body_content_length(0),
                        m_responseCode(0), m_versionCompatible(false), m_containsResponseStatus(false)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

                    HttpMessage(const HttpMessage &httpMessage) : m_method(httpMessage.m_method), m_host(httpMessage.m_host), m_uri(httpMessage.m_uri),
                        m_body_data(httpMessage.m_body_data), m_body_content_length(httpMessage.m_body_content_length),
                        m_body_content_type(httpMessage.m_body_content_type), m_responseCode(httpMessage.m_responseCode),
                        m_responseStatus(httpMessage.m_responseStatus), m_versionCompatible(httpMessage.m_versionCompatible),
                        m_containsResponseStatus(httpMessage.m_containsResponseStatus)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

                    HttpMessage(HttpMessage &&httpMessage) : m_method(httpMessage.m_method), m_host(std::move(httpMessage.m_host)), m_uri(std::move(httpMessage.m_uri)),
                        m_body_data(std::move(httpMessage.m_body_data)), m_body_content_length(httpMessage.m_body_content_length),
                        m_body_content_type(std::move(httpMessage.m_body_content_type)), m_responseCode(httpMessage.m_responseCode),
                        m_responseStatus(std::move(httpMessage.m_responseStatus)), m_versionCompatible(httpMessage.m_versionCompatible),
                        m_containsResponseStatus(httpMessage.m_containsResponseStatus)
                        {
                            m_methods[0] = "GET";
                            m_methods[1] = "PUT";
                            m_methods[2] = "POST";
                            m_methods[3] = "DELETE";
                        }

                    void setMethod(const Methods method){m_method = method;}
                    Methods getMethod(){return m_method;}
                    const std::string& getMethodStr() const
                    {
                        return m_methods[m_method];
                    }

                    void setHost(const std::string &host){m_host = host;}
                    void setHost(std::string &&host){m_host = std::move(host);}
                    const std::string& getHost() const{return m_host;}

                    void setUri(const std::string &uri){m_uri = uri;}
                    void setUri(std::string &&uri){m_uri = std::move(uri);}
                    const std::string& getUri() const{return m_uri;}

                    void setBodyContentType(const std::string &body_content_type){m_body_content_type = body_content_type;}
                    void setBodyContentType(std::string &&body_content_type){m_body_content_type = std::move(body_content_type);}
                    const std::string& getBodyContentType() const{return m_body_content_type;}

                    void setBodyContentLength(const std::string &body_content_length){m_body_content_length = atoi(body_content_length.c_str());}
                    size_t getBodyContentLength() const {return m_body_content_length;}

                    void setBodyData(const std::string &body_data){m_body_data = body_data;}
                    void setBodyData(std::string &&body_data){m_body_data = std::move(body_data);}
                    const std::string& getBodyData() const{return m_body_data;}

                    void setResponseCode(int32_t responseCode) {m_responseCode = responseCode;}
                    int32_t getResponseCode() const {return m_responseCode;}

                    void setResponseStatus(const std::string &responseStatus){m_responseStatus = responseStatus;}
                    void setResponseStatus(std::string &&responseStatus){m_responseStatus = std::move(responseStatus);}
                    const std::string& getResponseStatus() const{return m_responseStatus;}

                    void setVersionCompatible(bool b){m_versionCompatible = b;}
                    bool getVersionCompatible() const{return m_versionCompatible;}

                    void setContainsResponseStatus(bool b){m_containsResponseStatus = b;}
                    bool getContainsResponseStatus(){return m_containsResponseStatus;}

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
                    bool m_containsResponseStatus;
            };
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_
