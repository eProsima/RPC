package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Doc
{
	private String m_title = null;
	private String m_ref = null;
	private ArrayList<String> m_others = null;
	
	public Doc(String title, String ref)
	{
		m_title = title;
		if(m_title == null) m_title = "";
		m_ref = ref;
		if(m_ref == null) m_ref = "";
		m_others = new ArrayList<String>();
	}
	
	public void add(String text)
	{
		m_others.add(text);
	}
}
