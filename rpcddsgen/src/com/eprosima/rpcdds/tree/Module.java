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
    
    private String m_name;
}
