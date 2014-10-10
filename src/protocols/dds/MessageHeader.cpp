#include "fastrpc/protocols/dds/MessageHeader.h"

#include "fastcdr/Cdr.h"

using namespace eprosima::rpc;
using namespace ::protocol::dds;

GUID_t::GUID_t()
{
    m_value[0] = 0;
    m_value[1] = 0;
    m_value[2] = 0;
    m_value[3] = 0;
    m_value[4] = 0;
    m_value[5] = 0;
    m_value[6] = 0;
    m_value[7] = 0;
    m_value[8] = 0;
    m_value[9] = 0;
    m_value[10] = 0;
    m_value[11] = 0;
    m_value[12] = 0;
    m_value[13] = 0;
    m_value[14] = 0;
    m_value[15] = 0;
}

GUID_t::GUID_t(const GUID_t &guid)
{
    m_value[0] = guid.m_value[0];
    m_value[1] = guid.m_value[1];
    m_value[2] = guid.m_value[2];
    m_value[3] = guid.m_value[3];
    m_value[4] = guid.m_value[4];
    m_value[5] = guid.m_value[5];
    m_value[6] = guid.m_value[6];
    m_value[7] = guid.m_value[7];
    m_value[8] = guid.m_value[8];
    m_value[9] = guid.m_value[9];
    m_value[10] = guid.m_value[10];
    m_value[11] = guid.m_value[11];
    m_value[12] = guid.m_value[12];
    m_value[13] = guid.m_value[13];
    m_value[14] = guid.m_value[14];
    m_value[15] = guid.m_value[15];
}

GUID_t::~GUID_t()
{
}

GUID_t& GUID_t::operator=(const GUID_t &guid)
{
    m_value[0] = guid.m_value[0];
    m_value[1] = guid.m_value[1];
    m_value[2] = guid.m_value[2];
    m_value[3] = guid.m_value[3];
    m_value[4] = guid.m_value[4];
    m_value[5] = guid.m_value[5];
    m_value[6] = guid.m_value[6];
    m_value[7] = guid.m_value[7];
    m_value[8] = guid.m_value[8];
    m_value[9] = guid.m_value[9];
    m_value[10] = guid.m_value[10];
    m_value[11] = guid.m_value[11];
    m_value[12] = guid.m_value[12];
    m_value[13] = guid.m_value[13];
    m_value[14] = guid.m_value[14];
    m_value[15] = guid.m_value[15];
    
    return *this;
}

size_t GUID_t::getMaxCdrSerializedSize(size_t current_alignment)
{
    return 16;
}

void GUID_t::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr.serializeArray(m_value, 16);
}

void GUID_t::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr.deserializeArray(m_value, 16);
}

SampleIdentity_t::SampleIdentity_t() : m_sequence_number(0)
{
}

SampleIdentity_t::~SampleIdentity_t()
{
}

SampleIdentity_t::SampleIdentity_t(const SampleIdentity_t &id) :
    m_guid(id.m_guid), m_sequence_number(id.m_sequence_number)
{
}

SampleIdentity_t::SampleIdentity_t(SampleIdentity_t &&id) :
    m_guid(id.m_guid), m_sequence_number(id.m_sequence_number)
{
}

SampleIdentity_t& SampleIdentity_t::operator=(const SampleIdentity_t &id)
{
    m_guid = id.m_guid;
    m_sequence_number = id.m_sequence_number;

    return *this;
}

SampleIdentity_t& SampleIdentity_t::operator=(SampleIdentity_t &&id)
{
    m_guid = id.m_guid;
    m_sequence_number = id.m_sequence_number;

    return *this;
}

size_t SampleIdentity_t::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    // Optimization. First unsigned long has to be aligned. The rest is not necessary.
    current_alignment += GUID_t::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

    return current_alignment - initial_alignment;
}

void SampleIdentity_t::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_guid << m_sequence_number;
}

void SampleIdentity_t::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_guid >> m_sequence_number;
}

RequestHeader::RequestHeader() : m_remote_service_name(NULL), m_instance_name(NULL)
{
}

RequestHeader::RequestHeader(const RequestHeader &header) :
    m_request_id(header.m_request_id), m_remote_service_name(strdup(header.m_remote_service_name)),
    m_instance_name(strdup(header.m_instance_name))
{
}

RequestHeader::RequestHeader(RequestHeader &&header) :
    m_request_id(std::move(header.m_request_id)), m_remote_service_name(strdup(header.m_remote_service_name)),
    m_instance_name(strdup(header.m_instance_name))
{
}

RequestHeader::~RequestHeader()
{
	if(m_remote_service_name != NULL)
		free(m_remote_service_name);

	if(m_instance_name != NULL)
		free(m_instance_name);
}

RequestHeader& RequestHeader::operator=(const RequestHeader &header)
{
    m_request_id = header.m_request_id;
	if(m_remote_service_name != NULL)
		free(m_remote_service_name);
    m_remote_service_name = strdup(header.m_remote_service_name);
	if(m_instance_name != NULL)
		free(m_instance_name);
    m_instance_name = strdup(header.m_instance_name);

    return *this;
}

RequestHeader& RequestHeader::operator=(RequestHeader &&header)
{
    m_request_id = std::move(header.m_request_id);
    if(m_remote_service_name != NULL)
		free(m_remote_service_name);
    m_remote_service_name = strdup(header.m_remote_service_name);
    if(m_instance_name != NULL)
		free(m_instance_name);
    m_instance_name = strdup(header.m_instance_name);

    return *this;
}

size_t RequestHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += SampleIdentity_t::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256; // Max string length + 1.
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256; // Max string length + 1.

    return current_alignment - initial_alignment;
}

void RequestHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_request_id << m_remote_service_name << m_instance_name;
}

void RequestHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_request_id >> m_remote_service_name >> m_instance_name;
}

ReplyHeader::ReplyHeader()
{
}

ReplyHeader::ReplyHeader(const ReplyHeader &header) :
    m_request_id(header.m_request_id)
{
}

ReplyHeader::ReplyHeader(ReplyHeader &&header) :
    m_request_id(std::move(header.m_request_id))
{
}

ReplyHeader::~ReplyHeader()
{
}

ReplyHeader& ReplyHeader::operator=(const ReplyHeader &header)
{
    m_request_id = header.m_request_id;

    return *this;
}

ReplyHeader& ReplyHeader::operator=(ReplyHeader &&header)
{
    m_request_id = std::move(header.m_request_id);

    return *this;
}

size_t ReplyHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += SampleIdentity_t::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

void ReplyHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << m_request_id;
}

void ReplyHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> m_request_id;
}
