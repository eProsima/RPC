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

package com.eprosima.ddsrpc.idl;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

class Namespace implements Map{
	private HashMap typesMap;
	private String prefix;
	
	Namespace()
	{
		prefix = null;
		typesMap = new HashMap();
	}
	
	Namespace(String prefix)
	{
		this.prefix = prefix;
		typesMap = new HashMap();
	}
	String getPrefix(){
		return prefix;
	}
	void setPrefix(String prefix){
		this.prefix = prefix;
	}
	
	public void clear() {
		typesMap.clear();
	}
	public boolean containsKey(Object arg0) {
		return arg0 instanceof String && typesMap.containsKey(arg0);
	}
	public boolean containsValue(Object arg0) {
		return arg0 instanceof String && typesMap.containsValue(arg0);
	}
	public Set entrySet() {
		return typesMap.entrySet();
	}
	public Object get(Object arg0) {
		Object retValue = typesMap.get(arg0);
		if(retValue != null && prefix != null)
		{
			retValue = prefix + retValue;			
		}
		return retValue;
	}
	public boolean isEmpty() {
		return typesMap.isEmpty();
	}
	public Set keySet() {
		return typesMap.keySet();
	}
	public Object put(Object arg0, Object arg1) {
		return typesMap.put(arg0, arg1);
	}
	public void putAll(Map arg0) {
		typesMap.putAll(arg0);
	}
	public Object remove(Object arg0) {
		return typesMap.remove(arg0);
	}
	public int size() {
		return typesMap.size();
	}
	public Collection values() {
		return typesMap.values();
	}
}
