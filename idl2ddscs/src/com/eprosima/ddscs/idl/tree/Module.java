package com.eprosima.ddscs.idl.tree;

import java.util.ArrayList;
import java.util.List;

public class Module implements Named {
	private String name;
	private List simpleTypes;
	private Interface ifc;
	

	public Module(){
		simpleTypes = new ArrayList();
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public List getTypes() {
		return simpleTypes;
	}

	public void add(SimpleTypedef t){
		simpleTypes.add(t);
	}

	public Interface getIfc() {
		return ifc;
	}
	public void setIfc(Interface ifc) {
		this.ifc = ifc;
	}
}
