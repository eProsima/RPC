package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Resources
{
    private ArrayList<Resource> m_resources = null;
    private ArrayList<Doc> m_docs = null;
    private String m_base = null;
    	
	public Resources(String base)
	{
		m_base = base;
		if(m_base == null)
			m_base = "";
		m_resources = new ArrayList<Resource>();
		m_docs = new ArrayList<Doc>();
	}
	
	public String getBase() {
		return m_base;
	}
	
	public void add(Resource resource)
	{
		m_resources.add(resource);
	}
	
	public ArrayList<Resource> getResources() {
		return m_resources;
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	/*!
	 * @brief Expands reference parameters with global parameters in all child resources
	 * 
	 * @param globalParameters
	 */
	public void setGlobalParameters(ArrayList<Param> globalParameters) {
		for(Resource resource: m_resources) {
			resource.setGlobalParameters(globalParameters);
		}
	}

	/*!
	 * @brief Expands reference methods with global methods in all child resources
	 * @param globalMethods
	 */
	public void setGlobalMethods(ArrayList<Method> globalMethods) {
		for(Resource resource: m_resources) {
			resource.setGlobalMethods(globalMethods);
		}
	}
	
	/*!
	 * @brief Expands reference representations with global representations in all child resources
	 * @param globalRepresentations
	 */
	public void setGlobalRepresentations(ArrayList<Representation> globalRepresentations) {
		for(Resource resource: m_resources) {
			resource.setGlobalRepresentations(globalRepresentations);
		}
	}
}
