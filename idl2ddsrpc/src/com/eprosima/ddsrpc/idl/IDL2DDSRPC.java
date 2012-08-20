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
package com.eprosima.ddsrpc.idl;

import org.antlr.stringtemplate.CommonGroupLoader;
import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateErrorListener;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.StringTemplateGroupLoader;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;
import com.eprosima.ddsrpc.idl.ast.*;
import com.eprosima.ddsrpc.idl.tree.*;

import java.io.*;
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Map;



// TO_DO: string constants...
public class IDL2DDSRPC
{
    private static String osOption = "Win32";
    private static String exampleOption = null;
    private static String languageOption = "C++";
    private static boolean ppDisable = false;
    private static boolean replace = false;
    private static String ppPath = null;
    private static StringBuffer externalDir = null;
    private static int externalDirLength = 0;
    private static String idlFile = null;
    private static ArrayList command = null;	
    private static StringBuffer env = null;	

    //TO_DO: external properties?
    private static VSConfiguration configurations[]={new VSConfiguration("Debug DLL", "Win32", true, true),
        new VSConfiguration("Release DLL", "Win32", false, true),
        new VSConfiguration("Debug", "Win32", true, false),
        new VSConfiguration("Release", "Win32", false, false)};	
    private static String operationFileSuffixes[]={"", "Plugin", "Support", "Utils"};	

    /**
     * @param args
     */
    public static void main(String[] args) throws Exception
    {
        int returnedValue = -1;

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

                if(osOption != null)
                {
                    if(osOption.equals("Win32"))
                        command.add("rtiddsgen.bat");
                    else if(osOption.equals("Linux"))
                    {
                        env.append(":/bin:/sbin:/usr/bin:/usr/sbin");
                        command.add("rtiddsgen");
                    }
                }

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
                    if(ppPath != null)
                    {
                        command.add("-ppPath");
                        command.add(ppPath);
                    }
                }

                if(replace == true)
                {
                    command.add("-replace");
                }

                if(externalDirLength > 0)
                {
                    command.add("-d");
                    command.add(externalDir.toString());
                }

