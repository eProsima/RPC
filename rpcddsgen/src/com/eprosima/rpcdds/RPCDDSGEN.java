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
package com.eprosima.rpcdds;

import com.eprosima.rpcdds.exceptions.BadArgumentException;
import com.eprosima.rpcdds.idl.grammar.Context;
import com.eprosima.rpcdds.idl.grammar.IDLLexer;
import com.eprosima.rpcdds.idl.grammar.IDLParser;
import com.eprosima.rpcdds.templates.TemplateGroup;
import com.eprosima.rpcdds.templates.TemplateManager;
import com.eprosima.rpcdds.util.Utils;
import com.eprosima.rpcdds.util.VSConfiguration;
import com.eprosima.rpcdds.util.GUIDGenerator;

import java.io.*;
import java.util.ArrayList;
import java.util.Vector;

import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;



// TO_DO: string constants...
public class RPCDDSGEN
{
    private static ArrayList<String> m_platforms = null;
    private static String m_middleware = "rti";
    
    // TODO Quitar los sistemas operativos. Cutre.
    private String m_osOption = "Win32";
    private boolean m_servercode = true;
    private boolean m_clientcode = true;
    private String m_exampleOption = null;
    private String m_languageOption = "C++";
    private boolean m_ppDisable = false;
    private boolean m_replace = false;
    private String m_ppPath = null;
    
    private final String m_defaultOutputDir = "." + File.separator;
    private String m_outputDir = m_defaultOutputDir;
    private String m_tempDir = null;
    // Array list of strings. Include paths
    private ArrayList m_includePaths = new ArrayList();
    private Vector<String> m_idlFiles;
    private String m_command = null;
    private String m_extra_command = null;
    private ArrayList m_lineCommand = null;
    private ArrayList m_lineCommandForWorkDirSet = null;
    private String[] m_env_variables = null;	
    private String m_spTemplate = "main";
    // Location of the MessageHeader.idl file
    private String messageHeaderFileName = "MessageHeader.idl";
    private String messageHeaderFileLocation = null;

    //TO_DO: external properties?
    private static VSConfiguration m_vsconfigurations[]={new VSConfiguration("Debug DLL", "Win32", true, true),
        new VSConfiguration("Release DLL", "Win32", false, true),
        new VSConfiguration("Debug", "Win32", true, false),
        new VSConfiguration("Release", "Win32", false, false)};
    
    public RPCDDSGEN(String[] args) throws BadArgumentException
    {
        int count = 0;
        String arg;
        
        m_idlFiles = new Vector<String>();

        while(count < args.length)
        {
            arg = args[count++];

            if(!arg.startsWith("-"))
            {
                m_idlFiles.add(arg);
            }
            else if(arg.equals("-os"))
            {
                if(count < args.length)
                {
                    m_osOption = args[count++];

                    if(!m_osOption.equals("Win32") &&
                            !m_osOption.equals("Linux"))
                    {
                        throw new BadArgumentException("Unknown OS " + m_osOption);
                    }
                }
                else
                    throw new BadArgumentException("No operating system after -os argument");
            }
            else if(arg.equals("-example"))
            {
                if(count < args.length)
                {
                    m_exampleOption = args[count++];

                    if(!m_platforms.contains(m_exampleOption))
                    {
                        throw new BadArgumentException("Unknown example arch " + m_exampleOption);
                    }
                }
                else
                    throw new BadArgumentException("No architecture after -example argument");
            }
            else if(arg.equals("-language"))
            {
                if(count < args.length)
                {
                    m_languageOption = args[count++];

                    if(!m_languageOption.equals("C++") && !m_languageOption.equals("c++"))
                    {
                        throw new BadArgumentException("Unknown language " +  m_languageOption);
                    }
                }
                else
                    throw new BadArgumentException("No language after -language argument");
            }
            else if(arg.equals("-ppPath"))
            {
                if(count < args.length)
                    m_ppPath = args[count++];
                else
                    throw new BadArgumentException("No URL after -ppPath argument");
            }
            else if(arg.equalsIgnoreCase("-ppDisable"))
            {
                m_ppDisable = true;
            }
            else if(arg.equalsIgnoreCase("-replace"))
            {
                m_replace = true;
            }
            else if(arg.equals("-d"))
            {
                if(count < args.length)
                {
                    m_outputDir = Utils.addFileSeparator(args[count++]);
                }
                else
                    throw new BadArgumentException("No URL after -d argument");
            }
            else if(arg.equals("-middleware"))
            {
                if(count < args.length)
                {
                    m_middleware = args[count++];
                }
                else
                    throw new BadArgumentException("No middleware after -middleware argument");
            }
            else if(arg.equals("-t"))
            {
                if(count < args.length)
                {
                    m_tempDir = args[count++];
                }
                else
                    throw new BadArgumentException("No URL after -t argument");
            }
            else if(arg.equals("-version"))
            {
                showVersion();
                System.exit(0);
            }
            else if(arg.equals("-help"))
            {
                printHelp();
                System.exit(0);
            }
            // Get include directories
            else if(arg.equals("-I"))
            {
                if(count < args.length)
                {
                    m_includePaths.add(new String(arg + args[count++]));
                }
                else
                    throw new BadArgumentException("No URL after -I argument");
            }
            else if(arg.startsWith("-I"))
            {
                m_includePaths.add(arg);
            }
            else if(arg.equals("--server"))
            {
                m_servercode = false;
            }
            else if(arg.equals("--client"))
            {
                m_clientcode = false;
            }
            else
            {
                throw new BadArgumentException("Unknown argument " + arg);
            }
        }

        if(m_idlFiles.isEmpty())
        {
            throw new BadArgumentException("The program expects an IDL file");
        }
    }
    
