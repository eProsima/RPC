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
import com.eprosima.ddscs.idl.tree.Module;
import com.eprosima.ddscs.idl.tree.SimpleTypedef;

import java.io.*;
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Map;



// TO_DO: string constants...
public class IDL2DDSCS
{
	private static String languageOption = null;
	private static boolean ppDisable = false;
	private static boolean replace = false;
	private static String ppPath = null;
	private static StringBuffer externalDir = null;
	private static int externalDirLength = 0;
	private static String idlFile = null;
	private static ArrayList command = null;	
	private static StringBuffer env = null;	
	
	//TO_DO: ¿external properties?
	private static VSConfiguration configurations[]={new VSConfiguration("Debug DLL|Win32", true, true),
											new VSConfiguration("Release DLL|Win32", false, true),
											new VSConfiguration("Debug|Win32", true, false),
											new VSConfiguration("Release|Win32", false, false)};	
	private static String operationFileSuffixes[]={"", "Plugin", "Support", "Utils"};	
	
	/**
	 * @param args
	 */
	public static void main(String[] args)
	{
		if(getOptions(args))
		{
			String ndds_home = System.getProperty("NDDSHOME");
			
			if(ndds_home != null)
			{				
				env = new StringBuffer();
				// TO_DO: Check OS for space character handling in commands				
				env.append("PATH=");	
				env.append(ndds_home).append(File.separatorChar).append("scripts");				
				
				command = new ArrayList();
				command.add("rtiddsgen.bat");
				if(languageOption != null)
				{
					command.add("-language");
					command.add(languageOption);
				}
				if(ppDisable == true)
				{
					command.add("-ppDisable");
				}
				else
				{
					if(ppPath != null){
						command.add("-ppPath");
						command.add(ppPath);
					}
				}
				if(replace == true)
				{
					command.add("-replace");
				}
				if(externalDirLength > 0){
					command.add("-d");
					command.add(externalDir);
				}
				
				try{
					ddsGen(command, idlFile);
					Module root = parse(idlFile);
					if(root != null){
						gen(root);
					}
				}
				catch(Exception ioe){
					System.out.println("ERROR generating files");
					ioe.printStackTrace();
				}
			}
			else
			{
				System.out.println("ERROR: Cannot find the environment variable NDDSHOME");
			}
			// TO_DO: May be more than one interface defined in the idl...
			// TO_DO: modules/namespaces
		}
		else
		{
			printHelp();
		}		
	}
	// Need to use envp to pass a Path environment variable pointing to $NDDSHOME/scripts
	// if $NDDSHOME contains spaces the exec(String) or exec(String[])methods DO NOT WORK in Windows
	// even using the well known solution of using double quotes
	// May be a problem with the Java Version deployed with RTI DDS.
	public static void ddsGen(ArrayList c, String file) throws Exception{
		String[] commandArray = new String[c.size() + 1];
		String[] envp = {env.toString()};
			c.add(file);			
			commandArray = (String[])c.toArray(commandArray);
			Process rtiddsgen = Runtime.getRuntime().exec(commandArray, envp);
			ProcessOutput errorOutput = new ProcessOutput(rtiddsgen.getErrorStream(), "ERROR");
			ProcessOutput normalOutput = new ProcessOutput(rtiddsgen.getInputStream(), "OUTPUT");
			errorOutput.start();
			normalOutput.start();
			int exitVal = rtiddsgen.waitFor();
			if(exitVal != 0)
			{
				throw new Exception();
			}
			//TO_DO: check rtiddsgen has been correctly called it may return exitVal of 0 without
			// generating nothing, for example due to missing preprocessor.
			//The best way to do this is checking for output files existence and modification times (if -replace)
			//ddsGenRunCheck(file);
			c.remove(c.size() - 1);		
	}
	