                try
                {
                    ddsGen(command, idlFile);
                    Module root = parse(idlFile);

                    if(root != null)
                    {
                        returnedValue = gen(root);
                    }
                }
                catch(Exception ioe)
                {
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

        if(returnedValue != 0)
            throw new Exception();
    }
    // Need to use envp to pass a Path environment variable pointing to $NDDSHOME/scripts
    // if $NDDSHOME contains spaces the exec(String) or exec(String[])methods DO NOT WORK in Windows
    // even using the well known solution of using double quotes
    // May be a problem with the Java Version deployed with RTI DDS.
    public static void ddsGen(ArrayList c, String file) throws Exception
    {
        String[] commandArray = new String[c.size() + 1];
        String[] envp = {env.toString()};
        c.add(file);			
        System.out.print(file);
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
    
    private static boolean typeIsString(Module root, String name)
    {
    	boolean returnedValue = false;
    	TypeDecl typedecl = root.getTypeDecl(name);
    	
    	while(typedecl instanceof SimpleTypedef)
    	{
    		typedecl = ((SimpleTypedef)typedecl).getBase();
    	}
    	
    	if(typedecl.getName().equals("string"))
    		returnedValue = true;
    	
    	return returnedValue;
    }

    public static int gen(Module root) throws Exception
    {
        final String METHOD_NAME = "gen";
        int returnedValue = -1;

        // get a group loader containing main templates dir and target subdir
        System.out.println("Loading Templates...");		
        StringTemplateGroupLoader loader = 
            new CommonGroupLoader("com/eprosima/ddsrpc/idl/template", new MyErrorListener());
        StringTemplateGroup.registerGroupLoader(loader);

        StringTemplateGroup baseTemplate = StringTemplateGroup.loadGroup("cplusplus", DefaultTemplateLexer.class, null);
        Map typeInitMap = baseTemplate.getMap("typeInitMap");

        // Adds certain type declarations to typeInitMap, so the generation logic
        // would treat them as simple types instead of constructed/template types.
        TypeDecl typedecl = null, aux = null;
        StringTemplate template = null;

        for(ListIterator iter = root.getTypesDecl().listIterator(); iter.hasNext();)
        {						
            typedecl = (TypeDecl) iter.next();
        	aux = typedecl;
        	
            if(typedecl instanceof SimpleTypedef)
            {
            	SimpleTypedef def = null;
            	
            	do
            	{
            		def = (SimpleTypedef)aux;
            		aux = def.getBase();
            	}
            	while(aux instanceof SimpleTypedef);
            }
            
            if(aux instanceof BasicType || aux instanceof EnumType)
            {
            	template = new StringTemplate(baseTemplate, typedecl.getTemplateName());
            	typeInitMap.put(typedecl.getName(), template);
            }
        }

        Interface ifc = root.getIfc();

        System.out.println("Generating Request/Response Topics...");
        if(genIdl(ifc) == 0)
        {
        	System.out.println("Generating Utils...");
        	if(genUtils(ifc) == 0)
        	{
        		System.out.println("Generating Client Code...");
        		if(genHeaderAndImpl("Proxy", "Proxy", "header", "definition",
        				"functionImpl", "functionHeader", "Client", ifc, true) == 0)
        		{
        			if(genRPCSupport(ifc, "Client") == 0)
        			{
        				if(genAsyncSupport(ifc) == 0)
        				{
        					if(genRPCSupport(ifc, "Server") == 0)
        					{
        						System.out.println("Generating Server Code...");
        						if(genHeaderAndImpl("Server", "Server", "headerServer", "definitionServer",
        								"functionImpl", "exFunctionHeader", "Server", ifc, false) == 0)
        						{
        							if(genHeaderAndImpl("ServerImpl", "Server", "headerImpl", "definitionImpl",
        									"emptyFunctionImpl", "functionHeader", null, ifc, false) == 0)
        							{
        								if(genSolution(ifc) == 0)
        								{
        									System.out.println("Finished.");
        									returnedValue = 0;
        								}
        								else
        								{
        									System.out.println("ERROR<" + METHOD_NAME + ">: Generating Solution for " + exampleOption);
        								}
        							}
        							else
        							{
        								System.out.println("ERROR<" + METHOD_NAME + ">: Generating Serve implementation code.");
        							}
        						}
        						else
        						{
        							System.out.println("ERROR<" + METHOD_NAME + ">: Generating Server Code.");
        						}
        					}
        					else
        					{
        						System.out.println("ERROR<" + METHOD_NAME + ">: Generating Server Remote Code.");
        					}
        				}
        				else
        				{
        					System.out.println("ERROR<" + METHOD_NAME + ">: Generating asynchronous support.");
        				}
        			}
        			else
        			{
        				System.out.println("ERROR<" + METHOD_NAME + ">: Generating Client Remote Code.");
        			}
        		}
        		else
        		{
        			System.out.println("ERROR<" + METHOD_NAME + ">: Generating Client Code.");
        		}
        	}
        	else
        	{
        		System.out.println("ERROR<" + METHOD_NAME + ">: Generating Utils.");
        	}
        }
        else
        {
        	System.out.println("ERROR<" + METHOD_NAME + ">: Generating Request/Response Topics.");
        }

        return returnedValue;
    }

    public static int genHeaderAndImpl(String suffix, String templateGroupId, String headerTemplateId,
            String definitionTemplateId, String functionTemplateId, String functionHeaderTemplateId,
            String main, Interface ifc, boolean withAsync)
    {
        final String METHOD_NAME = "genHeaderAndImpl";
        int returnedValue = -1;
        String returnType = "eProsima::DDSRPC::ReturnMessage";

        // first load main language template
        StringTemplateGroup templatesGroup = StringTemplateGroup.loadGroup(templateGroupId, DefaultTemplateLexer.class, null);

        if(templatesGroup != null)
        {
            // Templates for main program generation
            StringTemplate mainTemplate = templatesGroup.getInstanceOf("main");
            StringTemplate funCall = templatesGroup.getInstanceOf("functionCall");

            //Template for Header generation
            StringTemplate header = templatesGroup.getInstanceOf(headerTemplateId);
            header.setAttribute("interfaceName", ifc.getName());
            header.setAttribute("qosLibrary", ifc.getQosLibrary());
            header.setAttribute("qosProfile", ifc.getQosProfile());

            //Template for Definition generation
            StringTemplate definition = templatesGroup.getInstanceOf(definitionTemplateId);
            definition.setAttribute("interfaceName", ifc.getName());


            //Template for function declaration:
            StringTemplate funDecl = templatesGroup.getInstanceOf(functionHeaderTemplateId);

            //Template for function Definition:
            StringTemplate funDef = templatesGroup.getInstanceOf(functionTemplateId);
            
            StringTemplate funDeclAsync = null;
            StringTemplate callbackDeclAsync = null;
            StringTemplate funDefAsync = null;
            
            if(withAsync)
            {
            	funDeclAsync = templatesGroup.getInstanceOf(functionHeaderTemplateId + "Async");
            	callbackDeclAsync = templatesGroup.getInstanceOf("callbackHeaderAsync");
            	funDefAsync = templatesGroup.getInstanceOf(functionTemplateId + "Async");
            }

            Operation op = null;
            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
                op = (Operation) iter.next();
                header.setAttribute("funNames", op.getName());
                definition.setAttribute("funNames.{name, requestQosLibrary, requestQosProfile, replyQosLibrary, replyQosProfile}",
                		op.getName(), (op.getRequestLibrary() != null ? op.getRequestLibrary() : ifc.getQosLibrary()),
                		(op.getRequestProfile() != null ? op.getRequestProfile() : ifc.getQosProfile()),
                		(op.getReplyLibrary() != null ? op.getReplyLibrary() : ifc.getQosLibrary()),
                		(op.getReplyProfile() != null ? op.getReplyProfile() : ifc.getQosProfile()));			

                // Function Declaration

                funDecl.setAttribute("type", returnType);
                funDecl.setAttribute("name", op.getName());

                // Function Definition
                funDef.setAttribute("type", returnType);
                funDef.setAttribute("name", op.getName());
                funDef.setAttribute("interfaceName", ifc.getName());               
                
                if(withAsync)
                {
                	funDeclAsync.setAttribute("type", returnType);
                	funDeclAsync.setAttribute("name", op.getName());
                	callbackDeclAsync.setAttribute("type", returnType);
                	callbackDeclAsync.setAttribute("name", op.getName());
                	funDefAsync.setAttribute("type", returnType);
                	funDefAsync.setAttribute("name", op.getName());
                	funDefAsync.setAttribute("interfaceName", ifc.getName());
                }

                // Function call
                funCall.setAttribute("type", returnType);
                funCall.setAttribute("name", op.getName());

                ListIterator paramIter = null;
                InputParam ip = null;
                for(paramIter = op.getInputParams().listIterator(); paramIter.hasNext();){
                    ip = (InputParam)paramIter.next();
                    funDecl.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());
                    funDef.setAttribute("inputParams.{type, name, string}", ip.getType(), ip.getName(),
                    		(typeIsString(ifc.getModule(), ip.getType()) ? "yes" : null));
                    if(withAsync)
                    {
                    	funDeclAsync.setAttribute("inputParams.{type, name}", ip.getType(), ip.getName());
                    	funDefAsync.setAttribute("inputParams.{type, name, string}", ip.getType(), ip.getName(),
                        		(typeIsString(ifc.getModule(), ip.getType()) ? "yes" : null));
                    }
                    funCall.setAttribute("inputParams.{type, name, string}", ip.getType(), ip.getName(),
                    		(typeIsString(ifc.getModule(), ip.getType()) ? "yes" : null));
                }
                InoutParam iop = null;
                for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
                    iop = (InoutParam)paramIter.next();
                    funDecl.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());
                    funDef.setAttribute("inoutParams.{type, name, string}", iop.getType(), iop.getName(),
                    		(iop.getType().equals("string") ? "yes" : null));
                    if(withAsync)
                    {
                    	funDeclAsync.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());
                    	callbackDeclAsync.setAttribute("inoutParams.{type, name}", iop.getType(), iop.getName());
                    	funDefAsync.setAttribute("inoutParams.{type, name, string}", iop.getType(), iop.getName(),
                        		(iop.getType().equals("string") ? "yes" : null));
                    }
                    funCall.setAttribute("inoutParams.{type, name, string}", iop.getType(), iop.getName(),
                    		(typeIsString(ifc.getModule(), iop.getType()) ? "yes" : null));				
                }
                OutputParam oup = null;
                for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
                    oup = (OutputParam)paramIter.next();
                    funDecl.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());
                    if(withAsync)
                    {
                    	callbackDeclAsync.setAttribute("outputParams.{type, name}", oup.getType(), oup.getName());
                    }
                    funDef.setAttribute("outputParams.{type, name, string}", oup.getType(), oup.getName(),
                    		(typeIsString(ifc.getModule(), oup.getType()) ? "yes" : null));				
                    funCall.setAttribute("outputParams.{type, name, string}", oup.getType(), oup.getName(),
                    		(typeIsString(ifc.getModule(), oup.getType()) ? "yes" : null));				
                }
                // Return Value
                if(!"void".equals(op.getReturnType()))
                {
                    funDecl.setAttribute("outputParams.{type, name}", op.getReturnType(), op.getName()+"_ret");
                    if(withAsync)
                    {
                    	callbackDeclAsync.setAttribute("outputParams.{type, name}", op.getReturnType(), op.getName()+"_ret");
                    }
                    funDef.setAttribute("outputParams.{type, name, string}", op.getReturnType(), op.getName()+"_ret",
                    		(typeIsString(ifc.getModule(), op.getReturnType()) ? "yes" : null));				
                    funCall.setAttribute("outputParams.{type, name,string}", op.getReturnType(), op.getName()+"_ret",
                    		(typeIsString(ifc.getModule(), op.getReturnType()) ? "yes" : null));
                }

                header.setAttribute("funDecls", funDecl.toString());
                definition.setAttribute("funImpls", funDef.toString());
                if(withAsync)
                {
                	header.setAttribute("funDeclsAsync", funDeclAsync.toString());
                	header.setAttribute("callbackDeclsAsync", callbackDeclAsync.toString());
                	definition.setAttribute("funImplsAsync", funDefAsync.toString());
                }
                mainTemplate.setAttribute("invocations", funCall.toString());
                funDecl.reset();
                funDef.reset();
                if(withAsync)
                {
                	funDeclAsync.reset();
                	callbackDeclAsync.reset();
                	funDefAsync.reset();
                }
                funCall.reset();
            }

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }
            //System.out.println(header.toString());
            externalDir.append(ifc.getName()).append(suffix).append(".h");
            if(writeFile(externalDir.toString(), header) == 0)
            {
                //System.out.println(definition.toString());
                externalDir.deleteCharAt(externalDir.length() - 1);
                externalDir.append("cxx");
                if(writeFile(externalDir.toString(), definition) == 0)
                {
                    externalDir.delete(externalDirLength, externalDir.length());

                    // Main
                    if(main != null)
                    {
                        if(externalDirLength > 0)
                        {
                            externalDir.append("/");	
                        }
                        mainTemplate.setAttribute("interfaceName", ifc.getName());
                        externalDir.append(main).append(".cxx");
                        writeFile(externalDir.toString(), mainTemplate);
                        externalDir.delete(externalDirLength, externalDir.length());						
                    }
                    returnedValue = 0;
                }
            }
        }
        else
        {
            System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group" + templateGroupId);
        }

        return returnedValue;
    }



    private static void  setRequestReplyParams(StringTemplate request, StringTemplate reply, Operation op, String attribute,
    		Interface ifc)
    {
        ListIterator paramIter = null;
        InputParam ip = null;
        for(paramIter = op.getInputParams().listIterator(); paramIter.hasNext();)
        {
            ip = (InputParam)paramIter.next();
            request.setAttribute(attribute, ip.getType(), ip.getName(), (typeIsString(ifc.getModule(), ip.getType()) ? "yes" : null), "yes");
        }
        InoutParam iop = null;
        for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
            iop = (InoutParam)paramIter.next();
            request.setAttribute(attribute, iop.getType(), iop.getName(), (typeIsString(ifc.getModule(), iop.getType()) ? "yes" : null), null);
            reply.setAttribute(attribute, iop.getType(), iop.getName(), (typeIsString(ifc.getModule(), iop.getType()) ? "yes" : null), null);
        }
        OutputParam oup = null;
        for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
            oup = (OutputParam)paramIter.next();
            reply.setAttribute(attribute, oup.getType(), oup.getName(), (typeIsString(ifc.getModule(), oup.getType()) ? "yes" : null), null);
        }
    }

    public static int genRPCSupport(Interface ifc, String side)
    {
        final String METHOD_NAME = "genRPCSupport";
        int returnedValue = -1;
        // first load main language template
        StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("RPCSupport", DefaultTemplateLexer.class, null);

        if(utilTemplates != null)
        {
            StringTemplate header = utilTemplates.getInstanceOf(side + "Header");
            StringTemplate definition = utilTemplates.getInstanceOf(side + "Definition");

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }

            header.setAttribute("interfaceName", ifc.getName());
            definition.setAttribute("interfaceName", ifc.getName());

            Operation op = null;
            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext();)
            {						
                op = (Operation) iter.next();
                header.setAttribute("funNames", op.getName());
                definition.setAttribute("funNames", op.getName());
            }

            externalDir.append(ifc.getName()).append(side).append("RPCSupport.h");
            if(writeFile(externalDir.toString(), header) == 0)
            {
                externalDir.deleteCharAt(externalDir.length() - 1);
                externalDir.append("cxx");
                returnedValue = writeFile(externalDir.toString(), definition);

                externalDir.delete(externalDirLength, externalDir.length());
            }
        }
        else
        {
            System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group RPCSupport");
        }

        return returnedValue;
    }
    
    public static int genAsyncSupport(Interface ifc)
    {
    	final String METHOD_NAME = "genAsyncSupport";
        int returnedValue = -1;
        // first load main language template
        StringTemplateGroup asyncTemplates = StringTemplateGroup.loadGroup("AsyncSupport", DefaultTemplateLexer.class, null);

        if(asyncTemplates != null)
        {
            StringTemplate header = asyncTemplates.getInstanceOf("header");
            StringTemplate definition = asyncTemplates.getInstanceOf("definition");
            
            StringTemplate taskDecl = asyncTemplates.getInstanceOf("taskHeader");
            StringTemplate taskDef = asyncTemplates.getInstanceOf("taskDeclaration");

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }

            header.setAttribute("interfaceName", ifc.getName());
            definition.setAttribute("interfaceName", ifc.getName());

            Operation op = null;
            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext();)
            {						
                op = (Operation) iter.next();
                taskDecl.setAttribute("name", op.getName());
                taskDef.setAttribute("name", op.getName());
                
                ListIterator paramIter = null;
                InoutParam iop = null;
                for(paramIter = op.getInoutParams().listIterator(); paramIter.hasNext();){
                    iop = (InoutParam)paramIter.next();
                    taskDef.setAttribute("inoutParams.{type, name, string}", iop.getType(), iop.getName(),
                    		(iop.getType().equals("string") ? "yes" : null));
                }
                OutputParam oup = null;
                for(paramIter = op.getOutputParams().listIterator(); paramIter.hasNext();){
                    oup = (OutputParam)paramIter.next();
                    taskDef.setAttribute("outputParams.{type, name, string}", oup.getType(), oup.getName(),
                    		(typeIsString(ifc.getModule(), oup.getType()) ? "yes" : null));					
                }
                // Return Value
                if(!"void".equals(op.getReturnType()))
                {
                	taskDef.setAttribute("outputParams.{type, name, string}", op.getReturnType(), op.getName()+"_ret",
                    		(typeIsString(ifc.getModule(), op.getReturnType()) ? "yes" : null));				
                }
                
                header.setAttribute("taskDefs", taskDecl.toString());
                definition.setAttribute("taskDecls", taskDef.toString());
                taskDecl.reset();
                taskDef.reset();
            }

            externalDir.append(ifc.getName()).append("AsyncSupport.h");
            if(writeFile(externalDir.toString(), header) == 0)
            {
                externalDir.deleteCharAt(externalDir.length() - 1);
                externalDir.append("cxx");
                returnedValue = writeFile(externalDir.toString(), definition);

                externalDir.delete(externalDirLength, externalDir.length());
            	returnedValue = 0;
            }
        }
        else
        {
            System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group AsyncSupport");
        }

        return returnedValue;
    }
    
    
    public static int genUtils(Interface ifc)
    {
        final String METHOD_NAME = "genUtils";
        int returnedValue = -1;

        // first load main language template
        StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("Utils", DefaultTemplateLexer.class, null);

        if(utilTemplates != null)
        {

            StringTemplate headerFile = utilTemplates.getInstanceOf("headerFile");
            StringTemplate definitionFile = utilTemplates.getInstanceOf("definitionFile");
            StringTemplate headerRequest = utilTemplates.getInstanceOf("header");
            StringTemplate headerReply = utilTemplates.getInstanceOf("header");
            StringTemplate definitionRequest = utilTemplates.getInstanceOf("definition");
            StringTemplate definitionReply = utilTemplates.getInstanceOf("definition");

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }

            headerFile.setAttribute("name", ifc.getName());
            definitionFile.setAttribute("name", ifc.getName());

            Operation op = null;
            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext();)
            {						
                op = (Operation) iter.next();
                headerRequest.setAttribute("funName", op.getName());
                definitionRequest.setAttribute("funName", op.getName());

                headerReply.setAttribute("funName", op.getName());
                headerReply.setAttribute("type", "Reply");

                definitionReply.setAttribute("funName", op.getName());
                definitionReply.setAttribute("type", "Reply");

                setRequestReplyParams(headerRequest, headerReply, op, "params.{type, name, string, isRequestIn}", ifc);
                setRequestReplyParams(definitionRequest, definitionReply, op, "params.{type, name, string, isRequestIn}", ifc);
                if(!"void".equals(op.getReturnType())){
                    headerReply.setAttribute("returnType", op.getReturnType());					
                    definitionReply.setAttribute("returnType", op.getReturnType());
                    definitionReply.setAttribute("string", (typeIsString(ifc.getModule(), op.getReturnType()) ? "yes" : null));
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
            if(writeFile(externalDir.toString(), headerFile) == 0)
            {
                externalDir.deleteCharAt(externalDir.length() - 1);
                externalDir.append("cxx");
                returnedValue = writeFile(externalDir.toString(), definitionFile);

                externalDir.delete(externalDirLength, externalDir.length());
            }
        }
        else
        {
            System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group Utils");
        }

        return returnedValue;
    }

    public static int genIdl(Interface ifc) throws Exception
    {
        final String METHOD_NAME = "genIdl";
        int returnedValue = -1;
        String idlFilename = null;

        // first load main language template
        StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("IDL", DefaultTemplateLexer.class, null);

        if(idlTemplates != null)
        {
            idlFilename = idlFile;
            StringTemplate theFile = idlTemplates.getInstanceOf("idlFile");
            theFile.setAttribute("file", idlFilename);

            StringTemplate request = idlTemplates.getInstanceOf("request");
            StringTemplate reply = idlTemplates.getInstanceOf("reply");

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }

            Operation op = null;

            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); ){						
                op = (Operation) iter.next();
                request.setAttribute("name", op.getName());		
                reply.setAttribute("name", op.getName());

                setRequestReplyParams(request, reply, op, "fields.{type, name, string, isRequestIn}", ifc);
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
            if(writeFile(externalDir.toString(), theFile) == 0)
            {
                try
                {
                    ddsGen(command, externalDir.toString());
                    returnedValue = 0;
                }
                catch(Exception ioe)
                {
                    System.out.println("ERROR generating files");
                    ioe.printStackTrace();
                }

                externalDir.delete(externalDirLength, externalDir.length());
            }
            else
            {
                System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group IDL");
            }
        }

        return returnedValue;
    }

    private static void setProjectFiles(StringBuffer buf, StringTemplate client, StringTemplate server, boolean withoutUtils)
    {
        int nameBufLen = buf.length();
        int extBufLen = 0;
        int limit = withoutUtils ? operationFileSuffixes.length -1 : operationFileSuffixes.length; 
        for(int i = 0; i < limit; i++)
        {			
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

    private static void setProjectFile(StringBuffer buf, StringTemplate project, String suffix, int start)
    {		
        buf.delete(start, buf.length());
        buf.append(suffix);
        buf.append(".h");
        project.setAttribute("headerFiles", buf.toString());
        buf.delete(buf.length() -2, buf.length());
        buf.append(".cxx");
        project.setAttribute("sourceFiles", buf.toString());
    }

    private static int genSolution(Interface ifc)
    {
        final String METHOD_NAME = "genSolution";
        int returnedValue = 0;

        if(exampleOption != null)
        {
        	if(exampleOption.substring(3, 6).equals("Win"))
        	{
        		System.out.println("Genering VS2010 solution");
        		
        		if(exampleOption.startsWith("i86"))
        		{
        			returnedValue = genVS2010(ifc, null);
        		}
        		else if(exampleOption.startsWith("x64"))
        		{
        			for(int index = 0; index < configurations.length; index++)
        			{
        				configurations[index].setPlatform("x64");
        			}
        			
        			returnedValue = genVS2010(ifc, "64");
        		}
        		else
        			returnedValue = -1;

        	}
        	else if(exampleOption.substring(3, 8).equals("Linux"))
        	{        
        		System.out.println("Genering makefile solution");

        		if(exampleOption.startsWith("i86"))
        		{
        			returnedValue = genMakefile(ifc, "32");
        		}
        		else if(exampleOption.startsWith("x64"))
        		{
        			returnedValue = genMakefile(ifc, "64");
        		}
        		else
        			returnedValue = -1;
        	}
        }

        return returnedValue;
    }
    
    private static int genVS2010(Interface ifc, String arch)
    {
    	final String METHOD_NAME = "genVS2010";
    	int returnedValue = -1;
        int lastBarraOccurrency = 0;
        StringBuffer idlStringBuf = null;
        StringBuffer stringBuf = null;
        
    	// first load main language template
    	StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("VS2010", DefaultTemplateLexer.class, null);

    	if(idlTemplates != null)
    	{
    		StringTemplate solution = idlTemplates.getInstanceOf("solution");
    		StringTemplate projectClient = idlTemplates.getInstanceOf("project");
    		StringTemplate projectServer = idlTemplates.getInstanceOf("project");

    		// Obtain only the filename of the idl file.
    		lastBarraOccurrency = idlFile.lastIndexOf('/');
    		if(lastBarraOccurrency == -1)
    			idlStringBuf = new StringBuffer(idlFile.substring(0, idlFile.length() - 4 /* '.idl' */));
    		else
    			idlStringBuf = new StringBuffer(idlFile.substring(lastBarraOccurrency + 1, idlFile.length() - 4 /* '.idl' */));

    		stringBuf = new StringBuffer(ifc.getName());
    		stringBuf.append("Server");
    		String serverGuid = GUIDGenerator.genGUID(stringBuf.toString());
    		solution.setAttribute("projects.{name, guid, dependsOn}", stringBuf.toString(), serverGuid, null);
    		projectServer.setAttribute("guid", serverGuid);
    		projectServer.setAttribute("name",stringBuf.toString());
    		projectServer.setAttribute("example", exampleOption);
    		projectServer.setAttribute("arch", arch);

    		stringBuf.delete(ifc.getName().length(), stringBuf.length());
    		stringBuf.append("Client");
    		String clientGuid = GUIDGenerator.genGUID(stringBuf.toString());
    		solution.setAttribute("projects.{name, guid, dependsOn}", stringBuf.toString(),clientGuid, serverGuid);
    		projectClient.setAttribute("guid", clientGuid);
    		projectClient.setAttribute("name",stringBuf.toString());
    		projectClient.setAttribute("example", exampleOption);
    		projectClient.setAttribute("arch", arch);

    		// project configurations	
    		for(int index = 0; index < configurations.length; index++){
    			solution.setAttribute("configurations", configurations[index]);
    			projectClient.setAttribute("configurations", configurations[index]);
    			projectServer.setAttribute("configurations", configurations[index]);
    		}

    		if(externalDirLength > 0)
    		{
    			externalDir.append("/");	
    		}
    		externalDir.append(ifc.getName()).append("-vs2010.sln");
    		if(writeFile(externalDir.toString(), solution) == 0)
    		{
    			externalDir.delete(externalDirLength, externalDir.length());

    			stringBuf.delete(0, stringBuf.length());
    			stringBuf.append(ifc.getName());
    			// Server and client common files

    			setProjectFiles(idlStringBuf, projectClient, projectServer, true);
    			stringBuf.append("RequestReply");
    			setProjectFiles(stringBuf, projectClient, projectServer, false);

    			stringBuf.delete(0, stringBuf.length());
    			stringBuf.append(ifc.getName());		
    			// Client exclusive files
    			setProjectFile(stringBuf, projectClient, "Proxy", ifc.getName().length());
    			setProjectFile(stringBuf, projectClient, "ClientRPCSupport", ifc.getName().length());

    			projectClient.setAttribute("sourceFiles", "Client.cxx");

    			// Server exclusive files
    			setProjectFile(stringBuf, projectServer, "Server", ifc.getName().length());
    			setProjectFile(stringBuf, projectServer, "ServerImpl", ifc.getName().length());
    			setProjectFile(stringBuf, projectServer, "ServerRPCSupport", ifc.getName().length());

    			projectServer.setAttribute("sourceFiles", "Server.cxx");

    			//System.out.println(request.toString());
    			if(externalDirLength > 0)
    			{
    				externalDir.append("/");	
    			}
    			externalDir.append(ifc.getName()).append("Client-vs2010.vcxproj");
    			if(writeFile(externalDir.toString(), projectClient) == 0)
    			{
    				externalDir.delete(externalDirLength, externalDir.length());

    				if(externalDirLength > 0)
    				{
    					externalDir.append("/");	
    				}
    				externalDir.append(ifc.getName()).append("Server-vs2010.vcxproj");
    				returnedValue = writeFile(externalDir.toString(), projectServer);
    				externalDir.delete(externalDirLength, externalDir.length());
    			}
    		}
    	}
    	else
    	{
    		System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group VS2010");
    	}
    	
    	return returnedValue;
    }
    
    private static int genMakefile(Interface ifc, String arch)
    {
    	final String METHOD_NAME = "getMakefile";
    	int returnedValue = -1;
    	
    	StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("makefile", DefaultTemplateLexer.class, null);

    	if(idlTemplates != null)
    	{
    		StringTemplate makecxx = idlTemplates.getInstanceOf("makecxx");
    		
    		makecxx.setAttribute("interface", ifc.getName());
    		makecxx.setAttribute("example", exampleOption);
    		makecxx.setAttribute("arch", arch);
    		
    		String extdir = externalDir.toString() + (externalDirLength > 0 ? "/" : "") + "makefile_" + exampleOption;
    		System.out.println("Genering makefile " + extdir);
			returnedValue = writeFile(extdir.toString(), makecxx);
    	}
    	else
    	{
    		System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group makecxx");
    	}
    	
    	return returnedValue;
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
            else if(arg.equals("-os"))
            {
                osOption = args[count++];

                if(!osOption.equals("Win32") &&
                        !osOption.equals("Linux"))
                {
                    System.out.println("ERROR: Unknown OS " + osOption);
                    return false;
                }
            }
            else if(arg.equals("-example"))
            {
            	exampleOption = args[count++];
            	
            	if(!exampleOption.equals("i86Win32VS2010") &&
            			!exampleOption.equals("x64Win64VS2010") &&
            			!exampleOption.equals("i86Linux2.6gcc4.1.2") &&
            			!exampleOption.equals("i86Linux2.6gcc4.4.3") &&
            			!exampleOption.equals("x64Linux2.6gcc4.5.1"))
            	{
            		System.out.println("ERROR: Unknown example arch " + exampleOption);
            		return false;
            	}
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
                "   -example : Generate solution for specific platform (example: x64Win64VS2010)\n" +
                "   -language                : Programming language (C++).\n" +
                "   -ppPath <path\\><program> : C/C++ Preprocessor path.(Default is cl.exe)\n" +
                "   -ppDisable               : Do not use C/C++ preprocessor.\n" +
                "   -replace                 : replace rtiddsgen generated files.\n");
        //				"   -d <path>                : Output directory.\n");
    }

    public static int writeFile(String file, StringTemplate template)
    {
        int returnedValue = -1;
        try
        {
            File handle = new File(file);
            if(!handle.exists() || replace || file.endsWith("idl"))
            {
                FileWriter fw = new FileWriter(file);
                String data = template.toString();
                fw.write(data, 0,data.length());
                fw.close();
            }
            else
            {
                System.out.println(file + " exists. Skipping.");
            }

            returnedValue = 0;
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }	

        return returnedValue;
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
