package com.eprosima.ddscs.idl;

import org.antlr.stringtemplate.CommonGroupLoader;
import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateErrorListener;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.StringTemplateGroupLoader;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;
import com.eprosima.ddscs.idl.ast.*;
import com.eprosima.ddscs.idl.tree.InoutParam;
import com.eprosima.ddscs.idl.tree.InputParam;
import com.eprosima.ddscs.idl.tree.Interface;
import com.eprosima.ddscs.idl.tree.Operation;
import com.eprosima.ddscs.idl.tree.OutputParam;

import java.io.*;
import java.util.ListIterator;

public class IDL2DDSCS
{
	private static String languageOption = null;
	private static boolean ppDisable = false;
	private static String ppPath = null;
	private static StringBuffer externalDir = null;
	private static int externalDirLength = 0;
	private static String idlFile = null;
	private static StringBuffer command = null;	
	/**
	 * @param args
	 */
	public static void main(String[] args)
	{
		if(getOptions(args))
		{
			command = new StringBuffer("rtiddsgen.bat ");
			String ndds_home = System.getProperty("NDDSHOME");
			
			if(ndds_home != null)
			{
				if(languageOption != null)
					command .append(" -language ").append(languageOption);
				if(ppDisable == true)
				{
					command.append(" -ppDisable ");
				}
				else
				{
					if(ppPath != null)
						command.append(" -ppPath ").append(ppPath);
				}
				if(externalDirLength > 0){
					command.append(" -d ").append(externalDir);
				}
				command.append(" ");
				String example = "-example i86Win32VS2005 " + idlFile; 

				ddsGen(command, example);
			}
			else
			{
				System.out.println("ERROR: Cannot find the environment variable NDDSHOME");
			}
		}
		else
		{
			printHelp();
		}
		
		// TO_DO: May be more than one interface defined in the idl...
		// TO_DO: modules/namespaces
		Interface ifc = parse(idlFile);
		if(ifc != null){
			gen(ifc);
		}
	}
	
	public static void ddsGen(StringBuffer c, String file){
		try
		{
			c.append(file);
			Process rtiddsgen = Runtime.getRuntime().exec(c.toString());
			InputStream is = rtiddsgen.getInputStream();
			BufferedReader br = new BufferedReader(new InputStreamReader(is));
			String aux = br.readLine();
			
			while(aux != null)
			{
				System.out.println(aux);
				aux = br.readLine();
			}
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}finally{
			c.delete(c.length() - file.length(), c.length());
		}
		
	}
	public static void gen(Interface ifc) {
		// get a group loader containing main templates dir and target subdir
		StringTemplateGroupLoader loader = 
		    new CommonGroupLoader("com/eprosima/ddscs/idl/template", new MyErrorListener());
		StringTemplateGroup.registerGroupLoader(loader);
		genIdl(ifc);
		genUtils(ifc);
		genHeaderAndImpl("Proxy", "Proxy", "header", "definition", "functionImpl", ifc);
		genHeaderAndImpl("Server", "Server", "headerServer", "definitionServer", "functionImpl", ifc);
		genHeaderAndImpl("ServerImpl", "Server", "headerImpl", "definitionImpl", "emptyFunctionImpl", ifc);
	}
	
