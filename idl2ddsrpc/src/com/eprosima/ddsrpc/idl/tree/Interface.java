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

public class Interface implements Named{
	private String name;
	private List operations;
	private Module parent;
	private String m_qosLibrary = null;
	private String m_qosProfile = null;
	
	public Interface(){
		operations = new ArrayList();
		parent = null;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}

	public List getOperations() {
		return operations;
	}

	public void add(Operation op){
		operations.add(op);
	}
	
	public Module getModule()
	{
		return parent;
	}
	
	public void setModule(Module parent)
	{
		this.parent = parent;
	}
	
	public void setQosLibrary(String library)
	{
		m_qosLibrary = library;
	}
	
	public String getQosLibrary()
	{
		return m_qosLibrary;
	}
	
	public void setQosProfile(String profile)
	{
		m_qosProfile = profile;
	}
	
	public String getQosProfile()
	{
		return m_qosProfile;
	}
}
