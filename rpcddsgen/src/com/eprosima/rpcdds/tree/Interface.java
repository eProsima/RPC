package com.eprosima.rpcdds.tree;

import java.util.ArrayList;
import java.util.HashMap;

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
    
    @Override
    public Interface getFirstInterface(String idlFile)
    {
        if(getScopeFile().equals(idlFile) && getFirstOperation() != null)
            return this;
        
        return null;
    }
    
    @Override
    public com.eprosima.rpcdds.tree.Exception getFirstException(String idlFile)
    {
    	
    	if(getScopeFile().equals(idlFile))
            return getFirstException();
        
        return null;
    }
    
    @Override
    public boolean isInterface()
    {
    	return true;
    }
    
    @Override
    public boolean isException()
    {
    	return false;
    }
    
    /*!
     * @brief This function returns the first exception of the interface.
     */
    public com.eprosima.rpcdds.tree.Exception getFirstException()
    {
    	for(int count = 0; m_firstexception == null && count < getExports().size(); ++count)
        {
            if(getExports().get(count).isException())
            	m_firstexception = (com.eprosima.rpcdds.tree.Exception)getExports().get(count);
        }
        return m_firstexception;
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
    
    /*!
     * @brief This function returns the exception defined inside the interface.
     */
    public Exception getException(String currentScope, String ename)
    {
    	com.eprosima.rpcdds.tree.Exception exception = null;
    	
    	for(int count = 0; exception == null && count < getExports().size(); ++count)
        {
    		int lastIndex = -1;
    		
    		if(getExports().get(count).isException())
    		{
                String tmpname = ((com.eprosima.rpcdds.tree.Exception)getExports().get(count)).getScopedname();
                
                if(tmpname.equals(ename))
                {
                	exception = (com.eprosima.rpcdds.tree.Exception)getExports().get(count);
                }
                else
                {
                	// Probar si no tiene scope, con el scope actual.
                    if(exception == null && ((lastIndex = ename.lastIndexOf("::")) == -1) &&
                    		tmpname.equals(currentScope + ename))
                    {
                    	exception = (com.eprosima.rpcdds.tree.Exception)getExports().get(count);
                    }	
                }
    		}
        }
    	
    	return exception;
    }

    private String m_name = null;
    private String m_scope = null;
    private Object m_parent = null;
    
    //! Cache the first operation.
    private Operation m_firstoperation = null;
  //! Cache the first exception.
    private com.eprosima.rpcdds.tree.Exception m_firstexception = null;
}