	public static void gen(Module root) throws Exception{
		// get a group loader containing main templates dir and target subdir
        System.out.println("Loading Templates...");		
		StringTemplateGroupLoader loader = 
		    new CommonGroupLoader("com/eprosima/ddscs/idl/template", new MyErrorListener());
		StringTemplateGroup.registerGroupLoader(loader);
		
		StringTemplateGroup baseTemplate = StringTemplateGroup.loadGroup("cplusplus", DefaultTemplateLexer.class, null);
		Map typeInitMap = baseTemplate.getMap("typeInitMap");
		
		// Adds Simple type redefinitions to typeInitMap, so the generation logic
		// would treat them as simple types instead of constructed/template types.
		SimpleTypedef typedef = null;
		StringTemplate template = null;
		for(ListIterator iter = root.getTypes().listIterator(); iter.hasNext(); ){						
			typedef = (SimpleTypedef) iter.next();
			template = new StringTemplate(baseTemplate, typedef.getAlias());
			typeInitMap.put(typedef.getAlias(), template);
		}
				
		Interface ifc = root.getIfc();
		
        System.out.println("Generating VS2005 solution...");
		genVS2005(ifc);
        System.out.println("Generating Request/Response Topics...");
		genIdl(ifc);
        System.out.println("Generating Utils...");
		genUtils(ifc);
        System.out.println("Generating Client Code...");
		genHeaderAndImpl("Proxy", "Proxy", "header", "definition",
				"functionImpl", "functionHeader", "Client", ifc);
		genRemoteServiceSupport(ifc, "Client");
		genRemoteServiceSupport(ifc, "Server");

        System.out.println("Generating Server Code...");
        genHeaderAndImpl("Server", "Server", "headerServer", "definitionServer",
				"functionImpl", "exFunctionHeader", "Server", ifc);
		genHeaderAndImpl("ServerImpl", "Server", "headerImpl", "definitionImpl",
				"emptyFunctionImpl", "functionHeader", null, ifc);
        System.out.println("Finished.");
		
	}
	
