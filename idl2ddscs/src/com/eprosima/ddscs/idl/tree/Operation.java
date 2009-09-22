package com.eprosima.ddscs.idl.tree;

import java.util.ArrayList;
import java.util.List;

public class Operation implements Named{
	private String returnType;
	private String name;
	private List inputParams;
	private List inoutParams;
	private List outputParams;
	
	public Operation(){
		inputParams = new ArrayList();
		inoutParams = new ArrayList();
		outputParams = new ArrayList();
	}
	
	public String getReturnType() {
		return returnType;
	}
	public void setReturnType(String returnType) {
		this.returnType = returnType;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public List getInputParams() {
		return inputParams;
	}
	public List getInoutParams() {
		return inoutParams;
	}
	public List getOutputParams() {
		return outputParams;
	}
	
	public void addInputParam(InputParam param){
		inputParams.add(param);
	}
	public void addInoutParam(InoutParam param){
		inoutParams.add(param);
	}
	public void addOutputParam(OutputParam param){
		outputParams.add(param);
	}

}
