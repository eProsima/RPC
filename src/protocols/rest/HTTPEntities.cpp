#include "protocols/rest/HTTPEntities.h"

namespace eProsima
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

		HTTPUri::HTTPUri() : data_(""){}

		HTTPUri::HTTPUri(std::string &base, std::string &path) : data_(base+=path+=""){}

		HTTPUri::~HTTPUri(){}

		//VERSION

		HTTPVersion::HTTPVersion() : data_(""){}

		HTTPVersion::HTTPVersion(std::string &version) : data_(version){}

		HTTPVersion HTTPVersion::HTTPVersionRequest()
		{
			std::string empty = "";
			HTTPVersion ret(empty);
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionResponse()
		{
			std::string empty = "";
			HTTPVersion ret(empty);
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionRequest(std::string &version)
		{
			std::string httpVersion = " "+version+"\n";
			HTTPVersion ret(httpVersion);
			return ret;
		}

		HTTPVersion HTTPVersion::HTTPVersionResponse(std::string &version)
		{
			std::string httpVersion = " "+version;
			HTTPVersion ret(httpVersion);
			return ret;
		}

		HTTPVersion::~HTTPVersion(){}

		//DATA

		HTTPData::HTTPData() : data_(""){}

		HTTPData::HTTPData(std::string &clength, std::string &ctype, std::string &data)
		{
			data_ += std::string("Content Type: ");
			data_ += clength;
			data_ += "\n";
			data_ += std::string("Content Length: ");
			data_ += ctype;
			data_ += "\n\n";
			data_ += data;
		}

		HTTPData::~HTTPData(){}

		//CODE

		HTTPResponseCode::HTTPResponseCode() : data_(""){}

		HTTPResponseCode::HTTPResponseCode(std::string &code, std::string &text)
		{
			data_ = code+=std::string(" ")+=text+=std::string("\n");
		}

		HTTPResponseCode::~HTTPResponseCode(){};

		//PARAM

		HTTPParam::HTTPParam() : data_(""){}

		HTTPParam::HTTPParam(std::string &name, std::string &value) : data_(name+std::string("=")+value){}

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


		
	} //namespace httpser

} //namespace eProsima
