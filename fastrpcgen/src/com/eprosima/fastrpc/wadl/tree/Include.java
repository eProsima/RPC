package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Include
{
	private ArrayList<Doc> m_docs = null;
	private String m_href = null;
	
	public Include(String href)
	{
		m_href = href;
		if(m_href == null) m_href = "";
		m_docs = new ArrayList<Doc>();
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public String getHref() {
		return m_href;
	}
}
