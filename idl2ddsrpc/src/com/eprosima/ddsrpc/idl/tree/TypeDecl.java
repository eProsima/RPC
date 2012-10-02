package com.eprosima.ddsrpc.idl.tree;

public abstract class TypeDecl implements Named
{
	protected String name = null;
	protected String template_name = null;
	protected String initial_value = null;
	
	protected TypeDecl()
	{
	}
	
	protected TypeDecl(String name, String template_name)
	{
		this.name = name;
		this.template_name = template_name;
	}
	
	protected TypeDecl(String name, String template_name, String initial_value)
	{
		this.name = name;
		this.template_name = template_name;
		this.initial_value = initial_value;
	}
	
	
	public String getName()
	{
		return name;
	}
	
	public void setName(String name)
	{
		this.name = name;
	}
	
	public String getTemplateName()
	{
		return template_name;
	}
	
	public void setTemplateName(String template_name)
	{
		this.template_name = template_name;
	}
	
	public String getInitialValue()
	{
		return initial_value;
	}
	
	public void setInitialValue(String initial_value)
	{
		this.initial_value = initial_value;
	}
	
	public String getIsString()
	{
		String returnedValue = null;
		
		if(name.equals("string"))
			returnedValue = "yes";
		
		return returnedValue;
	}
}
