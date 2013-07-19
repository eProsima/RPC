package com.eprosima.rpcdds.tree;

import java.util.ArrayList;

public class ExportContainer extends ScopedObject
{
    protected ExportContainer()
    {
        m_exports = new ArrayList<Export>();
    }
    
    public void add(Export exp)
    {
        m_exports.add(exp);
        exp.setParent(this);
    }
    
    public ArrayList<Export> getExports()
    {
        return m_exports;
    }
    
    private ArrayList<Export> m_exports;
}
