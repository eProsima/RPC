package com.eprosima.rpcdds.tree;

import java.util.ArrayList;

public class Interface extends ExportContainer implements Definition
{
    public Interface(String scope, String name)
    {
        m_name = name;
        m_scope = scope;
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public String getScopedname()
    {
        return m_scope + m_name;
    }

    public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }
    
    public Interface getFirstInterface(String idlFile)
    {
        if(getScopeFile().equals(idlFile) && getFirstOperation() != null)
            return this;
        
        return null;
    }
    
    /*!
     * @brief This function returns the first operation of the interface.
     */
    public Operation getFirstOperation()
    {
        for(int count = 0; m_firstoperation == null && count < getExports().size(); ++count)
        {
            if(getExports().get(count).isOperation())
                m_firstoperation = (Operation)getExports().get(count);
        }
        return m_firstoperation;
    }

    private String m_name = null;
    private String m_scope = null;
    private Object m_parent = null;
    
    //! Cache the first operation.
    private Operation m_firstoperation = null;
}
