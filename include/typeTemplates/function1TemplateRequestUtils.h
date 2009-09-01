#ifndef _FUNCTION1TEMPLATEREQUESTUTILS_H_
#define _FUNCTION1TEMPLATEREQUESTUTILS_H_

#include "dds_cpp/dds_cpp_domain.h"
#include "function1TemplateRequestSupport.h"

class function1TemplateRequestUtils
{
    public:

        static const char* registerType(DDSDomainParticipant *clientParticipant);
        
        static function1TemplateRequest* createTypeData(DDS_Long param1, DDS_Octet param2);
        
        static void extractTypeData(function1TemplateRequest *data, DDS_Long &param1, DDS_Octet &param2);

        static void* createEmptyData();
        
        static void deleteData(void *data);
};
#endif // _FUNCTION1TEMPLATEREQUESTUTILS_H-
