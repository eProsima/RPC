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
 * /


/**
 * @author RodolfoMartin
 *
 */
package com.eprosima.rpcdds.idl;

import com.eprosima.rpcdds.idl.ast.*;
import com.eprosima.rpcdds.idl.tree.*;

public class CplusplusVisitor implements IDLParserVisitor
{
	private String m_middleware = null;
	
	public CplusplusVisitor(String middleware)
	{
		m_middleware = middleware;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(SimpleNode, java.lang.Object)
	 */

	public Object visit(SimpleNode node, Object data) {
		node.childrenAccept(this, data);
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTStart, java.lang.Object)
	 */

	public Object visit(ASTStart node, Object data) {
		data = new Module(m_middleware);
		
		if (node.jjtGetNumChildren() > 0) {
			for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
				data = node.jjtGetChild(i).jjtAccept(this, data);
			}
		}
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTmodule, java.lang.Object)
	 */

	public Object visit(ASTmodule node, Object data) {
		// TODO Auto-generated method stub
		for (int i = 2; i < node.jjtGetNumChildren(); i++) {
			data = node.jjtGetChild(i).jjtAccept(this, data);
		}
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTinterfaceNode, java.lang.Object)
	 */

	public Object visit(ASTinterfaceNode node, Object data) {
		Interface ifc = new Interface();
		
		if(data instanceof Module)
		{
			((Module)data).setIfc(ifc);
		}
		
		visit(((SimpleNode) node), ifc);

		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASToperation, java.lang.Object)
	 */

	public Object visit(ASToperation node, Object data) {
		assert data != null : "Data was null";
		assert data instanceof Interface : "Data is not an Interface instance";
		Operation op = new Operation();
		visit(((SimpleNode) node), op);
		
		if (data != null && data instanceof Interface)
		{
			if(op.getReturnType() == null)
			{
				op.createReturnType("void");
			}

			((Interface) data).add(op);
		}
		
		// Check oneway restrictions.
		if(op.isOneway())
		{
			if(op.hasOutputParams() ||
					!op.getReturnType().getTypeName().equals("void"))
			{
				System.out.println("ERROR: Operation " + op.getName() + " is defined as oneway but it uses output parameters");
				((Interface)data).getModule().setError();
			}
		}
		
		return data;
	}
	
	 public Object visit(ASTqos_exprs node, Object op)
	 {
		 visit(((SimpleNode) node), op);
		 return op;
	 }
	 
	 public Object visit(ASTqos_expr node, Object data)
	 {
		 return data;
		 /*Object returnedValue = null;
		 
		 if(data instanceof Interface)
		 {
			 Interface ifc = (Interface)data;
			 String attr = node.jjtGetChild(0).jjtAccept(this, data).toString();
			 
			 if(attr.equals("//#qos"))
			 {
				 ifc.setQosLibrary(node.jjtGetChild(1).jjtAccept(this, null).toString());
				 ifc.setQosProfile(node.jjtGetChild(2).jjtAccept(this, null).toString());
			 }
			 else
			 {
				 System.out.println("ERROR<CpluspluVisitor::visit>: Bad qos expresion for interface");
			 }
			 
			 returnedValue = ifc;
		 }
		 else if(data instanceof Operation)
		 {
			 Operation operation = (Operation)data;
			 String attr = node.jjtGetChild(0).jjtAccept(this, data).toString();

			 if(attr.equals("//#qos-request"))
			 {
				 operation.setRequestLibrary(node.jjtGetChild(1).jjtAccept(this, null).toString());
				 operation.setRequestProfile(node.jjtGetChild(2).jjtAccept(this, null).toString());
			 }
			 else if(attr.equals("//#qos-reply"))
			 {
				 operation.setReplyLibrary(node.jjtGetChild(1).jjtAccept(this, null).toString());
				 operation.setReplyProfile(node.jjtGetChild(2).jjtAccept(this, null).toString());
			 }
			 else if(attr.equals("//#qos"))
			 {
				 String library = node.jjtGetChild(1).jjtAccept(this, null).toString();
				 String profile = node.jjtGetChild(2).jjtAccept(this, null).toString();
				 operation.setRequestLibrary(library);
				 operation.setReplyLibrary(library);
				 operation.setRequestProfile(profile);
				 operation.setReplyProfile(profile);
			 }
			 else
			 {
				 System.out.println("ERROR<CpluspluVisitor::visit>: Bad qos expresion for operation");
			 }
			 
			 returnedValue = operation;
		 }
		 else
		 {
			 System.out.println("ERROR<CpluspluVisitor::visit>: Qos expresion in bad location");
		 }
		 
		 return returnedValue;*/
	 }
	 
	 public Object visit(ASTqos_attr node, Object op)
	 {
		 String returnedValue = node.jjtGetValue().toString();

		 return returnedValue;
	 }
	 
	 public Object visit(ASTop_attr node, Object op)
	 {
		 Operation operation = (Operation)op;
		 
		 if(node.jjtGetValue().toString().equals("oneway"))
		 {
			 operation.setIsOneway(true);
		 }
		 
		 return op;
	 }

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */

