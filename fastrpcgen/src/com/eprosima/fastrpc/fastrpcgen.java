package com.eprosima.fastrpc;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Map;
import java.util.Vector;

import org.antlr.stringtemplate.StringTemplate;
import org.antlr.stringtemplate.StringTemplateErrorListener;
import org.antlr.stringtemplate.StringTemplateGroup;
import org.antlr.stringtemplate.StringTemplateGroupLoader;
import org.antlr.stringtemplate.CommonGroupLoader;
import org.antlr.stringtemplate.language.DefaultTemplateLexer;

import com.javadude.antxr.RecognitionException;
import com.javadude.antxr.TokenStreamException;
import com.javadude.antxr.scanner.BasicCrimsonXMLTokenStream;

import com.eprosima.log.ColorMessage;
import com.eprosima.log.Log;
import com.eprosima.idl.parser.grammar.IDLLexer;
import com.eprosima.idl.parser.grammar.IDLParser;
import com.eprosima.idl.parser.exception.ParseException;
import com.eprosima.idl.parser.tree.Interface;
import com.eprosima.idl.parser.typecode.TypeCode;
import com.eprosima.idl.generator.manager.TemplateGroup;
import com.eprosima.idl.generator.manager.TemplateManager;
import com.eprosima.idl.util.Util;

import com.eprosima.fastrpc.exceptions.BadArgumentException;
import com.eprosima.fastrpc.idl.grammar.Context;
import com.eprosima.fastrpc.solution.Project;
import com.eprosima.fastrpc.solution.Solution;
import com.eprosima.fastrpc.util.Utils;
import com.eprosima.fastrpc.util.VSConfiguration;
import com.eprosima.fastrpc.wadl.grammar.WADLParser;
import com.eprosima.fastrpc.wadl.idl.IDLConverter;
import com.eprosima.fastrpc.wadl.idl.IDLConverterException;
import com.eprosima.fastrpc.wadl.tree.Application;



// TO_DO: string constants...
public class fastrpcgen
{
    class TemplateErrorListener implements StringTemplateErrorListener
    {  
        public void error(String arg0, Throwable arg1)
        {
            System.out.println(ColorMessage.error() + arg0);
            arg1.printStackTrace();
        }

        public void warning(String arg0)
        {
            System.out.println(ColorMessage.warning() + arg0);   
        }   
    }

    /// Common options ///
    protected static String m_appName = "fastrpcgen";
    protected static String m_appProduct = "fastrpc";
    protected static String m_localAppProduct = "fastrpc";
    protected static String m_appEnv = "FASTRPCHOME";
    private static ArrayList<String> m_platforms = null;
    private String m_os = null;
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
    //! Add information to use fastrpcgen internally. 
    private boolean m_local = false;
    private boolean m_rpm = false;

    // Use to know the protocol
    public enum PROTOCOL
    {
        DDS,
        REST,
        FASTCDR
    };

    protected static PROTOCOL m_protocol = PROTOCOL.FASTCDR; // Default protocol -> fastcdr


    /// DDS options ///
    private static String m_middleware = "rti";

    // Used to know who types generate in DDS case.
    public enum DDS_TYPES
    {
        EPROSIMA,
        RTI
    };

    private DDS_TYPES m_types = DDS_TYPES.EPROSIMA; // Default our types

    // Used to know who DDS Topics generation mode will be used.
    public enum DDS_TOPIC_MODE
    {
        BY_OPERATION,
        BY_INTERFACE
    }

    private DDS_TOPIC_MODE m_mode = DDS_TOPIC_MODE.BY_INTERFACE; // Default DDS topic creation mode.
    private static final String TOPIC_GENERATION_OPTION = "-topicGeneration";
    private static final String TOPIC_GENERATION_OPTION_VALUE_BY_OPERATION = "byOperation";
    private static final String TOPIC_GENERATION_OPTION_VALUE_BY_INTERFACE = "byInterface";

    private String m_command = null;
    private String m_extra_command = null;
    private ArrayList m_lineCommand = null;
    private ArrayList m_lineCommandForWorkDirSet = null;	
    private String m_spTemplate = "main";
    // Location of the MessageHeader.idl file
    private String m_messageHeaderFileName = "MessageHeader.idl";
    private String m_messageHeaderFileLocation = null;
    // TODO Unused
    private String m_requestreplyIDLLocation = null;

    //TO_DO: external properties?
    private static VSConfiguration m_vsconfigurations[]={new VSConfiguration("Debug DLL", "Win32", true, true),
        new VSConfiguration("Release DLL", "Win32", false, true),
        new VSConfiguration("Debug", "Win32", true, false),
        new VSConfiguration("Release", "Win32", false, false)};

