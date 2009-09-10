/**
 * 
 */

/**
 * @author RodolfoMartin
 *
 */
package com.eprosima.ddscs.idl;

import com.eprosima.ddscs.idl.ast.*;

public class CplusplusVisitor implements IDLParserVisitor {

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(SimpleNode, java.lang.Object)
	 */
	@Override
	public Object visit(SimpleNode node, Object data) {
		   System.out.println(node.toString());
		   node.childrenAccept(this, data);
		   return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTStart, java.lang.Object)
	 */
	@Override
	public Object visit(ASTStart node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTmodule, java.lang.Object)
	 */
	@Override
	public Object visit(ASTmodule node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTinterfaceNode, java.lang.Object)
	 */
	@Override
	public Object visit(ASTinterfaceNode node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASToperation, java.lang.Object)
	 */
	@Override
	public Object visit(ASToperation node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */
	@Override
	public Object visit(ASTparams node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam_type, java.lang.Object)
	 */
	@Override
	public Object visit(ASTparam_attr node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam_type, java.lang.Object)
	 */
	@Override
	public Object visit(ASTparam_type node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparam_type, java.lang.Object)
	 */
	@Override
	public Object visit(ASTparam node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}
	
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTID, java.lang.Object)
	 */
	@Override
	public Object visit(ASTID node, Object data) {
		// TODO Auto-generated method stub
		node.dump("  ");
		return node.value != null ? node.value.toString() : data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTID, java.lang.Object)
	 */
	@Override
	public Object visit(ASTscoped_name node, Object data){
		StringBuilder scopedName = null;
	    if (node.children != null) {
	    	scopedName = new StringBuilder();
	        for (int i = 0; i < node.children.length; ++i) {
	        	scopedName.append(node.children[i].jjtAccept(this, data));
	        	if(i < node.children.length - 1)
	        	{
	        		scopedName.append("::");
	        	}
	        }
	    }
	    System.out.println(scopedName.toString());
		return scopedName.toString();
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */
	@Override
	public Object visit(ASTstring node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}
	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */
	@Override
	public Object visit(ASTarray node, Object data) {
		// TODO Auto-generated method stub
		visit(((SimpleNode)node), data);
		return data;
	}

	
	/**
	*  Ignore this nodes
	*/

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTparams, java.lang.Object)
	 */
	@Override
	public Object visit(ASTinheritance node, Object data) {
		// TODO Auto-generated method stub
		return data;
	}

	/* (non-Javadoc)
	 * @see IDLParserVisitor#visit(ASTType, java.lang.Object)
	 */
	@Override
	public Object visit(ASTType node, Object data) {
		// TODO Auto-generated method stub		
		return data;
	}
}
