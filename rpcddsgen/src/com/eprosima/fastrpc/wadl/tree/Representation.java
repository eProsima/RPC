package com.eprosima.fastrpc.wadl.tree;

public class Representation {

	private String href;
	private String id;
	private String mediaType;
	private String element;
	private String profile;
	
	public Representation(String href, String id, String mediaType,
			String element, String profile) {
		this.href = href;
		if(this.href == null)
			this.href = "";
		this.id = id;
		if(this.id == null)
			this.id = "";
		this.mediaType = mediaType;
		if(this.mediaType == null)
			this.mediaType = "";
		this.element = element;
		if(this.element == null)
			this.element = "";
		this.profile = profile;
		if(this.profile == null)
			this.profile = "";
	}

	public String getId() {
		return id;
	}
	
	public String getElement() {
		return element;
	}
	
	public String getMediaType() {
		return mediaType;
	}

	public String getHref() {
		return href;
	}

	public void copyFrom(Representation globalRepresentation) {
		id = globalRepresentation.id;
		mediaType = globalRepresentation.mediaType;
		element = globalRepresentation.element;
		profile = globalRepresentation.profile;
	}
}
