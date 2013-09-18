#ifndef TCP_SERIALIZER_HTTPENTITIES
#define TCP_SERIALIZER_HTTPENTITIES

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace eProsima
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
			
			std::string data_;

		public:
			
			HTTPUri();

			HTTPUri(std::string &base, std::string &path);

			~HTTPUri();

			inline std::string& get_data()
			{
				return data_;
			}

			inline void set_data(std::string &data)
			{
				data_ = data;
			}
		};

		class HTTPParam
		{
		private:

			std::string data_;

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
			}

			string getName() { return ""; } // TODO
			string getValue() { return ""; } // TODO

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

			inline void set_data(std::string &data)
			{
				data_ = data;
			}

			void addParam(HTTPParam &param);

			bool containsParam(string paramName) {
				for(vector<HTTPParam>::iterator it = params_.begin(); it != params_.end(); ++it) {
					HTTPParam param = *it;

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

			string getData() { return ""; }
			string getMediaType() { return ""; }

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

			int getStatus() { return 0; }

		};

	
	} //namespace httpser

} //namespace eProsima

#endif //TCP_SERIALIZER_HTTPENTITIES