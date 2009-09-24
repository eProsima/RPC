/**
 * 
 */

/**
 * @author RodolfoMartin
 *
 */
package com.eprosima.ddscs.idl;

import com.eprosima.ddscs.idl.ast.*;
import com.eprosima.ddscs.idl.tree.*;

public class CplusplusVisitor implements IDLParserVisitor {

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(SimpleNode, java.lang.Object)
	 */

	public Object visit(SimpleNode node, Object data) {
		System.out.println(node.toString());
		node.childrenAccept(this, data);
		return data;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see IDLParserVisitor#visit(ASTStart, java.lang.Object)
	 */

	public Object visit(ASTStart node, Object data) {
		// TODO Auto-generated method stub
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
		visit(((SimpleNode) node), ifc);
		return ifc;
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
		if (data != null && data instanceof Interface) {
			if(op.getReturnType() == null){
				op.setReturnType("void");
			}
			((Interface) data).add(op);			
		}
		return data;
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
			((Operation) data).addInputParam((InputParam) param);
		} else if ("inout".equals(node.jjtGetValue())) {
			param = new InoutParam();
			((Operation) data).addInoutParam((InoutParam) param);
		} else if ("out".equals(node.jjtGetValue())) {
			param = new OutputParam();
			((Operation) data).addOutputParam((OutputParam) param);
		}
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
			((Operation) data).setReturnType(typeName);
		} else if (data instanceof Param) {
			((Param) data).setType(typeName);
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
		Object value = node.jjtGetValue();
		if (value != null) {
			if (data instanceof Named) {
				((Named) data).setName(value.toString());
			} else {
				data = value.toString();
			}
		}
		return data;
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
		// TODO Auto-generated method stub
		visit(((SimpleNode) node), data);
		return data;
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
		return data;
	}
}
