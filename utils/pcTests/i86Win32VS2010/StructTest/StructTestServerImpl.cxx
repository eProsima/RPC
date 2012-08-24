/** 
 * Generated by DDSCS                                               *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "StructTestServerImpl.h"

StructTestImpl::StructTestImpl()
{
}
StructTestImpl::~StructTestImpl()
{
}

 
DDSCSMessages
 StructTestImpl::duplicate(Envio & ev ,Recepcion  &duplicate_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  duplicate_ret.devolucion = ev.dato;
  duplicate_ret.message = DDS_String_dup(ev.message);
  
  return retCode;
} 
 
DDSCSMessages
 StructTestImpl::suma(Envio & ev1, Envio & ev2 ,Recepcion  &suma_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  suma_ret.devolucion = ev1.dato + ev2.dato;
  suma_ret.message = DDS_String_alloc(strlen(ev1.message) + strlen(ev2.message) + 1);
  _snprintf(suma_ret.message, strlen(ev1.message) + strlen(ev2.message) + 1, "%s%s", ev1.message, ev2.message);
  
  return retCode;
} 