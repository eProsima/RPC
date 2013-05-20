package com.eprosima.rpcdds.idl.grammar;

import java.util.HashMap;
import java.util.Map;

import com.eprosima.rpcdds.typecode.TypeCode;

public class Context
{
    public Context(String filename)
    {
        m_filename = filename;
        m_types = new HashMap<String, TypeCode>();
    }

    public void setFilename(String filename)
    {
        m_filename = filename;
    }

    public String getFilename()
    {
        return m_filename;
    }

    public void setScope(String scope)
    {
        m_scope = scope;
    }

    public String getScope()
    {
        return m_scope;
    }

    public void setSersym(String sersym)
    {
        m_sersym = sersym;
    }

    public String getSersym()
    {
        return m_sersym;
    }

    public void setTypelimitation(String lt)
    {
        m_typelimitation = lt;
    }

    public String getTypelimitation()
    {
        return m_typelimitation;
    }

    public void addTypeCode(String name, TypeCode typecode)
    {
        m_types.put(name, typecode);
    }

    public TypeCode getTypeCode(String name)
    {
        int lastIndex = -1;
        TypeCode returnedValue = m_types.get(name);

        // Probar si no tiene scope, con el scope acutal.
        if(returnedValue == null && ((lastIndex = name.lastIndexOf("::")) == -1))
        {
            returnedValue = m_types.get(m_scope + name);
        }

        return returnedValue;
    }

    private String m_filename = "";
    private String m_scope = "";
    private String m_sersym = ">>";
    private String m_typelimitation = null;
    private Map<String, TypeCode> m_types = null;
}
