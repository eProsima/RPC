package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.idl.grammar.Context;
import com.eprosima.rpcdds.typecode.TypeCode;

public class ConstDeclaration implements Definition, Export
{
    public ConstDeclaration(TypeCode typecode, String name, String value)
    {
        m_typecode = typecode;
        m_name = name;
        m_value = value;
        // Set as parent to the Typecode.
        m_typecode.setParent(this);
    }
    
    public TypeCode getTypeCode()
    {
        return m_typecode;
    }

    public String getValue()
    {
        return m_value;
    }

    public String getName()
    {
        return m_name;
    }
    
    public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }
    
    @Override
    public boolean isIsModule()
    {
        return false;
    }
    
    @Override
    public boolean isIsOperation()
    {
        return false;
    }
    
    @Override
    public boolean isIsException()
    {
        return false;
    }
    
    @Override
    public Interface getFirstInterface(String idlFile)
    {
        return null;
    }
    
    @Override
    public com.eprosima.rpcdds.tree.Exception getFirstException(String idlFile)
    {
        return null;
    }
    
    @Override
    public boolean isIsInterface()
    {
    	return false;
    }
    
    @Override
    public boolean isIsTypeDeclaration()
    {
        return false;
    }
    
    @Override
    public boolean isIsConstDeclaration()
    {
        return true;
    }
    
    @Override
    public boolean resolve(Context ctx)
    {
    	return true;
    }
    
    private TypeCode m_typecode = null;
    private String m_name = null;
    private String m_value = null;
    private Object m_parent = null;
}