    public fastrpcgen(String[] args) throws BadArgumentException
    {
        int count = 0;
        String arg;

        // Detect OS system
        // Detect OS
        m_os = System.getProperty("os.name");

        m_idlFiles = new Vector<String>();

        while(count < args.length)
        {
            arg = args[count++];

            if(!arg.startsWith("-"))
            {
                m_idlFiles.add(arg);
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
            /* OpenDDS version is obsolet.
               else if(arg.equals("-middleware"))
               {
               if(count < args.length)
               {
               m_middleware = args[count++];
               }
               else
               throw new BadArgumentException("No middleware after -middleware argument");
               }*/
            else if(arg.equals("-t"))
            {
                if(count < args.length)
                {
                    m_tempDir = args[count++];
                }
                else
                    throw new BadArgumentException("No URL after -t argument");
            }
            /* Products splitted.
               else if(arg.equalsIgnoreCase("-protocol"))
               {
               if(count < args.length)
               {
               String protocol = args[count++];

               if(protocol.equalsIgnoreCase("dds"))
               {
               m_protocol = PROTOCOL.DDS;
               }
               else if(protocol.equalsIgnoreCase("rest"))
               {
               m_protocol = PROTOCOL.REST;
               }
               else if(protocol.equalsIgnoreCase("fastcdr"))
               {
               m_protocol = PROTOCOL.FASTCDR;
               }
               else
               throw new BadArgumentException("Unknown protocol " + protocol);
               }
               else
               throw new BadArgumentException("No protocol after -protocol argument");
               }*/
            else if(arg.equalsIgnoreCase("-types") && m_protocol == PROTOCOL.DDS)
            {
                if(count < args.length)
                {
                    String types = args[count++];

                    if(types.equalsIgnoreCase("rti"))
                        m_types = DDS_TYPES.RTI;
                    else if(types.equalsIgnoreCase("c++11"))
                        m_types = DDS_TYPES.EPROSIMA;
                    else
                        throw new BadArgumentException("Unknown value " + types + " for -types option");
                }
                else
                    throw new BadArgumentException("Any value after -types argument");
            }
            else if(arg.equalsIgnoreCase(TOPIC_GENERATION_OPTION) && m_protocol == PROTOCOL.DDS)
            {
                if(count < args.length)
                {
                    String mode = args[count++];

                    if(mode.equalsIgnoreCase(TOPIC_GENERATION_OPTION_VALUE_BY_OPERATION))
                        m_mode = DDS_TOPIC_MODE.BY_OPERATION;
                    else if(mode.equalsIgnoreCase(TOPIC_GENERATION_OPTION_VALUE_BY_INTERFACE))
                        m_mode = DDS_TOPIC_MODE.BY_INTERFACE;
                    else
                        throw new BadArgumentException("Unknown value " + mode + " for " + TOPIC_GENERATION_OPTION + " option");
                }
                else
                    throw new BadArgumentException("Any value after " + TOPIC_GENERATION_OPTION + " argument");
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
            else if(arg.equals("-local"))
            {
                m_local = true;
            }
            else if(arg.equals("-rpm"))
            {
                m_rpm = true;
            }
            else if(arg.equals("-debug"))
            {
                Log.m_level = Log.DEBUG;
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
            /* There are problems with those arguments.
               else if(arg.equals("--server"))
               {
               m_servercode = false;
               }
               else if(arg.equals("--client"))
               {
               m_clientcode = false;
               }*/ 
            else
            {
                throw new BadArgumentException("Unknown argument " + arg);
            }
        }

        if(m_idlFiles.isEmpty())
        {
            throw new BadArgumentException("No input files given");
        }
    }

    public static boolean loadPlatforms()
    {
        boolean returnedValue = false;

        fastrpcgen.m_platforms = new ArrayList<String>();

        try
        {
            InputStream input = fastrpcgen.class.getResourceAsStream("/platforms");
            InputStreamReader ir = new InputStreamReader(input);
            BufferedReader reader = new BufferedReader(ir);
            String line = null;
            while((line = reader.readLine()) != null)
            {
                fastrpcgen.m_platforms.add(line);
            }

            returnedValue = true;
        }
        catch(Exception ex)
        {
            System.out.println(ColorMessage.error() + "Getting platforms. " + ex.getMessage());
        }

        return returnedValue;
    }

    private String getVersion()
    {
        try
        {
            InputStream input = this.getClass().getResourceAsStream("/fastrpc_version.h");
            byte[] b = new byte[input.available()];
            input.read(b);
            String text = new String(b);
            int beginindex = text.indexOf("\"");
            int endindex = text.indexOf("\"", beginindex + 1);
            return text.substring(beginindex + 1, endindex);
        }
        catch(Exception ex)
        {
            System.out.println(ColorMessage.error() + "Getting version. " + ex.getMessage());
        }

        return "";
    }

    private void showVersion()
    {
        String version = getVersion();
        System.out.println("fastrpcgen version " + version);
    }

    public boolean execute()
    {
        // Check the output directory.
        if(!m_outputDir.equals(m_defaultOutputDir))
        {
            File dir = new File(m_outputDir);

            if(!dir.exists())
            {
                System.out.println(ColorMessage.error() + "The output directory doesn't exist");
                return false;
            }
        }

        boolean returnedValue = globalInit();

        if(returnedValue)
        {
            // Create new solution.
            Solution solution = new Solution(m_exampleOption, getVersion(), m_servercode, m_clientcode);

            // Load string templates
            System.out.println("Loading Templates...");     
            StringTemplateGroupLoader loader = new CommonGroupLoader("com/eprosima/fastrpc/idl/templates", new TemplateErrorListener());
            StringTemplateGroup.registerGroupLoader(loader);

            // Load IDL types for stringtemplates
            TypeCode.idltypesgr = StringTemplateGroup.loadGroup("idlTypes", DefaultTemplateLexer.class, null);

            // In local for all products
            if(m_local)
                solution.addInclude("$(EPROSIMADIR)/code");
            solution.addInclude("$(" + m_appEnv + ")/include");
            if(m_exampleOption != null)
                solution.addLibraryPath("$(" + m_appEnv + ")/lib/" + m_exampleOption);

            if(m_protocol == PROTOCOL.DDS)
            {
                // RTI types needs to generate the MessageHeader.idl file.
                if(m_types == DDS_TYPES.RTI)
                {
                    try
                    {
                        // First step is to parse the file MessageHeader.idl
                        ddsGen(m_messageHeaderFileLocation, m_lineCommand, m_lineCommandForWorkDirSet, true, false);

                        // Create a project for MessageHeader.idl
                        Project project = new Project("MessageHeader", m_messageHeaderFileLocation, new HashSet());

                        // Set files generated by rtiddsgen
                        // TODO Set the opendds files.
                        project.addCommonIncludeFile("MessageHeader.h");
                        project.addCommonSrcFile("MessageHeader.cxx");
                        project.addCommonIncludeFile("MessageHeaderPlugin.h");
                        project.addCommonSrcFile("MessageHeaderPlugin.cxx");
                        project.addCommonIncludeFile("MessageHeaderSupport.h");
                        project.addCommonSrcFile("MessageHeaderSupport.cxx");
                        solution.addProject(project);

                        // Load CPP types for stringtemplates.
                        TypeCode.cpptypesgr = StringTemplateGroup.loadGroup("rtiTypes", DefaultTemplateLexer.class, null);
                        TemplateManager.middlgr = StringTemplateGroup.loadGroup("rti", DefaultTemplateLexer.class, null);
                    }
                    catch(Exception ex)
                    {
                        System.out.println(ColorMessage.error() + "Cannot generate MessageHeader.idl");
                        return false;
                    }
                }
                // Our types need to add fastcdr library as dependency.
                else
                {
                    // Load CPP types for stringtemplates.
                    TypeCode.cpptypesgr = StringTemplateGroup.loadGroup("Types", DefaultTemplateLexer.class, null);
                    TemplateManager.middlgr = StringTemplateGroup.loadGroup("eprosima", DefaultTemplateLexer.class, null);

                    if(m_local)
                    {
                        solution.addInclude("$(FASTCDR)/include");
                        solution.addLibraryPath("$(FASTCDR)/lib/$(EPROSIMA_TARGET)");
                    }
                    if(m_exampleOption != null && !m_exampleOption.contains("Win"))
                        solution.addLibrary("fastcdr");
                }

                // Add dds middleware code dependencies
                solution.addInclude("$(NDDSHOME)/include");
                solution.addInclude("$(NDDSHOME)/include/ndds");
                if(m_exampleOption != null)
                    solution.addLibraryPath("$(NDDSHOME)/lib/" + m_exampleOption);
                solution.addLibrary("nddscore");
                solution.addLibrary("nddsc");
                solution.addLibrary("nddscpp");

                if(m_exampleOption != null && m_exampleOption.contains("Win"))
                {
                    solution.addDefine("RTI_WIN32");
                }
                else if(m_exampleOption != null && m_exampleOption.contains("Linux"))
                {
                    solution.addDefine("RTI_LINUX");
                    solution.addDefine("RTI_UNIX");
                }

                // Add product library.
                solution.addLibrary("rpcdds");
            }
            else if(m_protocol == PROTOCOL.REST)
            {
                // Load CPP types for stringtemplates.
                TypeCode.cpptypesgr = StringTemplateGroup.loadGroup("Types", DefaultTemplateLexer.class, null);
                TemplateManager.middlgr = StringTemplateGroup.loadGroup("eprosima", DefaultTemplateLexer.class, null);

                if(m_exampleOption != null && m_exampleOption.contains("Linux"))
                {
                    solution.addLibrary("boost_system");
                    solution.addLibrary("boost_thread");
                }

                // Add product library.
                solution.addLibrary("rpcrest");
            }
            else if(m_protocol == PROTOCOL.FASTCDR)
            {
                // Load CPP types for stringtemplates.
                TypeCode.cpptypesgr = StringTemplateGroup.loadGroup("Types", DefaultTemplateLexer.class, null);
                TemplateManager.middlgr = StringTemplateGroup.loadGroup("eprosima", DefaultTemplateLexer.class, null);

                if(m_exampleOption != null && m_exampleOption.contains("Linux"))
                {
                    solution.addLibrary("boost_system");
                    solution.addLibrary("boost_thread");
                }

                if(m_local)
                {
                    solution.addInclude("$(FASTCDR)/include");
                    solution.addLibraryPath("$(FASTCDR)/lib/$(EPROSIMA_TARGET)");
                }
                if(m_exampleOption != null && !m_exampleOption.contains("Win"))
                    solution.addLibrary("fastcdr");

                // Add product library.
                solution.addLibrary("fastrpc");
            }

            for(int count = 0; returnedValue && (count < m_idlFiles.size()); ++count)
            {
                Project project = process(m_idlFiles.get(count));

                if(project != null)
                    solution.addProject(project);
                else
                    returnedValue = false;
            }

            // Gen solution.
            if(returnedValue && m_exampleOption != null)
            {
                if((returnedValue = genSolution(solution)) == false)
                    System.out.println(ColorMessage.error() + "While the solution was being generated");
            }
        }

        return returnedValue;
    }

    private String toIDL(String wadlFilename) throws IDLConverterException
    {    	
        //if(!Utils.getFileExtension(wadlFilename).equals("wadl"))
        //	return wadlFilename; // Already an IDL file

        System.out.println("Converting WADL file to IDL ...");

        BasicCrimsonXMLTokenStream stream = null;
        try
        {
            stream = new BasicCrimsonXMLTokenStream(new FileReader(wadlFilename),
                    WADLParser.class,
                    true,  // namespace-aware
                    false); // no validation
        }
        catch(Exception ex)
        {
            throw new IDLConverterException(ex.getMessage());
        }

        WADLParser parser = new WADLParser(stream);

        Application application = new Application();

        try
        {
            application = parser.document();
        }
        catch(TokenStreamException ex)
        {
            throw new IDLConverterException(ex.getMessage() + ": " + ex.getCause().getMessage());
        }
        catch(RecognitionException ex)
        {
            throw new IDLConverterException(ex.getMessage() + ": " + ex.getCause().getMessage());
        }

        IDLConverter idlConverter = new IDLConverter(application, wadlFilename, m_outputDir); 

        return idlConverter.toIDL();
    }

    private Project process(String idlFilename)
    {
        Project project = null;
        System.out.println("Processing the file " + idlFilename + " ...");

        try
        {
            // If the selected protocol was REST, then the IDL file is parsed using REST and return.
            if(m_protocol == PROTOCOL.REST) 
            {
                if(Utils.getFileExtension(idlFilename).equals("wadl"))
                {
                    idlFilename = toIDL(idlFilename);
                    return parseIDLtoREST(idlFilename);
                }
                else
                {
                    System.out.println(ColorMessage.error() + idlFilename + " is not a WADL file extension.");
                    return null;
                }
            }
            // If the selected protocol was CDR, then the IDL file is parsed using CDR and return.
            else if(m_protocol == PROTOCOL.FASTCDR)
            {
                return parseIDLtoCDR(idlFilename);
            }
            else if(m_protocol == PROTOCOL.DDS)
            {
                // Arrays used in rti types, to execute rtiddsgen.
                ArrayList idlLineCommand = new ArrayList(), idlLineCommandForWorkDirSet = new ArrayList();

                // In case of rti types, prepare the execution or rtiddsgen.
                if(m_types == DDS_TYPES.RTI && !ddsGenInit(idlFilename, idlLineCommand, idlLineCommandForWorkDirSet))
                    return null;

                // Parsing and generating code with templates.
                if((project = parseIDLtoDDS(idlFilename)) != null)
                {
                    // In case of rti types, execute rtiddsgen on IDLFilename.idl and IDLFilenameRequestReply.idl
                    if(m_types == DDS_TYPES.RTI)
                    {
                        String onlyFileName = Util.getIDLFileNameOnly(idlFilename);

                        // Parse the user IDL file that was generated using external tool.
                        // Note:The file are put in project info inside parseIDL function.
                        ddsGen(m_tempDir + onlyFileName + ".idl", idlLineCommand, idlLineCommandForWorkDirSet,
                                true, (m_outputDir.equals(m_defaultOutputDir) ? false : true));

                        // Set files generated by rtiddsgen
                        // TODO Set the opendds files.
                        project.addCommonIncludeFile(onlyFileName + ".h");
                        project.addCommonSrcFile(onlyFileName + ".cxx");
                        project.addCommonIncludeFile(onlyFileName + "Plugin.h");
                        project.addCommonSrcFile(onlyFileName + "Plugin.cxx");
                        project.addCommonIncludeFile(onlyFileName + "Support.h");
                        project.addCommonSrcFile(onlyFileName + "Support.cxx");

                        if(project.getContainsInterfaces())
                        {
                            // Parse the requestreply IDL file that was generated using external tool.
                            ddsGen(m_tempDir + onlyFileName + "RequestReply.idl", idlLineCommand, idlLineCommandForWorkDirSet,
                                    false, (m_outputDir.equals(m_defaultOutputDir) ? false : true));

                            // Add RTI file to the project info.
                            // TODO Do for Opendds.
                            project.addCommonIncludeFile(onlyFileName + "RequestReply.h");
                            project.addCommonSrcFile(onlyFileName + "RequestReply.cxx");
                            project.addCommonIncludeFile(onlyFileName + "RequestReplyPlugin.h");
                            project.addCommonSrcFile(onlyFileName + "RequestReplyPlugin.cxx");
                            project.addCommonIncludeFile(onlyFileName + "RequestReplySupport.h");
                            project.addCommonSrcFile(onlyFileName + "RequestReplySupport.cxx");
                        }
                    }

                    return project;
                }
            }
        }
        catch (IDLConverterException e)
        {
            System.out.println(ColorMessage.error() + "Cannot convert WADL file to IDL");
            System.out.println(e.getMessage());
        }
        catch(Exception ioe)
        {
            System.out.println(ColorMessage.error() + "Cannot generate the files");
            if(!ioe.getMessage().equals(""))
                System.out.println(ioe.getMessage());
            //ioe.printStackTrace();
        }

        return null;
    }

    private Project parseIDLtoREST(String idlFilename) {

        boolean returnedValue = false;
        String idlParseFileName = idlFilename;
        Project project = null;

        String onlyFileName = Util.getIDLFileNameOnly(idlFilename);

        if(!m_ppDisable)
        {
            idlParseFileName = callPreprocessor(idlFilename);
        }        

        if(idlParseFileName != null)
        {
            // Create initial context.
            Context ctx = new Context(onlyFileName, idlFilename, m_includePaths, m_clientcode, m_servercode,
                    (!m_local ? m_appProduct : m_localAppProduct), m_protocol, m_types);

            // Create template manager
            TemplateManager tmanager = new TemplateManager();
            // Load template to generate source for common types.
            tmanager.addGroup("TypesHeader");
            tmanager.addGroup("TypesSource");
            // Load template to generate the REST protocol.
            tmanager.addGroup("ProtocolHeader");
            tmanager.addGroup("RESTProtocolHeader");
            tmanager.addGroup("RESTProtocolSource");

            tmanager.addGroup("ProxyHeader");
            tmanager.addGroup("ProxySource");
            // Load template to generate example to use Proxies.
            tmanager.addGroup("RESTClientExample");

            // Load template to generate Server for topics.
            tmanager.addGroup("ServerHeader");
            tmanager.addGroup("ServerSource");
            // Load template to generate example to use Servers.
            tmanager.addGroup("RESTServerExample");
            // Load template to generate server user implementations.
            tmanager.addGroup("ServerImplHeader");
            tmanager.addGroup("ServerImplHeaderExample");
            tmanager.addGroup("ServerImplSourceExample");



            // Create main template for all templates.
            TemplateGroup maintemplates = tmanager.createTemplateGroup("main");
            maintemplates.setAttribute("ctx", ctx);	        

            try
            {
                InputStream input = new FileInputStream(idlParseFileName);
                IDLLexer lexer = new IDLLexer(input);
                lexer.setContext(ctx);
                IDLParser parser = new IDLParser(lexer);
                // Pass the filename without the extension.
                returnedValue = parser.specification(ctx, tmanager, maintemplates);
            }
            catch(FileNotFoundException ex)
            {
                System.out.println(ColorMessage.error("FileNotFoundException") + "The file " + idlParseFileName + "was not found.");
            }
            catch(ParseException ex)
            {
                System.out.println(ColorMessage.error("ParseException") + ex.getMessage());
            }
            catch(Exception ex)
            {
                System.out.println(ColorMessage.error("Exception") + ex.getMessage());
            }

            if(returnedValue)
            {
                // Check there were interfaces in the processed IDL file.
                Interface ifc = ctx.getFirstInterface();

                // Create information of project for solution.
                project = new Project(onlyFileName, idlFilename, ctx.getDependencies());

                if(ifc != null)
                {   // Set project as only one library.
                    project.setContainsInterfaces(true);
                }

                // Zone used to write all files using the generated string templates.
                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".h", maintemplates.getTemplate("TypesHeader"), m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".cxx", maintemplates.getTemplate("TypesSource"), m_replace))
                    {
                        project.addCommonIncludeFile(onlyFileName + ".h");
                        project.addCommonSrcFile(onlyFileName + ".cxx");
                    }
                }

                if(returnedValue && ifc != null)
                {
                    System.out.println("Generating Utils Code...");

                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Protocol.h", maintemplates.getTemplate("ProtocolHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "RESTProtocol.h", maintemplates.getTemplate("RESTProtocolHeader"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "RESTProtocol.cxx", maintemplates.getTemplate("RESTProtocolSource"), m_replace))
                            {
                                project.addCommonIncludeFile(onlyFileName + "Protocol.h");
                                project.addCommonIncludeFile(onlyFileName + "RESTProtocol.h");
                                project.addCommonSrcFile(onlyFileName + "RESTProtocol.cxx");
                            }
                        }
                    }         
                }

