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

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class HttpMessage
            {
                public:

                    HttpMessage() : m_versionCompatible(false), m_body_content_length(0){}

                    void setMethod(const std::string &method){m_method = method;}
                    void setMethod(std::string &&method){m_method = std::move(method);}
                    const std::string& getMethod() const{return m_method;}

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

                    void setVersionCompatible(bool b){m_versionCompatible = b;}
                    bool getVersionCompatible() const{return m_versionCompatible;}

                private:

                    std::string m_method;
                    // TODO Pensar si quitar el Host y que lo ponga el transporte con la configuración del usuario.
                    std::string m_host;
                    std::string m_uri;
                    std::string m_body_data;
                    size_t m_body_content_length;
                    std::string m_body_content_type;

                    bool m_versionCompatible;
            };
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_MESSAGES_HTTPMESSAGE_H_
