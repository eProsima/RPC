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
package com.eprosima.rpcdds.idl;

import org.antlr.stringtemplate.CommonGroupLoader;
import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateErrorListener;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.StringTemplateGroupLoader;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;
import com.eprosima.rpcdds.idl.ast.*;
import com.eprosima.rpcdds.idl.tree.*;

import java.io.*;
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.Map;
import java.util.HashMap;



// TO_DO: string constants...
public class RPCDDSGEN
{
	private static String version = "0.1.0";
    private static String osOption = "Win32";
    private static String exampleOption = null;
    private static String languageOption = "C++";
    private static boolean ppDisable = false;
    private static boolean replace = false;
    private static String ppPath = null;
    private static StringBuffer externalDir = null;
    private static int externalDirLength = 0;
    private static String tempDir = null;
    // Array list of strings. Include paths
    private static ArrayList includePaths = new ArrayList();
    private static String idlFile = null;
    private static String command = null;
    private static String extra_command = null;
    private static ArrayList lineCommand = null;
    private static String[] env_variables = null;	
    private static String middleware = "rti";
    private static String spTemplate = "main";
    
    // Used to set the base template.
    private static StringTemplateGroup spTemplateGroup = null;
    private static StringTemplateGroup baseTemplateGroup = null;

    //TO_DO: external properties?
    private static VSConfiguration configurations[]={new VSConfiguration("Debug DLL", "Win32", true, true),
        new VSConfiguration("Release DLL", "Win32", false, true),
        new VSConfiguration("Debug", "Win32", true, false),
        new VSConfiguration("Release", "Win32", false, false)};	

    /**
     * @param args
     */
    public static void main(String[] args) throws Exception
    {
        int returnedValue = -1;

        if(getOptions(args))
        {
            if(ddsGenInit() == 0)
            {
                try
                {
                    ddsGen(idlFile);
                    Module root = parse(idlFile);

                    if(root != null && root.getError() == false)
                    {
                        returnedValue = gen(root);
                    }
                }
                catch(Exception ioe)
                {
                	if(!ioe.getMessage().equals(""))
                		System.out.println(ioe.getMessage());
                    System.out.println("ERROR: Cannot generate the files");
                    //ioe.printStackTrace();
                }
            }

            // TO_DO: May be more than one interface defined in the idl...
            // TO_DO: modules/namespaces
        }
        else
        {
            printHelp();
        }	

        System.exit(returnedValue);
    }
    
