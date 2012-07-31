package com.eprosima.ddscs.idl.tree;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class Module implements Named {
	private String name;
	private List type_declarations;
	private Interface ifc;
	

	public Module(){
		BasicType bt = null;
		EnumType et = null;
		SequenceType st = null;
		type_declarations = new ArrayList();
		
		// Create basic types:
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
        et = new EnumType("DDSRPC::ReturnMessage");
        type_declarations.add(et);
        st = new SequenceType("sequence");
        type_declarations.add(st);
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
}