	public static void genHeaderAndImpl(String suffix, String templateGroupId, String headerTemplateId,
			String definitionTemplateId, String functionTemplateId, String functionHeaderTemplateId, String main, Interface ifc)
	{
		// first load main language template
		StringTemplateGroup templatesGroup = StringTemplateGroup.loadGroup(templateGroupId, DefaultTemplateLexer.class, null);
		
		// Templates for main program generation
		StringTemplate mainTemplate = templatesGroup.getInstanceOf("main");
		StringTemplate funCall = templatesGroup.getInstanceOf("functionCall");
		
		//Template for Header generation
		StringTemplate header = templatesGroup.getInstanceOf(headerTemplateId);
		header.setAttribute("interfaceName", ifc.getName());

		//Template for Definition generation
		StringTemplate definition = templatesGroup.getInstanceOf(definitionTemplateId);
		definition.setAttribute("interfaceName", ifc.getName());


		//Template for function declaration:
		StringTemplate funDecl = templatesGroup.getInstanceOf(functionHeaderTemplateId);
		
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

			funCall.setAttribute("type", op.getReturnType());
			funCall.setAttribute("name", op.getName());

			ListIterator paramIter = null;
			InputParam ip = null;
			for(paramIter = op.getInputParams().listIterator(); paramIter.hasNext();){
				ip = (InputParam)paramIter.next();
				funDecl.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());				
				funDef.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());
				funCall.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());
			}
			InoutParam iop = null;
			for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
				iop = (InoutParam)paramIter.next();
				funDecl.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());				
				funDef.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());				
				funCall.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());				
			}
			OutputParam oup = null;
			for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
				oup = (OutputParam)paramIter.next();
				funDecl.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());				
				funDef.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());				
				funCall.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());				
			}
			header.setAttribute("funDecls", funDecl.toString());
			definition.setAttribute("funImpls", funDef.toString());
			mainTemplate.setAttribute("invocations", funCall.toString());
			funDecl.reset();
			funDef.reset();
			funCall.reset();
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
		
		// Main
		if(main != null){
			mainTemplate.setAttribute("interfaceName", ifc.getName());
			externalDir.append(main).append(".cxx");
			writeFile(externalDir.toString(), mainTemplate);
			externalDir.delete(externalDirLength, externalDir.length());						
		}
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
	}
	
	public static void genRemoteServiceSupport(Interface ifc, String side)
	{
		// first load main language template
		StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("RemoteServiceSupport", DefaultTemplateLexer.class, null);
		
		StringTemplate header = utilTemplates.getInstanceOf(side + "Header");
		StringTemplate definition = utilTemplates.getInstanceOf(side + "Definition");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		
		header.setAttribute("interfaceName", ifc.getName());
		definition.setAttribute("interfaceName", ifc.getName());
		
		Operation op = null;
		for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
			op = (Operation) iter.next();
			header.setAttribute("funNames", op.getName());
			definition.setAttribute("funNames", op.getName());
		}
		externalDir.append(ifc.getName()).append(side).append("RemoteServiceSupport.h");
		writeFile(externalDir.toString(), header);
		externalDir.deleteCharAt(externalDir.length() - 1);
		externalDir.append("cxx");
		writeFile(externalDir.toString(), definition);
		
		externalDir.delete(externalDirLength, externalDir.length());	
	}
	public static void genUtils(Interface ifc)
	{
		// first load main language template
		StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("Utils", DefaultTemplateLexer.class, null);
		
		StringTemplate headerFile = utilTemplates.getInstanceOf("headerFile");
		StringTemplate definitionFile = utilTemplates.getInstanceOf("definitionFile");
		StringTemplate headerRequest = utilTemplates.getInstanceOf("header");
		StringTemplate headerReply = utilTemplates.getInstanceOf("header");
		StringTemplate definitionRequest = utilTemplates.getInstanceOf("definition");
		StringTemplate definitionReply = utilTemplates.getInstanceOf("definition");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		
		headerFile.setAttribute("name", ifc.getName());
		definitionFile.setAttribute("name", ifc.getName());
		
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
			if(!"void".equals(op.getReturnType())){
				headerReply.setAttribute("returnType", op.getReturnType());					
				definitionReply.setAttribute("returnType", op.getReturnType());
			}
			headerFile.setAttribute("classes", headerRequest.toString());
			headerFile.setAttribute("classes", headerReply.toString());
			
			definitionFile.setAttribute("classes", definitionRequest.toString());
			definitionFile.setAttribute("classes", definitionReply.toString());
			
			headerRequest.reset();
			headerReply.reset();
			definitionRequest.reset();
			definitionReply.reset();
		}
		//System.out.println(request.toString());
		externalDir.append(ifc.getName()).append("RequestReplyUtils.h");
		writeFile(externalDir.toString(), headerFile);
		externalDir.deleteCharAt(externalDir.length() - 1);
		externalDir.append("cxx");
		writeFile(externalDir.toString(), definitionFile);
		
		externalDir.delete(externalDirLength, externalDir.length());
	}
	public static void genIdl(Interface ifc) throws Exception
	{
		// first load main language template
		StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("IDL", DefaultTemplateLexer.class, null);
		
		StringTemplate theFile = idlTemplates.getInstanceOf("idlFile");
		theFile.setAttribute("file", idlFile);
		
		StringTemplate request = idlTemplates.getInstanceOf("request");
		StringTemplate reply = idlTemplates.getInstanceOf("reply");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		
		Operation op = null;
		for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
			op = (Operation) iter.next();
			request.setAttribute("name", op.getName());		
			reply.setAttribute("name", op.getName());
						
			setRequestReplyParams(request, reply, op, "fields.{type, name}");
			if(!"void".equals(op.getReturnType())){
				reply.setAttribute("fields.{type, name}", op.getReturnType(), "returnedValue");
			}
			theFile.setAttribute("types", request.toString());
			theFile.setAttribute("types", reply.toString());
			request.reset();
			reply.reset();
		}

		//System.out.println(reply.toString());
		externalDir.append(ifc.getName()).append("RequestReply.idl");
		writeFile(externalDir.toString(), theFile);

		ddsGen(command, externalDir.substring(externalDirLength));
		
		externalDir.delete(externalDirLength, externalDir.length());

	}
	
	private static void setProjectFiles(StringBuffer buf, StringTemplate client, StringTemplate server, boolean withoutUtils){
		int nameBufLen = buf.length();
		int extBufLen = 0;
		int limit = withoutUtils ? operationFileSuffixes.length -1 : operationFileSuffixes.length; 
		for(int i = 0; i < limit; i++){			
			buf.append(operationFileSuffixes[i]);
			extBufLen = buf.length();
			buf.append(".h");
			client.setAttribute("headerFiles", buf.toString());
			server.setAttribute("headerFiles", buf.toString());
			buf.delete(extBufLen, buf.length());
			buf.append(".cxx");
			client.setAttribute("sourceFiles", buf.toString());
			server.setAttribute("sourceFiles", buf.toString());
			buf.delete(nameBufLen, buf.length());
		}
	}
	
	private static void setProjectFile(StringBuffer buf, StringTemplate project, String suffix, int start){		
		buf.delete(start, buf.length());
		buf.append(suffix);
		buf.append(".h");
		project.setAttribute("headerFiles", buf.toString());
		buf.delete(buf.length() -2, buf.length());
		buf.append(".cxx");
		project.setAttribute("sourceFiles", buf.toString());
	}
	
	public static void genVS2005(Interface ifc)
	{
		// first load main language template
		StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("VS2005", DefaultTemplateLexer.class, null);
		
		StringTemplate solution = idlTemplates.getInstanceOf("solution");
		StringTemplate projectClient = idlTemplates.getInstanceOf("project");
		StringTemplate projectServer = idlTemplates.getInstanceOf("project");
				
		if(externalDirLength > 0){
			externalDir.append("/");	
		}
		StringBuffer stringBuf = new StringBuffer(ifc.getName());
		stringBuf.append("Server");
		String serverGuid = GUIDGenerator.genGUID(stringBuf.toString());
		solution.setAttribute("projects.{name, guid, dependsOn}", stringBuf.toString(), serverGuid, null);
		projectServer.setAttribute("guid", serverGuid);
		projectServer.setAttribute("name",stringBuf.toString());

		stringBuf.delete(ifc.getName().length(), stringBuf.length());
		stringBuf.append("Client");
		String clientGuid = GUIDGenerator.genGUID(stringBuf.toString());
		solution.setAttribute("projects.{name, guid, dependsOn}", stringBuf.toString(),clientGuid, serverGuid);
		projectClient.setAttribute("guid", clientGuid);
		projectClient.setAttribute("name",stringBuf.toString());
		
						
		// project configurations	
		for(int index = 0; index < configurations.length; index++){
			solution.setAttribute("configurations", configurations[index].getName());
			projectClient.setAttribute("configurations", configurations[index]);
			projectServer.setAttribute("configurations", configurations[index]);
		}

		externalDir.append(ifc.getName()).append("-vs2005.sln");
		writeFile(externalDir.toString(), solution);
		externalDir.delete(externalDirLength, externalDir.length());
			
		stringBuf.delete(0, stringBuf.length());
		stringBuf.append(ifc.getName());
		// Server and client common files

		setProjectFiles(stringBuf, projectClient, projectServer, true);
		stringBuf.append("RequestReply");
		setProjectFiles(stringBuf, projectClient, projectServer, false);

		stringBuf.delete(0, stringBuf.length());
		stringBuf.append(ifc.getName());		
		// Client exclusive files
		setProjectFile(stringBuf, projectClient, "Proxy", ifc.getName().length());
		setProjectFile(stringBuf, projectClient, "ClientRemoteServiceSupport", ifc.getName().length());
				
		projectClient.setAttribute("sourceFiles", "Client.cxx");

		// Server exclusive files
		setProjectFile(stringBuf, projectServer, "Server", ifc.getName().length());
		setProjectFile(stringBuf, projectServer, "ServerImpl", ifc.getName().length());
		setProjectFile(stringBuf, projectServer, "ServerRemoteServiceSupport", ifc.getName().length());

		projectServer.setAttribute("sourceFiles", "Server.cxx");
		
		//System.out.println(request.toString());
		externalDir.append(ifc.getName()).append("Client-vs2005.vcproj");
		writeFile(externalDir.toString(), projectClient);

		//System.out.println(reply.toString());
		externalDir.delete(externalDirLength + ifc.getName().length(), externalDir.length());
		externalDir.append("Server-vs2005.vcproj");
		writeFile(externalDir.toString(), projectServer);

		externalDir.delete(externalDirLength, externalDir.length());
	}
	
	public static Module parse(String file) {
		IDLParser parser = null;
		Module root = null;
    	System.out.println("IDL Parser Version 0.1:  Reading from file " + file + " . . .");
    	try {
    		parser = new IDLParser(new java.io.FileInputStream(file));
    	} catch (java.io.FileNotFoundException e) {
    		System.out.println("IDL Parser Version 0.1:  File " + file + " not found.");
    	}

	    try 
	    {
	        ASTStart n = parser.Start();
	        CplusplusVisitor visitor = new CplusplusVisitor();
	        root = (Module)n.jjtAccept(visitor, null);
	        System.out.println(file + " Parsing Complete.");
	    } catch (Exception e) {
	        System.out.println("Oops. Parser Error");
	        System.out.println(e.getMessage());
	    }
	   
	    return root;		
	}
	
	public static boolean getOptions(String args[])
	{
		int count = 0;
		String arg;
		
		while(count < args.length)
		{
			arg = args[count++];
			if(!arg.startsWith("-"))
			{
				idlFile = arg;
			}
			else if(arg.equals("-language"))
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
			else if(arg.equalsIgnoreCase("-replace"))
			{
				replace = true;
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
		
		if(idlFile == null)
		{
			System.out.println("ERROR: The program expects an IDL file");
			return false;
		}

		externalDir = (externalDir == null) ? new StringBuffer(): externalDir;
		return true;
	}
	
	
	public static void printHelp()
	{
		System.out.print("ddscs help:\n\nUsage: ddscs [options] <IDL file>\nOptions:\n" +
				"   -language                : Programming language (C|C++|C#|java).\n" +
				"   -ppPath <path\\><program> : C/C++ Preprocessor path.(Default is cl.exe)\n" +
				"   -ppDisable               : Do not use C/C++ preprocessor.\n" +
				"   -replace                 : replace rtiddsgen generated files.\n" +
				"   -d <path>                : Output directory.\n");
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

class ProcessOutput extends Thread
{
    InputStream is;
    String type;
    
    ProcessOutput(InputStream is, String type)
    {
        this.is = is;
        this.type = type;
    }
    
    public void run()
    {
        try
        {
            InputStreamReader isr = new InputStreamReader(is);
            BufferedReader br = new BufferedReader(isr);
            String line=null;
            while ( (line = br.readLine()) != null)
                System.out.println(line);    
            } catch (IOException ioe)
              {
                ioe.printStackTrace();  
              }
    }
}
