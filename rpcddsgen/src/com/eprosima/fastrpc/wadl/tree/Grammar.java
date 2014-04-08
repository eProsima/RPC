package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Grammar {
	
	private ArrayList<Include> m_includes = null;
	private String m_laxText = null;
	private ArrayList<Doc> m_docs = null;
	
	public Grammar()
	{
		m_includes = new ArrayList<Include>();
		m_docs = new ArrayList<Doc>();
		m_laxText = "";
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public void add(Include include)
	{
		m_includes.add(include);
	}
	
	public ArrayList<Include> getIncludes() {
		return m_includes;
	}
	
	public void setLaxTex(String text)
	{
		m_laxText = text;
	}
}
