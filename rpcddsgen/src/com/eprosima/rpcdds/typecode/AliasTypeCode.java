package com.eprosima.rpcdds.typecode;

import org.antlr.stringtemplate.StringTemplate;

import com.eprosima.rpcdds.util.Pair;

public class AliasTypeCode extends ContainerTypeCode
{
    public AliasTypeCode(String scope, String name)
    {
        super(TypeCode.KIND_ALIAS);
        m_scope = scope;
        m_name = name;
    }
    
    public String getScopedname()
    {
        return m_scope + m_name;
    }

    @Override
    public String getTypename()
    {
    	StringTemplate st = getTypenameFromStringTemplate();
        st.setAttribute("name", getScopedname());
        return st.toString();
    }
    
    @Override
    public String getStTypename()
    {
    	StringTemplate st = getSTTypenameFromStringTemplate();
        st.setAttribute("name", getScopedname());
        return st.toString();
    }
    
    @Override
    public boolean isPrimitive()
    {
        return getContentTypeCode().isPrimitive();
    }
    
    @Override
    public boolean isPrimitiveInArguments()
    {
        return getContentTypeCode().isPrimitiveInArguments();
    }
    
    @Override
    public String getInitialValue()
    {   
        return getContentTypeCode().getInitialValue();
    }
    
    public Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned)
    {
        // TODO
    	return null;
    }
    
    public int getMaxSerializedSizeWithoutAlignment(int currentSize)
    {
    	// TODO
        return 0;
    }
    
    /*** Functions to know the type in string templates ***/
    @Override
    public boolean isIsType_d()
    {
        return getContentTypeCode().isIsType_d();
    }
    
    @Override
    public boolean isIsType_c()
    {
        return getContentTypeCode().isIsType_c();
    }
    
    @Override
    public boolean isIsType_f()
    {
        return getContentTypeCode().isIsType_f();
    }
    
    public boolean isIsType_e()
    {
        return getContentTypeCode().isIsType_e();
    }
    /*** End of functions to know the type in string templates ***/
    
    private String m_name = null;
    
    private String m_scope = null;
}
