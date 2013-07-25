package com.eprosima.rpcdds.typecode;

public class Member
{
    public Member()
    {
    }
    
    public Member(TypeCode typecode, String name)
    {
        m_typecode = typecode;
        m_name = name;
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public TypeCode getTypecode()
    {
        return m_typecode;
    }
    
    public void setName(String name)
    {
        m_name = name;
    }
    
    public void setTypecode(TypeCode typecode)
    {
         m_typecode = typecode;
    }
    
    private String m_name = null;
    
    private TypeCode m_typecode = null;
}