	public static void genHeaderAndImpl(String suffix, String templateGroupId, String headerTemplateId,
			String definitionTemplateId, String functionTemplateId, Interface ifc)
	{
		// first load main language template
		StringTemplateGroup templatesGroup = StringTemplateGroup.loadGroup(templateGroupId, DefaultTemplateLexer.class, null);
				
		//Template for Header generation
		StringTemplate header = templatesGroup.getInstanceOf(headerTemplateId);
		header.setAttribute("interfaceName", ifc.getName());

		//Template for Definition generation
		StringTemplate definition = templatesGroup.getInstanceOf(definitionTemplateId);
		definition.setAttribute("interfaceName", ifc.getName());


		//Template for function declaration:
		StringTemplate funDecl = templatesGroup.getInstanceOf("functionHeader");
		
		//Template for function Definition:
		StringTemplate funDef = templatesGroup.getInstanceOf(functionTemplateId);
			
		Operation op = null;
		for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
			op = (Operation) iter.next();
			header.setAttribute("funNames", op.getName());
			definition.setAttribute("funNames", op.getName());			

			// Function Declaration
			funDecl.setAttribute("type", op.getReturnType());
			funDecl.setAttribute("name", op.getName());

			// Function Definition
			funDef.setAttribute("type", op.getReturnType());
			funDef.setAttribute("name", op.getName());
			funDef.setAttribute("interfaceName", ifc.getName());
			ListIterator paramIter = null;
			InputParam ip = null;
			for(paramIter = op.getInputParams().listIterator(); paramIter.hasNext();){
				ip = (InputParam)paramIter.next();
				funDecl.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());				
				funDef.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());
			}
			InoutParam iop = null;
			for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
				iop = (InoutParam)paramIter.next();
				funDecl.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());				
				funDef.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());				
			}
			OutputParam oup = null;
			for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
				oup = (OutputParam)paramIter.next();
				funDecl.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());				
				funDef.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());				
			}
			header.setAttribute("funDecls", funDecl.toString());
			definition.setAttribute("funImpls", funDef.toString());
			funDecl.reset();
			funDef.reset();
		}
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		//System.out.println(header.toString());
		externalDir.append(ifc.getName()).append(suffix).append(".h");
		writeFile(externalDir.toString(), header);
		//System.out.println(definition.toString());
		externalDir.deleteCharAt(externalDir.length() - 1);
		externalDir.append("cxx");
		writeFile(externalDir.toString(), definition);
		externalDir.delete(externalDirLength, externalDir.length());
	}

	
	
	private static void  setRequestReplyParams(StringTemplate request, StringTemplate reply, Operation op, String attribute){
		ListIterator paramIter = null;
		InputParam ip = null;
		for(paramIter = op.getInputParams().listIterator(); paramIter.hasNext();){
			ip = (InputParam)paramIter.next();
			request.setAttribute(attribute, ip.getType(), ip.getName());
		}
		InoutParam iop = null;
		for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
			iop = (InoutParam)paramIter.next();
			request.setAttribute(attribute, iop.getType(), iop.getName());
			reply.setAttribute(attribute, iop.getType(), iop.getName());
		}
		OutputParam oup = null;
		for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
			oup = (OutputParam)paramIter.next();
			reply.setAttribute(attribute, oup.getType(), oup.getName());
		}
		reply.setAttribute(attribute, op.getReturnType(), "returnedValue");					
	}
	
	public static void genUtils(Interface ifc)
	{
		// first load main language template
		StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("Utils", DefaultTemplateLexer.class, null);
		
		StringTemplate headerRequest = utilTemplates.getInstanceOf("header");
		StringTemplate headerReply = utilTemplates.getInstanceOf("header");
		StringTemplate definitionRequest = utilTemplates.getInstanceOf("definition");
		StringTemplate definitionReply = utilTemplates.getInstanceOf("definition");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		
		Operation op = null;
		for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
			op = (Operation) iter.next();
			headerRequest.setAttribute("funName", op.getName());
			definitionRequest.setAttribute("funName", op.getName());
			
			headerReply.setAttribute("funName", op.getName());
			headerReply.setAttribute("type", "Reply");
			
			definitionReply.setAttribute("funName", op.getName());
			definitionReply.setAttribute("type", "Reply");
						
			setRequestReplyParams(headerRequest, headerReply, op, "params.{type, name}");
			setRequestReplyParams(definitionRequest, definitionReply, op, "params.{type, name}");

			//System.out.println(request.toString());
			externalDir.append(op.getName()).append("RequestUtils.h");
			writeFile(externalDir.toString(), headerRequest);
			externalDir.deleteCharAt(externalDir.length() - 1);
			externalDir.append("cxx");
			writeFile(externalDir.toString(), definitionRequest);

			//System.out.println(request.toString());
			externalDir.delete(externalDirLength + op.getName().length(), externalDir.length());
			externalDir.append("ReplyUtils.h");
			writeFile(externalDir.toString(), headerReply);
			externalDir.deleteCharAt(externalDir.length() - 1);
			externalDir.append("cxx");
			writeFile(externalDir.toString(), definitionReply);
			
			externalDir.delete(externalDirLength, externalDir.length());

			headerRequest.reset();
			headerReply.reset();
			definitionRequest.reset();
			definitionReply.reset();
		}
	}
	public static void genIdl(Interface ifc)
	{
		// first load main language template
		StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("IDL", DefaultTemplateLexer.class, null);
		
		StringTemplate request = idlTemplates.getInstanceOf("type");
		StringTemplate reply = idlTemplates.getInstanceOf("type");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		
		Operation op = null;
		for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
			op = (Operation) iter.next();
			request.setAttribute("file", idlFile);
			request.setAttribute("name", op.getName());
			
			reply.setAttribute("file", idlFile);
			reply.setAttribute("name", op.getName());
			reply.setAttribute("type", "Reply");
						
			setRequestReplyParams(request, reply, op, "fields.{type, name}");
			//System.out.println(request.toString());
			externalDir.append(op.getName()).append("Request.idl");
			writeFile(externalDir.toString(), request);
			
			ddsGen(command, externalDir.substring(externalDirLength));

			//System.out.println(reply.toString());
			externalDir.delete(externalDirLength + op.getName().length(), externalDir.length());
			externalDir.append("Reply.idl");
			writeFile(externalDir.toString(), reply);

			ddsGen(command, externalDir.substring(externalDirLength));
			
			externalDir.delete(externalDirLength, externalDir.length());

			request.reset();
			reply.reset();
		}
	}
	
	public static Interface parse(String file) {
		IDLParser parser = null;
		Interface ifc = null;
	    if (file == null) {
	    	System.out.println("IDL Parser Version 0.1:  Reading from standard input . . .");
	    	parser = new IDLParser(System.in);
	    } else {
	    	System.out.println("IDL Parser Version 0.1:  Reading from file " + file + " . . .");
	    	try {
	    		parser = new IDLParser(new java.io.FileInputStream(file));
	    	} catch (java.io.FileNotFoundException e) {
	    		System.out.println("IDL Parser Version 0.1:  File " + file + " not found.");
	    	}
	    }

	    try 
	    {
	        ASTStart n = parser.Start();
	        CplusplusVisitor visitor = new CplusplusVisitor();
	        ifc = (Interface)n.jjtAccept(visitor, null);
	        System.out.println("Thank you.");
	    } catch (Exception e) {
	        System.out.println("Oops.");
	        System.out.println(e.getMessage());
	    }
	   
	    return ifc;		
	}
	
	public static boolean getOptions(String args[])
	{
		int count = 0;
		String arg;
		
		while((count < args.length) && (args[count].startsWith("-")))
		{
			arg = args[count++];
			
			if(arg.equals("-language"))
			{
				languageOption = args[count++];
				
				if(!languageOption.equals("C++"))
				{
					System.out.println("ERROR: Unknown language " +  languageOption);
					return false;
				}
			}
			else if(arg.equals("-ppPath"))
			{
				ppPath = args[count++];
			}
			else if(arg.equalsIgnoreCase("-ppDisable"))
			{
				ppDisable = true;
			}
			else if(arg.equals("-d"))
			{
				externalDir = new StringBuffer(args[count++]);
				externalDirLength = externalDir.length();
			}
			else
			{
				System.out.println("ERROR: Unknown argument " + arg);
				return false;
			}
		}
		
		if(count < args.length)
		{
			idlFile = args[count];
		}
		else
		{
			System.out.println("ERROR: The program expects a IDL file");
			return false;
		}

		externalDir = (externalDir == null) ? new StringBuffer(): externalDir;
		return true;
	}
	
	
	public static void printHelp()
	{
		System.out.print("idl2ddscs help:\n\nUsage: idl2ddscs [options] <IDL file>\n" +
				"Options:\n   -language : Programming language.\n");
	}

	public static void writeFile(String file, StringTemplate template)
	{
		try {
			FileWriter fw = new FileWriter(file);
			String data = template.toString();
			fw.write(data, 0,data.length());
			fw.close();
		} catch (IOException e) {
			e.printStackTrace();
		}		
	}
}

class MyErrorListener implements StringTemplateErrorListener {

	public void error(String arg0, Throwable arg1) {
		System.out.println(arg0);
		arg1.printStackTrace();
	}

	public void warning(String arg0) {
		System.out.println(arg0);	
	}	
	
}

