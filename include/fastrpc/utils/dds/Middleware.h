/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_DDS_MIDDLEWARE_H_
#define _UTILS_DDS_MIDDLEWARE_H_

#if defined(RTI_WIN32) || defined(RTI_LINUX)

#include "ndds_namespace_cpp.h"

#define PARTICIPANT_QOS_DEFAULT DDS::PARTICIPANT_QOS_DEFAULT
#define PUBLISHER_QOS_DEFAULT DDS::PUBLISHER_QOS_DEFAULT
#define TOPIC_QOS_DEFAULT DDS::TOPIC_QOS_DEFAULT
#define SUBSCRIBER_QOS_DEFAULT DDS::SUBSCRIBER_QOS_DEFAULT
#define STATUS_MASK_NONE DDS::STATUS_MASK_NONE
#define BOOLEAN_FALSE DDS::BOOLEAN_FALSE
#define BOOLEAN_TRUE DDS::BOOLEAN_TRUE
#define strdup DDS::String_dup
#define EPROSIMA_UINT32 RTI_UINT32


#elif defined(OPENDDS)

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
#define EPROSIMA_UINT32 ::CORBA::ULong

#endif

namespace eprosima
{
    namespace rpc
    {
        namespace util
        {
            namespace dds
            {
                void get_guid(unsigned int *id, DDS::DataWriter *datawriter);

                void set_redundant_feature(DDS::DataReader *datareader, DDS::DataReaderQos &rQos);

                void set_max_query_condition_filters(DDS::DataReaderQos &rQos);

                void set_datareader_protocol(DDS::DataReaderQos &rQos);

                void set_datawriter_protocol(DDS::DataWriterQos &wQos);

                void increase_buffers(DDS::DomainParticipantQos &pQos);

                DDS::DomainParticipantFactory* getFactory(int domainId);
            } //namespace dds
        } // namespace util
    } // namespace rpc
} // namespace eprosima

#endif // _UTILS_DDS_MIDDLEWARE_H_
