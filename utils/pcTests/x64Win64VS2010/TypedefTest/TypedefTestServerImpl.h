#ifndef _TypedefTestIMPL_H_
#define _TypedefTestIMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "TypedefTestRequestReplyUtils.h"

class TypedefTestImpl
{
    public:

        /// \brief The default constructor.
        TypedefTestImpl();

        /// \brief The default destructor.
        virtual ~TypedefTestImpl();

         
        eProsima::DDSRPC::ReturnMessage
         getLargo(largo l1 ,largo &l2, largo &getLargo_ret);
         
        eProsima::DDSRPC::ReturnMessage
         getLarguisimo(larguisimo ll1 ,larguisimo &ll2, larguisimo &getLarguisimo_ret);
         
        eProsima::DDSRPC::ReturnMessage
         getDatosDef(DatosDef* d1 ,DatosDef* &d2, DatosDef* &getDatosDef_ret);
         
        eProsima::DDSRPC::ReturnMessage
         getDatosDefondo(DatosDefondo* dd1 ,DatosDefondo* &dd2, DatosDefondo* &getDatosDefondo_ret);
         
        eProsima::DDSRPC::ReturnMessage
         getCadena(cadena c1 ,cadena &c2, cadena &getCadena_ret);
         
        eProsima::DDSRPC::ReturnMessage
         getCorrea(correa cc1 ,correa &cc2, correa &getCorrea_ret);
};

#endif // _TypedefTestIMPL_H_