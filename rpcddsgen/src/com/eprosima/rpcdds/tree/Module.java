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
    
    @Override
    public Interface getFirstInterface(String idlFile)
    {
        Interface returnedValue = null;
        
        for(int count = 0; returnedValue == null && count < getDefinitions().size(); ++count)
        {
            returnedValue = getDefinitions().get(count).getFirstInterface(idlFile);
        }
        
        return returnedValue;
    }

    private String m_name = null;
    private Object m_parent = null;
}
