package com.eprosima.rpcdds.templates;

import java.util.Iterator;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.Map.Entry;

import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateGroup;

public class TemplateGroup
{
    private Map<String, StringTemplate> m_templates;
    
    public TemplateGroup()
    {
        m_templates = new HashMap<String, StringTemplate>();
    }
    
    public void addTemplate(String groupname, StringTemplate template)
    {
        m_templates.put(groupname, template);
    }
    
    public StringTemplate getTemplate(String groupname)
    {
        return m_templates.get(groupname);
    }
    
    public void setAttribute(String attribute, TemplateGroup tg)
    {
    	if(tg != null)
    	{
	        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
	        Iterator<Entry<String, StringTemplate>> it = set.iterator();
	        
	        while(it.hasNext())
	        {
	            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
	            
	            // Call setAttribute
	            m.getValue().setAttribute(attribute, tg.getTemplate(m.getKey()).toString());
	        }
    	}
    }
    
    public void setAttribute(String attribute, Object obj1)
    {
        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
        Iterator<Entry<String, StringTemplate>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
            
            // Call setAttribute
            m.getValue().setAttribute(attribute, obj1);
        }
    }
    
    public void setAttribute(String attribute, Object obj1, Object obj2)
    {
        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
        Iterator<Entry<String, StringTemplate>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
            
            // Call setAttribute
            m.getValue().setAttribute(attribute, obj1, obj2);
        }
    }
    
    public void setAttribute(String attribute, Object obj1, Object obj2, Object obj3)
    {
        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
        Iterator<Entry<String, StringTemplate>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
            
            // Call setAttribute
            m.getValue().setAttribute(attribute, obj1, obj2, obj3);
        }
    }
    
    public void setAttribute(String attribute, Object obj1, Object obj2, Object obj3, Object obj4)
    {
        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
        Iterator<Entry<String, StringTemplate>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
            
            // Call setAttribute
            m.getValue().setAttribute(attribute, obj1, obj2, obj3, obj4);
        }
    }
    
    public void setAttribute(String attribute, Object obj1, Object obj2, Object obj3, Object obj4, Object obj5)
    {
        Set<Entry<String, StringTemplate>> set = m_templates.entrySet();
        Iterator<Entry<String, StringTemplate>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplate> m = (Map.Entry<String, StringTemplate>)it.next();
            
            // Call setAttribute
            m.getValue().setAttribute(attribute, obj1, obj2, obj3, obj4, obj5);
        }
    }
}
