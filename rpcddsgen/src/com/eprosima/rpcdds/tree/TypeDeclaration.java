package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.typecode.TypeCode;

public class TypeDeclaration implements Definition, Export
{
    public TypeDeclaration(TypeCode typecode)
    {
        m_typecode = typecode;
    }
    
    public TypeCode getTypeCode()
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
    
    public boolean isOperation()
    {
        return false;
    }
    
    @Override
    public Interface getFirstInterface(String idlFile)
    {
        return null;
    }
    
    private TypeCode m_typecode = null;
    private Object m_parent = null;
}
