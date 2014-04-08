package com.eprosima.fastrpc.tree;

import com.eprosima.fastrpc.idl.grammar.Context;
import com.eprosima.fastrpc.typecode.TypeCode;

public class TypeDeclaration implements Definition, Export
{
    public TypeDeclaration(TypeCode typecode)
    {
        m_typecode = typecode;
        // Set as parent to the Typecode.
        m_typecode.setParent(this);
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
    public com.eprosima.fastrpc.tree.Exception getFirstException(String idlFile)
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
        return true;
    }
    
    @Override
    public boolean isIsConstDeclaration()
    {
        return false;
    }
    
    @Override
    public boolean resolve(Context ctx)
    {
    	return true;
    }
    
    private TypeCode m_typecode = null;
    private Object m_parent = null;
}