    public static int ddsGenInit()
    {   
        // Set environment variables.
        String envPath = null, envLD = null, envRoot = null, dds_root = null, tao_root = null;
        
        envPath = System.getProperty("PATH");
        
        if(envPath != null)
        {
        	envPath = "PATH=" + envPath;
        	
        	if(osOption.equals("Linux") && (envLD = System.getProperty("LD_LIBRARY_PATH")) != null)
        	{
        		envLD = "LD_LIBRARY_PATH=" + envLD;
        	}
        	
        	if(middleware.equals("rti"))
        	{
        		dds_root = System.getProperty("NDDSHOME");
        		
        		if(dds_root == null)
        		{
        			System.out.println("ERROR: Cannot find the environment variable NDDSHOME.");
        			return -1;
        		}
        	}
        	else if(middleware.equals("opendds"))
        	{
        		dds_root = System.getProperty("DDS_ROOT");
        		
        		if(dds_root != null)
        			envRoot = "DDS_ROOT=" + dds_root;
        		else
        		{
        			System.out.println("ERROR: Cannot find the environment variable DDS_ROOT.");
        			return -1;
        		}
        		
        		tao_root = System.getProperty("TAO_ROOT");
        	}
        	
        	// Create final structure that stores the environment variables.
        	env_variables = new String[1 + (envLD != null ? 1 : 0) +
        	                           (envRoot != null ? 1 : 0)];
        	int count = 0;
        	env_variables[count++] = envPath;
        	
        	if(envLD != null)
        		env_variables[count++] = envLD;
        	
        	if(envRoot != null)
        		env_variables[count++] = envRoot;
        }
        else
        {
        	System.out.println("ERROR: Cannot find the environment variable PATH.");
        	return -1;
        }
        
        // Set line command.
        lineCommand = new ArrayList();
        
        if(middleware.equals("rti"))
        {
        	if(osOption.equals("Win32"))
        		command = dds_root + "\\scripts\\rtiddsgen.bat";
        	else if(osOption.equals("Linux"))
        		command = dds_root + "\\scripts\\rtiddsgen";
        	
        	if(languageOption != null)
            {
        		lineCommand.add("-language");
        		lineCommand.add(languageOption);
            }

            if(ppDisable == true)
            {
            	lineCommand.add("-ppDisable");
            }
            else
            {
                if(ppPath != null)
                {

                	lineCommand.add("-ppPath");
                	lineCommand.add(ppPath);
                }
            }

            if(replace == true)
            {
            	lineCommand.add("-replace");
            }

            if(externalDirLength > 0)
            {
            	lineCommand.add("-d");
            	lineCommand.add(externalDir.toString());

            }
        }
        else if(middleware.equals("opendds"))
        {
        	if(osOption.equals("Win32"))
        	{
        		command = "opendds_idl.exe";
        		extra_command = "tao_idl.exe";
        	}
        	else if(osOption.equals("Linux"))
        	{
        		command = "opendds_idl";
        		extra_command = "tao_idl";
        	}
            spTemplate = "opendds";
            
            lineCommand.add("-I" + dds_root);
            lineCommand.add("-I" + tao_root);
            
            if(tempDir != null)
            {
            	lineCommand.add("-t");
            	lineCommand.add("tempDir");
            }
        }
        
        // TODO
        /*if(osOption.equals("Win32"))
        	 lineCommand.add("-I" + dds_root + "\\rpcdds\\idl");
        else if(osOption.equals("Linux"))
        	 lineCommand.add("-I" + dds_root + "/rpcdds/idl");*/
        lineCommand.add("-I"+dds_root+"/rpcdds/idl");
        
        // Add the include paths given as parameters.
        for(int i = 0; i < includePaths.size(); ++i)
        {
        	lineCommand.add(includePaths.get(i));
        }
    	
    	return 0;
    }
    // Need to use envp to pass a Path environment variable pointing to $NDDSHOME/scripts
    // if $NDDSHOME contains spaces the exec(String) or exec(String[])methods DO NOT WORK in Windows
    // even using the well known solution of using double quotes
    // May be a problem with the Java Version deployed with RTI DDS.
    public static void ddsGen(String file) throws Exception
    {
    	int count = 0;
        ArrayList finalCommandLine = null;
        String[] finalCommandArray = null;
        			
        System.out.println(file);
        
        // Execute tao_idl
        if(extra_command != null)
        {
        	 finalCommandLine = new ArrayList();
             finalCommandLine.add(extra_command);
             finalCommandLine.add("-SS");
             finalCommandLine.add("-Sa");
             finalCommandLine.addAll(lineCommand);
             finalCommandLine.add(file);
             finalCommandArray = new String[finalCommandLine.size()];
             finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
             
             Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray, env_variables);
             ProcessOutput auxerrorOutput = new ProcessOutput(auxddsgen.getErrorStream(), "ERROR", false);
             ProcessOutput auxnormalOutput = new ProcessOutput(auxddsgen.getInputStream(), "OUTPUT", false);
             auxerrorOutput.start();
             auxnormalOutput.start();
             int auxexitVal = auxddsgen.waitFor();

             if(auxexitVal != 0)
             {
                 throw new Exception("process waitFor() function returns the error value " + auxexitVal);
             }
        }
        
        finalCommandLine = new ArrayList();
        finalCommandLine.add(command);
        finalCommandLine.addAll(lineCommand);
        finalCommandLine.add(file);
        finalCommandArray = new String[finalCommandLine.size()];
        finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
        
