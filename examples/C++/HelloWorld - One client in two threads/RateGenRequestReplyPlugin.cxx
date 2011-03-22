
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
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

#ifndef cdr_encapsulation_h
  #include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
  #include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
  #include "pres/pres_typePlugin.h"
#endif



#ifndef RateGenRequestReplyPlugin_h
#include "RateGenRequestReplyPlugin.h"
#endif


/* --------------------------------------------------------------------------------------
 *  Type subscribe_PulseRequest
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


subscribe_PulseRequest *
subscribe_PulseRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
    subscribe_PulseRequest *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, subscribe_PulseRequest);

    if(sample != NULL) {
        if (!subscribe_PulseRequest_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


subscribe_PulseRequest *
subscribe_PulseRequestPluginSupport_create_data()
{
    return subscribe_PulseRequestPluginSupport_create_data_ex(RTI_TRUE);
}


void 
subscribe_PulseRequestPluginSupport_destroy_data_ex(
    subscribe_PulseRequest *sample,RTIBool deallocate_pointers) {

    subscribe_PulseRequest_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
subscribe_PulseRequestPluginSupport_destroy_data(
    subscribe_PulseRequest *sample) {

    subscribe_PulseRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
subscribe_PulseRequestPluginSupport_copy_data(
    subscribe_PulseRequest *dst,
    const subscribe_PulseRequest *src)
{
    return subscribe_PulseRequest_copy(dst,src);
}


void 
subscribe_PulseRequestPluginSupport_print_data(
    const subscribe_PulseRequest *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    tickConsumerPluginSupport_print_data(
        &sample->c, "c", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->i, "i", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->kk, "kk", indent_level + 1);
            

}

subscribe_PulseRequest *
subscribe_PulseRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
    subscribe_PulseRequest *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, subscribe_PulseRequestKeyHolder);

    subscribe_PulseRequest_initialize_ex(key,allocate_pointers);
    return key;
}


subscribe_PulseRequest *
subscribe_PulseRequestPluginSupport_create_key()
{
    return  subscribe_PulseRequestPluginSupport_create_key_ex(RTI_TRUE);
}


void 
subscribe_PulseRequestPluginSupport_destroy_key_ex(
    subscribe_PulseRequestKeyHolder *key,RTIBool deallocate_pointers)
{
    subscribe_PulseRequest_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
subscribe_PulseRequestPluginSupport_destroy_key(
    subscribe_PulseRequestKeyHolder *key) {

  subscribe_PulseRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
subscribe_PulseRequestPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
subscribe_PulseRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
subscribe_PulseRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            subscribe_PulseRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            subscribe_PulseRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            subscribe_PulseRequestPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            subscribe_PulseRequestPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = subscribe_PulseRequestPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                subscribe_PulseRequestPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            subscribe_PulseRequestPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
subscribe_PulseRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
subscribe_PulseRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *dst,
    const subscribe_PulseRequest *src)
{
    return subscribe_PulseRequestPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
subscribe_PulseRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_serialize(
            endpoint_data,
            &sample->c, 
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->i)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->kk)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
subscribe_PulseRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_deserialize(
            endpoint_data,
            &sample->c,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->i)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->kk)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool subscribe_PulseRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
subscribe_PulseRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  tickConsumerPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
subscribe_PulseRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  tickConsumerPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
subscribe_PulseRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return subscribe_PulseRequestPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
subscribe_PulseRequestPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
subscribe_PulseRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool subscribe_PulseRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
subscribe_PulseRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
subscribe_PulseRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
subscribe_PulseRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequestKeyHolder *dst, 
    const subscribe_PulseRequest *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *dst, const
    subscribe_PulseRequestKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const subscribe_PulseRequest *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!subscribe_PulseRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    subscribe_PulseRequest * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (subscribe_PulseRequest *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!subscribe_PulseRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *subscribe_PulseRequestPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        subscribe_PulseRequestPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        subscribe_PulseRequestPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        subscribe_PulseRequestPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        subscribe_PulseRequestPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        subscribe_PulseRequestPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        subscribe_PulseRequestPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        subscribe_PulseRequestPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        subscribe_PulseRequestPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        subscribe_PulseRequestPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        subscribe_PulseRequestPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        subscribe_PulseRequestPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        subscribe_PulseRequestPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        subscribe_PulseRequestPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        subscribe_PulseRequestPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        subscribe_PulseRequestPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        subscribe_PulseRequestPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        subscribe_PulseRequestPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        subscribe_PulseRequestPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        subscribe_PulseRequestPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        subscribe_PulseRequestPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        subscribe_PulseRequestPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        subscribe_PulseRequestPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        subscribe_PulseRequestPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)subscribe_PulseRequest_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        subscribe_PulseRequestPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        subscribe_PulseRequestPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        subscribe_PulseRequestPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = subscribe_PulseRequestTYPENAME;

    return plugin;
}

void
subscribe_PulseRequestPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type subscribe_PulseReply
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


subscribe_PulseReply *
subscribe_PulseReplyPluginSupport_create_data_ex(RTIBool allocate_pointers){
    subscribe_PulseReply *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, subscribe_PulseReply);

    if(sample != NULL) {
        if (!subscribe_PulseReply_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


subscribe_PulseReply *
subscribe_PulseReplyPluginSupport_create_data()
{
    return subscribe_PulseReplyPluginSupport_create_data_ex(RTI_TRUE);
}


void 
subscribe_PulseReplyPluginSupport_destroy_data_ex(
    subscribe_PulseReply *sample,RTIBool deallocate_pointers) {

    subscribe_PulseReply_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
subscribe_PulseReplyPluginSupport_destroy_data(
    subscribe_PulseReply *sample) {

    subscribe_PulseReplyPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
subscribe_PulseReplyPluginSupport_copy_data(
    subscribe_PulseReply *dst,
    const subscribe_PulseReply *src)
{
    return subscribe_PulseReply_copy(dst,src);
}


void 
subscribe_PulseReplyPluginSupport_print_data(
    const subscribe_PulseReply *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->ddscsRetCode, "ddscsRetCode", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->kk, "kk", indent_level + 1);
            
    RTICdrType_printOctet(
        &sample->ret1, "ret1", indent_level + 1);
            
    CookiePluginSupport_print_data(
        &sample->returnedValue, "returnedValue", indent_level + 1);
            

}

subscribe_PulseReply *
subscribe_PulseReplyPluginSupport_create_key_ex(RTIBool allocate_pointers){
    subscribe_PulseReply *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, subscribe_PulseReplyKeyHolder);

    subscribe_PulseReply_initialize_ex(key,allocate_pointers);
    return key;
}


subscribe_PulseReply *
subscribe_PulseReplyPluginSupport_create_key()
{
    return  subscribe_PulseReplyPluginSupport_create_key_ex(RTI_TRUE);
}


void 
subscribe_PulseReplyPluginSupport_destroy_key_ex(
    subscribe_PulseReplyKeyHolder *key,RTIBool deallocate_pointers)
{
    subscribe_PulseReply_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
subscribe_PulseReplyPluginSupport_destroy_key(
    subscribe_PulseReplyKeyHolder *key) {

  subscribe_PulseReplyPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
subscribe_PulseReplyPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
subscribe_PulseReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
subscribe_PulseReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            subscribe_PulseReplyPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            subscribe_PulseReplyPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            subscribe_PulseReplyPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            subscribe_PulseReplyPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = subscribe_PulseReplyPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                subscribe_PulseReplyPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            subscribe_PulseReplyPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
subscribe_PulseReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
subscribe_PulseReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *dst,
    const subscribe_PulseReply *src)
{
    return subscribe_PulseReplyPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
subscribe_PulseReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->kk)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeOctet(
        stream, &sample->ret1)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_serialize(
            endpoint_data,
            &sample->returnedValue, 
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
subscribe_PulseReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->kk)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeOctet(
        stream, &sample->ret1)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_deserialize(
            endpoint_data,
            &sample->returnedValue,
            stream, 
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


RTIBool subscribe_PulseReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipOctet(stream)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
subscribe_PulseReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  CookiePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
subscribe_PulseReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  CookiePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
subscribe_PulseReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return subscribe_PulseReplyPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
subscribe_PulseReplyPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
subscribe_PulseReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool subscribe_PulseReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
subscribe_PulseReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
subscribe_PulseReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipOctet(stream)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_skip(
            endpoint_data,
            stream, 
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





RTIBool 
subscribe_PulseReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReplyKeyHolder *dst, 
    const subscribe_PulseReply *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *dst, const
    subscribe_PulseReplyKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const subscribe_PulseReply *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!subscribe_PulseReplyPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
subscribe_PulseReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    subscribe_PulseReply * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (subscribe_PulseReply *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!subscribe_PulseReplyPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *subscribe_PulseReplyPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        subscribe_PulseReplyPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        subscribe_PulseReplyPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        subscribe_PulseReplyPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        subscribe_PulseReplyPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        subscribe_PulseReplyPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        subscribe_PulseReplyPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        subscribe_PulseReplyPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        subscribe_PulseReplyPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        subscribe_PulseReplyPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        subscribe_PulseReplyPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        subscribe_PulseReplyPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        subscribe_PulseReplyPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        subscribe_PulseReplyPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        subscribe_PulseReplyPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        subscribe_PulseReplyPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        subscribe_PulseReplyPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        subscribe_PulseReplyPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        subscribe_PulseReplyPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        subscribe_PulseReplyPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        subscribe_PulseReplyPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        subscribe_PulseReplyPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        subscribe_PulseReplyPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        subscribe_PulseReplyPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)subscribe_PulseReply_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        subscribe_PulseReplyPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        subscribe_PulseReplyPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        subscribe_PulseReplyPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = subscribe_PulseReplyTYPENAME;

    return plugin;
}

void
subscribe_PulseReplyPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type unsubscribe_PulseRequest
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


unsubscribe_PulseRequest *
unsubscribe_PulseRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
    unsubscribe_PulseRequest *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, unsubscribe_PulseRequest);

    if(sample != NULL) {
        if (!unsubscribe_PulseRequest_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


unsubscribe_PulseRequest *
unsubscribe_PulseRequestPluginSupport_create_data()
{
    return unsubscribe_PulseRequestPluginSupport_create_data_ex(RTI_TRUE);
}


void 
unsubscribe_PulseRequestPluginSupport_destroy_data_ex(
    unsubscribe_PulseRequest *sample,RTIBool deallocate_pointers) {

    unsubscribe_PulseRequest_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
unsubscribe_PulseRequestPluginSupport_destroy_data(
    unsubscribe_PulseRequest *sample) {

    unsubscribe_PulseRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
unsubscribe_PulseRequestPluginSupport_copy_data(
    unsubscribe_PulseRequest *dst,
    const unsubscribe_PulseRequest *src)
{
    return unsubscribe_PulseRequest_copy(dst,src);
}


void 
unsubscribe_PulseRequestPluginSupport_print_data(
    const unsubscribe_PulseRequest *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    CookiePluginSupport_print_data(
        &sample->ck, "ck", indent_level + 1);
            

}

unsubscribe_PulseRequest *
unsubscribe_PulseRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
    unsubscribe_PulseRequest *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, unsubscribe_PulseRequestKeyHolder);

    unsubscribe_PulseRequest_initialize_ex(key,allocate_pointers);
    return key;
}


unsubscribe_PulseRequest *
unsubscribe_PulseRequestPluginSupport_create_key()
{
    return  unsubscribe_PulseRequestPluginSupport_create_key_ex(RTI_TRUE);
}


void 
unsubscribe_PulseRequestPluginSupport_destroy_key_ex(
    unsubscribe_PulseRequestKeyHolder *key,RTIBool deallocate_pointers)
{
    unsubscribe_PulseRequest_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
unsubscribe_PulseRequestPluginSupport_destroy_key(
    unsubscribe_PulseRequestKeyHolder *key) {

  unsubscribe_PulseRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
unsubscribe_PulseRequestPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
unsubscribe_PulseRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
unsubscribe_PulseRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            unsubscribe_PulseRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            unsubscribe_PulseRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            unsubscribe_PulseRequestPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            unsubscribe_PulseRequestPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = unsubscribe_PulseRequestPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                unsubscribe_PulseRequestPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            unsubscribe_PulseRequestPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
unsubscribe_PulseRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
unsubscribe_PulseRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *dst,
    const unsubscribe_PulseRequest *src)
{
    return unsubscribe_PulseRequestPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
unsubscribe_PulseRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_serialize(
            endpoint_data,
            &sample->ck, 
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_deserialize(
            endpoint_data,
            &sample->ck,
            stream, 
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


RTIBool unsubscribe_PulseRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
unsubscribe_PulseRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  CookiePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
unsubscribe_PulseRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  CookiePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
unsubscribe_PulseRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return unsubscribe_PulseRequestPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
unsubscribe_PulseRequestPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
unsubscribe_PulseRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool unsubscribe_PulseRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
unsubscribe_PulseRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
unsubscribe_PulseRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!CookiePlugin_skip(
            endpoint_data,
            stream, 
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





RTIBool 
unsubscribe_PulseRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequestKeyHolder *dst, 
    const unsubscribe_PulseRequest *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *dst, const
    unsubscribe_PulseRequestKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const unsubscribe_PulseRequest *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!unsubscribe_PulseRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    unsubscribe_PulseRequest * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (unsubscribe_PulseRequest *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!unsubscribe_PulseRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *unsubscribe_PulseRequestPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        unsubscribe_PulseRequestPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        unsubscribe_PulseRequestPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        unsubscribe_PulseRequestPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        unsubscribe_PulseRequestPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        unsubscribe_PulseRequestPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        unsubscribe_PulseRequestPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        unsubscribe_PulseRequestPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        unsubscribe_PulseRequestPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        unsubscribe_PulseRequestPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        unsubscribe_PulseRequestPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        unsubscribe_PulseRequestPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        unsubscribe_PulseRequestPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        unsubscribe_PulseRequestPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        unsubscribe_PulseRequestPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        unsubscribe_PulseRequestPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        unsubscribe_PulseRequestPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        unsubscribe_PulseRequestPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        unsubscribe_PulseRequestPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        unsubscribe_PulseRequestPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        unsubscribe_PulseRequestPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        unsubscribe_PulseRequestPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        unsubscribe_PulseRequestPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        unsubscribe_PulseRequestPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)unsubscribe_PulseRequest_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        unsubscribe_PulseRequestPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        unsubscribe_PulseRequestPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        unsubscribe_PulseRequestPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = unsubscribe_PulseRequestTYPENAME;

    return plugin;
}

void
unsubscribe_PulseRequestPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type unsubscribe_PulseReply
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


unsubscribe_PulseReply *
unsubscribe_PulseReplyPluginSupport_create_data_ex(RTIBool allocate_pointers){
    unsubscribe_PulseReply *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, unsubscribe_PulseReply);

    if(sample != NULL) {
        if (!unsubscribe_PulseReply_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


unsubscribe_PulseReply *
unsubscribe_PulseReplyPluginSupport_create_data()
{
    return unsubscribe_PulseReplyPluginSupport_create_data_ex(RTI_TRUE);
}


void 
unsubscribe_PulseReplyPluginSupport_destroy_data_ex(
    unsubscribe_PulseReply *sample,RTIBool deallocate_pointers) {

    unsubscribe_PulseReply_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
unsubscribe_PulseReplyPluginSupport_destroy_data(
    unsubscribe_PulseReply *sample) {

    unsubscribe_PulseReplyPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
unsubscribe_PulseReplyPluginSupport_copy_data(
    unsubscribe_PulseReply *dst,
    const unsubscribe_PulseReply *src)
{
    return unsubscribe_PulseReply_copy(dst,src);
}


void 
unsubscribe_PulseReplyPluginSupport_print_data(
    const unsubscribe_PulseReply *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->ddscsRetCode, "ddscsRetCode", indent_level + 1);
            
    tickConsumerPluginSupport_print_data(
        &sample->returnedValue, "returnedValue", indent_level + 1);
            

}

unsubscribe_PulseReply *
unsubscribe_PulseReplyPluginSupport_create_key_ex(RTIBool allocate_pointers){
    unsubscribe_PulseReply *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, unsubscribe_PulseReplyKeyHolder);

    unsubscribe_PulseReply_initialize_ex(key,allocate_pointers);
    return key;
}


unsubscribe_PulseReply *
unsubscribe_PulseReplyPluginSupport_create_key()
{
    return  unsubscribe_PulseReplyPluginSupport_create_key_ex(RTI_TRUE);
}


void 
unsubscribe_PulseReplyPluginSupport_destroy_key_ex(
    unsubscribe_PulseReplyKeyHolder *key,RTIBool deallocate_pointers)
{
    unsubscribe_PulseReply_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
unsubscribe_PulseReplyPluginSupport_destroy_key(
    unsubscribe_PulseReplyKeyHolder *key) {

  unsubscribe_PulseReplyPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
unsubscribe_PulseReplyPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
unsubscribe_PulseReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
unsubscribe_PulseReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            unsubscribe_PulseReplyPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            unsubscribe_PulseReplyPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            unsubscribe_PulseReplyPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            unsubscribe_PulseReplyPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = unsubscribe_PulseReplyPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                unsubscribe_PulseReplyPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            unsubscribe_PulseReplyPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
unsubscribe_PulseReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
unsubscribe_PulseReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *dst,
    const unsubscribe_PulseReply *src)
{
    return unsubscribe_PulseReplyPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
unsubscribe_PulseReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_serialize(
            endpoint_data,
            &sample->returnedValue, 
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_deserialize(
            endpoint_data,
            &sample->returnedValue,
            stream, 
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


RTIBool unsubscribe_PulseReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
unsubscribe_PulseReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  tickConsumerPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
unsubscribe_PulseReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  tickConsumerPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
unsubscribe_PulseReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return unsubscribe_PulseReplyPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
unsubscribe_PulseReplyPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
unsubscribe_PulseReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool unsubscribe_PulseReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
unsubscribe_PulseReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
unsubscribe_PulseReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumerPlugin_skip(
            endpoint_data,
            stream, 
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





RTIBool 
unsubscribe_PulseReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReplyKeyHolder *dst, 
    const unsubscribe_PulseReply *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *dst, const
    unsubscribe_PulseReplyKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const unsubscribe_PulseReply *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!unsubscribe_PulseReplyPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
unsubscribe_PulseReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    unsubscribe_PulseReply * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (unsubscribe_PulseReply *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!unsubscribe_PulseReplyPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *unsubscribe_PulseReplyPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        unsubscribe_PulseReplyPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        unsubscribe_PulseReplyPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        unsubscribe_PulseReplyPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        unsubscribe_PulseReplyPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        unsubscribe_PulseReplyPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        unsubscribe_PulseReplyPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        unsubscribe_PulseReplyPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        unsubscribe_PulseReplyPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        unsubscribe_PulseReplyPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        unsubscribe_PulseReplyPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        unsubscribe_PulseReplyPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        unsubscribe_PulseReplyPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        unsubscribe_PulseReplyPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        unsubscribe_PulseReplyPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        unsubscribe_PulseReplyPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        unsubscribe_PulseReplyPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        unsubscribe_PulseReplyPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        unsubscribe_PulseReplyPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        unsubscribe_PulseReplyPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        unsubscribe_PulseReplyPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        unsubscribe_PulseReplyPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        unsubscribe_PulseReplyPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        unsubscribe_PulseReplyPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)unsubscribe_PulseReply_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        unsubscribe_PulseReplyPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        unsubscribe_PulseReplyPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        unsubscribe_PulseReplyPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = unsubscribe_PulseReplyTYPENAME;

    return plugin;
}

void
unsubscribe_PulseReplyPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type noReturnFunctionRequest
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


noReturnFunctionRequest *
noReturnFunctionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers){
    noReturnFunctionRequest *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, noReturnFunctionRequest);

    if(sample != NULL) {
        if (!noReturnFunctionRequest_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


noReturnFunctionRequest *
noReturnFunctionRequestPluginSupport_create_data()
{
    return noReturnFunctionRequestPluginSupport_create_data_ex(RTI_TRUE);
}


void 
noReturnFunctionRequestPluginSupport_destroy_data_ex(
    noReturnFunctionRequest *sample,RTIBool deallocate_pointers) {

    noReturnFunctionRequest_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
noReturnFunctionRequestPluginSupport_destroy_data(
    noReturnFunctionRequest *sample) {

    noReturnFunctionRequestPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
noReturnFunctionRequestPluginSupport_copy_data(
    noReturnFunctionRequest *dst,
    const noReturnFunctionRequest *src)
{
    return noReturnFunctionRequest_copy(dst,src);
}


void 
noReturnFunctionRequestPluginSupport_print_data(
    const noReturnFunctionRequest *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->id, "id", indent_level + 1);
            

}

noReturnFunctionRequest *
noReturnFunctionRequestPluginSupport_create_key_ex(RTIBool allocate_pointers){
    noReturnFunctionRequest *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, noReturnFunctionRequestKeyHolder);

    noReturnFunctionRequest_initialize_ex(key,allocate_pointers);
    return key;
}


noReturnFunctionRequest *
noReturnFunctionRequestPluginSupport_create_key()
{
    return  noReturnFunctionRequestPluginSupport_create_key_ex(RTI_TRUE);
}


void 
noReturnFunctionRequestPluginSupport_destroy_key_ex(
    noReturnFunctionRequestKeyHolder *key,RTIBool deallocate_pointers)
{
    noReturnFunctionRequest_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
noReturnFunctionRequestPluginSupport_destroy_key(
    noReturnFunctionRequestKeyHolder *key) {

  noReturnFunctionRequestPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
noReturnFunctionRequestPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
noReturnFunctionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
noReturnFunctionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            noReturnFunctionRequestPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            noReturnFunctionRequestPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            noReturnFunctionRequestPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            noReturnFunctionRequestPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = noReturnFunctionRequestPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                noReturnFunctionRequestPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            noReturnFunctionRequestPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
noReturnFunctionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
noReturnFunctionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *dst,
    const noReturnFunctionRequest *src)
{
    return noReturnFunctionRequestPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
noReturnFunctionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->id)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
noReturnFunctionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->id)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool noReturnFunctionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
noReturnFunctionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
noReturnFunctionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
noReturnFunctionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return noReturnFunctionRequestPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
noReturnFunctionRequestPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
noReturnFunctionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionRequest *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool noReturnFunctionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
noReturnFunctionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
noReturnFunctionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
noReturnFunctionRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequestKeyHolder *dst, 
    const noReturnFunctionRequest *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *dst, const
    noReturnFunctionRequestKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const noReturnFunctionRequest *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!noReturnFunctionRequestPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    noReturnFunctionRequest * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (noReturnFunctionRequest *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!noReturnFunctionRequestPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *noReturnFunctionRequestPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        noReturnFunctionRequestPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        noReturnFunctionRequestPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        noReturnFunctionRequestPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        noReturnFunctionRequestPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        noReturnFunctionRequestPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        noReturnFunctionRequestPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        noReturnFunctionRequestPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        noReturnFunctionRequestPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        noReturnFunctionRequestPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        noReturnFunctionRequestPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        noReturnFunctionRequestPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        noReturnFunctionRequestPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        noReturnFunctionRequestPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        noReturnFunctionRequestPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        noReturnFunctionRequestPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        noReturnFunctionRequestPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        noReturnFunctionRequestPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        noReturnFunctionRequestPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        noReturnFunctionRequestPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        noReturnFunctionRequestPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        noReturnFunctionRequestPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        noReturnFunctionRequestPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        noReturnFunctionRequestPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)noReturnFunctionRequest_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        noReturnFunctionRequestPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        noReturnFunctionRequestPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        noReturnFunctionRequestPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = noReturnFunctionRequestTYPENAME;

    return plugin;
}

void
noReturnFunctionRequestPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type noReturnFunctionReply
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */


