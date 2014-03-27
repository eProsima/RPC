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
        if(super.getContentTypeCode() instanceof AliasTypeCode)
        {
            AliasTypeCode alias = (AliasTypeCode)super.getContentTypeCode();
            return alias.getContentTypeCode();
        }

        return super.getContentTypeCode();
    }

    public TypeCode getTypedefContentTypeCode()
    {
        return super.getContentTypeCode();
    }

    public String getName()
    {
        return m_name;
    }

    public String getScopedname()
    {
        if(m_scope.isEmpty())
            return m_name;

        return m_scope + "::" + m_name;
    }

    public String getScope()
    {
        return m_scope;
    }

    public boolean getHasScope()
    {
        return !m_scope.isEmpty();
    }

    @Override
    public String getCppTypename()
    {
        StringTemplate st = getCppTypenameFromStringTemplate();
        st.setAttribute("name", getScopedname());
        return st.toString();
    }

    @Override
    public String getIdlTypename()
    {
        StringTemplate st = getIdlTypenameFromStringTemplate();
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

    public boolean isIsType_10()
    {
        return true;
    }
    /*** End of functions to know the type in string templates ***/

    /*** Functions that alias has to export because some typecodes have them*/
    public String getMaxsize()
    {
        return super.getContentTypeCode().getMaxsize();
    }

    public String getSize()
    {
        return super.getContentTypeCode().getSize();
    }
    /*** End of functions that alias has to export because some typecodes have them*/

    private String m_name = null;

    private String m_scope = null;
}