                if(returnedValue && ifc != null)
                {
                    System.out.println("Generating Proxy Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.h", maintemplates.getTemplate("ProxyHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.cxx", maintemplates.getTemplate("ProxySource"), m_replace))
                        {
                            //if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.h", maintemplates.getTemplate("AsyncSupportHeader"), m_replace))
                            {
                                //if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.cxx", maintemplates.getTemplate("AsyncSupportSource"), m_replace))
                                {
                                    project.addClientIncludeFile(onlyFileName + "Proxy.h");
                                    project.addClientSrcFile(onlyFileName + "Proxy.cxx");;
                                    //project.addClientIncludeFile(onlyFileName + "AsyncSupport.h");
                                    //project.addClientSrcFile(onlyFileName + "AsyncSupport.cxx");

                                    if(m_exampleOption != null)
                                        returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ClientExample.cxx", maintemplates.getTemplate("RESTClientExample"), m_replace);
                                }
                            }
                        }
                    }
                }

                if(returnedValue && ifc != null && m_servercode)
                {
                    System.out.println("Generating Server Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.h", maintemplates.getTemplate("ServerHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.cxx", maintemplates.getTemplate("ServerSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImpl.h", maintemplates.getTemplate("ServerImplHeader"), m_replace))
                            {
                                project.addServerIncludeFile(onlyFileName + "Server.h");
                                project.addServerSrcFile(onlyFileName + "Server.cxx");
                                project.addServerIncludeFile(onlyFileName + "ServerImpl.h");

                                if(m_exampleOption != null)
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.h", maintemplates.getTemplate("ServerImplHeaderExample"), m_replace))
                                    {
                                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.cxx", maintemplates.getTemplate("ServerImplSourceExample"), m_replace))
                                        {
                                            returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerExample.cxx", maintemplates.getTemplate("RESTServerExample"), m_replace);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }

        return project;
    }

    private Project parseIDLtoCDR(String idlFilename)
    {
        boolean returnedValue = false;
        String idlParseFileName = idlFilename;
        Project project = null;

        String onlyFileName = Util.getIDLFileNameOnly(idlFilename);

        if(!m_ppDisable)
        {
            idlParseFileName = callPreprocessor(idlFilename);
        }

        if(idlParseFileName != null)
        {
            // Create initial context.
            Context ctx = new Context(onlyFileName, idlFilename, m_includePaths, m_clientcode, m_servercode,
                    (!m_local ? m_appProduct : m_localAppProduct), m_protocol, m_types);

            // Create template manager
            TemplateManager tmanager = new TemplateManager();
            // Load template to generate source for common types.
            tmanager.addGroup("TypesHeader");
            tmanager.addGroup("TypesSource");
            // Load template to generate the DDS protocol.
            tmanager.addGroup("ProtocolHeader");
            tmanager.addGroup("CDRProtocolHeader");
            tmanager.addGroup("CDRProtocolSource");
            // Load template to generate Proxy for topics.
            tmanager.addGroup("ProxyHeader");
            tmanager.addGroup("ProxySource");
            // Load template to generate example to use Proxies.
            tmanager.addGroup("CDRClientExample");
            // Load template to generate Server for topics.
            tmanager.addGroup("ServerHeader");
            tmanager.addGroup("ServerSource");
            // Load template to generate example to use Servers.
            tmanager.addGroup("CDRServerExample");
            // Load template to generate server user implementations.
            tmanager.addGroup("ServerImplHeader");
            tmanager.addGroup("ServerImplHeaderExample");
            tmanager.addGroup("ServerImplSourceExample");

            // Create main template for all templates.
            TemplateGroup maintemplates = tmanager.createTemplateGroup("main");
            maintemplates.setAttribute("ctx", ctx);

            try
            {
                InputStream input = new FileInputStream(idlParseFileName);
                IDLLexer lexer = new IDLLexer(input);
                lexer.setContext(ctx);
                IDLParser parser = new IDLParser(lexer);
                // Pass the filename without the extension.
                returnedValue = parser.specification(ctx, tmanager, maintemplates);
            }
            catch(FileNotFoundException ex)
            {
                System.out.println(ColorMessage.error("FileNotFoundException") + "The file " + idlParseFileName + "was not found.");
            }
            catch(ParseException ex)
            {
                System.out.println(ColorMessage.error("ParseException") + ex.getMessage());
            }
            catch(Exception ex)
            {
                System.out.println(ColorMessage.error("Exception") + ex.getMessage());
            }

            if(returnedValue)
            {
                // Check there were interfaces in the processed IDL file.
                Interface ifc = ctx.getFirstInterface();

                // Create information of project for solution.
                project = new Project(onlyFileName, idlFilename, ctx.getDependencies());

                if(ifc != null)
                {   // Set project as only one library.
                    project.setContainsInterfaces(true);
                }

                // Zone used to write all files using the generated string templates.
                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".h", maintemplates.getTemplate("TypesHeader"), m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".cxx", maintemplates.getTemplate("TypesSource"), m_replace))
                    {
                        project.addCommonIncludeFile(onlyFileName + ".h");
                        project.addCommonSrcFile(onlyFileName + ".cxx");
                    }
                }

                if(returnedValue && ifc != null)
                {
                    System.out.println("Generating Utils Code...");

                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Protocol.h", maintemplates.getTemplate("ProtocolHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "CDRProtocol.h", maintemplates.getTemplate("CDRProtocolHeader"), m_replace))
                        {
                            returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "CDRProtocol.cxx", maintemplates.getTemplate("CDRProtocolSource"), m_replace);

                            project.addCommonIncludeFile(onlyFileName + "Protocol.h");
                            project.addCommonIncludeFile(onlyFileName + "CDRProtocol.h");
                            project.addCommonSrcFile(onlyFileName + "CDRProtocol.cxx");
                        }
                    }
                }

                if(returnedValue && ifc != null && m_clientcode)
                {
                    System.out.println("Generating Proxy Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.h", maintemplates.getTemplate("ProxyHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.cxx", maintemplates.getTemplate("ProxySource"), m_replace))
                        {
                            //if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.h", maintemplates.getTemplate("AsyncSupportHeader"), m_replace))
                            {
                                //if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncSupport.cxx", maintemplates.getTemplate("AsyncSupportSource"), m_replace))
                                {
                                    project.addClientIncludeFile(onlyFileName + "Proxy.h");
                                    project.addClientSrcFile(onlyFileName + "Proxy.cxx");;
                                    //project.addClientIncludeFile(onlyFileName + "AsyncSupport.h");
                                    //project.addClientSrcFile(onlyFileName + "AsyncSupport.cxx");

                                    if(m_exampleOption != null)
                                        returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ClientExample.cxx", maintemplates.getTemplate("CDRClientExample"), m_replace);
                                }
                            }
                        }
                    }
                }

                if(returnedValue && ifc != null && m_servercode)
                {
                    System.out.println("Generating Server Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.h", maintemplates.getTemplate("ServerHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.cxx", maintemplates.getTemplate("ServerSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImpl.h", maintemplates.getTemplate("ServerImplHeader"), m_replace))
                            {
                                project.addServerIncludeFile(onlyFileName + "Server.h");
                                project.addServerSrcFile(onlyFileName + "Server.cxx");
                                project.addServerIncludeFile(onlyFileName + "ServerImpl.h");

                                if(m_exampleOption != null)
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.h", maintemplates.getTemplate("ServerImplHeaderExample"), m_replace))
                                    {
                                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.cxx", maintemplates.getTemplate("ServerImplSourceExample"), m_replace))
                                        {
                                            returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerExample.cxx", maintemplates.getTemplate("CDRServerExample"), m_replace);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        return returnedValue ? project : null;
    }

    private Project parseIDLtoDDS(String idlFilename)
    {
        boolean returnedValue = false;
        String idlParseFileName = idlFilename;
        Project project = null;

        String onlyFileName = Util.getIDLFileNameOnly(idlFilename);

        if(!m_ppDisable)
        {
            idlParseFileName = callPreprocessor(idlFilename);
        }

        if(idlParseFileName != null)
        {
            // Create initial context.
            Context ctx = new Context(onlyFileName, idlFilename, m_includePaths, m_clientcode, m_servercode,
                    (!m_local ? m_appProduct : m_localAppProduct), m_protocol, m_types);

            // Create template manager
            TemplateManager tmanager = new TemplateManager();
            // Load templates depending on dds types.
            if(m_types == DDS_TYPES.EPROSIMA)
            {
                // Load template to generate source for common types.
                tmanager.addGroup("TypesHeader");
                tmanager.addGroup("TypesSource");
                // Load template to generate topics for operations.
                tmanager.addGroup("TopicsHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
                tmanager.addGroup("TopicsSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
                tmanager.addGroup("TopicsPluginHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
                tmanager.addGroup("TopicsPluginSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
            }
            else if(m_types == DDS_TYPES.RTI)
            {
                // TODO OpenDDS not
                // Load template to generate the supported IDL to RTI.
                tmanager.addGroup("rtiIDL");
                // Load template to generate IDL for topics.
                tmanager.addGroup("TopicsIDL" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
                // Load template to generate source exception types.
                tmanager.addGroup("RTIExceptionsHeader");
                tmanager.addGroup("RTIExceptionsSource");
            }
            // Load template to generate the DDS protocol.
            tmanager.addGroup("ProtocolHeader");
            tmanager.addGroup("DDSProtocolHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
            tmanager.addGroup("DDSProtocolSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
            // Load template to generate Proxy for topics.
            tmanager.addGroup("ProxyHeader");
            tmanager.addGroup("ProxySource");
            // Load template to generate example to use Proxies.
            tmanager.addGroup("DDSClientExample");
            // Load template to generate proxy async support files.
            tmanager.addGroup("AsyncCallbackHandlers");
            tmanager.addGroup("DDSAsyncSupportHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
            tmanager.addGroup("DDSAsyncSupportSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface"));
            // Load template to generate Server for topics.
            tmanager.addGroup("ServerHeader");
            tmanager.addGroup("ServerSource");
            // Load template to generate example to use Servers.
            tmanager.addGroup("DDSServerExample");
            // Load template to generate server user implementations.
            tmanager.addGroup("ServerImplHeader");
            tmanager.addGroup("ServerImplHeaderExample");
            tmanager.addGroup("ServerImplSourceExample");

            // Create main template for all templates.
            TemplateGroup maintemplates = tmanager.createTemplateGroup("main");
            maintemplates.setAttribute("ctx", ctx);

            try
            {
                InputStream input = new FileInputStream(idlParseFileName);
                IDLLexer lexer = new IDLLexer(input);
                lexer.setContext(ctx);
                IDLParser parser = new IDLParser(lexer);
                // Pass the filename without the extension.
                returnedValue = parser.specification(ctx, tmanager, maintemplates);
            }
            catch(FileNotFoundException ex)
            {
                System.out.println(ColorMessage.error("FileNotFoundException") + "The file " + idlParseFileName + "was not found.");
            }
            catch(ParseException ex)
            {
                System.out.println(ColorMessage.error("ParseException") + ex.getMessage());
            }
            catch(Exception ex)
            {
                System.out.println(ColorMessage.error("Exception") + ex.getMessage());
                ex.printStackTrace();
            }

            if(returnedValue)
            {
                // Check there were interfaces in the processed IDL file.
                Interface ifc = ctx.getFirstInterface();
                // Using rti types the MessageHeader.idl dependency has to be included in the context.
                if(m_types == DDS_TYPES.RTI && ifc != null)
                {
                    // If there are interfaces, the project dependes in MessageHeader.idl project.
                    ctx.addDependency(m_messageHeaderFileLocation);
                }

                // Create information of project for solution.
                project = new Project(onlyFileName, idlFilename, ctx.getDependencies());

                if(ifc != null)
                {   // Set project as only one library.
                    project.setContainsInterfaces(true);
                }

                // Zone used to write all files using the generated string templates.

                System.out.println("Generating Common Code...");

                // Generate file using our types.
                if(m_types == DDS_TYPES.EPROSIMA)
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".h", maintemplates.getTemplate("TypesHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + ".cxx", maintemplates.getTemplate("TypesSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "TopicsPlugin.h", maintemplates.getTemplate("TopicsPluginHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                            {	
                                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "TopicsPlugin.cxx", maintemplates.getTemplate("TopicsPluginSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                                {	
                                    project.addCommonIncludeFile(onlyFileName + ".h");
                                    project.addCommonSrcFile(onlyFileName + ".cxx");
                                    project.addCommonIncludeFile(onlyFileName + "TopicsPlugin.h");
                                    project.addCommonSrcFile(onlyFileName + "TopicsPlugin.cxx");
                                }
                            }
                        }
                    }
                }
                else if(m_types == DDS_TYPES.RTI)
                {
                    // Generate the supported IDL to RTI.
                    if(returnedValue = Utils.writeFile(m_tempDir + onlyFileName + ".idl", maintemplates.getTemplate("rtiIDL"), true))
                    {
                        if(returnedValue = Utils.writeFile(m_tempDir + onlyFileName + "RequestReply.idl", maintemplates.getTemplate("TopicsIDL" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), true))
                        {	
                            // Zone used to write all files using the generated string templates.
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Exceptions.h", maintemplates.getTemplate("RTIExceptionsHeader"), m_replace))
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Exceptions.cxx", maintemplates.getTemplate("RTIExceptionsSource"), m_replace))
                                {
                                    project.addCommonIncludeFile(onlyFileName + "Exceptions.h");
                                    project.addCommonSrcFile(onlyFileName + "Exceptions.cxx");
                                }
                            }
                        }
                    }
                }

                if(returnedValue && ifc != null)
                {
                    // Generate file using our types.
                    if(m_types == DDS_TYPES.EPROSIMA)
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Topics.h", maintemplates.getTemplate("TopicsHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                        {	
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Topics.cxx", maintemplates.getTemplate("TopicsSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                            {	
                                project.addCommonIncludeFile(onlyFileName + "Topics.h");
                                project.addCommonSrcFile(onlyFileName + "Topics.cxx");
                            }
                        }
                    }

                    if(returnedValue && (returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "AsyncCallbackHandlers.h", maintemplates.getTemplate("AsyncCallbackHandlers"), m_replace)))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "DDSAsyncSupport.h", maintemplates.getTemplate("DDSAsyncSupportHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "DDSAsyncSupport.cxx", maintemplates.getTemplate("DDSAsyncSupportSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Protocol.h", maintemplates.getTemplate("ProtocolHeader"), m_replace))
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "DDSProtocol.h", maintemplates.getTemplate("DDSProtocolHeader" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace))
                                    {
                                        returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "DDSProtocol.cxx", maintemplates.getTemplate("DDSProtocolSource" + (m_mode == DDS_TOPIC_MODE.BY_OPERATION ? "ByOperation" : "ByInterface")), m_replace);

                                        project.addCommonIncludeFile(onlyFileName + "Protocol.h");
                                        project.addCommonIncludeFile(onlyFileName + "DDSProtocol.h");
                                        project.addCommonSrcFile(onlyFileName + "DDSProtocol.cxx");
                                        project.addCommonIncludeFile(onlyFileName + "AsyncCallbackHandlers.h");
                                        project.addCommonIncludeFile(onlyFileName + "DDSAsyncSupport.h");
                                        project.addCommonSrcFile(onlyFileName + "DDSAsyncSupport.cxx");
                                    }
                                }
                            }
                        }
                    }
                }

                if(returnedValue && ifc != null && m_clientcode)
                {
                    System.out.println("Generating Proxy Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.h", maintemplates.getTemplate("ProxyHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Proxy.cxx", maintemplates.getTemplate("ProxySource"), m_replace))
                        {
                            project.addClientIncludeFile(onlyFileName + "Proxy.h");
                            project.addClientSrcFile(onlyFileName + "Proxy.cxx");;

                            if(m_exampleOption != null)
                                returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ClientExample.cxx", maintemplates.getTemplate("DDSClientExample"), m_replace);
                        }
                    }
                }

                if(returnedValue && ifc != null && m_servercode)
                {
                    System.out.println("Generating Server Code...");
                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.h", maintemplates.getTemplate("ServerHeader"), m_replace))
                    {
                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "Server.cxx", maintemplates.getTemplate("ServerSource"), m_replace))
                        {
                            if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImpl.h", maintemplates.getTemplate("ServerImplHeader"), m_replace))
                            {
                                project.addServerIncludeFile(onlyFileName + "Server.h");
                                project.addServerSrcFile(onlyFileName + "Server.cxx");
                                project.addServerIncludeFile(onlyFileName + "ServerImpl.h");

                                if(m_exampleOption != null)
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.h", maintemplates.getTemplate("ServerImplHeaderExample"), m_replace))
                                    {
                                        if(returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerImplExample.cxx", maintemplates.getTemplate("ServerImplSourceExample"), m_replace))
                                        {
                                            returnedValue = Utils.writeFile(m_outputDir + onlyFileName + "ServerExample.cxx", maintemplates.getTemplate("DDSServerExample"), m_replace);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        return returnedValue ? project : null;
    }

    public boolean globalInit()
    {
        // Set environment variables.
        String dds_root = null, tao_root = null, fastrpc_root = null;

        // Set the temporary folder.
        if(m_tempDir == null)
        {
            if(m_os.contains("Windows"))
            {
                String tempPath = System.getenv("TEMP");

                if(tempPath == null)
                    tempPath = System.getenv("TMP");

                m_tempDir = tempPath;
            }
            else if(m_os.contains("Linux"))
            {
                m_tempDir = "/tmp/";
            }
        }
        if(m_tempDir.charAt(m_tempDir.length() - 1) != File.separatorChar)
        {
            m_tempDir += File.separator;
        }

        // Set line command.
        m_lineCommand = new ArrayList();
        // Only needed by opendds in the case of using open_idl with the generated file <Interface>RequestReply.idl
        m_lineCommandForWorkDirSet = new ArrayList();

        if(m_protocol == PROTOCOL.DDS && m_types != DDS_TYPES.EPROSIMA)
        {
            if(m_middleware.equals("rti"))
            {
                dds_root = System.getenv("NDDSHOME");

                if(dds_root == null || dds_root.equals(""))
                {
                    System.out.println(ColorMessage.error() + "Cannot find the environment variable NDDSHOME.");
                    System.out.println("Note: NDDSHOME environment variable is not set in your system.");
                    System.out.println("      fastrpcgen uses this environment variable to find the RTI DDS middleware.");
                    System.out.println("      This environment variable is used by the generated solutions too.");
                    System.out.println("      See the User Manual document.");
                    return false;
                }
            }
            else if(m_middleware.equals("opendds"))
            {
                dds_root = System.getenv("DDS_ROOT");

                if(dds_root == null || dds_root.equals(""))
                {
                    System.out.println(ColorMessage.error() + "Cannot find the environment variable DDS_ROOT.");
                    System.out.println("Note: DDS_ROOT environment variable is not set in your system.");
                    System.out.println("      fastrpcgen uses this environment variable to find the OpenDDS middleware.");
                    System.out.println("      This environment variable is used by the generated solutions too.");
                    System.out.println("      See the User Manual document.");
                    return false;
                }

                tao_root = System.getenv("TAO_ROOT");
            }

            if(!m_rpm)
            {
                fastrpc_root = System.getenv(m_appEnv);

                if(fastrpc_root == null || fastrpc_root.equals(""))
                {
                    System.out.println(ColorMessage.error() + "Cannot find the environment variable " + m_appEnv + ".");
                    System.out.println("Note: " + m_appEnv + " environment variable is not set in your system.");
                    System.out.println("      " + m_appName + " uses this environment variable to find its own resources.");
                    System.out.println("      See the User Manual document.");
                    return false;
                }
            }
            else
            {
                fastrpc_root = "/usr/share/" + m_appProduct;
            }

            if(m_middleware.equals("rti"))
            {
                // Directory $NDDSHOME/scripts/rtiddsgen.bat
                m_command = dds_root + File.separator + "scripts" + File.separator;

                if(m_os.contains("Windows"))
                    m_command += "rtiddsgen.bat";
                else if(m_os.contains("Linux"))
                    m_command += "rtiddsgen";

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
                if(m_os.contains("Windows"))
                {
                    m_command = "opendds_idl.exe";
                    m_extra_command = "tao_idl.exe";
                }
                else if(m_os.contains("Linux"))
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

            // Set the location of file MessageHeader.idl
            m_messageHeaderFileLocation = fastrpc_root + File.separator + "idl" + File.separator + m_messageHeaderFileName;
            m_lineCommand.add("-I" + fastrpc_root + File.separator + "idl");


        }

        return true;
    }

    public boolean ddsGenInit(String idlFilename, ArrayList idlLineCommand, ArrayList idlLineCommandForWorkDirSet)
    {    
        // Fill the arrays with global command line.
        idlLineCommand.addAll(m_lineCommand);
        idlLineCommandForWorkDirSet.addAll(m_lineCommandForWorkDirSet);

        // Get only de IDL file directory.
        String idlFileLocation = Util.getIDLFileDirectoryOnly(idlFilename);

        if(idlFileLocation != null)
        {
            // Add the temporary directory to search includes to find generated user idl file. (This could be used in future with OpenDDS).
            //idlLineCommand.add("-I" + m_tempDir);
            //idlLineCommandForWorkDirSet.add("-I" + m_tempDir);

            // Add IDL file location.
            idlLineCommand.add("-I" + idlFileLocation);
            // Get the canonical path from idl file.
            String canon;
            try
            {
                canon = new File(idlFileLocation).getCanonicalPath();
            }
            catch(Exception ex)
            {
                System.out.println(ColorMessage.error() + "Cannot get the canonical path of the idl file.");
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

        System.out.println("External tool process " + file + " ...");

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

            Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray);
            ProcessOutput auxerrorOutput = new ProcessOutput(auxddsgen.getErrorStream(), "ERROR", false, null);
            ProcessOutput auxnormalOutput = new ProcessOutput(auxddsgen.getInputStream(), "OUTPUT", false, null);
            auxerrorOutput.start();
            auxnormalOutput.start();
            int auxexitVal = auxddsgen.waitFor();
            auxerrorOutput.join();
            auxnormalOutput.join();

            if(auxexitVal != 0)
            {
                throw new Exception("process waitFor() function returns the error value " + auxexitVal);
            }
        }

        finalCommandLine = new ArrayList();
        finalCommandLine.add(m_command);

        if(disableGenerateTypeSupport && m_middleware.equals("opendds"))
            finalCommandLine.add("-SI");

        //if(!setWorkingDirectory)
        //{
        finalCommandLine.addAll(idlLineCommand);
        finalCommandLine.add(file);
        //}
        //else
        //{
        //	finalCommandLine.addAll(idlLineCommandForWorkDirSet);
        //	// TODO Revisar funcionamiento con OpenDDS
        //	//finalCommandLine.add(file.substring(externalDir.length() + 1));
        //	finalCommandLine.add(Util.getIDLFileOnly(file));
        //}
        finalCommandArray = new String[finalCommandLine.size()];
        finalCommandArray = (String[])finalCommandLine.toArray(finalCommandArray);

        Process ddsgen;     
        //if(!setWorkingDirectory)
        ddsgen = Runtime.getRuntime().exec(finalCommandArray);
        //else
        //	ddsgen = Runtime.getRuntime().exec(finalCommandArray, null, new File(m_outputDir));
        ProcessOutput errorOutput = new ProcessOutput(ddsgen.getErrorStream(), "ERROR", m_middleware.equals("rti"), null);
        ProcessOutput normalOutput = new ProcessOutput(ddsgen.getInputStream(), "OUTPUT", m_middleware.equals("rti"), null);
        errorOutput.start();
        normalOutput.start();
        int exitVal = ddsgen.waitFor();
        errorOutput.join();
        normalOutput.join();

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
                if(m_os.contains("Windows"))
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

            Process auxddsgen = Runtime.getRuntime().exec(finalCommandArray);
            ProcessOutput auxerrorOutput = new ProcessOutput(auxddsgen.getErrorStream(), "ERROR", false, null);
            ProcessOutput auxnormalOutput = new ProcessOutput(auxddsgen.getInputStream(), "OUTPUT", false, null);
            auxerrorOutput.start();
            auxnormalOutput.start();
            int auxexitVal = auxddsgen.waitFor();
            auxerrorOutput.join();
            auxnormalOutput.join();

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

    private boolean genSolution(Solution solution)
    {
        final String METHOD_NAME = "genSolution";
        boolean returnedValue = true;

        if(m_exampleOption != null)
        {
            System.out.println("Generating solution for arch " + m_exampleOption  + "...");

            // TODO For windows.
            if(m_exampleOption.substring(3, 6).equals("Win"))
            {
                System.out.println("Generating VS2010 solution");

                if(m_exampleOption.startsWith("i86"))
                {
                    returnedValue = genVS2010(solution, null);
                }
                else if(m_exampleOption.startsWith("x64"))
                {
                    for(int index = 0; index < m_vsconfigurations.length; index++)
                    {
                        m_vsconfigurations[index].setPlatform("x64");
                    }

                    returnedValue = genVS2010(solution, "64");
                }
                else
                    returnedValue = false;

            }
            else if(m_exampleOption.substring(3, 8).equals("Linux"))
            {        
                System.out.println("Genering makefile solution");

                if(m_exampleOption.startsWith("i86"))
                {
                    returnedValue = genMakefile(solution, "32");
                }
                else if(m_exampleOption.startsWith("x64"))
                {
                    returnedValue = genMakefile(solution, "64");
                }
                else
                    returnedValue = false;
            }
        }

        return returnedValue;
    }

    private boolean genVS2010(Solution solution, String arch)
    {
        final String METHOD_NAME = "genVS2010";
        boolean returnedValue = false;
        String guid = null;

        // first load main language template
        // TODO Change depending RTI or OpenDDS.
        StringTemplateGroup middlgr = StringTemplateGroup.loadGroup("rti", DefaultTemplateLexer.class, null);
        StringTemplateGroup vsTemplates = StringTemplateGroup.loadGroup("VS2010", DefaultTemplateLexer.class, middlgr);

        if(vsTemplates != null)
        {
            StringTemplate tsolution = vsTemplates.getInstanceOf("solution");
            StringTemplate tproject = vsTemplates.getInstanceOf("project");
            StringTemplate tprojectFiles = vsTemplates.getInstanceOf("projectFiles");
            StringTemplate tprojectClient = vsTemplates.getInstanceOf("projectClient");
            StringTemplate tprojectFilesClient = vsTemplates.getInstanceOf("projectFilesClient");
            StringTemplate tprojectClientExample = vsTemplates.getInstanceOf("projectClientExample");
            StringTemplate tprojectFilesClientExample = vsTemplates.getInstanceOf("projectFilesClientExample");
            StringTemplate tprojectServer = vsTemplates.getInstanceOf("projectServer");
            StringTemplate tprojectFilesServer = vsTemplates.getInstanceOf("projectFilesServer");
            StringTemplate tprojectServerExample = vsTemplates.getInstanceOf("projectServerExample");
            StringTemplate tprojectFilesServerExample = vsTemplates.getInstanceOf("projectFilesServerExample");

            returnedValue = true;
            for(int count = 0; returnedValue && (count < solution.getProjects().size()); ++count)
            {
                Project project = (Project)solution.getProjects().get(count);

                tproject.setAttribute("solution", solution);
                tproject.setAttribute("project", project);
                tproject.setAttribute("example", m_exampleOption);
                tproject.setAttribute("local", m_local);

                tprojectFiles.setAttribute("project", project);

                tprojectClient.setAttribute("solution", solution);
                tprojectClient.setAttribute("project", project);
                tprojectClient.setAttribute("example", m_exampleOption);
                tprojectClient.setAttribute("local", m_local);

                tprojectFilesClient.setAttribute("project", project);

                tprojectClientExample.setAttribute("solution", solution);
                tprojectClientExample.setAttribute("project", project);
                tprojectClientExample.setAttribute("example", m_exampleOption);
                tprojectClientExample.setAttribute("local", m_local);

                tprojectFilesClientExample.setAttribute("project", project);

                tprojectServer.setAttribute("solution", solution);
                tprojectServer.setAttribute("project", project);
                tprojectServer.setAttribute("example", m_exampleOption);
                tprojectServer.setAttribute("local", m_local);

                tprojectFilesServer.setAttribute("project", project);

                tprojectServerExample.setAttribute("solution", solution);
                tprojectServerExample.setAttribute("project", project);
                tprojectServerExample.setAttribute("example", m_exampleOption);
                tprojectServerExample.setAttribute("local", m_local);

                tprojectFilesServerExample.setAttribute("project", project);

                // project configurations   
                for(int index = 0; index < m_vsconfigurations.length; index++)
                {
                    tproject.setAttribute("configurations", m_vsconfigurations[index]);
                    tprojectClient.setAttribute("configurations", m_vsconfigurations[index]);
                    tprojectClientExample.setAttribute("configurations", m_vsconfigurations[index]);
                    tprojectServer.setAttribute("configurations", m_vsconfigurations[index]);
                    tprojectServerExample.setAttribute("configurations", m_vsconfigurations[index]);
                }

                if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "-" + m_exampleOption + ".vcxproj", tproject, m_replace))
                {
                    if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "-" + m_exampleOption + ".vcxproj.filters", tprojectFiles, m_replace))
                    {
                        if(project.getContainsInterfaces())
                        {
                            if(solution.getClientside())
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "Client-" + m_exampleOption + ".vcxproj", tprojectClient, m_replace))
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "Client-" + m_exampleOption + ".vcxproj.filters", tprojectFilesClient, m_replace))
                                    {
                                        if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "ClientExample-" + m_exampleOption + ".vcxproj", tprojectClientExample, m_replace))
                                        {
                                            returnedValue = Utils.writeFile(m_outputDir + project.getName() + "ClientExample-" + m_exampleOption + ".vcxproj.filters", tprojectFilesClientExample, m_replace);
                                        }
                                    }

                                }
                            }

                            if(returnedValue && solution.getServerside())
                            {
                                if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "Server-" + m_exampleOption + ".vcxproj", tprojectServer, m_replace))
                                {
                                    if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "Server-" + m_exampleOption + ".vcxproj.filters", tprojectFilesServer, m_replace))
                                    {
                                        if(returnedValue = Utils.writeFile(m_outputDir + project.getName() + "ServerExample-" + m_exampleOption + ".vcxproj", tprojectServerExample, m_replace))
                                        {
                                            returnedValue = Utils.writeFile(m_outputDir + project.getName() + "ServerExample-" + m_exampleOption + ".vcxproj.filters", tprojectFilesServerExample, m_replace);
                                        }
                                    }

                                }
                            }
                        }
                    }
                }


                tproject.reset();
                tprojectFiles.reset();
                tprojectClient.reset();
                tprojectFilesClient.reset();
                tprojectClientExample.reset();
                tprojectFilesClientExample.reset();
                tprojectServer.reset();
                tprojectFilesServer.reset();
                tprojectServerExample.reset();
                tprojectFilesServerExample.reset();
            }

            // TODO Nombre del la solucion
            if(returnedValue)
            {
                tsolution.setAttribute("solution", solution);
                tsolution.setAttribute("example", m_exampleOption);

                // project configurations   
                for(int index = 0; index < m_vsconfigurations.length; index++){
                    tsolution.setAttribute("configurations", m_vsconfigurations[index]);
                }

                returnedValue = Utils.writeFile(m_outputDir + "rpcsolution-" + m_exampleOption + ".sln", tsolution, m_replace);
            }
        }
        else
        {
            System.out.println(ColorMessage.error(METHOD_NAME) + "Cannot load the template group VS2010");
        }

        return returnedValue;
    }

    private boolean genMakefile(Solution solution, String arch)
    {
        boolean returnedValue = false;
        StringTemplate makecxx = null;

        // TODO Change depending RTI or OpenDDS.
        StringTemplateGroup middlgr = StringTemplateGroup.loadGroup("rti", DefaultTemplateLexer.class, null);
        StringTemplateGroup makeTemplates = StringTemplateGroup.loadGroup("Makefile", DefaultTemplateLexer.class, middlgr);

        if(makeTemplates != null)
        {
            makecxx = makeTemplates.getInstanceOf("makecxx");

            makecxx.setAttribute("solution", solution);
            makecxx.setAttribute("example", m_exampleOption);
            makecxx.setAttribute("arch", arch);

            returnedValue = Utils.writeFile(m_outputDir + "makefile_" + m_exampleOption, makecxx, m_replace);
        }

        return returnedValue;
    }

    /*!
     * @return The file used to store the preprocessed idl file. In error case null pointer is returned.
     */
    String callPreprocessor(String idlFilename)
    {
        final String METHOD_NAME = "callPreprocessor";
        // Set line command.
        ArrayList lineCommand = new ArrayList();
        String[] lineCommandArray = null;
        String outputfile = Util.getIDLFileOnly(idlFilename) + ".cc";
        int exitVal = -1;
        OutputStream of = null;

        // Use temp directory.
        if(m_tempDir != null)
            outputfile = m_tempDir + outputfile;

        if(m_os.contains("Windows"))
        {
            try
            {
                of = new FileOutputStream(outputfile);
            }
            catch(FileNotFoundException ex)
            {
                System.out.println(ColorMessage.error(METHOD_NAME) + "Cannot open file " + outputfile);
                return null;
            }
        }

        // Set the preprocessor path
        String ppPath = m_ppPath;

        if(ppPath == null)
        {
            if(m_os.contains("Windows"))
            {
                ppPath = "cl.exe";
            }
            else if(m_os.contains("Linux"))
            {
                ppPath = "cpp";
            }
        }

        // Add command
        lineCommand.add(ppPath);

        // Add the include paths given as parameters.
        for(int i = 0; i < m_includePaths.size(); ++i)
        {
            if(m_os.contains("Windows"))
                lineCommand.add(((String)m_includePaths.get(i)).replaceFirst("^-I", "/I"));
            else if(m_os.contains("Linux"))
                lineCommand.add(m_includePaths.get(i));
        }

        if(m_os.contains("Windows"))
        {
            lineCommand.add("/E");
            lineCommand.add("/C");
        }

        // Add input file.
        lineCommand.add(idlFilename);

        if(m_os.contains("Linux"))
        {
            // Add output file.
            lineCommand.add(outputfile);
        }

        lineCommandArray = new String[lineCommand.size()];
        lineCommandArray = (String[])lineCommand.toArray(lineCommandArray);

        try
        {
            Process preprocessor = Runtime.getRuntime().exec(lineCommandArray);
            ProcessOutput errorOutput = new ProcessOutput(preprocessor.getErrorStream(), "ERROR", false, null);
            ProcessOutput normalOutput = new ProcessOutput(preprocessor.getInputStream(), "OUTPUT", false, of);
            errorOutput.start();
            normalOutput.start();
            exitVal = preprocessor.waitFor();
            errorOutput.join();
            normalOutput.join();
        }
        catch(Exception ex)
        {
            System.out.println(ColorMessage.error(METHOD_NAME) + "Cannot execute the preprocessor. Reason: " + ex.getMessage());
            return null;
        }

        if(of != null)
        {
            try
            {
                of.close();
            }
            catch(IOException ex)
            {
                System.out.println(ColorMessage.error(METHOD_NAME) + "Cannot close file " + outputfile);
            }
        }

        if(exitVal != 0)
        {
            System.out.println(ColorMessage.error(METHOD_NAME) + "Preprocessor return an error " + exitVal);
            return null;
        }

        return outputfile;
    }

    public static void printHelp()
    {
        System.out.println(m_appName + " usage:");
        System.out.println("\t" + m_appName + " [options] <file> [<file> ...]");
        System.out.println("\twhere the options are:");
        System.out.println("\t\t-help: shows this help");
        System.out.println("\t\t-version: shows the current version of eProsima RPC.");
        //System.out.println("\t\t--server: disables the generation of source code for servers.");
        //System.out.println("\t\t--client: disables the generation of source code for clients.");
        System.out.println("\t\t-example <platform>: Generates a solution for a specific platform (example: x64Win64VS2010)");
        System.out.println("\t\t\tSupported platforms:");
        for(int count = 0; count < m_platforms.size(); ++count)
            System.out.println("\t\t\t * " + m_platforms.get(count));
        System.out.println("");
        //        "   -language <C++>: Programming language (default: C++).\n" +
        System.out.println("\t\t-replace: replaces existing generated files.");
        System.out.println("\t\t-d <path>: sets an output directory for generated files.");
        System.out.println("\t\t-ppPath <path\\><program> : C/C++ Preprocessor path.(Default is cl.exe)");
        System.out.println("\t\t-ppDisable               : Do not use C/C++ preprocessor.");
        System.out.println("\t\t-t <temp dir>: sets a specific directory as a temporary directory.");
        /* Products splitted.
           System.out.println("\t\t-protocol <protocol>: defines the protocol to be implemented by the generated code.");
           System.out.println("\t\t\tSupported protocols:");
           System.out.println("\t\t\t* dds (Default)");
           System.out.println("\t\t\t* rest");
           System.out.println("");
           */
        if(m_protocol == PROTOCOL.DDS)
        {
            System.out.println("\t\t-types <mapping>: selects the C++ mapping used for user types. Only supported in protocol dds.");
            System.out.println("\t\t\tSupported C++ mapping:");
            System.out.println("\t\t\t* c++11 (Default) - C++11 native types.");
            System.out.println("\t\t\t* rti - RTI DDS types.");
            System.out.println("");
            System.out.println("\t\t" + TOPIC_GENERATION_OPTION + " <option>: defines how DDS topics are generated. Only supported in protocol dds.");
            System.out.println("\t\t\tSupported topics generation:");
            System.out.println("\t\t\t* " + TOPIC_GENERATION_OPTION_VALUE_BY_INTERFACE + " (Default) - Generate a topic for each IDL interface.");
            System.out.println("\t\t\t* " + TOPIC_GENERATION_OPTION_VALUE_BY_OPERATION + " - Generate a topic for each IDL operation.");
            System.out.println("");
        }
        System.out.println("\tand the supported input files are:");
        if(m_protocol == PROTOCOL.DDS || m_protocol == PROTOCOL.FASTCDR)
            System.out.println("\t* IDL files.");
        else if(m_protocol == PROTOCOL.REST)
            System.out.println("\t* WADL files.");
    }

    public static void main(String[] args) throws Exception
    {
        ColorMessage.load();

        if(loadPlatforms())
        {
            try
            {
                fastrpcgen main = new fastrpcgen(args);
                if(main.execute())
                    System.exit(0);
            }
            catch(BadArgumentException ex)
            {
                System.out.println(ColorMessage.error("BadArgumentException") + ex.getMessage());
                printHelp();
            }
        }

        System.exit(-1);
    }
}

class ProcessOutput extends Thread
{
    InputStream is = null;
    OutputStream of = null;
    String type;
    boolean m_check_failures;
    boolean m_found_error = false;
    final String clLine = "#line";

    ProcessOutput(InputStream is, String type, boolean check_failures, OutputStream of)
    {
        this.is = is;
        this.type = type;
        m_check_failures = check_failures;
        this.of = of;
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
                if(of == null)
                    System.out.println(line);
                else
                {
                    // Sustituir los \\ que pone cl.exe por \
                    if(line.startsWith(clLine))
                    {
                        line = "#" + line.substring(clLine.length());
                        int count = 0;
                        while((count = line.indexOf("\\\\")) != -1)
                        {
                            line = line.substring(0, count) + "\\" + line.substring(count + 2);
                        }
                    }

                    of.write(line.getBytes());
                    of.write('\n');
                }

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
