package com.eprosima.rpcdds.typecode;

import java.util.List;
import java.util.ArrayList;

public abstract class MemberedTypeCode extends TypeCode
{    
    protected MemberedTypeCode(int kind, String scope, String name)
    {
        super(kind);
        m_scope = scope;
        m_name = name;
        m_members = new ArrayList<Member>();
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public String getScopedname()
    {
        return m_scope + m_name;
    }
    
    public List<Member> getMembers()
    {
        return m_members;
    }
    
    public int addMember(Member member)
    {
        m_members.add(member);
        return m_members.size() - 1;
    }
    
    public abstract String getTypename();
    
    public abstract String getStTypename();
    
    private String m_name = null;
    
    private String m_scope = null;
    
    private List<Member> m_members = null;
}