noReturnFunctionReply *
noReturnFunctionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers){
    noReturnFunctionReply *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, noReturnFunctionReply);

    if(sample != NULL) {
        if (!noReturnFunctionReply_initialize_ex(sample,allocate_pointers)) {
            RTIOsapiHeap_freeStructure(&sample);
            return NULL;
        }
    }
    return sample; 
}


noReturnFunctionReply *
noReturnFunctionReplyPluginSupport_create_data()
{
    return noReturnFunctionReplyPluginSupport_create_data_ex(RTI_TRUE);
}


void 
noReturnFunctionReplyPluginSupport_destroy_data_ex(
    noReturnFunctionReply *sample,RTIBool deallocate_pointers) {

    noReturnFunctionReply_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
noReturnFunctionReplyPluginSupport_destroy_data(
    noReturnFunctionReply *sample) {

    noReturnFunctionReplyPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
noReturnFunctionReplyPluginSupport_copy_data(
    noReturnFunctionReply *dst,
    const noReturnFunctionReply *src)
{
    return noReturnFunctionReply_copy(dst,src);
}


void 
noReturnFunctionReplyPluginSupport_print_data(
    const noReturnFunctionReply *sample,
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


    RTICdrType_printArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
        "clientId", indent_level + 1);
            
    RTICdrType_printUnsignedLong(
        &sample->localId, "localId", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->numSec, "numSec", indent_level + 1);
            
    RTICdrType_printLong(
        &sample->ddscsRetCode, "ddscsRetCode", indent_level + 1);
            
    RTICdrType_printOctet(
        &sample->ret2, "ret2", indent_level + 1);
            

}

noReturnFunctionReply *
noReturnFunctionReplyPluginSupport_create_key_ex(RTIBool allocate_pointers){
    noReturnFunctionReply *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, noReturnFunctionReplyKeyHolder);

    noReturnFunctionReply_initialize_ex(key,allocate_pointers);
    return key;
}


