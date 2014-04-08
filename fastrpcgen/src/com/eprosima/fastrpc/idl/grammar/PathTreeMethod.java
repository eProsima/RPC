package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

public class PathTreeMethod {
	private String name;
	private String httpMethod;
	private PathTree parentNode;
	private ArrayList<String> queryParameters;
	
	public ArrayList<String> getQueryParameters() {
		return queryParameters;
	}

	public PathTreeMethod(String name, String httpMethod, PathTree parentNode) {
		this.name = name;
		this.httpMethod = httpMethod;
		this.parentNode = parentNode;
		queryParameters = new ArrayList<String>();
	}
	
	public String getName() {
		return name;
	}
	
	public String getEnumHTTPMethod() {
		String enumHTTPMethod = "HttpMessage::HTTP_METHOD_GET";
		
		if(httpMethod.equals("POST")) {
			enumHTTPMethod = "HttpMessage::HTTP_METHOD_POST";
		} else if(httpMethod.equals("PUT")) {
			enumHTTPMethod = "HttpMessage::HTTP_METHOD_PUT";
		} else if(httpMethod.equals("DELETE")) {
			enumHTTPMethod = "HttpMessage::HTTP_METHOD_DELETE";
		}
		
		return enumHTTPMethod;
	}
	
	public void addQueryParameter(String queryParameter) {
		queryParameters.add(queryParameter);
	}

	public String getIterationCode() {
		
		
		String code = "";
		
		code += "if(httpMessage.getMethod() == "+getEnumHTTPMethod()+") {\n";

		if (queryParameters.size() > 0) {
			code += "if(";
			for(String parameter: queryParameters) {
				code += "restSerializer.existsQueryParameter(\"" + parameter + "\")&&";
			}		
			code = code.substring(0, code.length() - 2);
			code += ") {\n";
			
			code += "return deserialize_"+parentNode.getInterfaceName()+"_"+name+"(restSerializer, httpMessage); // MATCHING\n";
			
			code += "}\n";
		} else {
			code += "return deserialize_"+parentNode.getInterfaceName()+"_"+name+"(restSerializer, httpMessage); // MATCHING\n";
		}
		
		code += "}\n";
		
		return code;
	}
}
