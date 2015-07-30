#include <config.h>

#if RPC_WITH_RTIDDS

#include <protocols/dds/MessageHeaderPlugin.h>
#include <protocols/dds/MessageHeader.h>
#include <utils/Messages.h>

#include <utils/dds/Middleware.h>

using namespace eprosima::rpc;
using namespace ::protocol::dds;

DDS_TypeCode* GuidPrefix_tPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode GuidPrefix_t_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,12,NULL,NULL);

    static DDS_TypeCode GuidPrefix_t_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::GuidPrefix_t", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GuidPrefix_t */

    if(!is_initialized)
    {
        GuidPrefix_t_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
        GuidPrefix_t_g_tc._data._typeCode = (RTICdrTypeCode *)&GuidPrefix_t_g_tc_array; /* Content type code */

        is_initialized = true;
    }

    return &GuidPrefix_t_g_tc;
}

DDS_TypeCode* EntityId_tPlugin::get_typecode()
{
    static bool is_initialized = false;
    
    static DDS_TypeCode EntityId_t_g_tc_entityKey_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member EntityId_t_g_tc_members[2]=
    {
        {
            (char *)"entityKey",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"entityKind",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode EntityId_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::EntityId_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        EntityId_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EntityId_t*/

    if(!is_initialized)
    {
        EntityId_t_g_tc_entityKey_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
        EntityId_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&EntityId_t_g_tc_entityKey_array;
        EntityId_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
        
        is_initialized = true;
    }

    return &EntityId_t_g_tc;
    
}

DDS_TypeCode* GUID_tPlugin::get_typecode()
{
    static bool is_initialized = false;
    
    static DDS_TypeCode_Member GUID_t_g_tc_members[2]=
    {
        {
            (char *)"guidPrefix",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"entityId",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GUID_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::GUID_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        GUID_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GUID_t*/

    if(!is_initialized)
    {
        GUID_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)GuidPrefix_tPlugin::get_typecode();
        GUID_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)EntityId_tPlugin::get_typecode();
        
        is_initialized = true;
    }

    return &GUID_t_g_tc;
}

DDS_TypeCode* SequenceNumber_tPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode_Member SequenceNumber_t_g_tc_members[2]=
    {
        {
            (char *)"high",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"low",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SequenceNumber_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::SequenceNumber_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SequenceNumber_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceNumber_t*/
    
    if(!is_initialized)
    {
        SequenceNumber_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
        SequenceNumber_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
        
        is_initialized = true;
    }

    return &SequenceNumber_t_g_tc;
}

DDS_TypeCode* SampleIdentityPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode_Member SampleIdentity_g_tc_members[2]=
    {
        {
            (char *)"writer_guid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"sequence_number",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SampleIdentity_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::SampleIdentity", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SampleIdentity_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SampleIdentity*/

    if(!is_initialized)
    {
        SampleIdentity_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)GUID_tPlugin::get_typecode();
        SampleIdentity_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)SequenceNumber_tPlugin::get_typecode();

        is_initialized = true;
    }


    return &SampleIdentity_g_tc;
}


DDS_TypeCode* rpc::UnknownOperationPlugin::get_typecode()
{
    static bool is_initialized = false;


    static DDS_TypeCode UnknownOperation_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnknownOperation", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownOperation */

    if(!is_initialized)
    {
        UnknownOperation_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

        is_initialized = true;
    }

    return &UnknownOperation_g_tc;
}

DDS_TypeCode* rpc::UnknownExceptionPlugin::get_typecode()
{
    static bool is_initialized = false;


    static DDS_TypeCode UnknownException_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnknownException", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownException */

    if(!is_initialized)
    {
        UnknownException_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

        is_initialized = true;
    }

    return &UnknownException_g_tc;
}

DDS_TypeCode* rpc::UnusedMemberPlugin::get_typecode()
{
    static bool is_initialized = false;


    static DDS_TypeCode UnusedMember_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnusedMember", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownException */

    if(!is_initialized)
    {
        UnusedMember_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

        is_initialized = true;
    }

    return &UnusedMember_g_tc;
}

DDS_TypeCode* rpc::RemoteExceptionCode_tPlugin::get_typecode()
{
    static DDS_TypeCode_Member RemoteExceptionCode_t_g_tc_members[6] =
    {
        {
            (char *)"REMOTE_EX_OK",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_OK, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNSUPPORTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_UNSUPPORTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_INVALID_ARGUMENT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_INVALID_ARGUMENT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_OUT_OF_RESOURCES",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_OUT_OF_RESOURCES, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNKNOWN_OPERATION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_UNKNOWN_OPERATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNKNOWN_EXCEPTION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            rpc::REMOTE_EX_UNKNOWN_EXCEPTION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RemoteExceptionCode_t_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"dds::rpc::RemoteExceptionCode_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of enumerators */
        RemoteExceptionCode_t_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
     }};

    return &RemoteExceptionCode_t_g_tc;
}

DDS_TypeCode* rpc::RequestHeaderPlugin::get_typecode()
{
    static bool is_initialized = false;
    static DDS_TypeCode RequestHeader_g_tc_instanceName_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member RequestHeader_g_tc_members[2]=
    {
        {
            (char *)"requestId",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"instanceName",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RequestHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::rpc::RequestHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        RequestHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/

    if(!is_initialized)
    {
        RequestHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)SampleIdentityPlugin::get_typecode();
        RequestHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_instanceName_string;
        
        is_initialized = true;
    }

    return &RequestHeader_g_tc;
    
}

DDS_TypeCode* rpc::ReplyHeaderPlugin::get_typecode()
{
    static bool is_initialized = false;

    static DDS_TypeCode_Member ReplyHeader_g_tc_members[2]=
    {
        {
            (char *)"relatedRequestId",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"remoteEx",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ReplyHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::rpc::ReplyHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        ReplyHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ReplyHeader*/

    if(!is_initialized)
    {
        ReplyHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)SampleIdentityPlugin::get_typecode();
        ReplyHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rpc::RemoteExceptionCode_tPlugin::get_typecode();
        
        is_initialized = true;
    }

    return &ReplyHeader_g_tc;
    
}

#endif // RPC_WITH_RTIDDS