	public Object visit(ASTparams node, Object data) {
		visit(((SimpleNode) node), data);
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTparam_attr, java.lang.Object)
	 */

	public Object visit(ASTparam_attr node, Object data) {
		assert data != null : "Data was null";
		assert data instanceof Operation : "Data is not an Operation instance";
		assert node.jjtGetValue() != null : "Value was null";
		Param param = null;
		if ("in".equals(node.jjtGetValue())) {
			param = new InputParam();
		} else if ("inout".equals(node.jjtGetValue())) {
			param = new InoutParam();
		} else if ("out".equals(node.jjtGetValue())) {
			param = new OutputParam();
		}
		
		if(param != null)
			((Operation) data).addParam(param);
		
		return param;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTparam_type, java.lang.Object)
	 */

	public Object visit(ASTparam_type node, Object data) {
		String typeName = node.jjtGetChild(0).jjtAccept(this, data).toString();
		if (data instanceof Operation) {
			((Operation) data).createReturnType(typeName);
		} else if (data instanceof Param) {
			((Param) data).setTypeName(typeName);
		}
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTSimpleType, java.lang.Object)
	 */

	public Object visit(ASTSimpleType node, Object data) {
		assert node.jjtGetValue() != null : "SimpleType node has null value";
		return node.jjtGetValue().toString();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTparam, java.lang.Object)
	 */

	public Object visit(ASTparam node, Object data) {
		assert data != null : "Data was null";
		assert data instanceof Operation : "Data is not an Operation instance";

		Param param = (Param) node.jjtGetChild(0).jjtAccept(this, data);
		// Param Type
		node.jjtGetChild(1).jjtAccept(this, param);
		// Param Name
		node.jjtGetChild(2).jjtAccept(this, param);

		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTID, java.lang.Object)
	 */

	public Object visit(ASTID node, Object data) {
		Object value = node.jjtGetValue(), returnedValue = data;
		
		if (value != null)
		{
			if (data instanceof Named)
			{
				((Named) data).setName(value.toString());
			}
			else
			{
				returnedValue = value.toString();
			}
		}
		
		return returnedValue;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTscoped_name, java.lang.Object)
	 */

	public Object visit(ASTscoped_name node, Object data) {
		StringBuffer scopedName = null;

		if (node.jjtGetNumChildren() > 0) {
			scopedName = new StringBuffer();
			for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
				scopedName.append(node.jjtGetChild(i).jjtAccept(this, null));
				if (i < node.jjtGetNumChildren() - 1) {
					scopedName.append("::");
				}
			}
		}
		return scopedName.toString();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTstring, java.lang.Object)
	 */

	public Object visit(ASTstring node, Object data) {
		return "string";
	}
	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTsequence, java.lang.Object)
	 */

	public Object visit(ASTsequence node, Object data) {
		return "sequence";
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTarray, java.lang.Object)
	 */

	public Object visit(ASTarray node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode) node), data);
		return data;
	}

	/**
	 * Ignore this nodes
	 */

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTinheritance, java.lang.Object)
	 */

	public Object visit(ASTinheritance node, Object data) {
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTType, java.lang.Object)
	 */

	public Object visit(ASTType node, Object data) {
		data = node.jjtGetChild(0).jjtAccept(this, data);

		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTType, java.lang.Object)
	 */

	public Object visit(ASTTypedef node, Object data)
	{
		String base = node.jjtGetChild(0).jjtAccept(this, data).toString();
		TypeDecl basedecl = ((Module)data).getTypeDecl(base);
		
		if(basedecl != null)
		{
			SimpleTypedef def = new SimpleTypedef(basedecl);	
			node.jjtGetChild(1).jjtAccept(this, def);
			def.setTemplateName(def.getName());
			((Module)data).addTypeDecl(def);
		}
		else
			System.out.println("ERROR<CplusplusVisitor::visit>: Unknown base of typedef " + base);

		return data;
	}
	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTType, java.lang.Object)
	 */

	public Object visit(ASTConstructedType node, Object data)
	{
		String type = node.jjtGetValue().toString();
		TypeDecl typedecl = null;
		
		if(type.equals("enum"))
		{
			// Create enumerator type.
			typedecl = new EnumType();
			// Get the first enumerator value. Set data to null and this will cause that the first enumerator value will be returned.
			String first_value = (String)node.jjtGetChild(1).jjtAccept(this, null);
			
			if(first_value != null)
			{
				typedecl.setInitialValue(first_value);
			}
		}
		else if(type.equals("struct"))
		{
			// Create structure type.
			typedecl = new StructType();
		}
		else if(type.equals("union"))
		{
			// Create union type.
			typedecl = new UnionType();
		}
		
		if(typedecl != null)
		{
			// Get the name of the type and set it.
			node.jjtGetChild(0).jjtAccept(this, typedecl);
			// Use the name as template in the code.
			typedecl.setTemplateName(typedecl.getName());
			// Add to types.
			((Module)data).addTypeDecl(typedecl);
		}
		return data;
	}
}
