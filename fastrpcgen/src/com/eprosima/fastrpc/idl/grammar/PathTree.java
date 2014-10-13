package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;
import java.util.List;

import com.eprosima.fastrpc.idl.tree.Interface;
import com.eprosima.fastrpc.idl.tree.Operation;
import com.eprosima.fastrpc.idl.tree.Param;

public class PathTree {
	private PathTree parent;
	private String tag;
	private boolean variableNode;
	private ArrayList<PathTree> children;
	
	private boolean numericVariable;
	private boolean booleanVariable;
	private boolean charVariable;
	
	private ArrayList<PathTreeMethod> methods;
	private String interfaceName;
	
	private int level = 0;
		
	public PathTree() {
		this(null, "");
	}
	
	private PathTree(PathTree parent, String tag) {
		this.parent = parent;
		this.tag = tag;
		children = new ArrayList<PathTree>();
		methods = new ArrayList<PathTreeMethod>();
		interfaceName = "";
				
		if(tag.length() == 0 || (tag.charAt(0) == '{' && tag.charAt(tag.length() - 1) == '}'))
			variableNode = true;
		else
			variableNode = false;
		
		numericVariable = false;
		booleanVariable = false;
		charVariable = false;
		
		if(parent != null)
		    level = parent.level + 1;
	}
	
	public PathTree getParent() { return parent; }
	public String getTag() { return tag; }
	public boolean isVariableNode() { return variableNode; }
	public ArrayList<PathTree> getChildren() { return children; }
	
	private void addChild(String tag) {
		PathTree child = new PathTree(this, tag);
		children.add(child);
	}
	
	private PathTree getChild(String tag) {
		for(PathTree child: children) {
			if(child.getTag().equals(tag))
				return child;
		}
		return null;
	}
	
	private boolean existsChild(String tag) {
		for(PathTree child: children) {
			if(child.getTag().equals(tag))
				return true;
		}
		return false;
	}
	
	public void addPath(String path) {
		
		while(path.length()>0 && path.charAt(0) == '/')
			path = path.substring(1);
		if(path.length()==0)
			return; // End of algorithm

		int pos = path.indexOf("/");
		String tag = path;
		String rest = "";
		if(pos != -1) {	
			tag = path.substring(0, pos);
			rest = path.substring(pos+1, path.length());
		}
		
		if(!existsChild(tag)) {
			// Child doesn't exist
			addChild(tag); // Child is added
		}

		// Add the rest of the path to the child
		getChild(tag).addPath(rest);
	}
	
	
	public void addMethod(Operation operation) {
		String path = "";
		PathTree node = this;
		boolean pathHasBrackets = false;
		if (operation.getParent() instanceof Interface) {
			Interface iface = (Interface)operation.getParent();
			path = iface.getPath();
			addPath(path);
			node = resolvePath(path);
			pathHasBrackets = iface.getPathHasBrackets();
		}
		
		PathTreeMethod method = new PathTreeMethod(operation.getName(), operation.getMethod(), node);		
		List<com.eprosima.idl.parser.tree.Param> params;
		if(pathHasBrackets) {
			params = operation.getParameters().subList(1, operation.getParameters().size());
		} else {
			params = operation.getParameters();
		}
				
		for(com.eprosima.idl.parser.tree.Param param: params)
        {
            Param parameter = (Param)param;

			if(parameter.getBodyParam())
				continue;			
			method.addQueryParameter(parameter.getName());
		}
		
		node.methods.add(method);
	}
			
	public boolean isNumeric() { return numericVariable; }
	public boolean isBoolean() { return booleanVariable; }
	public boolean isChar() { return charVariable; }
	
	private boolean isNumeric(String type) {
		if(type.equals("short") ||
				type.equals("unsigned short") ||
				type.equals("long") ||
				type.equals("unsigned long") ||
				type.equals("long long") ||
				type.equals("unsigned long long") ||
				type.equals("float") ||
				type.equals("double"))
			return true;
		return false;
	}
		
	private boolean isBoolean(String type) {
		if(type.equals("bool"))
			return true;
		return false;
	}
	
	private boolean isChar(String type) {
		if(type.equals("char"))
			return true;
		return false;
	}
	
	public void setVariableType(String path, String type) {
		addPath(path);
		PathTree node = resolvePath(path);
				
		if(node.isVariableNode()) {
			if(isNumeric(type))
				node.numericVariable = true;
			else if(isBoolean(type))
				node.booleanVariable = true;
			else if(isChar(type))
				node.charVariable = true;	
		}
	}
	
	public boolean hasOperations() {
		return methods.size() > 0;
	}
	

	public void addInterfaceName(String path, String interfaceName) {
		addPath(path);
		PathTree node = resolvePath(path);
		node.interfaceName = interfaceName;
	}
	
	public PathTree resolvePath(String path) {
		while(path.length()>0 && path.charAt(0) == '/')
			path = path.substring(1);
		if(path.length()==0)
			return this; // End of algorithm

		int pos = path.indexOf("/");
		String tag = path;
		String rest = "";
		if(pos != -1) {	
			tag = path.substring(0, pos);
			rest = path.substring(pos+1, path.length());
		}

		// If child tag exists, resolve rest of the path with child
		if(existsChild(tag)) { 
			return getChild(tag).resolvePath(rest);
		}

		// if it doesn't exist, it can be an embedded parameter
		PathTree resolvedNode = null;
		for(PathTree child: children) {
			if(child.isVariableNode()) {
				if((resolvedNode = getChild(tag).resolvePath(rest)) != null)
					return resolvedNode;
			}
		}

		return resolvedNode;
	}
	
	public String getIterationCode() {		
		String code = "// BEGIN ITERATION " + tag + "\n";
		if(tag.length() == 0) {
			code += "string tag;\n"; // TODO Quitar
		}
		
		code += "if(!restSerializer.existsTagLevel(" + level + ")) {\n";
		if(hasOperations()) {
			for(PathTreeMethod method: methods) {
				code += method.getIterationCode();
			}
		} else {
			code += "return http404Response; // ERROR NO OPERATIONS\n";
		}
		code += "}\n";
		
		for(PathTree child: children) {
			if(!child.isVariableNode()) {
				code += "if(restSerializer.getTag(" + level + ").compare(\""+ child.getTag() +"\") == 0) {\n";
				code += child.getIterationCode();
				code += "}\n";
			}
		}
		
		for(PathTree child: children) {
			if(child.isVariableNode()) {
				if(child.isNumeric()) {
					//code += "strtol(strdup(restSerializer.getTag(" + level + ").c_str()), &p, 10);\n";
					//code += "if(!*p) {\n";
					code += "if(isNumeric(restSerializer.getTag(" + level + "))) {\n";
					code += child.getIterationCode();
					code += "}\n";
				} else if(child.isBoolean()) {
					code += "if(restSerializer.getTag(" + level + ").compare(\"true\") == 0 || restSerializer.getTag(" + level + ").compare(\"false\") == 0) {\n";
					code += child.getIterationCode();
					code += "}\n";
				} else if(child.isChar()) {
					code += "if(restSerializer.getTag(" + level + ").size() == 1) {\n";
					code += child.getIterationCode();
					code += "}\n";
				} else {
					code += child.getIterationCode();
				}
			}
		}
		
		if(tag.length() == 0) {
			code += "// ERROR NO MATCH FOUND\n";
		}
		
		code += "// END ITERATION " + tag + "\n";
		return code;
	}

	public String getInterfaceName() {
		return interfaceName;
	}
}