noReturnFunctionReply *
noReturnFunctionReplyPluginSupport_create_key()
{
    return  noReturnFunctionReplyPluginSupport_create_key_ex(RTI_TRUE);
}


void 
noReturnFunctionReplyPluginSupport_destroy_key_ex(
    noReturnFunctionReplyKeyHolder *key,RTIBool deallocate_pointers)
{
    noReturnFunctionReply_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
noReturnFunctionReplyPluginSupport_destroy_key(
    noReturnFunctionReplyKeyHolder *key) {

  noReturnFunctionReplyPluginSupport_destroy_key_ex(key,RTI_TRUE);

}



/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */


PRESTypePluginParticipantData 
noReturnFunctionReplyPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}


void 
noReturnFunctionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
noReturnFunctionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedKeyMaxSize;

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            noReturnFunctionReplyPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            noReturnFunctionReplyPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            noReturnFunctionReplyPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            noReturnFunctionReplyPluginSupport_destroy_key);
    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = noReturnFunctionReplyPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    
    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                noReturnFunctionReplyPlugin_get_serialized_sample_max_size(epd, RTI_TRUE, 0),
            (PRESTypePluginGetSerializedSampleSizeFunction)
            noReturnFunctionReplyPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    return epd;    
}


void 
noReturnFunctionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


