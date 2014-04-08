package com.eprosima.fastrpc.wadl.tree;

import java.util.ArrayList;

public class Response {

	private String status;
	private ArrayList<Representation> representations = null;
	
	public Response(String status) {
		this.status = status;
		representations = new ArrayList<Representation>();
	}
	
	public String getStatus() {
		return status;
	}

	public void add(Representation representation) {
		representations.add(representation);
	}

	public ArrayList<Representation> getRepresentations() {
		return representations;
	}

	public void setGlobalRepresentations(ArrayList<Representation> globalRepresentations) {
		for(Representation representation: representations) {
			if(representation.getHref().equals(""))
				continue;			
			if(!representation.getHref().startsWith("#"))
				continue;
			
			for(Representation globalRepresentation: globalRepresentations) {
				if(representation.getHref().substring(1).equals(globalRepresentation.getId())) {
					representation.copyFrom(globalRepresentation);
					break;
				}
			}
		}
	}
	
}
