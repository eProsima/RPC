package com.eprosima.rpcdds.templates;

import com.eprosima.rpcdds.templates.TemplateGroup;

import java.util.Iterator;
import java.util.Map;
import java.util.HashMap;
import java.util.Map.Entry;
import java.util.Set;

import org.antlr.stringtemplate.*;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;

public class TemplateManager
{
    class TemplateErrorListener implements StringTemplateErrorListener
    {  
        public void error(String arg0, Throwable arg1)
        {
            System.out.println(arg0);
            arg1.printStackTrace();
        }
    
        public void warning(String arg0)
        {
            System.out.println(arg0);   
        }   
    }
    
    private Map<String, StringTemplateGroup> m_groups;
    private StringTemplateGroup middlgr = null;
    private StringTemplateGroup commongr = null;
    
    public TemplateManager(String templateLocation)
    {
        m_groups = new HashMap<String, StringTemplateGroup>();
        
        System.out.println("Loading Templates...");     
        StringTemplateGroupLoader loader = new CommonGroupLoader(templateLocation, new TemplateErrorListener());
        StringTemplateGroup.registerGroupLoader(loader);
        
        // Load common stringtemplate rules.
        // TODO Change depending RTI or OpenDDS.
        middlgr = StringTemplateGroup.loadGroup("rti", DefaultTemplateLexer.class, null);
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
