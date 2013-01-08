package com.eprosima.rpcdds.idl.tree;

public class EnumType extends TypeDecl
{
	public EnumType()
	{
		super();
	}
	
	public EnumType(String name)
	{
		super(name, name);
	}
	
	public EnumType(String name, String initial_value)
	{
		super(name, name, initial_value);
	}
}
