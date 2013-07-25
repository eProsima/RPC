package com.eprosima.rpcdds.tree;

import java.util.ArrayList;

import com.eprosima.rpcdds.idl.grammar.Context;
import com.eprosima.rpcdds.typecode.TypeCode;

public class Operation implements Export
{
    public Operation(String name)
    {
        m_name = name;
        m_params = new ArrayList<Param>();
        m_exceptions = new ArrayList<com.eprosima.rpcdds.tree.Exception>();
        m_unresolvedExceptions = new ArrayList<String>();
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
    
    public boolean isOperation()
    {
        return true;
    }
    
    @Override
    public boolean isException()
    {
        return false;
    }
    
    public void setOneway(boolean b)
    {
        m_isOneway = b;
    }
    
    public boolean isOneway()
    {
        return m_isOneway;
    }
    
    public void add(Param param)
    {
        m_params.add(param);
        param.setParent(this);
    }
    
    public ArrayList<Param> getParameters()
    {
        return m_params;
    }
    
    public ArrayList<Param> getInputparam()
    {
        ArrayList<Param> input = new ArrayList<Param>();
        
        for(int count = 0; count < m_params.size(); ++count)
            if(m_params.get(count).isInput())
                input.add(m_params.get(count));
        
        return input;
    }
    
    public ArrayList<Param> getOutputparam()
    {
        ArrayList<Param> output = new ArrayList<Param>();
        
        for(int count = 0; count < m_params.size(); ++count)
            if(m_params.get(count).isOutput())
                output.add(m_params.get(count));
        
        return output;
    }
    
    public ArrayList<Param> getInoutputparam()
    {
        ArrayList<Param> inoutput = new ArrayList<Param>();
        
        for(int count = 0; count < m_params.size(); ++count)
            if(m_params.get(count).isInput() && m_params.get(count).isOutput())
                inoutput.add(m_params.get(count));
        
        return inoutput;
    }
    
    public void setRettype(TypeCode rettype)
    {
        if(rettype != null)
        {
            m_rettype = rettype;
            m_rettypeparam = new OutputParam(m_name + "_ret", m_rettype);
        }
    }
    
    public TypeCode getRettype()
    {
        return m_rettype;
    }
    
    public Param getRettypeparam()
    {
        return m_rettypeparam;
    }
    
    public void addException(com.eprosima.rpcdds.tree.Exception exception)
    {
    	m_exceptions.add(exception);
    }
    
    public ArrayList<com.eprosima.rpcdds.tree.Exception> getExceptions()
    {
    	return m_exceptions;
    }
    
    public void addUnresolvedException(String ename)
    {
    	m_unresolvedExceptions.add(ename);
    }
    
    @Override
    public boolean resolve(Context ctx)
    {
    	//Resolve unresolved exceptions. This unresolved exceptions should be exceptions of the parent interface.
    	
    	if(m_parent != null)
    	{
    		if(m_parent instanceof Interface)
    		{
    			Interface ifc = (Interface)m_parent;
    			
    			for(int count = 0; count < m_unresolvedExceptions.size(); ++count)
    			{
    				com.eprosima.rpcdds.tree.Exception ex = ifc.getException(ctx.getScope(), m_unresolvedExceptions.get(count));
    				
    				if(ex != null)
    				{
    					
    					m_exceptions.add(ex);
    				}
    				else
    				{
    					System.out.println("ERROR: The definition of exception " + m_unresolvedExceptions.get(count) +
    							" was not found");
    					//TODO
    					//return false;
    				}
    			}
    			
    			return true;
    		}
    		else
    		{
    			System.out.println("ERROR<Operation::resolve>: Parent is not an interface");
    		}
    	}
    	else
    	{
    		System.out.println("ERROR<Operation::resolve>: Not parent for operation");
    	}
    	
    	return false;
    }

    private String m_name = null;
    private Object m_parent = null;
    private boolean m_isOneway = false;
    private ArrayList<Param> m_params;
    private ArrayList<com.eprosima.rpcdds.tree.Exception> m_exceptions;
    private ArrayList<String> m_unresolvedExceptions;
    private TypeCode m_rettype = null;
    private Param m_rettypeparam = null;
}
