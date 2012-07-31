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

public class SimpleTypedef extends TypeDecl{
	protected TypeDecl base;
	
	public SimpleTypedef(TypeDecl base)
	{
		this.base = base;
	}
	
	public SimpleTypedef(String name, TypeDecl base)
	{
		super(name, name);
		this.base = base;
	}

	public TypeDecl getBase() {
		return base;
	}
	public void setBase(TypeDecl base) {
		this.base = base;
	}
}
