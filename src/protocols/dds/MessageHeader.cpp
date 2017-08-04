#include <protocols/dds/MessageHeader.h>
#include <utils/macros/strdup.h>

#include <fastcdr/Cdr.h>

using namespace eprosima::rpc;
using namespace ::protocol::dds;

EntityId_t::EntityId_t() : entityKind_(0)
{
    entityKey_[0] = 0;
    entityKey_[1] = 0;
    entityKey_[2] = 0;
}

EntityId_t::~EntityId_t()
{
}

EntityId_t::EntityId_t(const EntityId_t &x)
{
    entityKey_[0] = x.entityKey_[0];
    entityKey_[1] = x.entityKey_[1];
    entityKey_[2] = x.entityKey_[2];
    entityKind_ = x.entityKind_;
}

EntityId_t& EntityId_t::operator=(const EntityId_t &x)
{
    entityKey_[0] = x.entityKey_[0];
    entityKey_[1] = x.entityKey_[1];
    entityKey_[2] = x.entityKey_[2];
    entityKind_ = x.entityKind_;

    return *this;
}

size_t EntityId_t::getMaxCdrSerializedSize(size_t /*current_alignment*/)
{
    return 4;
}

size_t EntityId_t::getCdrSerializedSize(size_t /*current_alignment*/) const
{
    return 4;
}

void EntityId_t::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr.serializeArray(entityKey_, 3);
    cdr << entityKind_;
}

void EntityId_t::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr.deserializeArray(entityKey_, 3);
    cdr >> entityKind_;
}

GUID_t::GUID_t()
{
    guidPrefix_[0] = 0;
    guidPrefix_[1] = 0;
    guidPrefix_[2] = 0;
    guidPrefix_[3] = 0;
    guidPrefix_[4] = 0;
    guidPrefix_[5] = 0;
    guidPrefix_[6] = 0;
    guidPrefix_[7] = 0;
    guidPrefix_[8] = 0;
    guidPrefix_[9] = 0;
    guidPrefix_[10] = 0;
    guidPrefix_[11] = 0;
}

GUID_t::GUID_t(const GUID_t &guid) : entityId_(guid.entityId_)
{
    guidPrefix_[0] = guid.guidPrefix_[0];
    guidPrefix_[1] = guid.guidPrefix_[1];
    guidPrefix_[2] = guid.guidPrefix_[2];
    guidPrefix_[3] = guid.guidPrefix_[3];
    guidPrefix_[4] = guid.guidPrefix_[4];
    guidPrefix_[5] = guid.guidPrefix_[5];
    guidPrefix_[6] = guid.guidPrefix_[6];
    guidPrefix_[7] = guid.guidPrefix_[7];
    guidPrefix_[8] = guid.guidPrefix_[8];
    guidPrefix_[9] = guid.guidPrefix_[9];
    guidPrefix_[10] = guid.guidPrefix_[10];
    guidPrefix_[11] = guid.guidPrefix_[11];
}

GUID_t::~GUID_t()
{
}

GUID_t& GUID_t::operator=(const GUID_t &guid)
{
    guidPrefix_[0] = guid.guidPrefix_[0];
    guidPrefix_[1] = guid.guidPrefix_[1];
    guidPrefix_[2] = guid.guidPrefix_[2];
    guidPrefix_[3] = guid.guidPrefix_[3];
    guidPrefix_[4] = guid.guidPrefix_[4];
    guidPrefix_[5] = guid.guidPrefix_[5];
    guidPrefix_[6] = guid.guidPrefix_[6];
    guidPrefix_[7] = guid.guidPrefix_[7];
    guidPrefix_[8] = guid.guidPrefix_[8];
    guidPrefix_[9] = guid.guidPrefix_[9];
    guidPrefix_[10] = guid.guidPrefix_[10];
    guidPrefix_[11] = guid.guidPrefix_[11];
    entityId_ = guid.entityId_;
    
    return *this;
}

size_t GUID_t::getMaxCdrSerializedSize(size_t /*current_alignment*/)
{
    return 16;
}

size_t GUID_t::getCdrSerializedSize(size_t /*current_alignment*/) const
{
    return 16;
}

void GUID_t::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr.serializeArray(guidPrefix_, 12);
    cdr << entityId_;
}

void GUID_t::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr.deserializeArray(guidPrefix_, 12);
    cdr >> entityId_;
}

SequenceNumber_t::SequenceNumber_t() : high_(0), low_(0)
{
}

SequenceNumber_t::~SequenceNumber_t()
{
}

SequenceNumber_t::SequenceNumber_t(const SequenceNumber_t &x)
{
    high_ = x.high_;
    low_ = x.low_;
}

SequenceNumber_t::SequenceNumber_t(SequenceNumber_t &&x)
{
    high_ = x.high_;
    low_ = x.low_;
}

SequenceNumber_t& SequenceNumber_t::operator=(const SequenceNumber_t &x)
{
    high_ = x.high_;
    low_ = x.low_;
    
    return *this;
}

SequenceNumber_t& SequenceNumber_t::operator=(SequenceNumber_t &&x)
{
    high_ = x.high_;
    low_ = x.low_;
    
    return *this;
}

size_t SequenceNumber_t::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

