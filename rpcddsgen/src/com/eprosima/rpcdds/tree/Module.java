package com.eprosima.rpcdds.tree;

import java.util.ArrayList;
import java.util.HashMap;

public class Module extends DefinitionContainer implements Definition, Notebook
{   
    public Module(String name)
    {
        m_name = name;
        m_annotations = new HashMap<String, String>();
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
    public boolean isModule()
    {
        return true;
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
    
    @Override
    public void addAnnotations(HashMap<String, String> annotations)
    {
        m_annotations.putAll(annotations);
    }
    
    @Override
    public void addAnnotation(String key, String value)
    {
        m_annotations.put(key, value);
    }
    
    @Override
    public HashMap<String, String> getAnnotations()
    {
        return m_annotations;
    }
    
    ////////// RESTful block //////////
    
    public String getResourceCompleteBaseUri()
    {
        String baseUri = m_annotations.get("RESOURCES_BASE_URI");
        
        if(baseUri != null)
        {
            // Remove http://
            int posInit = baseUri.indexOf("//");
            
            if(posInit == -1)
                posInit = 0;
            else
                posInit += 2;
            
            return baseUri.substring(posInit);
        }
        
        return baseUri;
    }
    
    /*
     * @brief This function return the base URI without the host.
     * Also all spaces are converted to %20.
     */
    public String getResourceBaseUri()
    {
        String baseUri = getResourceCompleteBaseUri();
        
        if(baseUri != null)
        {
            // Remove host
            int posEnd = baseUri.indexOf('/');
            
            if(posEnd == -1)
                return "";
            else
                return baseUri.substring(posEnd).replace(" ", "%20");
        }
        
        return null;
    }
    
    /*
     * @brief This function return the base URI without the host.
     * Also all spaces are converted to %20.
     */
    public String getResourceBaseUriWithoutLastBackslace()
    {
        String baseUri = getResourceBaseUri();
        
        if(baseUri != null)
        {
            if(!baseUri.isEmpty() && baseUri.charAt(baseUri.length() - 1) == '/')
            {
                if(baseUri.length() > 1)
                    baseUri = baseUri.substring(0, baseUri.length() - 2);
                else
                    baseUri = "";
            }

            return baseUri;
        }
        
        return null;
    }
    
    public String getResourceHost() {
        String path =  m_annotations.get("RESOURCES_BASE_URI");
        
        // Remove http://
        int posInit = path.indexOf("//");
        if(posInit == -1)
            posInit = 0;
        else
            posInit += 2;
        
        // Remove path
        int posEnd = path.indexOf('/', posInit);
        
        if(posEnd == -1)
            posEnd = path.length()-1;
        
        return path.substring(posInit, posEnd);     
    }
    
    ////////// End RESTful block //////////

    private String m_name = null;
    private Object m_parent = null;
  //! Map that stores the annotations of the interface.
    HashMap<String, String> m_annotations = null;
}
