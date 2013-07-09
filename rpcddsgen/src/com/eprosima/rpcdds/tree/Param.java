package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.typecode.TypeCode;

public abstract class Param
{
    public abstract boolean isInput();
    
    public abstract boolean isOutput();
    
    public boolean isOnlyOutput()
    {        
        return !isInput() && isOutput();
    }
    
    public abstract String getComment();
    
    public Param(String name, TypeCode typecode)
    {
        m_name = name;
        m_typecode = typecode;
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public TypeCode getTypecode()
    {
        return m_typecode;
    }
    
    public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }
    
    private String m_name = null;
    private TypeCode m_typecode = null;
    private Object m_parent = null;
}
