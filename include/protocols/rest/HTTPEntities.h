#ifndef TCP_SERIALIZER_HTTPENTITIES
#define TCP_SERIALIZER_HTTPENTITIES

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace eprosima
{
    namespace rpcdds
    {
        namespace protocol
        {
            namespace rest
            {

                enum Method {HTTP_GET, HTTP_PUT, HTTP_POST, HTTP_DELETE};

                class HTTPMethod
                {
                    private:
                        std::string data_;

                    public:

                        HTTPMethod();

                        HTTPMethod(Method method);

                        ~HTTPMethod();

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                        inline Method getMethod()
                        {
                            if(data_.compare(0, 4, "POST") == 0)
                                return HTTP_POST;
                            if(data_.compare(0, 3, "PUT") == 0)
                                return HTTP_PUT;
                            if(data_.compare(0, 6, "DELETE") == 0)
                                return HTTP_DELETE;

                            return HTTP_GET; // Default
                        }

                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                        }

                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

                };

                class HTTPUri
                {
                    private:
                        std::string host;
                        std::string baseUri;

                        std::string path;

                    public:

                        HTTPUri();

                        HTTPUri(std::string &path);

                        ~HTTPUri();

                        void setHost(string host) {
                            // REMOVE http:// and final /
                            size_t posInit = host.find("//");
                            if(posInit == string::npos)
                                posInit = 0;
                            else
                                posInit += 2; // 2 characters, for "//"
                            size_t posEnd = host.find("/", posInit);
                            string realHost = host.substr(posInit, posEnd - posInit);

                            this->host = realHost;
                            // TODO XXX If BaseUri -> switch host path in baseUri
                        }

                        void setBaseUri(string baseUri) {
                            // REMOVE http://
                            size_t posInit = baseUri.find("//");
                            if(posInit == string::npos)
                                posInit = 0;
                            else
                                posInit += 2; // 2 characters, for "//"
                            string realBaseUri = baseUri.substr(posInit);

                            this->baseUri = realBaseUri;
                            // TODO XXX If host -> switch host path in baseUri
                        }

                        std::string getPath() { 
                            return path; 
                        }

                        std::string getResourcePath() {
                            // (host + path) - baseUri
                            string completeURL = host + path;
                            size_t pos = completeURL.find(baseUri);
                            if(pos != string::npos)
                                return completeURL.substr(pos + baseUri.size());
                            return path; 
                        }

                        inline std::string get_data()
                        {
                            // (baseUri + path) - host
                            string completeURL = "";
                            if(baseUri.at(baseUri.size()-1) != '/' && path.at(0) != '/') {
                                completeURL = baseUri + "/" + path;
                            } else {
                                completeURL = baseUri + path;
                            }

                            string sentUri = completeURL;
                            size_t posInit = sentUri.find("//");
                            if(posInit == string::npos)
                                posInit = 0;
                            else
                                posInit += 2; // 2 characters, for "//"
                            size_t posEnd = sentUri.find("/", posInit);
                            sentUri = sentUri.substr(posEnd);

                            return sentUri;
                        }

                        inline void set_data(std::string data)
                        {
                            path = data;
                        }

                };

                class HTTPParam
                {
                    private:

                        std::string data_;
                        string name;
                        string value;

                    public:

                        HTTPParam();

                        HTTPParam(std::string &name, std::string &value);

                        ~HTTPParam();

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                            name = data.substr(0, data.find("="));
                            value = data.substr(data.find("=")+1, data.size());
                        }

                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                            name = data.substr(0, data.find("="));
                            value = data.substr(data.find("=")+1, data.size());
                        }

                        string getName() {
                            return name;
                        }

                        string getValue() {
                            return value;
                        }
                };

                class HTTPParameters
                {
                    private:

                        size_t size_;

                        std::string data_;

                        std::vector<HTTPParam> params_;

                    public:

                        HTTPParameters();

                        ~HTTPParameters();

                        inline size_t& get_size()
                        {
                            return size_;
                        }

                        inline std::vector<HTTPParam>& get_params()
                        {
                            return params_;
                        }

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                        void set_data(std::string &&data);

                        /*
                           inline void set_data(std::string &&data)
                           {
                           set_data(std::move(data));
                           }
                           */

                        void addParam(HTTPParam &param);

                        bool containsParam(string name) {
                            HTTPParam param;
                            for(vector<HTTPParam>::iterator it = params_.begin(); it != params_.end(); ++it) {
                                param = *it;
                                if(param.getName().compare(name) == 0)
                                    return true;
                            }

                            return false;
                        }
                };

                class HTTPVersion
                {
                    private:

                        std::string data_;

                        HTTPVersion(const std::string &version);

                        HTTPVersion(std::string &&version);

                    public:

                        HTTPVersion();

                        static HTTPVersion HTTPVersionRequest();

                        static HTTPVersion HTTPVersionResponse();

                        static HTTPVersion HTTPVersionRequest(std::string &version);

                        static HTTPVersion HTTPVersionResponse(std::string &version);

                        ~HTTPVersion();

                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                        }

                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                };

                class HTTPData
                {
                    private:

                        std::string data_;

                    public:

                        HTTPData();

                        HTTPData(std::string &host);

                        HTTPData(std::string &clength, std::string &ctype, std::string &data);

                        HTTPData(std::string &host, std::string &clength, std::string &ctype, std::string &data);

                        ~HTTPData();

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                        inline void set_data(std::string &data)
                        {
                            data_ = data;
                        }

                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

                        string getMediaType();
                        string getData();

                };

                class HTTPResponseCode
                {
                    private:

                        std::string data_;

                    public:

                        HTTPResponseCode();

                        HTTPResponseCode(std::string &code, std::string &text);

                        ~HTTPResponseCode();

                        inline std::string& get_data()
                        {
                            return data_;
                        }

                        inline void set_data(std::string &data)
                        {
                            data_ = data;
                        }

                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

                        int getStatusCode() {
                            string statusCode = data_.substr(1, data_.find_last_of(" ") - 1);
                            return atoi(statusCode.c_str());
                        }

                };


            } //namespace rest
        } //namespace protocol
    } //namespace rpcdds
} //namespace eprosima

#endif //TCP_SERIALIZER_HTTPENTITIES