size_t SequenceNumber_t::getCdrSerializedSize(size_t current_alignment) const
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void SequenceNumber_t::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << high_;
    cdr << low_;

}

void SequenceNumber_t::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> high_;
    cdr >> low_;
}

SampleIdentity::SampleIdentity()
{
}

SampleIdentity::~SampleIdentity()
{
}

SampleIdentity::SampleIdentity(const SampleIdentity &id) :
    writer_guid_(id.writer_guid_), sequence_number_(id.sequence_number_)
{
}

SampleIdentity::SampleIdentity(SampleIdentity &&id) :
    writer_guid_(id.writer_guid_), sequence_number_(id.sequence_number_)
{
}

SampleIdentity& SampleIdentity::operator=(const SampleIdentity &id)
{
    writer_guid_ = id.writer_guid_;
    sequence_number_ = id.sequence_number_;

    return *this;
}

SampleIdentity& SampleIdentity::operator=(SampleIdentity &&id)
{
    writer_guid_ = id.writer_guid_;
    sequence_number_ = id.sequence_number_;

    return *this;
}

size_t SampleIdentity::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    // Optimization. First unsigned long has to be aligned. The rest is not necessary.
    current_alignment += GUID_t::getMaxCdrSerializedSize(current_alignment);
    current_alignment += SequenceNumber_t::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t SampleIdentity::getCdrSerializedSize(size_t current_alignment) const
{
    size_t initial_alignment = current_alignment;

    current_alignment += writer_guid_.getCdrSerializedSize(current_alignment);
    current_alignment += sequence_number_.getCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

void SampleIdentity::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << writer_guid_ << sequence_number_;
}

void SampleIdentity::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> writer_guid_ >> sequence_number_;
}

rpc::RequestHeader::RequestHeader() : instanceName_(NULL)
{
}

rpc::RequestHeader::RequestHeader(const rpc::RequestHeader &header) :
    requestId_(header.requestId_), instanceName_(STRDUP(header.instanceName_))
{
}

rpc::RequestHeader::RequestHeader(rpc::RequestHeader &&header) :
    requestId_(std::move(header.requestId_)), instanceName_(STRDUP(header.instanceName_))
{
}

rpc::RequestHeader::~RequestHeader()
{
	if(instanceName_ != NULL)
		free(instanceName_);
}

rpc::RequestHeader& rpc::RequestHeader::operator=(const rpc::RequestHeader &header)
{
    requestId_ = header.requestId_;
	if(instanceName_ != NULL)
		free(instanceName_);
    instanceName_ = STRDUP(header.instanceName_);

    return *this;
}

rpc::RequestHeader& rpc::RequestHeader::operator=(rpc::RequestHeader &&header)
{
    requestId_ = std::move(header.requestId_);
    if(instanceName_ != NULL)
		free(instanceName_);
    instanceName_ = STRDUP(header.instanceName_);

    return *this;
}

size_t rpc::RequestHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += SampleIdentity::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 256; // Max string length + 1.

    return current_alignment - initial_alignment;
}

size_t rpc::RequestHeader::getCdrSerializedSize(size_t current_alignment) const
{
    size_t initial_alignment = current_alignment;

    current_alignment += requestId_.getCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + strlen(instanceName_) + 1;

    return current_alignment - initial_alignment;
}

void rpc::RequestHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << requestId_ << instanceName_;
}

void rpc::RequestHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    cdr >> requestId_ >> instanceName_;
}

rpc::ReplyHeader::ReplyHeader()
{
}

rpc::ReplyHeader::ReplyHeader(const rpc::ReplyHeader &header) :
    relatedRequestId_(header.relatedRequestId_), remoteEx_(header.remoteEx_)
{
}

rpc::ReplyHeader::ReplyHeader(rpc::ReplyHeader &&header) :
    relatedRequestId_(std::move(header.relatedRequestId_)), remoteEx_(header.remoteEx_)
{
}

rpc::ReplyHeader::~ReplyHeader()
{
}

rpc::ReplyHeader& rpc::ReplyHeader::operator=(const rpc::ReplyHeader &header)
{
    relatedRequestId_ = header.relatedRequestId_;
    remoteEx_ = header.remoteEx_;

    return *this;
}

rpc::ReplyHeader& rpc::ReplyHeader::operator=(rpc::ReplyHeader &&header)
{
    relatedRequestId_ = std::move(header.relatedRequestId_);
    remoteEx_ = header.remoteEx_;

    return *this;
}

size_t rpc::ReplyHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += SampleIdentity::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

size_t rpc::ReplyHeader::getCdrSerializedSize(size_t current_alignment) const
{
    size_t initial_alignment = current_alignment;

    current_alignment += relatedRequestId_.getCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    return current_alignment - initial_alignment;
}

void rpc::ReplyHeader::serialize(eprosima::fastcdr::Cdr &cdr) const
{
    cdr << relatedRequestId_ << static_cast<uint32_t>(remoteEx_);
}

void rpc::ReplyHeader::deserialize(eprosima::fastcdr::Cdr &cdr)
{
    uint32_t ex_value = 0;
    cdr >> relatedRequestId_ >> ex_value;
    remoteEx_ = static_cast<RemoteExceptionCode_t>(ex_value);
}