RTIBool 
noReturnFunctionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *dst,
    const noReturnFunctionReply *src)
{
    return noReturnFunctionReplyPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */


RTIBool 
noReturnFunctionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


  if(serialize_encapsulation) {
    /* Encapsulate sample */
    if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
        return RTI_FALSE;
    }


    position = RTICdrStream_resetAlignment(stream);

  }

  if(serialize_sample) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeOctet(
        stream, &sample->ret2)) {
        return RTI_FALSE;
    }
            
  }


  if(serialize_encapsulation) {
    RTICdrStream_restoreAlignment(stream,position);
  }


  return RTI_TRUE;
}


RTIBool 
noReturnFunctionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *sample, 
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }
    
    if(deserialize_sample) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeLong(
        stream, &sample->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeOctet(
        stream, &sample->ret2)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool noReturnFunctionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipUnsignedLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipOctet(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
noReturnFunctionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
noReturnFunctionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            
    current_alignment +=  RTICdrType_getOctetMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
noReturnFunctionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample) {
    /* In the default implementation, it consider each sample as big 
     * as the largest sample.
     */
    return noReturnFunctionReplyPlugin_get_serialized_sample_max_size(
        endpoint_data,
        include_encapsulation,
        size);
}


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
noReturnFunctionReplyPlugin_get_key_kind()
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
noReturnFunctionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionReply *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
        /* Encapsulate sample */
        if (!RTICdrStream_serializeCdrEncapsulationDefault(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool noReturnFunctionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int
noReturnFunctionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;

    if (include_encapsulation) {

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
            
    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
noReturnFunctionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipLong(stream)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_skipOctet(stream)) {
        return RTI_FALSE;
    }
            
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
noReturnFunctionReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReplyKeyHolder *dst, 
    const noReturnFunctionReply *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *dst, const
    noReturnFunctionReplyKeyHolder *src)
{

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const noReturnFunctionReply *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!noReturnFunctionReplyPlugin_serialize_key(
            endpoint_data,instance,md5Stream,RTI_FALSE,RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
noReturnFunctionReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;
    noReturnFunctionReply * sample;



    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeCdrEncapsulationAndSetDefault(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (noReturnFunctionReply *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->localId)) {
        return RTI_FALSE;
    }
            
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!noReturnFunctionReplyPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}
 

/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *noReturnFunctionReplyPlugin_new() 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        noReturnFunctionReplyPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        noReturnFunctionReplyPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        noReturnFunctionReplyPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        noReturnFunctionReplyPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        noReturnFunctionReplyPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        noReturnFunctionReplyPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        noReturnFunctionReplyPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        noReturnFunctionReplyPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        noReturnFunctionReplyPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        noReturnFunctionReplyPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        noReturnFunctionReplyPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        noReturnFunctionReplyPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        noReturnFunctionReplyPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        noReturnFunctionReplyPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        noReturnFunctionReplyPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        noReturnFunctionReplyPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        noReturnFunctionReplyPlugin_deserialize_key;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        noReturnFunctionReplyPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        noReturnFunctionReplyPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        noReturnFunctionReplyPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        noReturnFunctionReplyPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        noReturnFunctionReplyPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        noReturnFunctionReplyPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)noReturnFunctionReply_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        noReturnFunctionReplyPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        noReturnFunctionReplyPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        noReturnFunctionReplyPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = noReturnFunctionReplyTYPENAME;

    return plugin;
}

void
noReturnFunctionReplyPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
