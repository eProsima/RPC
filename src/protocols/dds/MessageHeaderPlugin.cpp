#include "fastrpc/protocols/dds/MessageHeaderPlugin.h"

#include "ndds/ndds_cpp.h"

using namespace eprosima::rpc;
using namespace ::protocol::dds;

DDS_TypeCode* IdentificationPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode_Member Identification_g_tc_members[4] =
    {
        {
            (char *)"value_1",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value_2",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value_3",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value_4",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Identification_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Identification", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        Identification_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Identification*/
    
    
    
    if(!is_initialized)
    {
        Identification_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        Identification_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        Identification_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        Identification_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        
        is_initialized = true;
    }

    return &Identification_g_tc;
    
}

DDS_TypeCode* RequestHeaderPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode RequestHeader_g_tc_remoteServiceName_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member RequestHeader_g_tc_members[3] =
    {
        {
            (char *)"clientId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"remoteServiceName",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"requestSequenceNumber",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        }
        
    };

    static DDS_TypeCode RequestHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"RequestHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        RequestHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/
    
    
    if(!is_initialized)
    {
        RequestHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)eprosima::rpc::protocol::dds::IdentificationPlugin::get_typecode();
        RequestHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_remoteServiceName_string;
        RequestHeader_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        
        is_initialized = true;
    }

    return &RequestHeader_g_tc;
    
}

DDS_TypeCode* ReplyHeaderPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode ReplyHeader_g_tc_retMsg_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    

    static DDS_TypeCode_Member ReplyHeader_g_tc_members[4] =
    {
        {
            (char *)"clientId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"requestSequenceNumber",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"retCode",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"retMsg",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ReplyHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ReplyHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ReplyHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/
    
    
    if(!is_initialized)
    {
        ReplyHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)eprosima::rpc::protocol::dds::IdentificationPlugin::get_typecode();
        ReplyHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        ReplyHeader_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
        ReplyHeader_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&ReplyHeader_g_tc_retMsg_string;
        
        is_initialized = true;
    }

    return &ReplyHeader_g_tc;
    
}
