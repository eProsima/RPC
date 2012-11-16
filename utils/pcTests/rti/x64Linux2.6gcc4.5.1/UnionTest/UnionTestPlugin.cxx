
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#include <string.h>

#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

#ifndef osapi_type_h
  #include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
  #include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
  #include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
  #include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
  #include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
  #include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
  #include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
  #include "pres/pres_typePlugin.h"
#endif



#include "UnionTestPlugin.h"


/* --------------------------------------------------------------------------------------
 *  Type Empleado
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

Empleado *
EmpleadoPluginSupport_create_data_ex(RTIBool allocate_pointers){
    Empleado *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, Empleado);

    if(sample != NULL) {
        if (!Empleado_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


Empleado *
EmpleadoPluginSupport_create_data(void)
{
    return EmpleadoPluginSupport_create_data_ex(RTI_TRUE);
}


void 
EmpleadoPluginSupport_destroy_data_ex(
    Empleado *sample,RTIBool deallocate_pointers) {

    Empleado_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
EmpleadoPluginSupport_destroy_data(
    Empleado *sample) {

    EmpleadoPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
EmpleadoPluginSupport_copy_data(
    Empleado *dst,
    const Empleado *src)
{
    return Empleado_copy(dst,src);
}


void 
EmpleadoPluginSupport_print_data(
    const Empleado *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }


    RTICdrType_printChar(
        &sample->_d, "_d", indent_level + 1);
            

    switch(sample->_d) {
          case 1:
        {                                    
        
    RTICdrType_printLong(
        &sample->_u.id, "_u.id", indent_level + 1);
            

        } break;
      case 2:
        {                                    
        
    if (&sample->_u.name==NULL) {
        RTICdrType_printString(
            NULL, "_u.name", indent_level + 1);                
    } else {
        RTICdrType_printString(
            sample->_u.name, "_u.name", indent_level + 1);                
    }
            

        } break;
              
    }
      

}

 


RTIBool 
EmpleadoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *dst,
    const Empleado *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return EmpleadoPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
EmpleadoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
EmpleadoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Empleado *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (!RTICdrStream_serializeChar(
        stream, &sample->_d)) {
        return RTI_FALSE;
    }
            

    switch(sample->_d) {
          case 1:
        {                                    
        
    if (!RTICdrStream_serializeLong(
        stream, &sample->_u.id)) {
        return RTI_FALSE;
    }
            

        } break;
      case 2:
        {                                    
        
    if (!RTICdrStream_serializeString(
        stream, sample->_u.name, (255) + 1)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
EmpleadoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
    
    if (!RTICdrStream_deserializeChar(
        stream, &sample->_d)) {
        return RTI_FALSE;
    }

    switch(sample->_d) {
          case 1:
        {                                    
        
    if (!RTICdrStream_deserializeLong(
        stream, &sample->_u.id)) {
        return RTI_FALSE;
    }

        } break;
      case 2:
        {                                    
        
    if (!RTICdrStream_deserializeString(
        stream, sample->_u.name, (255) + 1)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
EmpleadoPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Empleado **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    if (drop_sample) {} /* To avoid warnings */

    return EmpleadoPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
 
}




RTIBool EmpleadoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {
DDS_Char    disc;

    if (!RTICdrStream_deserializeChar(
        stream, &disc)) {
        return RTI_FALSE;
    }

    switch(disc) {
          case 1:
        {                                    
        
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            

        } break;
      case 2:
        {                                    
        
    if (!RTICdrStream_skipString(stream, (255) + 1)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      

    }
    

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
EmpleadoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int union_max_size_serialized = 0;

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    union_max_size_serialized = RTIOsapiUtility_max( RTICdrType_getLongMaxSizeSerialized(
        current_alignment), union_max_size_serialized);
            

    union_max_size_serialized = RTIOsapiUtility_max( RTICdrType_getStringMaxSizeSerialized(
        current_alignment, (255) + 1), union_max_size_serialized);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return union_max_size_serialized + current_alignment - initial_alignment;
}


unsigned int 
EmpleadoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int union_min_size_serialized = 0xffffffff;

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    union_min_size_serialized = RTIOsapiUtility_min( RTICdrType_getLongMaxSizeSerialized(
        current_alignment), union_min_size_serialized);
            

    union_min_size_serialized = RTIOsapiUtility_min( RTICdrType_getStringMaxSizeSerialized(
        current_alignment, 1), union_min_size_serialized);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return union_min_size_serialized + current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
EmpleadoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Empleado * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    switch(sample->_d) {
          case 1:
        {                                    
        
    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

        } break;
      case 2:
        {                                    
        
    current_alignment += RTICdrType_getStringSerializedSize(
        current_alignment, sample->_u.name);
            

        } break;
              
    }
      
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
EmpleadoPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
EmpleadoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Empleado *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

        if (!EmpleadoPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool EmpleadoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!EmpleadoPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool EmpleadoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Empleado **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    if (drop_sample) {} /* To avoid warnings */
    return EmpleadoPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
}



unsigned int
EmpleadoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment += EmpleadoPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
EmpleadoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!EmpleadoPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
