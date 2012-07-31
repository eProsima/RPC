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

import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
/**
 * @author RodolfoMartin
 *
 */
public class GUIDGenerator {
	static MessageDigest digester = null; 
	
	synchronized public static String genGUID(String name){
		if(digester == null){
			try{					
				digester = MessageDigest.getInstance("SHA-1");
			}catch (NoSuchAlgorithmException nsae) {
				nsae.printStackTrace();
			}
		}
		
		assert(digester != null) : "Digester Was null";
		
		digester.reset();
		
		byte digest[] = digester.digest(name.getBytes());
		
		assert(digest.length >= 16): "Digest too short";
		
		StringBuffer buf = new StringBuffer();
		String hex = null;
		for(int i = 0; i < 16; i++){
			hex = Integer.toHexString(digest[i]);
			if(hex.length() == 1){
				buf.append('0');
			}else if(hex.length()> 2){
				hex = hex.substring(hex.length() - 2);
			}
			buf.append(hex.toUpperCase());
			if(i == 3 || i == 5 || i == 7 || i == 9){
				buf.append('-');
			}
		}
		return buf.toString();
	}
}
