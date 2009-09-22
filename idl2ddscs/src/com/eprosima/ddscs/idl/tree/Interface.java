package com.eprosima.ddscs.idl.tree;

import java.util.ArrayList;
import java.util.List;

public class Interface implements Named{
	private String name;
	private List operations;
	
	public Interface(){
		operations = new ArrayList();
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public List getOperations() {
		return operations;
	}

	public void add(Operation op){
		operations.add(op);
	}
}
