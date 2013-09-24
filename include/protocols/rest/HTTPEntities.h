#ifndef TCP_SERIALIZER_HTTPENTITIES
#define TCP_SERIALIZER_HTTPENTITIES

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace eprosima
{
	
	namespace httpser
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

			inline void set_data(std::string &data)
			{
				data_ = data;
			}

		};

		class HTTPUri
		{
		private:
			std::string baseUri;
			std::string path;

		public:
			
			HTTPUri();

			HTTPUri(std::string &base, std::string &path);

			~HTTPUri();

			inline std::string get_data()
			{
				return baseUri+path;
			}

			inline void set_data(std::string &data)
			{
				int pathPos = data.find(baseUri) + baseUri.size();
				baseUri = data.substr(0, pathPos);
				path = data.substr(pathPos);
			}

			std::string getPath() { return path; }
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

			inline void set_data(std::string &data)
			{
				data_ = data;
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

			void set_data(std::string &data);

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

			HTTPVersion(std::string &version);

		public:

			HTTPVersion();

			static HTTPVersion HTTPVersionRequest();

			static HTTPVersion HTTPVersionResponse();

			static HTTPVersion HTTPVersionRequest(std::string &version);

			static HTTPVersion HTTPVersionResponse(std::string &version);

			~HTTPVersion();

			inline void set_data(std::string &data)
			{
				data_ = data;
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

			HTTPData(std::string &clength, std::string &ctype, std::string &data);

			~HTTPData();

			inline std::string& get_data()
			{
				return data_;
			}

			inline void set_data(std::string &data)
			{
				data_ = data;
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

			int getStatusCode() {
				string statusCode = data_.substr(1, data_.find_last_of(" ") - 1);
				return atoi(statusCode.c_str());
			}

		};

	
	} //namespace httpser

} //namespace eProsima

#endif //TCP_SERIALIZER_HTTPENTITIES