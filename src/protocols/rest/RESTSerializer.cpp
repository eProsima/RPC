#include <protocols/rest/RESTSerializer.h>

using namespace eprosima::rpc;
using namespace ::protocol::rest;

RESTSerializer::RESTSerializer() : m_numQueryParameters(0), m_nextTemplateParameterPos(0)
{

}

RESTSerializer::~RESTSerializer()
{

}

void RESTSerializer::state(RESTSerializer &serializer)
{
    m_currentPosition_bck = serializer.m_currentPosition_;
    m_alignPosition_bck = serializer.m_alignPosition_;
    //m_lastDataSize_bck = serializer.m_lastDataSize_;
}

void RESTSerializer::setState()
{
    m_currentPosition_ = m_currentPosition_bck;
    m_alignPosition_ = m_alignPosition_bck;
    //m_lastDataSize_ = m_lastDataSize_bck;
}

bool RESTSerializer::resize(size_t minSizeInc)
{
    if(buffer_.resize(minSizeInc)){
        m_currentPosition_ = buffer_.begin();
        m_alignPosition_ = buffer_.begin();
        m_lastPosition_ = buffer_.end();
        return true;
    }
    return false;
}

void RESTSerializer::reset()
{
    m_currentPosition_ = buffer_.begin();
    m_alignPosition_ = buffer_.begin();
    //m_lastDataSize_ = 0;
}

/*
   RESTSerializer& RESTSerializer::serialize(uint32_t &integer)
   {
   size_t align = alignment(sizeof(integer));
   size_t sizeAligned = sizeof(integer) + align;

   if(((m_lastPosition_ - m_currentPosition_) >= sizeAligned) || resize(sizeAligned))
   {
// Save last datasize.
//m_lastDataSize_ = sizeof(integer);

// Align.
makeAlign(align);

m_currentPosition_ << integer;
m_currentPosition_ += sizeof(integer);

return *this;
}

//throw NotEnoughMemoryException(NotEnoughMemoryException::NOT_ENOUGH_MEMORY_MESSAGE_DEFAULT);
}

RESTSerializer& RESTSerializer::deserialize(uint32_t &integer)
{
size_t align = alignment(sizeof(integer));
size_t sizeAligned = sizeof(integer) + align;

if((m_lastPosition_ - m_currentPosition_) >= sizeAligned)
{
// Save last datasize.
//m_lastDataSize_ = sizeof(integer);

// Align
makeAlign(align);

m_currentPosition_ >> integer;
m_currentPosition_ += sizeof(integer);
return *this;
}

//throw NotEnoughMemoryException(NotEnoughMemoryException::NOT_ENOUGH_MEMORY_MESSAGE_DEFAULT);
}
*/

RESTSerializer& RESTSerializer::serialize(const char* const &string_t)
{
    uint32_t length = strlen(string_t);
    state(*this);

    //serialize(length);

    if(length > 0)
    {
        if(((m_lastPosition_ - m_currentPosition_) >= length) || resize(length))
        {
            // Save last datasize.
            //m_lastDataSize_ = sizeof(uint8_t);
            m_currentPosition_.memcopy(string_t, length);
            m_currentPosition_ += length;
        }
        else
        {
            setState();
            //throw NotEnoughMemoryException(NotEnoughMemoryException::NOT_ENOUGH_MEMORY_MESSAGE_DEFAULT);
        }
    }

    return *this;
}

const char* RESTSerializer::readString(uint32_t &length)
{
	const char* returnedValue = "";
    state(*this);

    //deserialize(length);

    if(length == 0)
    {
		return returnedValue;
    }
    else if((m_lastPosition_ - m_currentPosition_) >= length)
    {
		returnedValue = &m_currentPosition_;
		m_currentPosition_ += length;
		if(returnedValue[length-1] == '\0') --length;
		return returnedValue;
    }

    setState();
    //throw NotEnoughMemoryException(NotEnoughMemoryException::NOT_ENOUGH_MEMORY_MESSAGE_DEFAULT);
    return returnedValue;
}

