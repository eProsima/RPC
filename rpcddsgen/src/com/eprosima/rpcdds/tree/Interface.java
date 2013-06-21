package com.eprosima.rpcdds.tree;

public class Interface extends ExportContainer implements Definition
{
    public Interface(String name)
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
