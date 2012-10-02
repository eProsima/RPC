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

public abstract class Param  implements Named{
	/// Name of the parameter.
	protected String name = null;
	/// Name of the type of the parameter.
	protected String typeName = null;
	/// Type of the parameter.
	protected TypeDecl baseType = null;
	protected String comment = null;

	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getTypeName() {
		return typeName;
	}
	
	public void setTypeName(String typeName) {
		this.typeName = typeName;
	}
	
	public TypeDecl getBaseType() {
		return baseType;
	}
	
	public void setBaseType(TypeDecl baseType) {
		this.baseType = baseType;
	}
	
	public String getComment()
	{
		return comment;
	}
	
	public String getIsInput()
	{
		String returnedValue = null;
		
		if(isInput())
			returnedValue = "yes";
			
		return returnedValue;
	}
	
	public String getIsOutput()
	{
		String returnedValue = null;
		
		if(isOutput())
			returnedValue = "yes";
			
		return returnedValue;
	}
	
	public String getIsRestrictedInput()
	{
		String returnedValue = null;
		
		if(isInput() && !isOutput())
			returnedValue = "yes";
		
		return returnedValue;
	}
	
	public abstract boolean isInput();
	
	public abstract boolean isOutput();
}
