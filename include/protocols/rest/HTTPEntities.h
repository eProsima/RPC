/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef TCP_SERIALIZER_HTTPENTITIES
#define TCP_SERIALIZER_HTTPENTITIES

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            namespace rest
            {

			    /*!
				 * @brief This enumerator represents the supported HTTP methods
				 * @ingroup PROTOCOLMODULE
				 */
                enum Method {HTTP_GET, HTTP_PUT, HTTP_POST, HTTP_DELETE};

			    /*!
				 * @brief This class represents an HTTP method.
				 */
                class HTTPMethod
                {
                    private:
						//! Internal string representing the HTTP method.
                        std::string data_;

                    public:

					    /*!
						 * @brief Default constructor
						 */
                        HTTPMethod();

					    /*!
						 * @brief Copy constructor
						 */
                        HTTPMethod(Method method);

					    /*!
						 * @brief Default destructor
						 */
                        ~HTTPMethod();

						/*!
						 * @brief Gets a string representation of the HTTP method.
						 * @return The string representation of the HTTP method.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

						/*!
						 * @brief Gets an enumeration representation of the HTTP method.
						 * @return The enumeration representation of the HTTP method.
						 */
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

						/*!
						 * @brief Copies the string representation of an HTTP method.
						 * @param data A string representation of an HTTP method.
						 */
                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                        }

						/*!
						 * @brief Moves the string representation of an HTTP method.
						 * @param data A string representation of an HTTP method.
						 */
                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

                };

			    /*!
				 * @brief This class represents an HTTP URI.
				 */
                class HTTPUri
                {
                    private:
						//! The "host" part of the URI.
                        std::string host;
						//! The base URI of a given RESTful application.
                        std::string baseUri;
						//! The "path" part of the URI.
                        std::string path;

                    public:

					    /*!
						 * @brief Default constructor.
						 */
                        HTTPUri();

						/*!
						 * @brief HTTPUri Constructor.
						 * @param path String representation of the URI.
						 */
                        HTTPUri(std::string &path);

					    /*!
						 * @brief Default constructor.
						 */
                        ~HTTPUri();

						/*!
						 * @brief Sets the "host" part of the URI.
						 * @param host String representation of the host.
						 */
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

						/*!
						 * @brief Sets the base URI of a given RESTful application.
						 * @param host String representation of the base URI.
						 */
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

						/*!
						 * @brief Sets the "path" part of the URI.
						 * @return String representation of the path.
						 */
                        std::string getPath() { 
                            return path; 
                        }

						/*!
						 * @brief Gets the resources path of the URI. The resources path is the complete URI minus the declared base URI.
						 * @return String representation of the resources path.
						 */
                        std::string getResourcePath() {
                            // (host + path) - baseUri
                            string completeURL = host + path;
                            size_t pos = completeURL.find(baseUri);
                            if(pos != string::npos)
                                return completeURL.substr(pos + baseUri.size());
                            return path; 
                        }

						/*!
						 * @brief Gets a string representation of the URI.
						 * @return String representation of the URI.
						 */
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

						/*!
						 * @brief Sets the string representation of the URI.
						 * @param data String representation of the URI.
						 */
                        inline void set_data(std::string data)
                        {
                            path = data;
                        }

                };

			    /*!
				 * @brief This class represents an HTTP query parameter.
				 */
                class HTTPParam
                {
                    private:

						//! String representation of the HTTP parameter.
                        std::string data_;
						//! Parameter name.
                        string name;
						//! Parameter value.
                        string value;

                    public:

						/*!
						 * @brief Default constructor.
						 */
                        HTTPParam();

						/*!
						 * @brief HTTPParam constructor.
						 * @param name Parameter name.
						 * @param value Parameter value.
						 */
                        HTTPParam(std::string &name, std::string &value);

						/*!
						 * @brief Default destructor.
						 */
                        ~HTTPParam();

						/*!
						 * @brief Gets the string representation of an HTTP query parameter.
						 * @return String representation of an HTTP query parameter.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

						/*!
						 * @brief Copies the string representation of an HTTP query parameter.
						 * @param data String representation of an HTTP query parameter.
						 */
                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                            name = data.substr(0, data.find("="));
                            value = data.substr(data.find("=")+1, data.size());
                        }

						/*!
						 * @brief Moves the string representation of an HTTP query parameter.
						 * @param data String representation of an HTTP query parameter.
						 */
                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                            name = data.substr(0, data.find("="));
                            value = data.substr(data.find("=")+1, data.size());
                        }
						
						/*!
						 * @brief Gets the parameter name.
						 * @return Parameter name.
						 */
                        string getName() {
                            return name;
                        }

						/*!
						 * @brief Gets the parameter value.
						 * @return Parameter value.
						 */
                        string getValue() {
                            return value;
                        }
                };

			    /*!
				 * @brief This class represents an HTTP query parameter.
				 */
                class HTTPParameters
                {
                    private:

						//! Number of parameters HTTP parameters.
                        size_t size_;

						//! String representation of the HTTP parameters.
                        std::string data_;

						//! Vector containing the HTTP parameters.
                        std::vector<HTTPParam> params_;

                    public:

						/*!
						 * @brief Default constructor.
						 */
                        HTTPParameters();

						/*!
						 * @brief Default destructor.
						 */
                        ~HTTPParameters();

						/*!
						 * @brief Gets the number of HTTP query parameters.
						 * @return Number of HTTP parameters.
						 */
                        inline size_t& get_size()
                        {
                            return size_;
                        }

						/*!
						 * @brief Gets the vector containing the HTTP query parameters.
						 * @return Vector containing the HTTP parameters.
						 */
                        inline std::vector<HTTPParam>& get_params()
                        {
                            return params_;
                        }

						/*!
						 * @brief Gets a string representation of the HTTP query parameters.
						 * @return String representation of the HTTP query parameters.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

						/*!
						 * @brief Moves the string representation of the HTTP query parameters.
						 * @param data String representation of the HTTP query parameters.
						 */
                        void set_data(std::string &&data);

                        /*
                           inline void set_data(std::string &&data)
                           {
                           set_data(std::move(data));
                           }
                           */

						/*!
						 * @brief Adds an HTTPParam to the set of HTTP parameters.
						 * @param param HTTP parameter to add.
						 */
                        void addParam(HTTPParam &param);

						/*!
						 * @brief Checks if the set already contains a certain HTTP query parameter.
						 * @param name Name of the HTTP parameter.
						 * @return True if the parameter is in the set, false if it is not.
						 */
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

			    /*!
				 * @brief This class represents an HTTP version.
				 */
                class HTTPVersion
                {
                    private:

						//! String representation of the HTTP version.
                        std::string data_;

						/*!
						 * @brief Private constructor.
						 * @param version HTTP version to copy.
						 */
                        HTTPVersion(const std::string &version);

						/*!
						 * @brief Private constructor.
						 * @param version HTTP version to move.
						 */
                        HTTPVersion(std::string &&version);

                    public:

						/*!
						 * @brief Default constructor.
						 * @param version HTTP version to copy.
						 */
                        HTTPVersion();

						/*!
						 * @brief Static constructor. Creates an empty HTTP version for a request message.
						 */
                        static HTTPVersion HTTPVersionRequest();

						/*!
						 * @brief Static constructor. Creates an empty HTTP version for a response message.
						 */
                        static HTTPVersion HTTPVersionResponse();

						/*!
						 * @brief Static constructor. Creates an HTTP version for a request message.
						 * @param version HTTP version.
						 */
                        static HTTPVersion HTTPVersionRequest(std::string &version);

						/*!
						 * @brief Static constructor. Creates an HTTP version for a response message.
						 * @param version HTTP version.
						 */
                        static HTTPVersion HTTPVersionResponse(std::string &version);

						/*!
						 * @brief Default destructor.
						 */
                        ~HTTPVersion();

						/*!
						 * @brief Copies the string representation of the HTTP version.
						 * @param data String representation of the HTTP version.
						 */
                        inline void set_data(const std::string &data)
                        {
                            data_ = data;
                        }

						/*!
						 * @brief Moves the string representation of the HTTP version.
						 * @param data String representation of the HTTP version.
						 */
                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

						/*!
						 * @brief Gets the string representation of the HTTP version.
						 * @return String representation of the HTTP version.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

                };

			    /*!
				 * @brief This class represents the content of an HTTP message.
				 */
                class HTTPData
                {
                    private:

						//! String representation of the HTTP data.
                        std::string data_;

                    public:

					    /*!
						 * @brief Default constructor.
						 */
                        HTTPData();

						/*!
						 * @brief HTTPData constructor.
						 * @param host Content of the "Host" header.
						 */
                        HTTPData(std::string &host);

						/*!
						 * @brief HTTPData constructor
						 * @param clength Content of the "Content-Length" header.
						 * @param ctype Content of the "Content-Type" header.
						 * @param data HTTP body.
						 */
                        HTTPData(std::string &clength, std::string &ctype, std::string &data);

						/*!
						 * @brief HTTPData constructor.
						 * @param host Content of the "Host" header.
						 * @param clength Content of the "Content-Length" header.
						 * @param ctype Content of the "Content-Type" header.
						 * @param data HTTP body.
						 */
                        HTTPData(std::string &host, std::string &clength, std::string &ctype, std::string &data);

					    /*!
						 * @brief Default destructor.
						 */
                        ~HTTPData();

						/*!
						 * @brief Gets the string representation of the HTTP body.
						 * @return String representation of the HTTP body.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

						/*!
						 * @brief Copies the string representation of the HTTP body and its headers.
						 * @param data String representation of the HTTP body and its headers.
						 */
                        inline void set_data(std::string &data)
                        {
                            data_ = data;
                        }

						/*!
						 * @brief Moves the string representation of the HTTP body.
						 * @param data String representation of the HTTP body.
						 */
                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

						/*!
						 * @brief Gets the Content-Type field of the HTTP message.
						 * @return Content-Type field of the HTTP message.
						 */
                        string getMediaType();
						
						/*!
						 * @brief Gets the body of the HTTP message.
						 * @return Body of the HTTP message.
						 */
                        string getData();

                };

			    /*!
				 * @brief This class represents the response code of an HTTP response message.
				 */
                class HTTPResponseCode
                {
                    private:

						//! String representation of the HTTP data.
                        std::string data_;

                    public:

					    /*!
						 * @brief Default constructor.
						 */
                        HTTPResponseCode();

					    /*!
						 * @brief HTTPResponseCode constructor.
						 * @param code HTTP response code.
						 * @param text HTTP response text.
						 */
                        HTTPResponseCode(std::string &code, std::string &text);

					    /*!
						 * @brief Default destructor.
						 */
                        ~HTTPResponseCode();

					    /*!
						 * @brief Gets a string representation of the HTTP response code.
						 * @return String representation of the HTTP response code.
						 */
                        inline std::string& get_data()
                        {
                            return data_;
                        }

					    /*!
						 * @brief Copies the string representation of the HTTP response code.
						 * @param data String representation of the HTTP response code.
						 */
                        inline void set_data(std::string &data)
                        {
                            data_ = data;
                        }

					    /*!
						 * @brief Moves the string representation of the HTTP response code.
						 * @param data String representation of the HTTP response code.
						 */
                        inline void set_data(std::string &&data)
                        {
                            data_ = std::move(data);
                        }

						/*!
						 * @brief Gets the HTTP status code as an integer.
						 * @return HTTP status code.
						 */
                        int getStatusCode() {
                            string statusCode = data_.substr(1, data_.find_last_of(" ") - 1);
                            return atoi(statusCode.c_str());
                        }

                };


            } //namespace rest
        } //namespace protocol
    } //namespace rpc
} //namespace eprosima

#endif //TCP_SERIALIZER_HTTPENTITIES
