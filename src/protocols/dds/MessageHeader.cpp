#include "fastrpc/protocols/dds/MessageHeader.h"
#include "fastrpc/utils/macros/strdup.h"

#include "fastcdr/Cdr.h"

using namespace eprosima::rpc;
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

size_t Identification::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    // Optimization. First unsigned long has to be aligned. The rest is not necessary.
    current_alignment += 16 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void Identification::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_value_1 << m_value_2 << m_value_3 << m_value_4;
}

void Identification::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_value_1 >> m_value_2 >> m_value_3 >> m_value_4;
}

RequestHeader::RequestHeader() : m_remoteServiceName(NULL), m_requestSequenceNumber(0)
{
}

RequestHeader::RequestHeader(const RequestHeader &header) :
    m_clientId(header.m_clientId), m_remoteServiceName(STRDUP(header.m_remoteServiceName)),
    m_requestSequenceNumber(header.m_requestSequenceNumber)
{
}

RequestHeader::RequestHeader(RequestHeader &&header) :
    m_clientId(std::move(header.m_clientId)), m_remoteServiceName(STRDUP(header.m_remoteServiceName)),
    m_requestSequenceNumber(header.m_requestSequenceNumber)
{
}

RequestHeader::~RequestHeader()
{
	if(m_remoteServiceName != NULL)
		free(m_remoteServiceName);
}

RequestHeader& RequestHeader::operator=(const RequestHeader &header)
{
    m_clientId = header.m_clientId;
	if(m_remoteServiceName != NULL)
		free(m_remoteServiceName);
    m_remoteServiceName = STRDUP(header.m_remoteServiceName);
    m_requestSequenceNumber = header.m_requestSequenceNumber;

    return *this;
}

RequestHeader& RequestHeader::operator=(RequestHeader &&header)
{
    m_clientId = std::move(header.m_clientId);
    if(m_remoteServiceName != NULL)
		free(m_remoteServiceName);
    m_remoteServiceName = STRDUP(header.m_remoteServiceName);
    m_requestSequenceNumber = header.m_requestSequenceNumber;

    return *this;
}

size_t RequestHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment = Identification::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256; // Max string length + 1.
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void RequestHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_clientId << m_remoteServiceName << m_requestSequenceNumber;
}

void RequestHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_clientId >> m_remoteServiceName >> m_requestSequenceNumber;
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

size_t ReplyHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment = Identification::getMaxCdrSerializedSize(current_alignment);
    // Optimization. First unsigned long has to be aligment but the other not.
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256; // Max string length + 1.

    return current_alignment - initial_alignment;
}

void ReplyHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_clientId << m_requestSequenceNumber << m_retCode << m_retMsg;
}

void ReplyHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_clientId >> m_requestSequenceNumber >> m_retCode >> m_retMsg;
}
