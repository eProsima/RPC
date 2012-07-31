package com.eprosima.ddsrpc.idl.tree;

public abstract class TypeDecl implements Named
{
	protected String name;
	protected String template_name;
	
	protected TypeDecl()
	{
	}
	
	protected TypeDecl(String name, String template_name)
	{
		this.name = name;
		this.template_name = template_name;
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
}
