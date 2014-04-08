package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Method
{
	private ArrayList<Doc> m_docs = null;
	private ArrayList<Response> m_responses = null;
	private Request request = null;
	private String m_id = null;
	private String m_name = null;
	private String m_href = null;
	
    private Resource parentResource = null;
	
	public Method(String id, String name, String href)
	{
		m_id = id;
		if(m_id == null) m_id = "";
		m_name = name;
		if(m_name == null) m_name = "";
		m_href = href;
		if(m_href == null) m_href = "";
		m_docs = new ArrayList<Doc>();
		m_responses = new ArrayList<Response>();
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public void add(Response response)
	{
		m_responses.add(response);
	}
	
	public void setRequest(Request request) {
		this.request = request;
	}
	
	public Request getRequest() {
		return request;
	}
	
	public ArrayList<Response> getResponses() {
		return m_responses;
	}
	
	public String getId() {
		return m_id;
	}
	
	public String getName() {
		return m_name;
	}

	public void setParentResource(Resource resource) {
		parentResource = resource;
	}
	
	public Resource getParentResource() {
		return parentResource;
	}

	public String getHref() {
		return m_href;
	}
	
	public void copyFrom(Method method) {
		m_docs = method.m_docs;
		m_id = method.m_id;
		m_name = method.m_name;		
		request = method.request;
		m_responses = method.m_responses;
	}

	public void setGlobalRepresentations(ArrayList<Representation> globalRepresentations) {
		if(request != null)
			request.setGlobalRepresentations(globalRepresentations);
		
		for(Response response: m_responses) {
			response.setGlobalRepresentations(globalRepresentations);
		}
	}

	public void setGlobalParameters(ArrayList<Param> m_params) {
		if(request != null) {
			request.setGlobalParameters(m_params);			
		}
	}
}
