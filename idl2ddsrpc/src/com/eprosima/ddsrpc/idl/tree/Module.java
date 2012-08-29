package com.eprosima.ddsrpc.idl.tree;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class Module implements Named {
	private String name;
	private List type_declarations;
	private Interface ifc;
	private boolean error = false;
	

	public Module(String middleware)
	{
		BasicType bt = null;
		EnumType et = null;
		SequenceType st = null;
		type_declarations = new ArrayList();
		
		// Create basic types:
		if(middleware.equals("rti"))
		{
			bt = new BasicType("char", "DDS_Char");
			type_declarations.add(bt);
			bt = new BasicType("wchar", "DDS_Wchar");
			type_declarations.add(bt);
			bt = new BasicType("octet", "DDS_Octet");
			type_declarations.add(bt);
			bt = new BasicType("short", "DDS_Short");
			type_declarations.add(bt);
			bt = new BasicType("unsigned short", "DDS_UnsignedShort");
			type_declarations.add(bt);
			bt = new BasicType("long", "DDS_Long");
			type_declarations.add(bt);
			bt = new BasicType("unsigned long", "DDS_UnsignedLong");
			type_declarations.add(bt);
			bt = new BasicType("long long", "DDS_LongLong");
			type_declarations.add(bt);
			bt = new BasicType("unsigned long long", "DDS_UnsignedLongLong");
			type_declarations.add(bt);
			bt = new BasicType("float", "DDS_Float");
			type_declarations.add(bt);
			bt = new BasicType("double", "DDS_Double");
			type_declarations.add(bt);
			bt = new BasicType("long double", "DDS_LongDouble");
			type_declarations.add(bt);
			bt = new BasicType("boolean", "DDS_Boolean");
			type_declarations.add(bt);
			bt = new BasicType("string", "char*");
			type_declarations.add(bt);
			et = new EnumType("eProsima::DDSRPC::ReturnMessage");
			type_declarations.add(et);
			st = new SequenceType("sequence");
			type_declarations.add(st);
		}
		else if(middleware.equals("opendds"))
		{
			bt = new BasicType("char", "CORBA::Char");
			type_declarations.add(bt);
			bt = new BasicType("wchar", "CORBA::Wchar");
			type_declarations.add(bt);
			bt = new BasicType("octet", "CORBA::Octet");
			type_declarations.add(bt);
			bt = new BasicType("short", "CORBA::Short");
			type_declarations.add(bt);
			bt = new BasicType("unsigned short", "CORBA::UShort");
			type_declarations.add(bt);
			bt = new BasicType("long", "CORBA::Long");
			type_declarations.add(bt);
			bt = new BasicType("unsigned long", "CORBA::ULong");
			type_declarations.add(bt);
			bt = new BasicType("long long", "CORBA::LongLong");
			type_declarations.add(bt);
			bt = new BasicType("unsigned long long", "CORBA::ULongLong");
			type_declarations.add(bt);
			bt = new BasicType("float", "CORBA::Float");
			type_declarations.add(bt);
			bt = new BasicType("double", "CORBA::Double");
			type_declarations.add(bt);
			bt = new BasicType("long double", "CORBA::LongDouble");
			type_declarations.add(bt);
			bt = new BasicType("boolean", "CORBA::Boolean");
			type_declarations.add(bt);
			bt = new BasicType("string", "char*");
			type_declarations.add(bt);
			et = new EnumType("eProsima::DDSRPC::ReturnMessage");
			type_declarations.add(et);
			st = new SequenceType("sequence");
			type_declarations.add(st);
		}
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public List getTypesDecl() {
		return type_declarations;
	}

	public void addTypeDecl(TypeDecl t){
		type_declarations.add(t);
	}
	
	public TypeDecl getTypeDecl(String name)
	{
		TypeDecl returnedValue = null, typedecl = null;
		
		for(ListIterator iter = type_declarations.listIterator(); iter.hasNext();)
        {
			typedecl = (TypeDecl) iter.next();

			if(typedecl.getName().equals(name))
			{
				returnedValue = typedecl;
				break;
			}
        }
		
		return returnedValue;
	}

	public Interface getIfc() {
		return ifc;
	}
	public void setIfc(Interface ifc) {
		this.ifc = ifc;
		this.ifc.setModule(this);
	}
	
	public boolean getError()
	{
		return error;
	}
	
	public void setError()
	{
		error = true;
	}
}