        Process ddsgen = Runtime.getRuntime().exec(finalCommandArray, env_variables);
        ProcessOutput errorOutput = new ProcessOutput(ddsgen.getErrorStream(), "ERROR", middleware.equals("rti"));
        ProcessOutput normalOutput = new ProcessOutput(ddsgen.getInputStream(), "OUTPUT", middleware.equals("rti"));
        errorOutput.start();
        normalOutput.start();
        int exitVal = ddsgen.waitFor();

        if(exitVal != 0)
        {
            throw new Exception("process waitFor() function returns the error value " + exitVal);
        }
        
        if(errorOutput.getFoundError() || normalOutput.getFoundError())
        {
            throw new Exception("");
        }
        	
        
        // Execute tao_idl
        if(extra_command != null)
        {
        	 finalCommandLine = new ArrayList();
             finalCommandLine.add(extra_command);
             finalCommandLine.add("-SS");
             finalCommandLine.add("-Sa");
             finalCommandLine.addAll(lineCommand);
             finalCommandLine.add(file.subSequence(0, file.length() - 4) + "TypeSupport.idl");
             finalCommandArray = new String[finalCommandLine.size()];
             finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
             
             Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray, env_variables);
             ProcessOutput auxerrorOutput = new ProcessOutput(auxddsgen.getErrorStream(), "ERROR", false);
             ProcessOutput auxnormalOutput = new ProcessOutput(auxddsgen.getInputStream(), "OUTPUT", false);
             auxerrorOutput.start();
             auxnormalOutput.start();
             int auxexitVal = auxddsgen.waitFor();

