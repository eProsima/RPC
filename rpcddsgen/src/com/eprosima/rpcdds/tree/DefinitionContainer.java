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
    
    public ArrayList<Definition> getDefinitions()
    {
        return m_definitions;
    }
    
    private ArrayList<Definition> m_definitions;
}
