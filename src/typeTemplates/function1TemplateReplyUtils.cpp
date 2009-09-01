#include "function1TemplateReplyUtils.h"
#include "function1TemplateReplySupport.h"

const char* function1TemplateReplyUtils::registerType(DDSDomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = function1TemplateReplyTypeSupport::get_type_name();

        if(function1TemplateReplyTypeSupport::register_type(clientParticipant, typeName) != DDS_RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

function1TemplateReply* function1TemplateReplyUtils::createTypeData(DDS_Long returnedValue)
{
    function1TemplateReply *instance = function1TemplateReplyTypeSupport::create_data();
    instance->returnedValue = returnedValue;

    return instance;
}

void function1TemplateReplyUtils::extractTypeData(function1TemplateReply *data, DDS_Long &returnedValue)
{
    returnedValue = data->returnedValue;
}

void* function1TemplateReplyUtils::createEmptyData()
{
    return function1TemplateReplyTypeSupport::create_data();
}

void function1TemplateReplyUtils::deleteData(void *data)
{
    function1TemplateReplyTypeSupport::delete_data((function1TemplateReply*)data);
}
