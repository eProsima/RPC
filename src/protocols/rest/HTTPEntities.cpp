#include <protocols/rest/HTTPEntities.h>
#include <sstream>

using namespace eprosima::rpc;
using namespace ::protocol::rest;

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

HTTPUri::HTTPUri() : host(""), baseUri(""), path("") {}

HTTPUri::HTTPUri(std::string &path) : host(""), baseUri(""), path(path) { }

HTTPUri::~HTTPUri(){}

//VERSION

HTTPVersion::HTTPVersion() : data_(""){}

HTTPVersion::HTTPVersion(const std::string &version) : data_(version){}

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

HTTPData::HTTPData(std::string &host) {
    size_t posInit = host.find("//");
    if(posInit == string::npos)
        posInit = 0;
    else
        posInit += 2; // 2 characters, for "//"
    size_t posEnd = host.find("/", posInit);
    string realHost = host.substr(posInit, posEnd - posInit);

    data_ += "Host: ";
    data_ += host.substr(posInit, posEnd - posInit);
    data_ += "\r\n";

    data_ += "Connection: close\r\n";

    data_ += "\r\n";
}

HTTPData::HTTPData(std::string &clength, std::string &ctype, std::string &data) {
    data_ += "Connection: close\r\n";

    data_ += std::string("Content-Length: ");
    data_ += clength;
    data_ += "\r\n";

    data_ += std::string("Content-Type: ");
    data_ += ctype;
    data_ += "\r\n";

    data_ += "\r\n";
    data_ += data;
}

HTTPData::HTTPData(std::string &host, std::string &clength, std::string &ctype, std::string &data) {
    size_t posInit = host.find("//");
    if(posInit == string::npos)
        posInit = 0;
    else
        posInit += 2; // 2 characters, for "//"
    size_t posEnd = host.find("/", posInit);
    string realHost = host.substr(posInit, posEnd - posInit);

    data_ = "Host: ";
    data_ += host.substr(posInit, posEnd - posInit);
    data_ += "\r\n";

    data_ += "Connection: close\r\n";

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
    size_t beginPos = 0;
    size_t endPos = 0;
    size_t mediaTypePos = 0;
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
    size_t pos = data_.find("\r\n\r\n") + 4; // 4 = "\r\n\r\n".size()
    if(pos >= data_.size())
        return "";
    return data_.substr(pos);
}

//CODE

HTTPResponseCode::HTTPResponseCode() : data_(""){}

HTTPResponseCode::HTTPResponseCode(std::string &code, std::string &text)
{			
    data_ = code+std::string(" ")+text+std::string("\r\n");
}

HTTPResponseCode::~HTTPResponseCode(){}

//PARAM

HTTPParam::HTTPParam() : data_(""), name(""), value("") {}

HTTPParam::HTTPParam(std::string &name, std::string &value) : data_(name+std::string("=")+value), name(name), value(value){}

HTTPParam::~HTTPParam(){}

//PARAMETERS

HTTPParameters::HTTPParameters() : size_(0), data_(""), params_() {}

HTTPParameters::~HTTPParameters(){}

void HTTPParameters::addParam(HTTPParam &param)
{
    if(param.getValue().size()==0)
        return;

    if(params_.size() == 0){
        data_+="?";
    } else {
        data_+="&";
    }
    data_+=param.get_data();
    params_.push_back(param);
    ++size_;
}

void HTTPParameters::set_data(std::string &&data) {
    params_.clear();
    size_ = 0;
    data_ = "";

    if(data.size()==0)
        return;

    data_ = "?";
    string params = data.substr(1, data.size()); // Ignoring initial '?'
    size_t beginAmpersand = 0;
    size_t endAmpersand = 0;
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
