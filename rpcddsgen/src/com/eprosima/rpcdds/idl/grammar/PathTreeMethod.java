package com.eprosima.rpcdds.idl.grammar;

import java.util.ArrayList;

public class PathTreeMethod {
	private String name;
	private PathTree parentNode;
	private ArrayList<String> queryParameters;
	
	public ArrayList<String> getQueryParameters() {
		return queryParameters;
	}

	public PathTreeMethod(String name, PathTree parentNode) {
		this.parentNode = parentNode;
		this.name = name;
		queryParameters = new ArrayList<String>();
	}
	
	public String getName() {
		return name;
	}
	
	public void addQueryParameter(String queryParameter) {
		queryParameters.add(queryParameter);
	}

	public String getIterationCode() {		
		
		String code = "";

		if (queryParameters.size() > 0) {
			code += "if(";
			for(String parameter: queryParameters) {
				code += "httpParams.containsParam(\"" + parameter + "\")&&";
			}		
			code = code.substring(0, code.length() - 2);
			code += ") {\n";
			
			code += "return deserialize_"+parentNode.getInterfaceName()+"_"+name+"(httpSerializer); // MATCHING\n";
			
			code += "}\n";
		} else {
			code += "return deserialize_"+parentNode.getInterfaceName()+"_"+name+"(httpSerializer); // MATCHING\n";
		}
		
		return code;
	}
}
