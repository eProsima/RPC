#include "server/ServerTemplate.h"

ServerTemplate::ServerTemplate() : DDSCSServer()
{
    this->createRemoteService("function1Template", function1TemplateRequestUtils::registerType(getParticipant()),
            function1TemplateReplyUtils::registerType(getParticipant()),
            function1TemplateRequestUtils::createEmptyData, function1TemplateRequestUtils::deleteData,
            function1TemplateReplyUtils::createEmptyData, function1TemplateReplyUtils::deleteData,
            ServerTemplate::EXfunction1Template);
}

void ServerTemplate::EXfunction1Template(DDSCSServer *server, void *requestData)
{
    DDS_Long param1;
    DDS_Octet param2;
    DDS_Long returnedValue;
    function1TemplateReply *replyData = NULL;

    function1TemplateRequestUtils::extractTypeData((function1TemplateRequest*)requestData, param1, param2);
    function1Template(param1, param2, returnedValue);
    printf("VALUE %ld\n", returnedValue);
    replyData = function1TemplateReplyUtils::createTypeData(returnedValue);
    server->sendReply("function1Template", requestData, replyData);
    function1TemplateRequestUtils::deleteData(requestData);
    function1TemplateRequestUtils::deleteData(replyData);
}

void ServerTemplate::function1Template(DDS_Long param1, DDS_Octet param2, DDS_Long &returnedValue)
{
    DDS_Duration_t dur = {1, 0};
    returnedValue = param1 + param2;
    NDDSUtility::sleep(dur);
}
