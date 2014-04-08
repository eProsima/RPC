package com.eprosima.fastrpc.wadl.tree;

import com.eprosima.fastrpc.wadl.tree.Doc;
import com.eprosima.fastrpc.wadl.util.TypeConverter;
import com.javadude.antxr.RecognitionException;

import java.util.ArrayList; 

public class Param
{
	private ArrayList<Doc> m_docs = null;
	private String m_href = null;
	private String m_name = null;
	private String m_style = null;
	private String m_id = null;
	private String m_type = null;
	private boolean m_required = false;
	private boolean m_repeating = false;
	private String m_fixed = null;
	private String m_path = null;
	
	public static final String PARAMSTYLE_PLAIN = "plain";
	public static final String PARAMSTYLE_QUERY = "query";
	public static final String PARAMSTYLE_MATRIX = "matrix";
	public static final String PARAMSTYLE_HEADER = "header";
	public static final String PARAMSTYLE_TEMPLATE = "template";
	
	public Param(String href, String name, String style, String id, String type,
			String required, String repeating, String fixed, String path)
			throws RecognitionException
	{
		m_href = href;
		if(m_href == null) m_href = "";
		m_name = name;
		if(m_name == null) m_name = "";
		if(style != null)
		{
			checkStyle(style);
			m_style = style;
		} else {
			m_style = "";
		}
		m_id = id;
		if(m_id == null) m_id = "";
		m_type = type;
		if(m_type == null) m_type = "";
		if(required != null)
			m_required = TypeConverter.stringToBoolean(required);
		if(repeating != null)
			m_repeating = TypeConverter.stringToBoolean(repeating);
		m_fixed = fixed;
		if(m_fixed == null) m_fixed = "";
		m_path = path;
		if(m_path == null) m_path = "";
		m_docs = new ArrayList<Doc>();
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public String getName() {
		return m_name;
	}
	
	public String getType() {
		return m_type;
	}
	
	public String getStyle() {
		return m_style;
	}
	
	public String getId() {
		return m_id;
	}
	
	public String getHref() {
		return m_href;
	}
	
	public void checkStyle(String style) throws RecognitionException
	{
		if(!style.equals(PARAMSTYLE_PLAIN) &&
				!style.equals(PARAMSTYLE_QUERY) &&
				!style.equals(PARAMSTYLE_MATRIX) &&
				!style.equals(PARAMSTYLE_HEADER) &&
				!style.equals(PARAMSTYLE_TEMPLATE))
		{
			throw new RecognitionException("Invalid ParamStyle: \"" + style + "\"");
		}
	}

	public void copyFrom(Param globalParameter) {
		m_docs = globalParameter.m_docs;
		m_name = globalParameter.m_name;
		m_style = globalParameter.m_style;
		m_id = globalParameter.m_id;
		m_type = globalParameter.m_type;
		m_required = globalParameter.m_required;
		m_repeating = globalParameter.m_repeating;
		m_fixed = globalParameter.m_fixed;
		m_path = globalParameter.m_path;
	}
}
