package com.eprosima.rpcdds.idl.tree;

public class BasicType extends TypeDecl
{
	public BasicType(String name, String template_name)
	{
		super(name, template_name);
	}
	
	public BasicType(String name, String template_name, String initial_value)
	{
		super(name, template_name, initial_value);
	}
}
