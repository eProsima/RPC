package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.typecode.TypeCode;

public class TypeDeclaration implements Definition
{
    public TypeDeclaration(TypeCode typecode)
    {
        m_typecode = typecode;
    }
    
    public TypeCode getTypeCode()
    {
        return m_typecode;
    }
    
    private TypeCode m_typecode;
}
