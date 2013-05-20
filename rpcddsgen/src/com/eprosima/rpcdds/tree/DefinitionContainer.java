package com.eprosima.rpcdds.tree;

import java.util.ArrayList;

public class DefinitionContainer
{
    protected DefinitionContainer()
    {
        m_definitions = new ArrayList<Definition>();
    }
    
    public void add(Definition def)
    {
        m_definitions.add(def);
    }
    
    private ArrayList<Definition> m_definitions;
}
