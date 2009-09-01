#include "function1TemplateRequestUtils.h"

const char* function1TemplateRequestUtils::registerType(DDSDomainParticipant *clientParticipant)
{
    const char *typeName = NULL;

    if(clientParticipant != NULL)
    {
        typeName = function1TemplateRequestTypeSupport::get_type_name();

        if(function1TemplateRequestTypeSupport::register_type(clientParticipant, typeName) != DDS_RETCODE_OK)
        {
            return NULL;
        }
    }

    return typeName;
}

function1TemplateRequest* function1TemplateRequestUtils::createTypeData(DDS_Long param1, DDS_Octet param2)
{
    function1TemplateRequest* instance = function1TemplateRequestTypeSupport::create_data();

    instance->param1 = param1;
    instance->param2 = param2;

    return instance;
}

void function1TemplateRequestUtils::extractTypeData(function1TemplateRequest *data, DDS_Long &param1, DDS_Octet &param2)
{
    param1 = data->param1;
    param2 = data->param2;
}

void* function1TemplateRequestUtils::createEmptyData()
{
    return function1TemplateRequestTypeSupport::create_data();
}

void function1TemplateRequestUtils::deleteData(void *data)
{
    function1TemplateRequestTypeSupport::delete_data((function1TemplateRequest*)data);
}