    public static boolean loadPlatforms()
    {
        boolean returnedValue = false;
        
        RPCDDSGEN.m_platforms = new ArrayList<String>();
        
        try
        {
            InputStream input = RPCDDSGEN.class.getResourceAsStream("/platforms");
            InputStreamReader ir = new InputStreamReader(input);
            BufferedReader reader = new BufferedReader(ir);
            String line = null;
            while((line = reader.readLine()) != null)
            {
                RPCDDSGEN.m_platforms.add(line);
            }
            
            returnedValue = true;
        }
        catch(Exception ex)
        {
            System.out.println("ERROR: Getting platforms. " + ex.getMessage());
        }
        
        return returnedValue;
    }
    
    public void showVersion()
    {
        try
        {
            InputStream input = this.getClass().getResourceAsStream("/rpcdds_version.h");
            byte[] b = new byte[input.available()];
            input.read(b);
            String text = new String(b);
            int beginindex = text.indexOf("\"");
            int endindex = text.indexOf("\"", beginindex + 1);
            String version = text.substring(beginindex + 1, endindex);
            System.out.println("rpcddsgen version " + version);
        }
        catch(Exception ex)
        {
            System.out.println("ERROR: Getting version. " + ex.getMessage());
        }
    }
    
    public boolean execute()
    {
        boolean returnedValue = ddsGenGlobalInit();
        
        for(int count = 0; returnedValue && (count < m_idlFiles.size()); ++count)
        {
            returnedValue &= process(m_idlFiles.get(count));
        }
        
        // Gen solution.
        if(m_exampleOption != null)
        {
            if((returnedValue = genSolution()) == false)
                System.out.println("ERROR: While the solution was being generated");
        }
        
        return returnedValue;
    }
    
