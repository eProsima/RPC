#include "protocols/rest/HTTPEntities.h"
#include <sstream>

namespace eprosima
{
	
	namespace httpser
	{
		
		//METHOD

		HTTPMethod::HTTPMethod() : data_(""){}

		HTTPMethod::HTTPMethod(Method method) : data_("")
		{
			switch(method)
			{
			case HTTP_GET:
				data_ = "GET ";
				break;
			case HTTP_PUT:
				data_ = "PUT ";
				break;
			case HTTP_POST:
				data_ = "POST ";
				break;
			case HTTP_DELETE:
				data_ = "DELETE ";
				break;
			}
		}

		HTTPMethod::~HTTPMethod(){}

		//URI

		HTTPUri::HTTPUri() : baseUri(""), path("") {}

		HTTPUri::HTTPUri(std::string &base, std::string &path) : baseUri(base), path(path) { }

		HTTPUri::~HTTPUri(){}

		//VERSION

		HTTPVersion::HTTPVersion() : data_(""){}

		HTTPVersion::HTTPVersion(std::string &version) : data_(version){}

		HTTPVersion::HTTPVersion(std::string &&version) : data_(std::move(version)){}

		HTTPVersion HTTPVersion::HTTPVersionRequest()
		{
			HTTPVersion ret(std::string(""));
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionResponse()
		{
			HTTPVersion ret(std::string(""));	
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionRequest(std::string &version)
		{
			HTTPVersion ret(std::string(" "+version+"\r\n"));		
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionResponse(std::string &version)
		{
			HTTPVersion ret(std::string(version+" "));
			return ret;
		}

		HTTPVersion::~HTTPVersion(){}

		//DATA

		HTTPData::HTTPData() : data_("\r\n"){}

		HTTPData::HTTPData(std::string &clength, std::string &ctype, std::string &data)
		{
			data_ += std::string("Content-Length: ");
			data_ += clength;
			data_ += "\r\n";

			data_ += std::string("Content-Type: ");
			data_ += ctype;
			data_ += "\r\n";

			data_ += "\r\n";
			data_ += data;
		}

		HTTPData::~HTTPData(){}

		string HTTPData::getMediaType() {
			int beginPos = 0;
			int endPos = 0;
			int mediaTypePos = 0;
			string line = "";
			while(endPos < data_.size()) {
				line = data_.substr(beginPos, endPos - beginPos);
				beginPos = endPos;
				endPos = data_.find("\n", beginPos + 1);

				mediaTypePos = line.find("Content-Type: ");
				if(mediaTypePos != string::npos) {
					return line.substr(15, line.size()-16); // "Content Type: ".size() = 14 # final "\r\n" = 2
				}
			}
			
			return "";
		}

		string HTTPData::getData() {
			return data_.substr(data_.find_last_of("\r\n\r\n") + 1);
		}

		//CODE

		HTTPResponseCode::HTTPResponseCode() : data_(""){}

		HTTPResponseCode::HTTPResponseCode(std::string &code, std::string &text)
		{
			data_ = code+std::string(" ")+text+std::string("\r\n");
		}

		HTTPResponseCode::~HTTPResponseCode(){};

		//PARAM

		HTTPParam::HTTPParam() : data_(""), name(""), value("") {}

		HTTPParam::HTTPParam(std::string &name, std::string &value) : data_(name+std::string("=")+value), name(name), value(value){}

		HTTPParam::~HTTPParam(){}

		//PARAMETERS

		HTTPParameters::HTTPParameters() : size_(0), data_("?"), params_() {}

		HTTPParameters::~HTTPParameters(){}

		void HTTPParameters::addParam(HTTPParam &param)
		{
			if(params_.size() != 0){
				data_+="&";
			}
			data_+=param.get_data();
			params_.push_back(param);
			++size_;
		}

		void HTTPParameters::set_data(std::string &data) {
			params_.clear();
			size_ = 0;
			data_ = "?";

			string params = data.substr(1, data.size()); // Ignoring initial '?'
			int beginAmpersand = 0;
			int endAmpersand = 0;
			string param;
			string name;
			string value;
			HTTPParam httpParam;
			while(endAmpersand < params.size()) {
				endAmpersand = params.find("&", beginAmpersand);
				param = params.substr(beginAmpersand, endAmpersand);
				name = param.substr(0, param.find("="));
				value = param.substr(param.find("=")+1, param.size());
				httpParam = HTTPParam(name, value);
				addParam(httpParam);
				beginAmpersand = endAmpersand + 1;
			 }
		}


		
	} //namespace httpser

} //namespace eProsima
