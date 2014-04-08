package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Request {

	private ArrayList<Param> m_params = null;
	private ArrayList<Representation> representations = null;
    
    public Request() {
    	m_params = new ArrayList<Param>();
    	representations = new ArrayList<Representation>();
    }
	
	public void add(Param param)
	{
		m_params.add(param);
	}

	public ArrayList<Param> getParams() {
		return m_params;
	}

	/*!
	 * @brief Expands reference representations with global representations
	 * @param globalRepresentations
	 */
	public void setGlobalRepresentations(ArrayList<Representation> globalRepresentations) {
		for(Representation representation: representations) {
			if(representation.getHref().equals(""))
				continue;			
			if(!representation.getHref().startsWith("#"))
				continue; // TODO ERROR?
			
			for(Representation globalRepresentation: globalRepresentations) {
				if(representation.getHref().substring(1).equals(globalRepresentation.getId())) {
					representation.copyFrom(globalRepresentation);
					break;
				}
			}
		}
	}

	public ArrayList<Representation> getRepresentations() {
		return representations;
	}

	public void add(Representation representation) {
		representations.add(representation);
	}

	/*!
	 * @brief Expands reference parameters with global parameters
	 * 
	 * @param globalParameters
	 */
	public void setGlobalParameters(ArrayList<Param> globalParameters) {
		for(Param param: m_params) {
			if(param.getHref().equals(""))
				continue;			
			if(!param.getHref().startsWith("#"))
				continue; // TODO ERROR?
			
			for(Param globalParameter: globalParameters) {
				if(param.getHref().substring(1).equals(globalParameter.getId())) {
					param.copyFrom(globalParameter);
					break;
				}
			}
		}
	}

}
