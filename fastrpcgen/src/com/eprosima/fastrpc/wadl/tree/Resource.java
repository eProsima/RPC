package com.eprosima.fastrpc.wadl.tree;

import com.eprosima.fastrpc.wadl.tree.Param;
import com.eprosima.fastrpc.wadl.tree.Method;
import com.eprosima.fastrpc.wadl.tree.Doc;
import java.util.ArrayList;

public class Resource
{
    private ArrayList<Param> m_params = null;
    private ArrayList<Resource> m_resources = null;
    private ArrayList<Method> m_methods = null;
    private ArrayList<Doc> m_docs = null;
    private String m_id = null;
    private String m_type = null;
    private String m_queryType = "application/x-www-form-urlencoded";
    private String m_path = null;
    
    private Resource parentResource;
    private ArrayList<Param> globalParameters;
	
	public Resource(String id, String type, String queryType, String path)
	{
		m_id = id;
		if(m_id == null) m_id = "";
		m_type = type;
		if(m_type == null) m_type = "";
		m_queryType = queryType;
		if(m_queryType == null) m_queryType = "";
		m_path = path;
		if(m_path == null) m_path = "";
		
		m_params = new ArrayList<Param>();
		m_resources = new ArrayList<Resource>();
		m_methods = new ArrayList<Method>();
		m_docs = new ArrayList<Doc>();
		
		globalParameters = new ArrayList<Param>();
	}
	
	public String getPath() {
		return m_path;
	}
	
	public String getId() {
		return m_id;
	}
	
	public void add(Param param)
	{
		m_params.add(param);
	}
	
	public void add(Resource resource)
	{
	    m_resources.add(resource);
	}
	
	public void add(Method method)
	{
		m_methods.add(method);
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public ArrayList<Param> getGlobalParameters() {
		return globalParameters;
	}
	
	public ArrayList<Param> getParameters() {
		return m_params;
	}
	
	public ArrayList<Method> getMethods() {
		return m_methods;
	}
	
	public ArrayList<String> getEmbeddedParameters() {
		ArrayList<String> embeddedParameters = new ArrayList<String>();	
		
		String[] pathElements = getPath().split("/");
		for(String element: pathElements) {
			if(element.startsWith("{") && element.endsWith("}")) {
				embeddedParameters.add(element.substring(1, element.length()-1));
			}				
		}
		
		return embeddedParameters;
	}
	
	public ArrayList<Resource> getChildResources() {
		return m_resources;
	}
	
	public void setParentResource(Resource resource) {
		parentResource = resource;
	}
	
	public Resource getParentResource() {
		return parentResource;
	}
	
	public void setGlobalParameters(ArrayList<Param> globalParameters) {
		this.globalParameters = globalParameters;
		
		//// EXPAND REFERENCE PARAMETERS		
		for(Param parameter: m_params) {
			if(parameter.getHref().equals(""))
				continue;			
			if(!parameter.getHref().startsWith("#"))
				continue;
			
			for(Param globalParameter: globalParameters) {
				if(parameter.getHref().substring(1).equals(globalParameter.getId())) {
					parameter.copyFrom(globalParameter);
					break;
				}
			}
		}
		
		//// EXPAND METHOD REFERENCE PARAMETERS
		for(Method method: m_methods) {
			method.setGlobalParameters(globalParameters);
		}
		
		//// BUILD CHILD GLOBAL PARAMETERS		
		// A child resource inherits matrix and template params from the father
		// Note matrix params are not supported in the first version
		ArrayList<Param> childGlobalParameters = new ArrayList<Param>();
		for(Param localParam: m_params) {
			if(localParam.getStyle().equals("template") ||
					localParam.getStyle().equals("matrix")) {
				childGlobalParameters.add(localParam); 
			}
		}
		
		// If there is name collision, we don't add global parameters
		for(Param globalParam: globalParameters) {
			boolean defined = false;
			
			for(Param localParam: m_params) {
				if(globalParam.getName().equals(localParam.getName())) {
					defined = true;
					break;
				}
			}		
			
			if(!defined)
				childGlobalParameters.add(globalParam);
		}
				
		//// SET CHILD GLOBAL PARAMETERS
		for(Resource resource: m_resources) {
			resource.setGlobalParameters(childGlobalParameters);
		}
	}

	/*!
	 * @brief Expands cross-referenced methods
	 */
	public void setGlobalMethods(ArrayList<Method> globalMethods) {
		for(Method method: m_methods) {
			if(method.getHref().equals(""))
				continue;			
			if(!method.getHref().startsWith("#"))
				continue;
			
			for(Method globalMethod: globalMethods) {
				if(method.getHref().substring(1).equals(globalMethod.getId())) {
					method.copyFrom(globalMethod);
					break;
				}
			}
		}
		
		for(Resource resource: m_resources) {
			resource.setGlobalMethods(globalMethods);
		}
	}
	
	/*!
	 * @brief Expands reference representations with global representations and does it for all child resources
	 * @param globalRepresentations
	 */
	public void setGlobalRepresentations(ArrayList<Representation> globalRepresentations) {
		for(Method method: m_methods) {
			method.setGlobalRepresentations(globalRepresentations);
		}
		
		for(Resource resource: m_resources) {
			resource.setGlobalRepresentations(globalRepresentations);
		}
	}

	/*
	 * @brief Gets the complete path, including all its parent's paths, but without the base URI
	 * 
	 * @returns A String with all the paths
	 */
	public String getCompletePath() {
		String path = "";
		
		Resource parent = parentResource;
		while(parent != null) {
			path = parent.m_path + "/" + path;
			
			parent = parent.parentResource;
		}
		
		if(path.length() > 0)
			path += m_path;
		else
			path = m_path;
				
		return path;
	}

	/*!
	 * @brief Gets an array containing all embedded paths appearing in the complete path
	 * 
	 * @returns The array with all the embedded parameters
	 */
	public ArrayList<String> getCompletePathEmbeddedParameters() {
		ArrayList<String> embeddedParameters = new ArrayList<String>();	
		
		String[] pathElements = getCompletePath().split("/");
		for(String element: pathElements) {
			if(element.startsWith("{") && element.endsWith("}")) {
				embeddedParameters.add(element.substring(1, element.length()-1));
			}				
		}
		
		return embeddedParameters;
	}
}
