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

/**
 * @author RodolfoMartin
 *
 */
package com.eprosima.ddsrpc.idl;

import com.eprosima.ddsrpc.idl.ast.*;
import com.eprosima.ddsrpc.idl.tree.Operation;

public class DumpVisitor implements IDLParserVisitor {

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(SimpleNode, java.lang.Object)
	 */
	
	public Object visit(SimpleNode node, Object data) {
		   System.out.println(node.toString());
		   node.childrenAccept(this, data);
		   return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTStart, java.lang.Object)
	 */
	
	public Object visit(ASTStart node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTmodule, java.lang.Object)
	 */
	
	public Object visit(ASTmodule node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTinterfaceNode, java.lang.Object)
	 */
	
	public Object visit(ASTinterfaceNode node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASToperation, java.lang.Object)
	 */
	
	public Object visit(ASToperation node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}
	
	public Object visit(ASTqos_exprs node, Object data)
	 {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	 }
	 
	 public Object visit(ASTqos_expr node, Object data)
	 {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	 }
	 
	 public Object visit(ASTqos_attr node, Object data)
	 {		
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	 }
	 
	 public Object visit(ASTop_attr node, Object data)
	 {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	 }

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */
	
	public Object visit(ASTparams node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam_attr, java.lang.Object)
	 */
	
	public Object visit(ASTparam_attr node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam_type, java.lang.Object)
	 */
	
	public Object visit(ASTparam_type node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam, java.lang.Object)
	 */
	
	public Object visit(ASTparam node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTSimpleType, java.lang.Object)
	 */
	
	public Object visit(ASTSimpleType node, Object data) {
		// TODO Auto-generated method stub
		node.dump("  ");
		Object value = node.jjtGetValue();
		value = value != null ? value.toString() : data;
		System.out.println(value);
		return value;
	}
	
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTID, java.lang.Object)
	 */
	
	public Object visit(ASTID node, Object data) {
		// TODO Auto-generated method stub
		node.dump("  ");
		Object value = node.jjtGetValue();
		value = value != null ? value.toString() : data;
		System.out.println(value);
		return value;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTscoped_name, java.lang.Object)
	 */
	
	public Object visit(ASTscoped_name node, Object data){
		StringBuffer scopedName = null;
		
	    if (node.jjtGetNumChildren() > 0) {
	    	scopedName = new StringBuffer();
	        for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
	        	scopedName.append(node.jjtGetChild(i).jjtAccept(this, data));
	        	if(i < node.jjtGetNumChildren() - 1)
	        	{
	        		scopedName.append("::");
	        	}
	        }
	    }
	    System.out.println(scopedName.toString());
		return scopedName.toString();
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTstring, java.lang.Object)
	 */
	
	public Object visit(ASTstring node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTsequence, java.lang.Object)
	 */
	
	public Object visit(ASTsequence node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTarray, java.lang.Object)
	 */
	
	public Object visit(ASTarray node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	
	/**
	*  Ignore this nodes
	*/

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTinheritance, java.lang.Object)
	 */
	
	public Object visit(ASTinheritance node, Object data) {
		// TODO Auto-generated method stub
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTType, java.lang.Object)
	 */
	
	public Object visit(ASTType node, Object data) {
		// TODO Auto-generated method stub		
		return data;
	}
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTTypedef, java.lang.Object)
	 */
	
	public Object visit(ASTTypedef node, Object data) {
		// TODO Auto-generated method stub		
		return data;
	}
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTConstructedType, java.lang.Object)
	 */
	
	public Object visit(ASTConstructedType node, Object data) {
		// TODO Auto-generated method stub		
		return data;
	}
}
