package com.eprosima.fastrpc.tree;

import com.eprosima.fastrpc.typecode.TypeCode;

public abstract class Param
{
    public abstract boolean isInput();
    
    public abstract boolean isOutput();
    
    public boolean isOnlyOutput()
    {        
        return !isInput() && isOutput();
    }
    
    public abstract String getComment();
    
    public Param(String name, TypeCode typecode)
    {
        m_name = name;
        m_typecode = typecode;
    }
    
    public String getName()
    {
        return m_name;
    }
    
    public TypeCode getTypecode()
    {
        return m_typecode;
    }
    
    public void setParent(Object obj)
    {
        m_parent = obj;
    }
    
    public Object getParent()
    {
        return m_parent;
    }
    
    ////////// RESTful block //////////
    
    /*
     * @brief Get the annotation with the real name of the query parameter.
     * Also substitute the spaces by %20.
     */
    public String getRealname()
    {
        String realname;
        
        if((realname = ((Operation)getParent()).getAnnotations().get(m_name)) != null)
        {
            return realname.replace(" ", "%20");
        }
        
        return m_name;
    }
    
    public boolean getBodyParam ()
    {
    	String bodyParam = ((Operation)getParent()).getBody();   	
        return getName().equals(bodyParam);
    }
    
    /////// End of RESTful block //////
    
    private String m_name = null;
    private TypeCode m_typecode = null;
    private Object m_parent = null;
}
