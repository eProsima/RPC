package com.eprosima.rpcdds.tree;

import java.util.ArrayList;

public class Module extends DefinitionContainer implements Definition
{   
    public Module(String name)
    {
        m_name = name;
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }

    private String m_name = null;
    private Object m_parent = null;
}