RESTSerializer& RESTSerializer::serialize(HTTPMethod &method)
{
    return RESTSerializer::serialize(method.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPMethod &method)
{
    m_currentPosition_bck = m_currentPosition_;
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    ++m_currentPosition_;
    while(actualChar.compare(" ") != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }

    int length = m_currentPosition_ - m_currentPosition_bck;
    method.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPUri &uri)
{
    return RESTSerializer::serialize(uri.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPUri &uri)
{
    m_currentPosition_bck = m_currentPosition_;
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    ++m_currentPosition_;
    while(actualChar.compare(" ") != 0 && actualChar.compare("?") != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }
    m_currentPosition_ += -1;

    int length = m_currentPosition_ - m_currentPosition_bck;
    uri.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPVersion &version)
{
    return RESTSerializer::serialize(version.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPVersion &version)
{
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    string endChar;
    if(actualChar.compare(" ") == 0) {
        // Request Version
        endChar = "\n";
    } else {
        // Response Version
        endChar = " ";
    }

    m_currentPosition_bck = m_currentPosition_;
    ++m_currentPosition_;
    while(actualChar.compare(endChar) != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }
    if(endChar.compare(" ") == 0) {
        m_currentPosition_ += -1;
    }

    int length = m_currentPosition_ - m_currentPosition_bck;
    version.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPData &data)
{
    return RESTSerializer::serialize(data.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPData &data)
{	
    m_currentPosition_bck = m_currentPosition_;
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    ++m_currentPosition_;
    while(actualChar.compare("\0") != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }
    m_currentPosition_ += -1;

    int length = m_currentPosition_ - m_currentPosition_bck;

    data.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPResponseCode &responseCode)
{
    return RESTSerializer::serialize(responseCode.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPResponseCode &responseCode)
{
    m_currentPosition_bck = m_currentPosition_;
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    ++m_currentPosition_;
    while(actualChar.compare("\n") != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }

    int length = m_currentPosition_ - m_currentPosition_bck;
    responseCode.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPParam &param)
{
    return RESTSerializer::serialize(param.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPParam &param)
{
    return RESTSerializer::deserialize(param.get_data());
}

RESTSerializer& RESTSerializer::serialize(HTTPParameters &params)
{
    return RESTSerializer::serialize(params.get_data());
}

RESTSerializer& RESTSerializer::deserialize(HTTPParameters &params)
{
    string actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
    if(actualChar.compare("?") != 0)
        return *this; // No parameters here
    m_currentPosition_bck = m_currentPosition_;
    ++m_currentPosition_;
    while(actualChar.compare(" ") != 0) {
        actualChar = std::string(&m_currentPosition_, 1 - ((&m_currentPosition_)[1-1] == '\0' ? 1 : 0));
        ++m_currentPosition_;
    }
    m_currentPosition_ += -1;

    int length = m_currentPosition_ - m_currentPosition_bck;
    params.set_data(std::string(&m_currentPosition_bck, length - ((&m_currentPosition_bck)[length-1] == '\0' ? 1 : 0)));
    return *this;
}

RESTSerializer& RESTSerializer::serialize(HTTPParameters &params, size_t numElements)
{
    for(size_t i=0; i < numElements; ++i){
        RESTSerializer::serialize(params.get_params().at(i));
    }
    return *this;
}

RESTSerializer& RESTSerializer::deserialize(HTTPParameters &params, size_t numElements)
{
    HTTPParam param;
    std::string parametersData = "";
    for(size_t i=0; i < numElements; ++i){
        RESTSerializer::deserialize(param);
        params.addParam(param);
    }
    return *this;
}

RESTSerializer& RESTSerializer::serializeQueryParameter(std::string &uri, const std::string &paramName,
        const std::string &paramValue)
{
    if(m_numQueryParameters == 0)
        uri += "?";
    else
        uri += "&";

    // Supposed that paramName was formatted by fastrpcgen application.
    uri += paramName + std::string("=") + substituteBadCharacters(paramValue);

    ++m_numQueryParameters;

    return *this;
}

RESTSerializer& RESTSerializer::beginSerializeTemplateParameters(std::string &&uri)
{
    m_nextTemplateParameterPos = 0;
    m_templateParameterURI = std::move(uri);
    m_templateParameterExpandURI = "";

    return *this;
}

RESTSerializer& RESTSerializer::serializeTemplateParameter(const std::string &paramValue)
{
    size_t lpos = m_templateParameterURI.find_first_of('{', m_nextTemplateParameterPos);

    if(lpos != std::string::npos)
    {
        m_templateParameterExpandURI += m_templateParameterURI.substr(m_nextTemplateParameterPos, lpos - m_nextTemplateParameterPos);
        m_templateParameterExpandURI += substituteBadCharacters(paramValue);
        m_nextTemplateParameterPos = m_templateParameterURI.find_first_of('}', lpos) + 1;
    }
    else
    {
        // TODO print error.
    }

    return *this;
}

RESTSerializer& RESTSerializer::endSerializeTemplateParameters(std::string &uri)
{
    m_templateParameterExpandURI += m_templateParameterURI.substr(m_nextTemplateParameterPos);
    uri = std::move(m_templateParameterExpandURI);

    return *this;
}

RESTSerializer&  RESTSerializer::deserializeUri(const std::string &uri, const std::string baseUri)
{
    size_t fpos = 0, lpos = 0;

    if(uri.compare(0, baseUri.size(), baseUri) != 0)
    {
        // TODO Exception
        printf("ERROR deserializando\n");
    }

    fpos = baseUri.size();

    // Jump first / if exists.
    if(uri.size() > fpos &&
            uri.at(fpos) == '/')
        ++fpos;

    while((fpos < uri.size()) && ((lpos = uri.find_first_of('/', fpos)) != std::string::npos))
    {
        m_tags.push_back(restoreBadCharacters(uri.substr(fpos, lpos - fpos)));
        fpos = lpos + 1;
    }

    // There is not the last /.
    if(fpos < uri.size())
    {
        // Not find a ? for query parameters.
        if((lpos = uri.find_first_of('?', fpos)) == std::string::npos)
        {
            // Get last tag.
            m_tags.push_back(restoreBadCharacters(uri.substr(fpos)));
        }
        else
        {
            // If there is a last tag, get it.
            if(fpos != lpos)
            {
                m_tags.push_back(restoreBadCharacters(uri.substr(fpos, lpos - fpos)));
                fpos = lpos + 1;
            }

            // Get query parameters.
            while((fpos < uri.size()) && ((lpos = uri.find_first_of('&', fpos)) != std::string::npos))
            {
                // Find '='
                size_t equal = uri.find_first_of('=', fpos);

                if(equal != std::string::npos && equal < lpos)
                {
                    m_queryParameters.insert(std::pair<std::string, std::string>(uri.substr(fpos, equal - fpos), restoreBadCharacters(uri.substr(equal + 1, lpos - equal - 1))));
                }
                else
                {
                    // TODO Exception
                    printf("Error deserializando\n");
                }

                fpos = lpos + 1;
            }
            
            // There is a last query parameter.
            if(fpos < uri.size())
            {
                size_t equal = uri.find_first_of('=', fpos);

                if(equal != std::string::npos)
                {
                    m_queryParameters.insert(std::pair<std::string, std::string>(uri.substr(fpos, equal - fpos), restoreBadCharacters(uri.substr(equal + 1))));
                }
                else
                {
                    // TODO Exception
                    printf("Error deserializando\n");
                }
            }
        }
    }

	return *this;
}

std::string RESTSerializer::substituteBadCharacters(const std::string &str)
{
    std::string ret = "";
    size_t fpos = 0, lpos = 0;

    while((lpos = str.find_first_of(' ', fpos)) != std::string::npos)
    {
        ret += str.substr(fpos, lpos - fpos) + "%20";
        fpos = lpos + 1;
    }

    // Not found any space.
    if(fpos == 0 && lpos == std::string::npos)
        return str;

    ret += str.substr(fpos);

    return ret;
}

std::string RESTSerializer::restoreBadCharacters(const std::string &str)
{
    std::string ret = "";
    size_t fpos = 0, lpos = 0;

    if(str.size() > 2)
    {
        while((lpos = str.find("%20", fpos)) != std::string::npos)
        {
            ret += str.substr(fpos, lpos - fpos) + " ";
            fpos = lpos + 3;
        }

        // Not found any space.
        if(fpos == 0 && lpos == std::string::npos)
        {
            return str;
        }

        ret += str.substr(fpos);

        return ret;
    }

    return str;
}
