#ifndef _SERVERTEMPLATE_H_
#define _SERVERTEMPLATE_H_
#endif // _SERVERTEMPLATE_H_

#include "server/DDSCSServer.h"
#include "function1TemplateRequestUtils.h"
#include "function1TemplateReplyUtils.h"

class ServerTemplate : public DDSCSServer
{
    public:

        /// \brief The default constructor.
        ServerTemplate();

        /// \brief The default destructor.
        virtual ~ServerTemplate(){}

        static void EXfunction1Template(DDSCSServer *server, void *requestData);

        static void function1Template(DDS_Long param1, DDS_Octet param2, DDS_Long &returnedValue);
};
