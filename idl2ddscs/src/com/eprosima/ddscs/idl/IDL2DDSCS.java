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
		//parse(args);
		gen();		
	}
	public static void gen() {
		// get a group loader containing main templates dir and target subdir
		StringTemplateGroupLoader loader = 
		    new CommonGroupLoader("com/eprosima/ddscs/idl/template", new MyErrorListener());
		StringTemplateGroup.registerGroupLoader(loader);

		// first load main language template
		StringTemplateGroup proxyTemplates = StringTemplateGroup.loadGroup("Proxy", DefaultTemplateLexer.class, null);
		
		StringTemplate header = proxyTemplates.getInstanceOf("header");
		header.setAttribute("interfaceName", "Test");
		header.setAttribute("funNames", "function1");
		
		StringTemplate funDecl = proxyTemplates.getInstanceOf("functionDecl");
		funDecl.setAttribute("type", "int");
		funDecl.setAttribute("name", "function1");
		funDecl.setAttribute("inputType", "DDS_Long");
		funDecl.setAttribute("inputParam", "param1");
		funDecl.setAttribute("inoutType", "DDS_Octet&");
		funDecl.setAttribute("inoutParam", "param2");
		funDecl.setAttribute("outputType", "DDS_Long&");
		funDecl.setAttribute("outputParam", "returnedValue");
		
		header.setAttribute("funDefs", funDecl.toString());
		
		System.out.println(header.toString());
		
		StringTemplate definition = proxyTemplates.getInstanceOf("definition");
		header.setAttribute("interfaceName", "Test");
		header.setAttribute("funNames", "function1");
		
		StringTemplate funDef = proxyTemplates.getInstanceOf("functionDecl");
		funDef.setAttribute("type", "int");
		funDef.setAttribute("name", "function1");
		funDef.setAttribute("inputType", "DDS_Long");
		funDef.setAttribute("inputParam", "param1");
		funDef.setAttribute("inoutType", "DDS_Octet&");
		funDef.setAttribute("inoutParam", "param2");
		funDef.setAttribute("outputType", "DDS_Long&");
		funDef.setAttribute("outputParam", "returnedValue");
		
		definition.setAttribute("funDefs", funDef.toString());
		
		System.out.println(definition.toString());
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

