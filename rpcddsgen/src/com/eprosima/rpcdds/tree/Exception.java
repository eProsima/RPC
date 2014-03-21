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
        if(m_scope.isEmpty())
            return m_name;

        return m_scope + "::" + m_name;
    }

    /*
     * @brief This function returns the scoped name of the interface but
     * changing "::" by "_".
     */
    public String getFormatedScopedname()
    {
        String ret = null;
        
        if(m_scope.isEmpty())
            ret = m_name;
        else
            ret = m_scope + "::" + m_name;
        
        return ret.replaceAll("::", "_");
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
    public boolean isIsModule()
    {
        return false;
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
	
	public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }
    
    @Override
    public boolean isIsOperation()
    {
        return false;
    }
    
    @Override
    public boolean isIsException()
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
