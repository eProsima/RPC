// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file CalculatorTopicsPlugin.h
 * This header file contains the declaration of methods used by DDS middleware.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_TOPICS_PLUGIN_H_
#define _Calculator_TOPICS_PLUGIN_H_

#include "CalculatorTopics.h"

#include <fastrtps/TopicDataType.h>


#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class Calculator_RequestPlugin : public eprosima::fastrtps::TopicDataType
{
    public:

        eProsima_user_DllExport Calculator_RequestPlugin();

        virtual eProsima_user_DllExport ~Calculator_RequestPlugin();

        eProsima_user_DllExport bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t* ihandle, bool force_md5);

        eProsima_user_DllExport bool serialize(
                void* data,
                eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
        {
            return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
        }

        eProsima_user_DllExport bool serialize(
                void* data,
                eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

        eProsima_user_DllExport bool deserialize(
                eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                void* data) override;

        eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                void* data) override
        {
            return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
        }

        eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                void* data,
                eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

        eProsima_user_DllExport void* createData();

        eProsima_user_DllExport static void* create_data();

        eProsima_user_DllExport void deleteData(void *data);

        eProsima_user_DllExport static void delete_data(void *data);

        eProsima_user_DllExport static void copy_data(Calculator_Request *dst,
                const Calculator_Request *src);
};

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class Calculator_ReplyPlugin : public eprosima::fastrtps::TopicDataType
{
    public:

        eProsima_user_DllExport Calculator_ReplyPlugin();

        virtual eProsima_user_DllExport ~Calculator_ReplyPlugin();

        eProsima_user_DllExport bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t* ihandle, bool force_md5);

        eProsima_user_DllExport bool serialize(
                void* data,
                eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
        {
            return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
        }

        eProsima_user_DllExport bool serialize(
                void* data,
                eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

        eProsima_user_DllExport bool deserialize(
                eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                void* data) override;

        eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                void* data) override
        {
            return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
        }

        eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
                void* data,
                eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

        eProsima_user_DllExport void* createData();

        eProsima_user_DllExport static void* create_data();

        eProsima_user_DllExport void deleteData(void *data);

        eProsima_user_DllExport static void delete_data(void *data);

        eProsima_user_DllExport static void copy_data(Calculator_Reply *dst,
                const Calculator_Reply *src);
};


#endif // _Calculator_TOPICS_PLUGIN_H_