#ifndef _StructTestIMPL_H_
#define _StructTestIMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/DDSCSMessages.h"
#include "StructTestRequestReplyUtils.h"

class StructTestImpl
{
    public:

        /// \brief The default constructor.
        StructTestImpl();

        /// \brief The default destructor.
        virtual ~StructTestImpl();

         
        DDSCSMessages
         duplicate(Envio & ev ,Recepcion  &duplicate_ret);
         
        DDSCSMessages
         suma(Envio & ev1, Envio & ev2 ,Recepcion  &suma_ret);
};

#endif // _StructTestIMPL_H_