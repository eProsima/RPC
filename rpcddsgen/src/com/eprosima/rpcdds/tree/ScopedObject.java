package com.eprosima.rpcdds.tree;

public class ScopedObject
{
	public String getScopeFile()
	{
		return m_scope;
	}
	
	public void setScopeFile(String scope)
	{
		m_scope = scope;
	}
	
	private String m_scope = null;
}
