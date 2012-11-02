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

public class Interface implements Named{
	private String name;
	private List operations;
	private Module parent;
	//private String m_qosLibrary = null;
	//private String m_qosProfile = null;
	
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
		// Before add the operation, all its parameters should have its type declarations.
		List lparams = op.getParams();
		
		for(ListIterator it = lparams.listIterator(); it.hasNext();)
		{
			Param param = (Param)it.next();
			
			TypeDecl type = parent.getTypeDecl(param.getTypeName());
			
			if(type != null)
			{
				// If type is typedef, then get the base type.
				while(type instanceof SimpleTypedef)
		    	{
					type = ((SimpleTypedef)type).getBase();
		    	}
				
				param.setBaseType(type);
			}
			else
			{
				System.out.println("ERROR<Interface::add>: Not found the type declaration of a parameter");
			}
			
		}
		
		// The returned type also should have its type declaration. Check that its not "void".
		if(!op.getReturnType().getTypeName().equals("void"))
		{
			// Update the return parameter name.
			op.getReturnType().setName(op.getName() + "_ret");
			TypeDecl type = parent.getTypeDecl(op.getReturnType().getTypeName());
			
			if(type != null)
			{
				// If type is typedef, then get the base type.
				while(type instanceof SimpleTypedef)
		    	{
					type = ((SimpleTypedef)type).getBase();
		    	}
				
				op.getReturnType().setBaseType(type);
			}
			else
			{
				System.out.println("ERROR<Interface::add>: Not found the type declaration of the returned type");
			}
		}
		
		
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
	
	/*public void setQosLibrary(String library)
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
	}*/
}
