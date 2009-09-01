#include "client/ClientTemplate.h"

ClientTemplate::ClientTemplate() : DDSCSClient()
{
    this->createRemoteService("function1Template", function1TemplateRequestUtils::registerType(getParticipant()), function1TemplateReplyUtils::registerType(getParticipant()));
}

void ClientTemplate::function1Template(DDS_Long param1, DDS_Octet param2, DDS_Long &returnedValue)
{
    DDSCSMessages retValue;
    const char serviceName[50] = "function1Template";
    function1TemplateRequest *instance = NULL;
    function1TemplateReply *retInstance = (function1TemplateReply*)function1TemplateReplyUtils::createEmptyData();
    instance = function1TemplateRequestUtils::createTypeData(param1, param2);
    retValue = executeRemoteService(instance, serviceName, retInstance);

    switch (retValue)
    {
        case CLIENT_ERROR:
            printf("CLIENT ERROR\n");
            break;
        case RECEIVED_OTHER_REQUEST:
            printf("Y ESTE PAQUETE?\n");
            break;
        case SERVER_TIMEOUT:
            printf("TIMEOUT\n");
            break;
        case SERVER_ERROR:
            printf("SERVER ERROR\n");
            break;
        case WITHOUT_RESOURCES:
            printf("SERVER WITHOUT RESOURCES\n");
            break;
        case OPERATION_SUCCESSFUL:
            function1TemplateReplyUtils::extractTypeData(retInstance, returnedValue);
            function1TemplateReplyTypeSupport::print_data(retInstance);
            printf("RESULTADO: %lu\n", returnedValue);
            break;
    };
    function1TemplateRequestUtils::deleteData(retInstance);
    function1TemplateRequestUtils::deleteData(instance);
}
