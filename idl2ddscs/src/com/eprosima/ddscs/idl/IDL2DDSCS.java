package com.eprosima.ddscs.idl;

import org.antlr.stringtemplate.CommonGroupLoader;
import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateErrorListener;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.StringTemplateGroupLoader;
import org.antlr.stringtemplate.language.AngleBracketTemplateLexer;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;

import com.eprosima.ddscs.idl.syntaxtree.NodeToken;
import com.eprosima.ddscs.idl.syntaxtree.Start;
import com.eprosima.ddscs.idl.visitor.DepthFirstVisitor;
import com.eprosima.ddscs.idl.visitor.Visitor;

public class IDL2DDSCS {
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		parse(args);
		//gen();		
	}
	public static void gen() {
		// get a group loader containing main templates dir and target subdir
		StringTemplateGroupLoader loader = 
		    new CommonGroupLoader("com/eprosima/ddscs/idl/template", new MyErrorListener());
		StringTemplateGroup.registerGroupLoader(loader);
		//genProxy(loader);
		//genServer(loader);
		genIdl(loader);
	}
	
	public static void genProxy(StringTemplateGroupLoader loader)
	{
		// first load main language template
		StringTemplateGroup proxyTemplates = StringTemplateGroup.loadGroup("proxy", DefaultTemplateLexer.class, null);
		
		StringTemplate header = proxyTemplates.getInstanceOf("header");
		header.setAttribute("interfaceName", "Test");
		header.setAttribute("funNames", "function1");
		
		StringTemplate funDecl = proxyTemplates.getInstanceOf("functionHeader");
		funDecl.setAttribute("type", "int");
		funDecl.setAttribute("name", "function1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDecl.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDecl.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		header.setAttribute("funDefs", funDecl.toString());
		
		System.out.println(header.toString());
		
		StringTemplate definition = proxyTemplates.getInstanceOf("definition");
		definition.setAttribute("interfaceName", "Test");
		definition.setAttribute("funNames", "function1");
		
		StringTemplate funDef = proxyTemplates.getInstanceOf("functionImpl");
		funDef.setAttribute("type", "int");
		funDef.setAttribute("interfaceName", "Test");
		funDef.setAttribute("name", "function1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDef.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDef.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		definition.setAttribute("funImpls", funDef.toString());
		
		System.out.println(definition.toString());

	}
	
	public static void genServer(StringTemplateGroupLoader loader)
	{
		// first load main language template
		StringTemplateGroup proxyTemplates = StringTemplateGroup.loadGroup("server", DefaultTemplateLexer.class, null);
		
		StringTemplate header = proxyTemplates.getInstanceOf("headerServer");
		header.setAttribute("interfaceName", "Test");
		header.setAttribute("funNames", "function1");
		
		StringTemplate funDecl = proxyTemplates.getInstanceOf("functionHeader");
		funDecl.setAttribute("type", "int");
		funDecl.setAttribute("name", "function1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDecl.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDecl.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		header.setAttribute("funDefs", funDecl.toString());
		
		System.out.println(header.toString());
		
		header = proxyTemplates.getInstanceOf("headerImpl");
		header.setAttribute("interfaceName", "Test");
		header.setAttribute("funNames", "function1");
		
		funDecl.reset();
		funDecl.setAttribute("type", "int");
		funDecl.setAttribute("name", "function1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDecl.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDecl.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDecl.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		header.setAttribute("funDefs", funDecl.toString());
		
		System.out.println(header.toString());
		
		StringTemplate definition = proxyTemplates.getInstanceOf("definitionServer");
		definition.setAttribute("interfaceName", "Test");
		definition.setAttribute("funNames", "function1");
		
		StringTemplate funDef = proxyTemplates.getInstanceOf("functionImpl");
		funDef.setAttribute("type", "int");
		funDef.setAttribute("interfaceName", "Test");
		funDef.setAttribute("name", "function1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDef.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDef.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		definition.setAttribute("funImpls", funDef.toString());
		
		System.out.println(definition.toString());
		definition = proxyTemplates.getInstanceOf("definitionImpl");
		definition.setAttribute("interfaceName", "Test");
		definition.setAttribute("funNames", "function1");
		
		funDef = proxyTemplates.getInstanceOf("emptyFunctionImpl");
		funDef.setAttribute("type", "int");
		funDef.setAttribute("interfaceName", "Test");
		funDef.setAttribute("name", "function1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param1");
		funDef.setAttribute("inputParams.{type, name}", "DDS_Long", "param2");
		funDef.setAttribute("inoutParams.{type, name}", "DDS_Octet&", "param3");
		//funDef.setAttribute("outputParams.{type, name}", "DDS_Long&", "returnedValue");
		
		definition.setAttribute("funImpls", funDef.toString());
		
		System.out.println(definition.toString());

	}	public static void genIdl(StringTemplateGroupLoader loader)
	{
		// first load main language template
		StringTemplateGroup proxyTemplates = StringTemplateGroup.loadGroup("idl", DefaultTemplateLexer.class, null);
		
		StringTemplate type = proxyTemplates.getInstanceOf("type");
		type.setAttribute("name", "function1");
		type.setAttribute("fields.{type, name}", "DDS_Long", "param1");
		type.setAttribute("fields.{type, name}", "DDS_Long", "param2");
		type.setAttribute("fields.{type, name}", "DDS_Octet&", "param3");
		
		System.out.println(type.toString());
		
		type.reset();
		type.setAttribute("file", "user.idl");
		type.setAttribute("name", "function1");
		type.setAttribute("type", "Reply");
		type.setAttribute("fields.{type, name}", "userDefined", "param2");
		type.setAttribute("fields.{type, name}", "DDS_Long", "returnedValue");
		
		System.out.println(type.toString());
	}
	
	public static void parse(String[]args) {
		IDLParser parser;
	    if (args.length == 0) {
	    	System.out.println("IDL Parser Version 0.1:  Reading from standard input . . .");
	    	parser = new IDLParser(System.in);
	    } else if (args.length == 1) {
	    	System.out.println("IDL Parser Version 0.1:  Reading from file " + args[0] + " . . .");
	    	try {
	    		parser = new IDLParser(new java.io.FileInputStream(args[0]));
	    	} catch (java.io.FileNotFoundException e) {
	    		System.out.println("IDL Parser Version 0.1:  File " + args[0] + " not found.");
	    		return;
	    	}
	    } else {
	    	System.out.println("IDL Parser Version 0.1:  Usage is one of:");
	    	System.out.println("         java IDLParser < inputfile");
	    	System.out.println("OR");
	    	System.out.println("         java IDLParser inputfile");
	    	return;
	    }

	    try {
	      	Start start = parser.Start();
	      	Visitor v = new MyVisitor();
	      	start.accept(v);
	      	System.out.println("Thank you.");
	    } catch (Exception e) {
	    	System.out.println("Oops.");
	    	System.out.println(e.getMessage());
	    }
		
	}
}
class MyVisitor extends DepthFirstVisitor {
	public void visit(NodeToken n) { 
		System.out.println("visit "+n.tokenImage);
	}
}

class MyErrorListener implements StringTemplateErrorListener {

	@Override
	public void error(String arg0, Throwable arg1) {
		System.out.println(arg0);
		arg1.printStackTrace();
	}

	@Override
	public void warning(String arg0) {
		System.out.println(arg0);	
	}	
	
}

