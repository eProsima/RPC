package com.eprosima.fastrpc.templates;

import com.eprosima.fastrpc.templates.TemplateGroup;

import java.util.Iterator;
import java.util.Map;
import java.util.HashMap;
import java.util.Map.Entry;
import java.util.Set;

import org.antlr.stringtemplate.*;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;

public class TemplateManager
{
    private Map<String, StringTemplateGroup> m_groups;
    static public StringTemplateGroup middlgr = null;
    private StringTemplateGroup commongr = null;
    
    public TemplateManager()
    {
        m_groups = new HashMap<String, StringTemplateGroup>();
        
        // Load common stringtemplate rules.
        commongr = StringTemplateGroup.loadGroup("Common", DefaultTemplateLexer.class, middlgr);
    }
    
    public void addGroup(String groupname)
    {
        StringTemplateGroup group = StringTemplateGroup.loadGroup(groupname, DefaultTemplateLexer.class, commongr);
        m_groups.put(groupname, group);
    }
    
    public TemplateGroup createTemplateGroup(String templatename)
    {
        TemplateGroup tg = new TemplateGroup();
        Set<Entry<String, StringTemplateGroup>> set = m_groups.entrySet();
        Iterator<Entry<String, StringTemplateGroup>> it = set.iterator();
        
        while(it.hasNext())
        {
            Map.Entry<String, StringTemplateGroup> m = (Map.Entry<String, StringTemplateGroup>)it.next();
            
            // Obtain instance
            StringTemplate template = m.getValue().getInstanceOf(templatename);
            tg.addTemplate(m.getKey(), template);
        }
        
        return tg;
    }
    
    public StringTemplate createStringTemplate(String templatename)
    {     
        return commongr.getInstanceOf(templatename);
    }
}