    private boolean process(String idlFilename)
    {
        boolean returnedValue = false;
        System.out.println("Processing the file " + idlFilename + " ...");
        
        ArrayList idlLineCommand = new ArrayList(), idlLineCommandForWorkDirSet = new ArrayList();
        
        if(ddsGenInit(idlFilename, idlLineCommand, idlLineCommandForWorkDirSet))
        {
            try
            {
                // First step is to parse the file MessageHeader.idl
                ddsGen(messageHeaderFileLocation, idlLineCommand, idlLineCommandForWorkDirSet, true, false);
                // Second step is to parse the user IDL file.
                ddsGen(idlFilename, idlLineCommand, idlLineCommandForWorkDirSet, true, false);
                
                // Parsing and generating code with templates.
                if(parseIDL(idlFilename))
                {
                    // Parse the requestreply IDL file that was generated.
                    ddsGen(Utils.getIDLFileNameOnly(idlFilename) + "RequestReply.idl", idlLineCommand, idlLineCommandForWorkDirSet,
                            false, (m_outputDir.equals(m_defaultOutputDir) ? false : true));
                    returnedValue = true;
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
        
        return returnedValue;
    }
    
    private boolean parseIDL(String idlFilename)
    {
        boolean returnedValue = false;
        
        String onlyFileName = Utils.getIDLFileNameOnly(idlFilename);
        
        // Create initial context.
        Context ctx = new Context(onlyFileName);
        
        // Create template manager
        TemplateManager tmanager = new TemplateManager("com/eprosima/rpcdds/idl/templates");
        // Load template to generate IDL for topics.
        tmanager.addGroup("TopicsIDL");
        // Load template to generate Utils for topics.
        tmanager.addGroup("UtilsHeader");
        tmanager.addGroup("UtilsSource");
        // Load template to generate Proxy for topics.
        tmanager.addGroup("ProxyHeader");
        tmanager.addGroup("ProxySource");
        // Load template to generate example to use Proxies.
        tmanager.addGroup("ClientExample");
        // Load template to generate proxy RPC support files.
        tmanager.addGroup("ClientRPCSupportHeader");
        tmanager.addGroup("ClientRPCSupportSource");
        // Load template to generate proxy async support files.
        tmanager.addGroup("AsyncSupportHeader");
        tmanager.addGroup("AsyncSupportSource");
        // Load template to generate Server for topics.
        tmanager.addGroup("ServerHeader");
        tmanager.addGroup("ServerSource");
        // Load template to generate example to use Servers.
        tmanager.addGroup("ServerExample");
        // Load template to generate server RPC support files.
        tmanager.addGroup("ServerRPCSupportHeader");
        tmanager.addGroup("ServerRPCSupportSource");
        // Load template to generate server user implementations.
        tmanager.addGroup("ServerImplHeader");
        tmanager.addGroup("ServerImplSource");
        
        // Create main template for all templates.
        TemplateGroup maintemplates = tmanager.createTemplateGroup("main");
        maintemplates.setAttribute("ctx", ctx);
        
        try
        {
            InputStream input = new FileInputStream(idlFilename);
            IDLLexer lexer = new IDLLexer(input);
            IDLParser parser = new IDLParser(lexer);
            // Pass the filename without the extension.
            returnedValue = parser.specification(ctx, tmanager, maintemplates);
        }
        catch(FileNotFoundException ex)
        {
            System.out.println("ERROR<FileNotFoundException>: The file " + idlFilename + "was not found.");
        }
        catch(Exception ex)
        {
            System.out.println("ERROR<Exception>: " + ex.getMessage());
        }
        
        // Zone used to write all files using the generated string templates.
        
        if(returnedValue)
        {
            System.out.println("Generating Utils Code...");
            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "RequestReply.idl", maintemplates.getTemplate("TopicsIDL"), m_replace))
            {
                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "RequestReplyUtils.h", maintemplates.getTemplate("UtilsHeader"), m_replace))
                {
                    returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "RequestReplyUtils.cxx", maintemplates.getTemplate("UtilsSource"), m_replace);
                }
            }
        }
        
        if(returnedValue && m_clientcode)
        {
            System.out.println("Generating Proxy Code...");
            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.h", maintemplates.getTemplate("ProxyHeader"), m_replace))
            {
                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.cxx", maintemplates.getTemplate("ProxySource"), m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ClientRPCSupport.h", maintemplates.getTemplate("ClientRPCSupportHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ClientRPCSupport.cxx", maintemplates.getTemplate("ClientRPCSupportSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.h", maintemplates.getTemplate("AsyncSupportHeader"), m_replace))
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.cxx", maintemplates.getTemplate("AsyncSupportSource"), m_replace))
                                {
                                    if(m_exampleOption != null)
                                        returnedValue = Utils.writeFile(m_outputDir + "Client.cxx", maintemplates.getTemplate("ClientExample"), m_replace);
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(returnedValue && m_servercode)
        {
            System.out.println("Generating Server Code...");
            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.h", maintemplates.getTemplate("ServerHeader"), m_replace))
            {
                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.cxx", maintemplates.getTemplate("ServerSource"), m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerRPCSupport.h", maintemplates.getTemplate("ServerRPCSupportHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerRPCSupport.cxx", maintemplates.getTemplate("ServerRPCSupportSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImpl.h", maintemplates.getTemplate("ServerImplHeader"), m_replace))
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImpl.cxx", maintemplates.getTemplate("ServerImplSource"), m_replace))
                                {
                                    returnedValue = Utils.writeFile(m_outputDir + "Server.cxx", maintemplates.getTemplate("ServerExample"), m_replace);
                                }
                            }
                        }
                    }
                }
            }
        }
        
        return returnedValue;
    }
    
    public boolean ddsGenGlobalInit()
    {
        // Set environment variables.
        String envPath = null, envLD = null, envRoot = null, dds_root = null, tao_root = null, rpcdds_root = null;
        
        envPath = System.getProperty("PATH");
        
        if(envPath != null)
        {
            envPath = "PATH=" + envPath;
            
            if(m_osOption.equals("Linux") && (envLD = System.getProperty("LD_LIBRARY_PATH")) != null)
            {
                envLD = "LD_LIBRARY_PATH=" + envLD;
            }
            
            if(m_middleware.equals("rti"))
            {
                dds_root = System.getProperty("NDDSHOME");
                
                if(dds_root == null || dds_root.equals(""))
                {
                    System.out.println("ERROR: Cannot find the environment variable NDDSHOME.");
                    System.out.println("Note: NDDSHOME environment variable is not set in your system.");
                    System.out.println("      rpcddsgen uses this environment variable to find the RTI DDS middleware.");
                    System.out.println("      This environment variable is used by the generated solutions too.");
                    System.out.println("      See the User Manual document.");
                    return false;
                }
            }
            else if(m_middleware.equals("opendds"))
            {
                dds_root = System.getProperty("DDS_ROOT");
                
                if(dds_root != null && !dds_root.equals(""))
                    envRoot = "DDS_ROOT=" + dds_root;
                else
                {
                    System.out.println("ERROR: Cannot find the environment variable DDS_ROOT.");
                    System.out.println("Note: DDS_ROOT environment variable is not set in your system.");
                    System.out.println("      rpcddsgen uses this environment variable to find the OpenDDS middleware.");
                    System.out.println("      This environment variable is used by the generated solutions too.");
                    System.out.println("      See the User Manual document.");
                    return false;
                }
                
                tao_root = System.getProperty("TAO_ROOT");
            }
            
            rpcdds_root = System.getProperty("RPCDDSHOME");
            
            if(rpcdds_root == null || rpcdds_root.equals(""))
            {
                System.out.println("ERROR: Cannot find the environment variable RPCDDSHOME.");
                System.out.println("Note: RPCDDSHOME environment variable is not set in your system.");
                System.out.println("      rpcddsgen uses this environment variable to find its own resources.");
                System.out.println("      See the User Manual document.");
                return false;
            }
            
            // Create final structure that stores the environment variables.
            m_env_variables = new String[1 + (envLD != null ? 1 : 0) +
                                       (envRoot != null ? 1 : 0)];
            int count = 0;
            m_env_variables[count++] = envPath;
            
            if(envLD != null)
                m_env_variables[count++] = envLD;
            
            if(envRoot != null)
                m_env_variables[count++] = envRoot;
        }
        else
        {
            System.out.println("ERROR: Cannot find the environment variable PATH.");
            return false;
        }
        
     // Set line command.
        m_lineCommand = new ArrayList();
        // Only needed by opendds in the case of using open_idl with the generated file <Interface>RequestReply.idl
        m_lineCommandForWorkDirSet = new ArrayList();
        
        if(m_middleware.equals("rti"))
        {
            // Directory $NDDSHOME/scripts/rtiddsgen.bat
            m_command = dds_root + File.separator + "scripts" + File.separator + "rtiddsgen.bat";
            
            // Add that creates file in the current directory.
            
            if(m_languageOption != null)
            {
                m_lineCommand.add("-language");
                m_lineCommand.add(m_languageOption);
                m_lineCommandForWorkDirSet.add("-language");
                m_lineCommandForWorkDirSet.add(m_languageOption);
            }

            if(m_ppDisable == true)
            {
                m_lineCommand.add("-ppDisable");
                m_lineCommandForWorkDirSet.add("-ppDisable");
            }
            else
            {
                if(m_ppPath != null)
                {

                    m_lineCommand.add("-ppPath");
                    m_lineCommand.add(m_ppPath);
                    m_lineCommandForWorkDirSet.add("-ppPath");
                    m_lineCommandForWorkDirSet.add(m_ppPath);
                }
            }

            if(m_replace == true)
            {
                m_lineCommand.add("-replace");
                m_lineCommandForWorkDirSet.add("-replace");
            }

            // Set the output directory to rtiddsgen.
            m_lineCommand.add("-d");
            m_lineCommand.add(m_outputDir);
            
            // Set to create namespaces
            m_lineCommand.add("-namespace");
            m_lineCommandForWorkDirSet.add("-namespace");
        }
        else if(m_middleware.equals("opendds"))
        {       
            if(m_osOption.equals("Win32"))
            {
                m_command = "opendds_idl.exe";
                m_extra_command = "tao_idl.exe";
            }
            else if(m_osOption.equals("Linux"))
            {
                m_command = "opendds_idl";
                m_extra_command = "tao_idl";
            }
            m_spTemplate = "opendds";
            
            m_lineCommand.add("-I" + dds_root);
            m_lineCommand.add("-I" + tao_root);
            m_lineCommandForWorkDirSet.add("-I" + dds_root);
            m_lineCommandForWorkDirSet.add("-I" + tao_root);
            
            // Add temporary directory.
            if(m_tempDir != null)
            {
                m_lineCommand.add("-t");
                m_lineCommand.add(m_tempDir);
                m_lineCommandForWorkDirSet.add("-t");
                m_lineCommandForWorkDirSet.add(m_tempDir);
            }
            
            // Set the output directory to opendds.
            m_lineCommand.add("-o");
            m_lineCommand.add(m_outputDir);
            m_lineCommand.add("-I"+ m_outputDir);
        }
        
        // TODO No usar RPCDDSHOME sino que a través del directorio del script sacar el del IDL.
        m_lineCommand.add("-I" + rpcdds_root + File.separator + "idl");
        
        // Set the location of file MessageHeader.idl
        messageHeaderFileLocation = rpcdds_root + File.separator + "idl" + File.separator + messageHeaderFileName;
        
        return true;
    }
    
    // TODO Lo genérico sacarlo a una function que se ejecute solo una vez.
    public boolean ddsGenInit(String idlFilename, ArrayList idlLineCommand, ArrayList idlLineCommandForWorkDirSet)
    {    
        // Fill the arrays with global command line.
        idlLineCommand.addAll(m_lineCommand);
        idlLineCommandForWorkDirSet.addAll(m_lineCommandForWorkDirSet);
        
        // Get only de IDL file directory.
        String idlFileLocation = Utils.getIDLFileDirectoryOnly(idlFilename);
        
        if(idlFileLocation != null)
        {
            idlLineCommand.add("-I" + idlFileLocation);
        	// Get the canonical path from idl file.
        	String canon;
        	try
        	{
        		canon = new File(idlFileLocation).getCanonicalPath();
        	}
        	catch(Exception ex)
        	{
        		System.out.println("ERROR: Cannot get the canonical path of the idl file.");
        		return false;
        	}
        	idlLineCommandForWorkDirSet.add("-I"+canon);
        }
        
        // Add the include paths given as parameters.
        for(int i = 0; i < m_includePaths.size(); ++i)
        {
            idlLineCommand.add(m_includePaths.get(i));
            idlLineCommandForWorkDirSet.add(m_includePaths.get(i));
        }
    	
    	return true;
    }
    // Need to use envp to pass a Path environment variable pointing to $NDDSHOME/scripts
    // if $NDDSHOME contains spaces the exec(String) or exec(String[])methods DO NOT WORK in Windows
    // even using the well known solution of using double quotes
    // May be a problem with the Java Version deployed with RTI DDS.
    public void ddsGen(String file, ArrayList idlLineCommand, ArrayList idlLineCommandForWorkDirSet,
            boolean disableGenerateTypeSupport, boolean setWorkingDirectory) throws Exception
    {
    	int count = 0;
        ArrayList finalCommandLine = null;
        String[] finalCommandArray = null;
        			
        System.out.println("External tool process" + file + " ...");
        
        // Execute tao_idl
        if(m_middleware.equals("opendds") && m_extra_command != null)
        {
        	 finalCommandLine = new ArrayList();
             finalCommandLine.add(m_extra_command);
             finalCommandLine.add("-SS");
             finalCommandLine.add("-Sa");
             finalCommandLine.addAll(idlLineCommand);
             finalCommandLine.add(file);
             finalCommandArray = new String[finalCommandLine.size()];
             finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
             
             Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray, m_env_variables);
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
        finalCommandLine.add(m_command);
        if(disableGenerateTypeSupport && m_middleware.equals("opendds"))
        	finalCommandLine.add("-SI");
        if(!setWorkingDirectory)
        {
        	finalCommandLine.addAll(idlLineCommand);
        	finalCommandLine.add(file);
        }
        else
        {
        	finalCommandLine.addAll(idlLineCommandForWorkDirSet);
        	// TODO Revisar funcionamiento con OpenDDS
        	//finalCommandLine.add(file.substring(externalDir.length() + 1));
        	finalCommandLine.add(Utils.getIDLFileOnly(file));
        }
        finalCommandArray = new String[finalCommandLine.size()];
        finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
        
        Process ddsgen;     
        if(!setWorkingDirectory)
        	ddsgen = Runtime.getRuntime().exec(finalCommandArray, m_env_variables);
        else
        	ddsgen = Runtime.getRuntime().exec(finalCommandArray, m_env_variables, new File(m_outputDir));
        ProcessOutput errorOutput = new ProcessOutput(ddsgen.getErrorStream(), "ERROR", m_middleware.equals("rti"));
        ProcessOutput normalOutput = new ProcessOutput(ddsgen.getInputStream(), "OUTPUT", m_middleware.equals("rti"));
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
        if(!disableGenerateTypeSupport && m_middleware.equals("opendds") && m_extra_command != null)
        {
        	 // Get only de name of the fichero.
	        	int lastBarraOccurrency = file.lastIndexOf('/');
	        	String onlyFileNameAux = null;
	            
	    		if(lastBarraOccurrency == -1)
	    		{
	    			if(m_osOption.equals("Win32"))
	    			{
	    				lastBarraOccurrency = file.lastIndexOf('\\');
	    			}
	    		}
	    		
	    		if(lastBarraOccurrency == -1)
	    		{
	    			onlyFileNameAux = file;
	    		}
	    		else
	    		{
	    			onlyFileNameAux = file.substring(lastBarraOccurrency + 1);
	    		}
	    		
	    		onlyFileNameAux = m_outputDir + onlyFileNameAux;
    		
        	 finalCommandLine = new ArrayList();
             finalCommandLine.add(m_extra_command);
             finalCommandLine.add("-SS");
             finalCommandLine.add("-Sa");
             finalCommandLine.addAll(idlLineCommand);
             finalCommandLine.add(onlyFileNameAux.subSequence(0, onlyFileNameAux.length() - 4) + "TypeSupport.idl");
             finalCommandArray = new String[finalCommandLine.size()];
             finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);
             
             Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray, m_env_variables);
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
    
    /* TODO Quitar funciones.
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
    }*/
    
    private boolean genSolution()
    {
        final String METHOD_NAME = "genSolution";
        boolean returnedValue = true;

        if(m_exampleOption != null)
        {
            System.out.println("Generating solution for arch " + m_exampleOption  + "...");
            
            if(m_exampleOption.substring(3, 6).equals("Win"))
            {
                System.out.println("Genering VS2010 solution");
                
                if(m_exampleOption.startsWith("i86"))
                {
                    returnedValue = genVS2010(null);
                }
                else if(m_exampleOption.startsWith("x64"))
                {
                    for(int index = 0; index < m_vsconfigurations.length; index++)
                    {
                        m_vsconfigurations[index].setPlatform("x64");
                    }
                    
                    returnedValue = genVS2010("64");
                }
                else
                    returnedValue = false;

            }
            /*else if(m_exampleOption.substring(3, 8).equals("Linux"))
            {        
                System.out.println("Genering makefile solution");

                if(m_exampleOption.startsWith("i86"))
                {
                    returnedValue = genMakefile("32");
                }
                else if(m_exampleOption.startsWith("x64"))
                {
                    returnedValue = genMakefile("64");
                }
                else
                    returnedValue = false;
            }*/
        }

        return returnedValue;
    }
    
    private boolean genVS2010(String arch)
    {
        final String METHOD_NAME = "genVS2010";
        boolean returnedValue = false;
        String idlFilename = null, guid = null;
        
        // first load main language template
        // TODO Change depending RTI or OpenDDS.
        StringTemplateGroup middlgr = StringTemplateGroup.loadGroup("rti", DefaultTemplateLexer.class, null);
        StringTemplateGroup vsTemplates = StringTemplateGroup.loadGroup("VS2010", DefaultTemplateLexer.class, middlgr);

        if(vsTemplates != null)
        {
            StringTemplate solution = vsTemplates.getInstanceOf("solution");
            StringTemplate projectClient = vsTemplates.getInstanceOf("projectClient");;
            StringTemplate projectFilesClient = vsTemplates.getInstanceOf("projectFilesClient");
            StringTemplate projectServer = vsTemplates.getInstanceOf("projectServer");;
            StringTemplate projectFilesServer = vsTemplates.getInstanceOf("projectFilesServer");
            
            returnedValue = true;
            for(int count = 0; returnedValue && (count < m_idlFiles.size()); ++count)
            {
                idlFilename = Utils.getIDLFileNameOnly(m_idlFiles.get(count));
                guid = GUIDGenerator.genGUID(idlFilename);
                
                solution.setAttribute("projects.{name, guid, dependsOn, example}", idlFilename + "Client", guid, null, m_exampleOption);
                solution.setAttribute("projects.{name, guid, dependsOn, example}", idlFilename + "Server", guid, null, m_exampleOption);
                
                projectClient.setAttribute("guid", guid);
                projectClient.setAttribute("name", idlFilename);
                projectClient.setAttribute("example", m_exampleOption);
                projectClient.setAttribute("arch", arch);
                projectFilesClient.setAttribute("name", idlFilename);
                
                projectServer.setAttribute("guid", guid);
                projectServer.setAttribute("name", idlFilename);
                projectServer.setAttribute("example", m_exampleOption);
                projectServer.setAttribute("arch", arch);
                projectFilesServer.setAttribute("name", idlFilename);
                
                // project configurations   
                for(int index = 0; index < m_vsconfigurations.length; index++){
                    projectClient.setAttribute("configurations", m_vsconfigurations[index]);
                    projectServer.setAttribute("configurations", m_vsconfigurations[index]);
                }
                
                if(returnedValue = Utils.writeFile(m_outputDir + idlFilename +"Client-" + m_exampleOption + ".vcxproj", projectClient, m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + idlFilename +"Client-" + m_exampleOption + ".vcxproj.filters", projectFilesClient, m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + idlFilename +"Server-" + m_exampleOption + ".vcxproj", projectServer, m_replace))
                        {
                            returnedValue = Utils.writeFile(m_outputDir + idlFilename +"Server-" + m_exampleOption + ".vcxproj.filters", projectFilesServer, m_replace);
                        }
                    }
                }
                
                projectClient.reset();
                projectFilesClient.reset();
                projectServer.reset();
                projectFilesServer.reset();
            }
            
            // TODO Nombre del la solucion
            if(returnedValue)
            {
                // project configurations   
                for(int index = 0; index < m_vsconfigurations.length; index++){
                    solution.setAttribute("configurations", m_vsconfigurations[index]);
                }
                
                returnedValue = Utils.writeFile(m_outputDir + idlFilename +"-" + m_exampleOption + ".sln", solution, m_replace);
            }
        }
        else
        {
            System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group VS2010");
        }
        
        return returnedValue;
    }
    /*
    private int genVS2010(Interface ifc, String arch)
    {
    	final String METHOD_NAME = "genVS2010";
    	int returnedValue = -1;
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

    		stringBuf = new StringBuffer(ifc.getName());
    		stringBuf.append("Server");
    		String serverGuid = GUIDGenerator.genGUID(stringBuf.toString());
    		solution.setAttribute("projects.{name, guid, dependsOn, example}", stringBuf.toString(), serverGuid, null, m_exampleOption);
    		projectServer.setAttribute("interfaceName", ifc.getName());
    		projectServer.setAttribute("guid", serverGuid);
    		projectServer.setAttribute("name",stringBuf.toString());
    		projectServer.setAttribute("example", m_exampleOption);
    		projectServer.setAttribute("arch", arch);
    		projectFilesServer.setAttribute("interfaceName", ifc.getName());

    		stringBuf.delete(ifc.getName().length(), stringBuf.length());
    		stringBuf.append("Client");
    		String clientGuid = GUIDGenerator.genGUID(stringBuf.toString());
    		solution.setAttribute("projects.{name, guid, dependsOn, example}", stringBuf.toString(),clientGuid, serverGuid, m_exampleOption);
    		projectClient.setAttribute("interfaceName", ifc.getName());
    		projectClient.setAttribute("guid", clientGuid);
    		projectClient.setAttribute("name",stringBuf.toString());
    		projectClient.setAttribute("example", m_exampleOption);
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
    		externalDir.append(ifc.getName()).append("-" + m_exampleOption + ".sln");
    		if(writeFile(externalDir.toString(), solution) == 0)
    		{
    			externalDir.delete(externalDirLength, externalDir.length());

    			//System.out.println(request.toString());
    			if(externalDirLength > 0)
    			{
    				externalDir.append("/");	
    			}
    			externalDir.append(ifc.getName()).append("Client-" + m_exampleOption + ".vcxproj");
    			if(writeFile(externalDir.toString(), projectClient) == 0)
    			{
    				externalDir.delete(externalDirLength, externalDir.length());

    				if(externalDirLength > 0)
    				{
    					externalDir.append("/");	
    				}
    				externalDir.append(ifc.getName()).append("Server-" + m_exampleOption + ".vcxproj");
    				if(writeFile(externalDir.toString(), projectServer) == 0)
    				{
    					externalDir.delete(externalDirLength, externalDir.length());
    					
    					if(externalDirLength > 0)
    					{
    						externalDir.append("/");
    					}
    					externalDir.append(ifc.getName()).append("Client-" + m_exampleOption + ".vcxproj.filters");
    	    			if(writeFile(externalDir.toString(), projectFilesClient) == 0)
    	    			{
    	    				externalDir.delete(externalDirLength, externalDir.length());
        					
        					if(externalDirLength > 0)
        					{
        						externalDir.append("/");
        					}
        					externalDir.append(ifc.getName()).append("Server-" + m_exampleOption + ".vcxproj.filters");
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
    		makecxx.setAttribute("example", m_exampleOption);
    		makecxx.setAttribute("arch", arch);
    		
    		String extdir = externalDir.toString() + (externalDirLength > 0 ? "/" : "") + "makefile_" + m_exampleOption;
    		System.out.println("Genering makefile " + extdir);
			returnedValue = writeFile(extdir.toString(), makecxx);
    	}
    	else
    	{
    		System.out.println("ERROR<" + METHOD_NAME + ">: Cannot load the template group makecxx");
    	}
    	
    	return returnedValue;
    }*/

    public static void printHelp()
    {
        System.out.println("rpcddsgen usage:");
        System.out.println("\trpcddsgen [options] <IDL file> [<IDL file> ...]");
        System.out.println("\twhere the options are:");
        System.out.println("\t\t-help: Show help");
        System.out.println("\t\t-version: shows the current version of RPCDDS.");
        System.out.println("\t\t--server: disable generation of source code for server.");
        System.out.println("\t\t--client: disable generation of source code for client.");
        System.out.println("\t\t-example <platform>: Generate solution for specific platform (example: x64Win64VS2010)");
        System.out.println("\t\t\tPlatforms supported:");
        for(int count = 0; count < m_platforms.size(); ++count)
            System.out.println("\t\t\t * " + m_platforms.get(count));
        System.out.println("");
        //        "   -language <C++>: Programming language (default: C++).\n" +
        System.out.println("\t\t-replace: replace generated files.");
        System.out.println("\t\t-d <path>: Output directory for generated files.");
        
        if(m_middleware.equals("rti"))
        {
            System.out.println("\t\t-ppPath <path\\><program> : C/C++ Preprocessor path.(Default is cl.exe)");
            System.out.println("\t\t-ppDisable               : Do not use C/C++ preprocessor.");
        }
        else
        {
            System.out.println("\t\t-t <temp dir>: Use the specific directory as temporary directory.");
        }
    }
    
    public static void main(String[] args) throws Exception
    {
        if(loadPlatforms())
        {
            try
            {
                RPCDDSGEN main = new RPCDDSGEN(args);
                main.execute();
                System.exit(0);
            }
            catch(BadArgumentException ex)
            {
                System.out.println("ERROR<BadArgumentException>: " + ex.getMessage());
                printHelp();
            }
        }
        
        System.exit(-1);
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
