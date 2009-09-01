#ifndef _FUNCTION1TEMPLATEREPLYUTILS_H_
#define _FUNCTION1TEMPLATEREPLYUTILS_H_

#include "dds_cpp/dds_cpp_domain.h"
#include "function1TemplateReplySupport.h"

class function1TemplateReplyUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);

        static function1TemplateReply* createTypeData(DDS_Long returnedValue);

        static void extractTypeData(function1TemplateReply *data, DDS_Long &returnedValue);

        static void* createEmptyData();

        static void deleteData(void *data);
};
#endif // _FUNCTION1TEMPLATEREPLYUTILS_H-

