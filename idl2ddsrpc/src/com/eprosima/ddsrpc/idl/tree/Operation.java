/* $Id$   *
 * (c) Copyright, eProsima, 2009.                                          *
 * All rights reserved.                                                    *    
 *                                                                         *
 * No duplications, whole or partial, manual or electronic, may be made    *
 * without express written permission.  Any such copies, or                *
 * revisions thereof, must display this notice unaltered.                  *
 * This code contains trade secrets of                                     *
 * eProsima (Proyectos y Sistemas de Mantenimiento S.L.)                   *
 *                                                                         *
 * modification history                                                    *
 * --------------------                                                    *
 * 1.0,29sep09,RodM Created                                                *
 * =====================================================================   *
 */

package com.eprosima.ddsrpc.idl.tree;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class Operation implements Named{
	private OutputParam m_returnType = null;
	private String name;
	private List params;
	/*private String m_requestLibrary = null;
	private String m_replyLibrary = null;
	private String m_requestProfile = null;
	private String m_replyProfile = null;*/
	private boolean m_isOneway = false;
	
	public Operation(){
		params = new ArrayList();
	}
	
	public void createReturnType(String returnTypeName)
	{
		m_returnType = new OutputParam(returnTypeName, name + "_ret");
	}
	
	public Param getReturnType()
	{
		return m_returnType;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public List getParams() {
		return params;
	}
	
	public void addParam(Param param){
		params.add(param);
	}
	
	/**
	 * This function returns whether the operation has output parameters.
	 * 
	 * @return True if the operation has output parameters. In other case returns false.
	 */
	public boolean hasOutputParams()
	{
		boolean returnedValue = false;
		
		for(ListIterator paramIter = params.listIterator(); paramIter.hasNext();)
		{
			Param parameter = (Param)paramIter.next();
			
			if(parameter instanceof InoutParam || parameter instanceof OutputParam)
			{
			   returnedValue = true;
			   break;
			}
		}
		
		return returnedValue;
	}

	/*public void setRequestLibrary(String library)
	{
		m_requestLibrary = library;
	}
	
	public String getRequestLibrary()
	{
		return m_requestLibrary;
	}
	
	public void setReplyLibrary(String library)
	{
		m_replyLibrary = library;
	}
	
	public String getReplyLibrary()
	{
		return m_replyLibrary;
	}
	
	public void setRequestProfile(String profile)
	{
		m_requestProfile = profile;
	}
	
	public String getRequestProfile()
	{
		return m_requestProfile;
	}
	
	public void setReplyProfile(String profile)
	{
		m_replyProfile = profile;
	}
	
	public String getReplyProfile()
	{
		return m_replyProfile;
	}*/
	
	public boolean isOneway()
	{
		return m_isOneway;
	}
	
	public void setIsOneway(boolean b)
	{
		m_isOneway = b;
	}
}