             if(auxexitVal != 0)
             {
                 throw new Exception("process waitFor() function returns the error value " + auxexitVal);
             }
        }
        //TO_DO: check rtiddsgen has been correctly called it may return exitVal of 0 without
        // generating nothing, for example due to missing preprocessor.
        //The best way to do this is checking for output files existence and modification times (if -replace)
        //ddsGenRunCheck(file);	
    }
    
    private static boolean typeIsString(Module root, String name)
    {
    	boolean returnedValue = false;
    	// Get the type declaration.
    	TypeDecl typedecl = root.getTypeDecl(name);
    	
    	// If the type is typedef, get the base type.
    	while(typedecl instanceof SimpleTypedef)
    	{
    		typedecl = ((SimpleTypedef)typedecl).getBase();
    	}
    	
    	// Check the final type is a string.
    	if(typedecl.getName().equals("string"))
    		returnedValue = true;
    	
    	return returnedValue;
    }
    
    private static String getTypeInitialValue(Module root, String name)
    {
    	// Get the type declaration.
    	TypeDecl typedecl= root.getTypeDecl(name);
    	
    	// If the type is typede, get the base type.
    	while(typedecl instanceof SimpleTypedef)
    	{
    		typedecl = ((SimpleTypedef)typedecl).getBase();
    	}
    	
    	// Return the initial value.
    	return typedecl.getInitialValue();
    }

    public static int gen(Module root) throws Exception
    {
        final String METHOD_NAME = "gen";
        int returnedValue = -1;

        // get a group loader containing main templates dir and target subdir
        System.out.println("Loading Templates...");		
        StringTemplateGroupLoader loader = 
            new CommonGroupLoader("com/eprosima/rpcdds/idl/template", new MyErrorListener());
        StringTemplateGroup.registerGroupLoader(loader);

        spTemplateGroup = StringTemplateGroup.loadGroup(spTemplate, DefaultTemplateLexer.class, null);
        baseTemplateGroup = StringTemplateGroup.loadGroup("cplusplus", DefaultTemplateLexer.class, spTemplateGroup);
        Map typeInitMap = baseTemplateGroup.getMap("typeInitMap");

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
            	template = new StringTemplate(baseTemplateGroup, typedecl.getTemplateName());
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

        // first load main language template
        StringTemplateGroup templatesGroup = StringTemplateGroup.loadGroup(templateGroupId, DefaultTemplateLexer.class, baseTemplateGroup);

        if(templatesGroup != null)
        {
            // Templates for main program generation
            StringTemplate mainTemplate = templatesGroup.getInstanceOf("main");
            StringTemplate funCall = templatesGroup.getInstanceOf("functionCall");
            boolean one_invocation = false;  //Check that first operation was added.

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
            
            StringTemplate funDeclAsync = null;
            StringTemplate classDeclAsync = null;
            StringTemplate funDefAsync = null;
            
         // Asynchronous templates.
            if(withAsync)
            {
            	funDeclAsync = templatesGroup.getInstanceOf(functionHeaderTemplateId + "Async");
            	classDeclAsync = templatesGroup.getInstanceOf("classHeaderAsync");
            	funDefAsync = templatesGroup.getInstanceOf(functionTemplateId + "Async");
            }
            

            Operation op = null;
            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); )
            {						
                op = (Operation) iter.next();
                header.setAttribute("funNames", op.getName());
                
                definition.setAttribute("funNames.{name, isOneway}",
                		op.getName(), (op.isOneway() ? "true" : null));			
                
                // Function Declaration
                funDecl.setAttribute("rettype", op.getReturnType());
                funDecl.setAttribute("name", op.getName());

                // Function Definition
                funDef.setAttribute("rettype", op.getReturnType());
                funDef.setAttribute("name", op.getName());
                funDef.setAttribute("interfaceName", ifc.getName());   
                
                // Function call
                funCall.setAttribute("rettype", op.getReturnType());
                funCall.setAttribute("name", op.getName());
                
                // Asynchronous templates.
                if(withAsync)
                {
                	// Function Definition.
                	funDeclAsync.setAttribute("interfaceName", ifc.getName());
                	funDeclAsync.setAttribute("name", op.getName());
                	classDeclAsync.setAttribute("interfaceName", ifc.getName());
                	classDeclAsync.setAttribute("rettype", op.getReturnType());
                	classDeclAsync.setAttribute("name", op.getName());
                	funDefAsync.setAttribute("name", op.getName());
                	funDefAsync.setAttribute("interfaceName", ifc.getName());
                }

                Param parameter = null;
                for(ListIterator paramIter = op.getParams().listIterator(); paramIter.hasNext();){
                    parameter = (Param)paramIter.next();

                    // Set parameter in funDecl.
                    funDecl.setAttribute("params", parameter);
                    
                    // Set parameter in funDef.
                    funDef.setAttribute("params", parameter);
                    if(parameter.isInput())
                    	funDef.setAttribute("inParams", parameter);
                    if(parameter.isOutput())
                    	funDef.setAttribute("outParams", parameter);
                    
                    // Set parameter in funCall.
                    funCall.setAttribute("params", parameter);
                    
                    // Asynchronous templates.
                    if(withAsync)
                    {
                    	// Set parameter in funDeclAsync.
                    	if(parameter.isInput())
                    	{
                    		funDeclAsync.setAttribute("inParams", parameter);
                    		funDefAsync.setAttribute("inParams", parameter);
                    	}
                    	// Set parameter in classDeclAsync.
                    	if(parameter.isOutput())
                    		classDeclAsync.setAttribute("outParams", parameter);
                    }
                }

                // In case of oneway function, set the property
                if(op.isOneway())
                	funDef.setAttribute("isOneway", "true");

                header.setAttribute("funDecls", funDecl.toString());
                definition.setAttribute("funImpls", funDef.toString());
                
                // Set asynchrnous templates.
                if(withAsync && !op.isOneway())
                {
                	header.setAttribute("funDeclsAsync", funDeclAsync.toString());
                	header.setAttribute("classDeclsAsync", classDeclAsync.toString());
                	definition.setAttribute("funImplsAsync", funDefAsync.toString());
                }
                if(!one_invocation)
                {
                	mainTemplate.setAttribute("invocations", funCall.toString());
                	one_invocation = true;
                }
                funDecl.reset();
                funDef.reset();
                funCall.reset();
                if(withAsync)
                {
                	funDeclAsync.reset();
                	classDeclAsync.reset();
                	funDefAsync.reset();
                }
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
        Param parameter = null;
        for(paramIter = op.getParams().listIterator(); paramIter.hasNext();)
        {
            parameter = (Param)paramIter.next();
            if(parameter.isInput())
            	request.setAttribute(attribute, parameter);
            if(parameter.isOutput())
            	reply.setAttribute(attribute, parameter);
        }
    }

    public static int genRPCSupport(Interface ifc, String side)
    {
        final String METHOD_NAME = "genRPCSupport";
        int returnedValue = -1;
        // first load main language template
        StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("RPCSupport", DefaultTemplateLexer.class, baseTemplateGroup);

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
                header.setAttribute("topicNames.{name, isOneway}", ifc.getName() + "_" + op.getName(), (op.isOneway() ? "true" : null));
                definition.setAttribute("topicNames.{name, isOneway}", ifc.getName() + "_" + op.getName(), (op.isOneway() ? "true" : null));
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
        StringTemplateGroup asyncTemplates = StringTemplateGroup.loadGroup("AsyncSupport", DefaultTemplateLexer.class, baseTemplateGroup);

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
            	
            	taskDecl.setAttribute("interfaceName", ifc.getName());
            	taskDef.setAttribute("interfaceName", ifc.getName());
            	      
                taskDecl.setAttribute("name", op.getName());
                taskDef.setAttribute("name", op.getName());
                
                ListIterator paramIter = null;
                Param parameter = null;
                for(paramIter = op.getParams().listIterator(); paramIter.hasNext();)
                {
                	parameter = (Param)paramIter.next();
                	if(parameter.isOutput())
                		taskDef.setAttribute("outParams", parameter);
                }
                
                // Return Value
                if(!"void".equals(op.getReturnType().getTypeName()))
                {
                	taskDef.setAttribute("outParams", op.getReturnType());				
                }
                
                // If function is not oneway
                if(!op.isOneway())
                {
                	header.setAttribute("taskDefs", taskDecl.toString());
                	definition.setAttribute("taskDecls", taskDef.toString());
                }
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
        StringTemplateGroup utilTemplates = StringTemplateGroup.loadGroup("Utils", DefaultTemplateLexer.class, baseTemplateGroup);

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
                
                // Request template
                headerRequest.setAttribute("topicName", ifc.getName() + "_" + op.getName());
                headerRequest.setAttribute("templateName", "Request");
                definitionRequest.setAttribute("topicName", ifc.getName() + "_" + op.getName());
                definitionRequest.setAttribute("templateName", "Request");

                // Reply template
                headerReply.setAttribute("topicName", ifc.getName() + "_" + op.getName());
                headerReply.setAttribute("templateName", "Reply");
                definitionReply.setAttribute("topicName", ifc.getName() + "_" + op.getName());
                definitionReply.setAttribute("templateName", "Reply");

                // Set parameters for request template and reply template
                setRequestReplyParams(headerRequest, headerReply, op, "params", ifc);
                setRequestReplyParams(definitionRequest, definitionReply, op, "params", ifc);
                
                if(!"void".equals(op.getReturnType().getTypeName())){
                    headerReply.setAttribute("returnType", op.getReturnType());					
                    definitionReply.setAttribute("returnType", op.getReturnType());
                }
                
                headerReply.setAttribute("isReply", "yes");
                definitionReply.setAttribute("isReply", "yes");
                
                headerFile.setAttribute("classes", headerRequest.toString());
                definitionFile.setAttribute("classes", definitionRequest.toString());

                // Operation is not oneway.
                if(!op.isOneway())
                {
                	headerFile.setAttribute("classes", headerReply.toString());
                	definitionFile.setAttribute("classes", definitionReply.toString());
                }

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
        StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("IDL", DefaultTemplateLexer.class, baseTemplateGroup);

        if(idlTemplates != null)
        {
            idlFilename = idlFile;
            StringTemplate theFile = idlTemplates.getInstanceOf("idlFile");
            theFile.setAttribute("interfaceName", ifc.getName());
            theFile.setAttribute("file", idlFilename);

            StringTemplate request = idlTemplates.getInstanceOf("request");
            StringTemplate reply = idlTemplates.getInstanceOf("reply");

            if(externalDirLength > 0)
            {
                externalDir.append("/");	
            }

            Operation op = null;

            for(ListIterator iter = ifc.getOperations().listIterator(); iter.hasNext(); )
            {						
                op = (Operation) iter.next();

                request.setAttribute("interfaceName", ifc.getName());
                request.setAttribute("funName", op.getName());
                reply.setAttribute("interfaceName", ifc.getName());
                reply.setAttribute("funName", op.getName());

                setRequestReplyParams(request, reply, op, "params", ifc);
                
                if(!"void".equals(op.getReturnType().getTypeName()))
                {
                    reply.setAttribute("return", op.getReturnType());
                }
                
                theFile.setAttribute("types", request.toString());
                // if it is not a oneway function
                if(!op.isOneway())
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
                    ddsGen(externalDir.toString());
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
    	StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("VS2010", DefaultTemplateLexer.class, spTemplateGroup);

    	if(idlTemplates != null)
    	{
    		StringTemplate solution = idlTemplates.getInstanceOf("solution");
    		StringTemplate projectClient = idlTemplates.getInstanceOf("project");
    		StringTemplate projectServer = idlTemplates.getInstanceOf("project");
    		StringTemplate projectFilesClient = idlTemplates.getInstanceOf("projectFiles");
    		StringTemplate projectFilesServer = idlTemplates.getInstanceOf("projectFiles");

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
    		projectServer.setAttribute("interfaceName", ifc.getName());
    		projectServer.setAttribute("guid", serverGuid);
    		projectServer.setAttribute("name",stringBuf.toString());
    		projectServer.setAttribute("example", exampleOption);
    		projectServer.setAttribute("arch", arch);
    		projectFilesServer.setAttribute("interfaceName", ifc.getName());

    		stringBuf.delete(ifc.getName().length(), stringBuf.length());
    		stringBuf.append("Client");
    		String clientGuid = GUIDGenerator.genGUID(stringBuf.toString());
    		solution.setAttribute("projects.{name, guid, dependsOn}", stringBuf.toString(),clientGuid, serverGuid);
    		projectClient.setAttribute("interfaceName", ifc.getName());
    		projectClient.setAttribute("guid", clientGuid);
    		projectClient.setAttribute("name",stringBuf.toString());
    		projectClient.setAttribute("example", exampleOption);
    		projectClient.setAttribute("arch", arch);
    		projectClient.setAttribute("client", "client");
    		projectFilesClient.setAttribute("interfaceName", ifc.getName());
    		projectFilesClient.setAttribute("client", "client");

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
    				if(writeFile(externalDir.toString(), projectServer) == 0)
    				{
    					externalDir.delete(externalDirLength, externalDir.length());
    					
    					if(externalDirLength > 0)
    					{
    						externalDir.append("/");
    					}
    					externalDir.append(ifc.getName()).append("Client-vs2010.vcxproj.filters");
    	    			if(writeFile(externalDir.toString(), projectFilesClient) == 0)
    	    			{
    	    				externalDir.delete(externalDirLength, externalDir.length());
        					
        					if(externalDirLength > 0)
        					{
        						externalDir.append("/");
        					}
        					externalDir.append(ifc.getName()).append("Server-vs2010.vcxproj.filters");
    	    				returnedValue = writeFile(externalDir.toString(), projectFilesServer);
    	    				externalDir.delete(externalDirLength, externalDir.length());
    	    			}
    				}
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
    	
    	StringTemplateGroup idlTemplates = StringTemplateGroup.loadGroup("makefile", DefaultTemplateLexer.class, spTemplateGroup);

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
        
        System.out.println("RPCDDSGEN Version " + version + ":  Reading from file " + file + " . . .");
        try
        {
            parser = new IDLParser(new java.io.FileInputStream(file));
        } catch (java.io.FileNotFoundException e)
        {
            System.out.println("IDL Parser Version 0.1:  File " + file + " not found.");
        }

        try 
        {
            ASTStart n = parser.Start();
            CplusplusVisitor visitor = new CplusplusVisitor(middleware);
            root = (Module)n.jjtAccept(visitor, null);
            System.out.println(file + " Parsing Complete.");
        }
        catch (Exception e) {
            System.out.println("Parser Error: " + e.getMessage());
        }
        catch (Error e)
        {
            System.out.println("Parser Error: " + e.getMessage());
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
            	if(count < args.length)
            	{
            		osOption = args[count++];

            		if(!osOption.equals("Win32") &&
            				!osOption.equals("Linux"))
            		{
            			System.out.println("ERROR: Unknown OS " + osOption);
            			return false;
            		}
            	}
            	else
            		return false;
            }
            else if(arg.equals("-example"))
            {
            	if(count < args.length)
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
            	else
            		return false;
            }
            else if(arg.equals("-language"))
            {
            	if(count < args.length)
            	{
            		languageOption = args[count++];

            		if(!languageOption.equals("C++") && !languageOption.equals("c++"))
            		{
            			System.out.println("ERROR: Unknown language " +  languageOption);
            			return false;
            		}
            	}
            	else
            		return false;
            }
            else if(arg.equals("-ppPath"))
            {
            	if(count < args.length)
            		ppPath = args[count++];
            	else
            		return false;
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
            	if(count < args.length)
            	{
            		externalDir = new StringBuffer(args[count++]);
            		externalDirLength = externalDir.length();
            	}
            	else
            		return false;
            }
            else if(arg.equals("-middleware"))
            {
            	if(count < args.length)
            	{
            		middleware = args[count++];
            	}
            	else
            		return false;
            }
            else if(arg.equals("-t"))
            {
            	if(count < args.length)
            	{
            		tempDir = args[count++];
            	}
            	else
            		return false;
            }
            else if(arg.equals("-version"))
            {
            	System.out.println("RPCDDSGEN Version " + version);
            	System.exit(0);
            }
            else if(arg.equals("-help"))
            {
            	return false;
            }
            // Get include directories
            else if(arg.equals("-I"))
            {
            	if(count < args.length)
            	{
            		includePaths.add(new String(arg + args[count++]));
            	}
            	else
            		return false;
            }
            else if(arg.startsWith("-I"))
            {
            	includePaths.add(arg);
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
    	String rti_help =  "   -ppPath <path\\><program> : C/C++ Preprocessor path.(Default is cl.exe)\n" +
                      "   -ppDisable               : Do not use C/C++ preprocessor.\n";
    	String opendds_help = "   -t <temp dir>: Use the specific directory as temporary directory.\n";
    	
        System.out.print("rpcddsgen help:\n\nUsage: rpcddsgen [options] <IDL file>\nOptions:\n" +
        		"   -help: Show help\n" +
                "   -example <platform>: Generate solution for specific platform (example: x64Win64VS2010)\n" +
        		"                        Platforms supported:\n" +
                "                         * i86Win32VS2010\n" +
                "                         * x64Win64VS2010\n" +
                "                         * i86Linux2.6gcc4.4.3\n" +
                "                         * x64Linux2.6gcc4.5.1\n" +
        //        "   -language <C++>: Programming language (default: C++).\n" +
                "   -replace: replace generated files.\n" +
                (middleware.equals("rti") ? rti_help : opendds_help));
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
    boolean m_check_failures;
    boolean m_found_error = false;

    ProcessOutput(InputStream is, String type, boolean check_failures)
    {
        this.is = is;
        this.type = type;
        m_check_failures = check_failures;
    }

    public void run()
    {
        try
        {
            InputStreamReader isr = new InputStreamReader(is);
            BufferedReader br = new BufferedReader(isr);
            String line=null;
            while ( (line = br.readLine()) != null)
            {
                System.out.println(line);
                
                if(m_check_failures)
                {
                	if(line.startsWith("Done (failures)"))
                	{
                		m_found_error = true;
                	}
                }
            }
        }
        catch (IOException ioe)
        {
            ioe.printStackTrace();  
        }
    }
    
    boolean getFoundError()
    {
    	return m_found_error;
    }
}
