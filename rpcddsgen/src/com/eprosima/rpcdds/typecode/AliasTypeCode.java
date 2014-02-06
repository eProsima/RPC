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

    @Override
    public TypeCode getContentTypeCode()
    {
        if(super.getContentTypeCode() instanceof ContainerTypeCode)
        {
            ContainerTypeCode ct = (ContainerTypeCode)super.getContentTypeCode();
            return ct.getContentTypeCode();
        }
        return super.getContentTypeCode();
    }

    public TypeCode getTypedefContentTypeCode()
    {
        return super.getContentTypeCode();
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
    public String getStType()
    {
        return super.getContentTypeCode().getStType();
    }
    
    @Override
    public boolean isPrimitive()
    {
        return super.getContentTypeCode().isPrimitive();
    }
    
    @Override
    public boolean isPrimitiveInArguments()
    {
        return super.getContentTypeCode().isPrimitiveInArguments();
    }
    
    @Override
    public String getInitialValue()
    {   
        return super.getContentTypeCode().getInitialValue();
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
        return super.getContentTypeCode().isIsType_d();
    }
    
    @Override
    public boolean isIsType_c()
    {
        return super.getContentTypeCode().isIsType_c();
    }
    
    @Override
    public boolean isIsType_f()
    {
        return super.getContentTypeCode().isIsType_f();
    }
    
    public boolean isIsType_e()
    {
        return super.getContentTypeCode().isIsType_e();
    }
    /*** End of functions to know the type in string templates ***/
    
    private String m_name = null;
    
    private String m_scope = null;
}
