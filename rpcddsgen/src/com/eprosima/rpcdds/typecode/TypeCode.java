package com.eprosima.rpcdds.typecode;

import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;

import java.util.Map;

import com.eprosima.rpcdds.templates.TemplateUtil;
import com.eprosima.rpcdds.util.Pair;

public abstract class TypeCode
{
    public static final int KIND_NULL = 0x00000000;
    public static final int KIND_SHORT = 0x00000001;
    public static final int KIND_LONG = 0x00000002;
    public static final int KIND_USHORT = 0x00000003;
    public static final int KIND_ULONG = 0x00000004;
    public static final int KIND_FLOAT = 0x00000005;
    public static final int KIND_DOUBLE = 0x00000006;
    public static final int KIND_BOOLEAN = 0x00000007;
    public static final int KIND_CHAR = 0x00000008;
    public static final int KIND_OCTET = 0x00000009;
    public static final int KIND_STRUCT = 0x0000000a;
    public static final int KIND_UNION = 0x0000000b;
    public static final int KIND_ENUM = 0x0000000c;
    public static final int KIND_STRING = 0x0000000d;
    public static final int KIND_SEQUENCE = 0x0000000e;
    public static final int KIND_ARRAY = 0x0000000f;
    public static final int KIND_ALIAS = 0x00000010;
    public static final int KIND_LONGLONG = 0x00000011;
    public static final int KIND_ULONGLONG = 0x00000012;
    public static final int KIND_LONGDOUBLE = 0x00000013;
    public static final int KIND_WCHAR = 0x00000014;
    public static final int KIND_WSTRING = 0x00000015;
    public static final int KIND_VALUE = 0x00000016;
    public static final int KIND_SPARSE = 0x00000017;
    
    public static StringTemplateGroup idltypesgr = null;
    public static StringTemplateGroup cpptypesgr = null;
    
    public TypeCode(int kind)
    {
        m_kind = kind;
    }
    
    public int getKind()
    {
        return m_kind;
    }
    
    /*|
     * @brief This function returns the typename with the scope that is obtained using the cpptypesgr string template.
     * @return The IDL typename.
     */
    public abstract String getCppTypename();
    
    protected StringTemplate getCppTypenameFromStringTemplate()
    {
        return cpptypesgr.getInstanceOf("type_" + Integer.toHexString(m_kind));
    }

    /*|
     * @brief This function returns a typename with scope that is obtained using the m_stringtemplatetypesgr string template.
     * @return The typename.
     */
    public abstract String getIdlTypename();
   
    protected StringTemplate getIdlTypenameFromStringTemplate()
    {
        return idltypesgr.getInstanceOf("type_" + Integer.toHexString(m_kind));
    }
    
    /*!
     * @brief This function returns the type as a string: "type_2", where the number is the type kind.
     * This function is used in stringtemplates.
     */
    public String getStType()
    {
        return "type_" + Integer.toHexString(m_kind);
    }
    
    // By default a typecode is not primitive. Function used in stringtemplates
    // TODO Cambiar a isIsPrimitive
    public boolean isPrimitive()
    {
        return false;
    }
    
    // By default there is not initial value. Function used in stringtemplates.
    public String getInitialValue()
    {
        return "";
    }

    protected String getInitialValueFromStringTemplate()
    {
        Map initialValues = cpptypesgr.getMap("initialValues");
        return initialValues.get(getStType()).toString();
    }
    
    // By default a typecode doesn't have a max size limit. Function used in stringtemplates
    public String getMaxsize()
    {
        return null;
    }
    
    /*!
     * @brief This function returns the size of the datatype. By default is 0
     * @return The size of the datatype.
     */
    protected int getSize()
    {
        return 0;
    }
    
    public abstract Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned);
    
    public abstract int getMaxSerializedSizeWithoutAlignment(int currentSize);
    
    /*** Functions to know the type in string templates ***/
 // By default a typecode is not string. Function used in stringtemplates 
    public boolean isIsType_d(){return false;}
    public boolean isIsType_c(){return false;}
    public boolean isIsType_f(){return false;}
    public boolean isIsType_e(){return false;}
    public boolean isIsType_10(){return false;}
    /*** End of functions to know the type in string templates ***/

    public Object getParent()
    {
        return m_parent;
    }

    public void setParent(Object parent)
    {
        m_parent = parent;
    }
    
    private int m_kind = KIND_NULL;

    // Added parent object to typecode because was needed in DDS with our types (TopicsPlugin_gettypecode)
    private Object m_parent = null;
}
