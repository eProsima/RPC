#ifndef _UTILS_VERSION_H_
#define _UTILS_VERSION_H_

#ifdef RTI_LINUX

#include "ndds_namespace_cpp.h"

#define PARTICIPANT_QOS_DEFAULT DDS::PARTICIPANT_QOS_DEFAULT
#define PUBLISHER_QOS_DEFAULT DDS::PUBLISHER_QOS_DEFAULT
#define TOPIC_QOS_DEFAULT DDS::TOPIC_QOS_DEFAULT
#define SUBSCRIBER_QOS_DEFAULT DDS::SUBSCRIBER_QOS_DEFAULT
#define STATUS_MASK_NONE DDS::STATUS_MASK_NONE
#define BOOLEAN_FALSE DDS::BOOLEAN_FALSE
#define BOOLEAN_TRUE DDS::BOOLEAN_TRUE
#define strdup DDS::String_dup


#elif defined(OPENDDS_LINUX)

#include "dds/DdsDcpsC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/Marked_Default_Qos.h"
#include "dds/DCPS/GuardCondition.h"
#include "dds/DCPS/DataWriterImpl.h"

#define STATUS_MASK_NONE OpenDDS::DCPS::NO_STATUS_MASK 
#define BOOLEAN_FALSE false
#define BOOLEAN_TRUE true
#define DDS_InstanceHandle_is_nil(ih) (ih == 0)

#endif

#endif // _UTILS_VERSION_H_
