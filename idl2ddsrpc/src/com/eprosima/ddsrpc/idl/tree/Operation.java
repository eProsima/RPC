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

public class Operation implements Named{
	private String returnType;
	private String name;
	private List inputParams;
	private List inoutParams;
	private List outputParams;
	private String m_requestLibrary = null;
	private String m_replyLibrary = null;
	private String m_requestProfile = null;
	private String m_replyProfile = null;
	private boolean m_isOneway = false;
	
	public Operation(){
		inputParams = new ArrayList();
		inoutParams = new ArrayList();
		outputParams = new ArrayList();
	}
	
	public String getReturnType() {
		return returnType;
	}
	public void setReturnType(String returnType) {
		this.returnType = returnType;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public List getInputParams() {
		return inputParams;
	}
	public List getInoutParams() {
		return inoutParams;
	}
	public List getOutputParams() {
		return outputParams;
	}
	
	public void addInputParam(InputParam param){
		inputParams.add(param);
	}
	public void addInoutParam(InoutParam param){
		inoutParams.add(param);
	}
	public void addOutputParam(OutputParam param){
		outputParams.add(param);
	}

	public void setRequestLibrary(String library)
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
	}
	
	public boolean isOneway()
	{
		return m_isOneway;
	}
	
	public void setIsOneway(boolean b)
	{
		m_isOneway = b;
	}
}
