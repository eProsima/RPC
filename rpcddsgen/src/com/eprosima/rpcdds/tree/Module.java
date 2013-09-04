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
    
    @Override
    public com.eprosima.rpcdds.tree.Exception getFirstException(String idlFile)
    {
    	com.eprosima.rpcdds.tree.Exception returnedValue = null;
        
        for(int count = 0; returnedValue == null && count < getDefinitions().size(); ++count)
        {
            returnedValue = getDefinitions().get(count).getFirstException(idlFile);
        }
        
        return returnedValue;
    }
    
    /*!
     * @brief This function is used in stringtemplates to not generate module in some cases (Right now in RequestReply.idl).
     */
    public boolean isThereAreValidDefinitions()
    {
    	boolean returnedValue = false;
    	
		for(int count = 0; !returnedValue && count < getDefinitions().size(); ++count)
        {
            returnedValue = getDefinitions().get(count).isInterface() ||
            		getDefinitions().get(count).isException();
        }
    	
    	return returnedValue;
    }
    
    /*!
     * @brief This function is used in stringtemplates to not generate module in some cases (Right now in generated user idl).
     */
    public boolean isThereAreTypeDeclarations()
    {
        boolean returnedValue = false;
        
        for(int count = 0; !returnedValue && count < getDefinitions().size(); ++count)
        {
            if(getDefinitions().get(count).isInterface())
            {
                returnedValue = ((Interface)getDefinitions().get(count)).isThereAreTypeDeclarations();
            }
            else
            {
                returnedValue = getDefinitions().get(count).isTypeDeclaration();
            }
        }
        
        return returnedValue;
    }
    
    @Override
    public boolean isInterface()
    {
    	return false;
    }
    
    @Override
    public boolean isException()
    {
    	return false;
    }
    
    @Override
    public boolean isTypeDeclaration()
    {
        return false;
    }

    private String m_name = null;
    private Object m_parent = null;
}
