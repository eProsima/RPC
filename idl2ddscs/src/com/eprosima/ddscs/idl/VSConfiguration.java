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

package com.eprosima.ddscs.idl;

public class VSConfiguration {
	
	private String name;
	private boolean debug;
	private boolean dll;
	
	public VSConfiguration(){
		name = null;
		debug = false;
		dll = false;		
	}

	public VSConfiguration(String name, boolean debug, boolean dll){
		this.name = name;
		this.debug = debug;
		this.dll = dll;		
	}
	public String getName(){
		return name;
	}
	public boolean isDebugDll(){
		return debug & dll;		
	}
	public boolean isDebug(){
		return debug & !dll;		
	}
	public boolean isReleaseDll(){
		return !debug & dll;		
	}
	public boolean isRelease(){
		return !debug & !dll;		
	}
}
