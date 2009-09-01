#ifndef _CLIENTTEMPLATE_H_
#define _CLIENTTEMPLATE_H_

#include "client/DDSCSClient.h"
#include "function1TemplateRequestUtils.h"
#include "function1TemplateReplyUtils.h"

class ClientTemplate : public DDSCSClient
{
    public:

        /// \brief The default constructor.
        ClientTemplate();

        /// \brief The default destructor.
        virtual ~ClientTemplate(){}

        void function1Template(DDS_Long param1, DDS_Octet param2, DDS_Long &returnedValue);
};

#endif // _CLIENTTEMPLATE_H_

