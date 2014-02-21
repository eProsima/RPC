#include "rpcdds/protocols/dds/MessageHeader.h"

using namespace eprosima::rpcdds;
using namespace ::protocol::dds;

Identification::Identification() :
    m_value_1(0), m_value_2(0), m_value_3(0), m_value_4(0)
{
}

Identification::~Identification()
{
}

Identification::Identification(const Identification &id) :
    m_value_1(id.m_value_1), m_value_2(id.m_value_2),
    m_value_3(id.m_value_3), m_value_4(id.m_value_4)
{
}

Identification::Identification(Identification &&id) :
    m_value_1(id.m_value_1), m_value_2(id.m_value_2),
    m_value_3(id.m_value_3), m_value_4(id.m_value_4)
{
}

Identification& Identification::operator=(const Identification &id)
{
    m_value_1 = id.m_value_1;
    m_value_2 = id.m_value_2;
    m_value_3 = id.m_value_3;
    m_value_4 = id.m_value_4;

    return *this;
}

Identification& Identification::operator=(Identification &&id)
{
    m_value_1 = id.m_value_1;
    m_value_2 = id.m_value_2;
    m_value_3 = id.m_value_3;
    m_value_4 = id.m_value_4;

    return *this;
}

RequestHeader::RequestHeader() : m_requestSequenceNumber(0)
{
}

RequestHeader::RequestHeader(const RequestHeader &header) :
    m_clientId(header.m_clientId), m_remoteServiceName(header.m_remoteServiceName),
    m_requestSequenceNumber(header.m_requestSequenceNumber)
{
}

RequestHeader::RequestHeader(RequestHeader &&header) :
    m_clientId(std::move(header.m_clientId)), m_remoteServiceName(std::move(header.m_remoteServiceName)),
    m_requestSequenceNumber(header.m_requestSequenceNumber)
{
}

RequestHeader::~RequestHeader()
{
}

RequestHeader& RequestHeader::operator=(const RequestHeader &header)
{
    m_clientId = header.m_clientId;
    m_remoteServiceName = header.m_remoteServiceName;
    m_requestSequenceNumber = header.m_requestSequenceNumber;

    return *this;
}

RequestHeader& RequestHeader::operator=(RequestHeader &&header)
{
    m_clientId = std::move(header.m_clientId);
    m_remoteServiceName = std::move(header.m_remoteServiceName);
    m_requestSequenceNumber = header.m_requestSequenceNumber;

    return *this;
}

ReplyHeader::ReplyHeader() : m_requestSequenceNumber(0),
    m_retCode(0)
{
}

ReplyHeader::ReplyHeader(const ReplyHeader &header) :
    m_clientId(header.m_clientId), m_requestSequenceNumber(header.m_requestSequenceNumber),
    m_retCode(header.m_retCode), m_retMsg(header.m_retMsg)
{
}

ReplyHeader::ReplyHeader(ReplyHeader &&header) :
    m_clientId(std::move(header.m_clientId)), m_requestSequenceNumber(header.m_requestSequenceNumber),
    m_retCode(header.m_retCode), m_retMsg(std::move(header.m_retMsg))
{
}

ReplyHeader::~ReplyHeader()
{
}

ReplyHeader& ReplyHeader::operator=(const ReplyHeader &header)
{
    m_clientId = header.m_clientId;
    m_requestSequenceNumber = header.m_requestSequenceNumber;
    m_retCode = header.m_retCode;
    m_retMsg = header.m_retMsg;

    return *this;
}

ReplyHeader& ReplyHeader::operator=(ReplyHeader &&header)
{
    m_clientId = std::move(header.m_clientId);
    m_requestSequenceNumber = header.m_requestSequenceNumber;
    m_retCode = header.m_retCode;
    m_retMsg = std::move(header.m_retMsg);

    return *this;
}
