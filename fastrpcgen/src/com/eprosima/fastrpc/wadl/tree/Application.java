package com.eprosima.fastrpc.wadl.tree;
import java.util.ArrayList;

public class Application
{
	private ArrayList<Doc> m_docs = null;
	private Grammar m_grammar = null;
	private ArrayList<Resources> m_resourceses = null;

	private ArrayList<ResourceType>	m_resource_types = null;
	private ArrayList<Method> m_methods = null;
	private ArrayList<Representation> m_representations = null;
	private ArrayList<Param> m_params = null;
	
	private String targetNamespace;
	
	public Application() {
		this("");
	}
	
	public Application(String targetNamespace)
	{
		m_resourceses = new ArrayList<Resources>();
		m_methods = new ArrayList<Method>();
		m_params = new ArrayList<Param>();
		m_docs = new ArrayList<Doc>();
		m_representations = new ArrayList<Representation>();
		m_resource_types = new ArrayList<ResourceType>();
		
		this.targetNamespace = targetNamespace;
		if(targetNamespace == null)
			this.targetNamespace = "";
	}
	
	public void add(Resources resources)
	{
		m_resourceses.add(resources);
	}
	
	public ArrayList<Resources> getResources()
	{
		return m_resourceses;
	}
	
	public void add(Method method)
	{
		m_methods.add(method);
	}
	
	public void add(Param param)
	{
		m_params.add(param);
	}
	
	public ArrayList<Param> getParams()
	{
		return m_params;
	}
	
	public Grammar getGrammar()
	{
		return m_grammar;
	}
	
	public void setGrammar(Grammar grammar)
	{
		m_grammar = grammar;
	}
	
	public void add(Doc doc)
	{
		m_docs.add(doc);
	}
	
	public String getTargetNamespace() {
		return targetNamespace;
	}

	public void add(Representation representation) {
		m_representations.add(representation);
	}

	public void add(ResourceType resource_type) {
		m_resource_types.add(resource_type);
	}
	
	/*!
	 * @brief We call this method once the WADL parsing is complete. It expands
	 * cross-referenced variables and sets global parameters and methods.
	 */
	public void updateStructure() {
		// TODO EXPANDIR PARAMETROS Y REPRESENTATIONS DE LOS METODOS GLOBALES
		for(Method method: m_methods) {
			method.setGlobalRepresentations(m_representations);
			method.setGlobalParameters(m_params);
		}
		
		for(Resources resources: m_resourceses) {
			resources.setGlobalParameters(m_params);
			resources.setGlobalMethods(m_methods);
			resources.setGlobalRepresentations(m_representations);
		}
	}
	
}
