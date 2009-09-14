package com.eprosima.ddscs.idl.tree;

import java.util.ArrayList;
import java.util.List;

public class Operation implements Named{
	private String returnType;
	private String name;
	private List<InputParam> inputParams;
	private List<InoutParam> inoutParams;
	private List<OutputParam> outputParams;
	
	public Operation(){
		inputParams = new ArrayList<InputParam>();
		inoutParams = new ArrayList<InoutParam>();
		outputParams = new ArrayList<OutputParam>();
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
	public List<InputParam> getInputParams() {
		return inputParams;
	}
	public List<InoutParam> getInoutParams() {
		return inoutParams;
	}
	public List<OutputParam> getOutputParams() {
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
