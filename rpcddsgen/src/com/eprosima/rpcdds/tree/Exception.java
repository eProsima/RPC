package com.eprosima.rpcdds.tree;

import java.util.ArrayList;
import java.util.List;

import com.eprosima.rpcdds.idl.grammar.Context;
import com.eprosima.rpcdds.typecode.Member;

public class Exception extends ScopedObject implements Export, Definition
{
	public Exception(String scope, String name)
    {
        m_name = name;
        m_scope = scope;
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
    
	@Override
    public Interface getFirstInterface(String idlFile)
    {
        return null;
    }
	
	@Override
    public com.eprosima.rpcdds.tree.Exception getFirstException(String idlFile)
    {
    	
    	if(getScopeFile().equals(idlFile))
            return this;
        
        return null;
    }
	
	@Override
	public boolean isInterface()
    {
    	return false;
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
    public boolean isOperation()
    {
        return false;
    }
    
    @Override
    public boolean isException()
    {
        return true;
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
    
    @Override
    public boolean resolve(Context ctx)
    {
    	return true;
    }
    
    private String m_name = null;
    private String m_scope = null;
    private Object m_parent = null;
    private List<Member> m_members = null;
}
