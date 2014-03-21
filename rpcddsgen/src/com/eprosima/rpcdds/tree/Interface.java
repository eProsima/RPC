package com.eprosima.rpcdds.tree;

import java.util.ArrayList;
import java.util.HashMap;

public class Interface extends ExportContainer implements Definition, Notebook
{
    public Interface(String scope, String name)
    {
        m_name = name;
        m_scope = scope;
        m_annotations = new HashMap<String, String>();
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public String getScopedname()
    {
        if(m_scope.isEmpty())
            return m_name;

        return m_scope + "::" + m_name;
    }

    public String getScope()
    {
        return m_scope;
    }
    
    /*
     * @brief This function returns the scoped name of the interface but
     * changing "::" by "_".
     */
    public String getFormatedScopedname()
    {
        String ret = null;
        
        if(m_scope.isEmpty())
            ret = m_name;
        else
            ret = m_scope + "::" + m_name;
        
        return ret.replaceAll("::", "_");
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
    public boolean isIsModule()
    {
        return false;
    }
    
    @Override
    public boolean isIsInterface()
    {
    	return true;
    }
    
    @Override
    public boolean isIsException()
    {
    	return false;
    }
    
    @Override
    public boolean isIsTypeDeclaration()
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
            if(getExports().get(count).isIsException())
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
            if(getExports().get(count).isIsOperation())
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
    		
    		if(getExports().get(count).isIsException())
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
    
    /*!
     * @brief This function returns all operations of the interface.
     * This function is used in the string templates.
     */
    public ArrayList<Operation> getOperations()
    {
        if(m_operations == null)
        {
            m_operations = new ArrayList<Operation>();
            
            for(int count = 0; count < getExports().size(); ++count)
            {
                if(getExports().get(count).isIsOperation())
                {
                    m_operations.add((Operation)getExports().get(count));
                }
            }
        }
        
        return m_operations;
    }
    
    /*!
     * @brief This function is used in stringtemplates to not generate module in some cases (Right now in generated RTI idl).
     */
    public boolean isThereAreDeclarations()
    {
        boolean returnedValue = false;
        
        for(int count = 0; !returnedValue && count < getExports().size(); ++count)
        {
            returnedValue = getExports().get(count).isIsTypeDeclaration() || getExports().get(count).isIsException();
        }
        
        return returnedValue;
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
    
    public String getPath() {
    	return getAnnotations().get("PATH");
    }
    
    public String getPathWithoutFirstBackslace()
    {
        String path = getPath();
        
        if(path != null)
        {
            if(!path.isEmpty() && path.charAt(0) ==  '/')
                path = path.substring(1);
            
            return path;
        }
        
        return null;
    }
    
    public boolean getPathHasBrackets() {
    	if(getPath().contains("{") && getPath().contains("}"))
    		return true;
    	
    	return false;
    }
    
    public ArrayList<Integer> getTemplateParameterPositions()
    {
        ArrayList<Integer> ret = new ArrayList<Integer>();
        int fpos = -1, numTag = 0;
        
        String uri = getPath();
        
        if(uri.length() > 2)
        {
            if(uri.charAt(0) == '/')
                ++fpos;
            
            int lpos = fpos;
            
            do
            {
                if(uri.length() > lpos + 1)
                {
                    if(uri.charAt(lpos + 1) == '{')
                        ret.add(numTag);
                    
                    fpos = lpos + 1;
                }
                else
                    break;
                
                ++numTag;
            }
            while((lpos = uri.indexOf('/', fpos)) != -1);
        }
        
        return ret;
    }
    
    /////// End of RESTful block //////

    private String m_name = null;
    private String m_scope = null;
    private Object m_parent = null;
    
    //! Contains all operations.
    private ArrayList<Operation> m_operations = null;
    //! Cache the first operation.
    private Operation m_firstoperation = null;
    //! Cache the first exception.
    private com.eprosima.rpcdds.tree.Exception m_firstexception = null;
    //! Map that stores the annotations of the interface.
    HashMap<String, String> m_annotations = null;
}
