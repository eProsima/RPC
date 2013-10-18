package com.eprosima.rpcdds.idl.grammar;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.NoSuchElementException;
import java.util.Scanner;

import com.eprosima.rpcdds.tree.Definition;
import com.eprosima.rpcdds.tree.Interface;
import com.eprosima.rpcdds.tree.Notebook;
import com.eprosima.rpcdds.tree.Operation;
import com.eprosima.rpcdds.tree.ScopedObject;
import com.eprosima.rpcdds.typecode.Member;
import com.eprosima.rpcdds.typecode.StructTypeCode;
import com.eprosima.rpcdds.typecode.TypeCode;
import com.eprosima.rpcdds.util.Utils;

public class Context
{
    public Context(String filename, String file, boolean clientcode, boolean servercode)
    {
        m_filename = filename;
        m_file = file;
        m_clientcode = clientcode;
        m_servercode = servercode;
        m_directoryFile = Utils.getIDLFileDirectoryOnly(file);
        m_types = new HashMap<String, TypeCode>();
        m_dependencies = new HashSet<String>();
        m_definitions = new ArrayList<Definition>();
        m_includedependency = new HashSet<String>();
        m_directIncludeDependencies = new ArrayList<String>();
        m_exceptions = new HashMap<String, com.eprosima.rpcdds.tree.Exception>();
        m_interfaces = new HashMap<String, Interface>();
        m_globalAnnotations = new HashMap<String, String>();
        m_tmpAnnotations = new HashMap<String, String>();
        // The scope file has to be initialized because could occur the preprocessor
        // is not called (using -ppDisable).
        m_scopeFile = file;
    }

    public void setFilename(String filename)
    {
        m_filename = filename;
    }

    public String getFilename()
    {
        return m_filename;
    }

    public void setScope(String scope)
    {
        m_scope = scope;
    }
    
    public String getScopeFile()
    {
    	return m_scopeFile;
    }
    
    /*!
     * @brief This function is call when a preprocessor line was found by the lexer.
     * In case the line referring to the content included file, this function sets this file as current scope file.
     * Also this function saves the scope file in the library dependecy map.
     * In case it is a #include directive, this is saved as direct include dependency.
     */
    public void processPreprocessorLine(String line, int nline)
    { 	
    	// If there is a line referring to the content of an included file.
    	if(line.charAt(0) == ' ')
    	{
    	    /* The received preprocessor line has the following form:
             * ' numline filename flags'
    	     * where:
    	     * - numline Number of the line where the include was.
    	     * - filename The filename whose content was included.
    	     * - flags
    	     */
    	    Scanner scanner = new Scanner(line);
    	    
    	    // Read numline
    	    int numline = scanner.nextInt();
    	    
    	    // Read filename
    	    String filename = scanner.next("\".*\"");
    	    
    	    // Read flags.
    	    boolean systemFile = false, enteringFile = false, exitingFile = false;
    	    try
    	    {
    	        while(true)
    	        {
    	            Integer flag = scanner.nextInt();

    	            if(flag == 1)
    	                enteringFile = true;
    	            else if(flag == 2)
    	                exitingFile = true;
    	            else if(flag == 3)
    	                systemFile = true;
    	        }
    	    }
    	    catch(NoSuchElementException ex)
    	    {
    	        // The line finishes.
    	    }
    	    
    	    // Only not system files are processed.
    	    if(!systemFile)
    	    {
	            String file = filename.substring(1, filename.length() - 1);
	            
	            //if it is a idl file.
	            if(file.substring(file.length() - 4, file.length()).equals(".idl"))
	            {
	                // Remove the '.'
	                if(file.charAt(0) == '.')
	                    m_scopeFile = file.substring(2, file.length());
	                else
	                    m_scopeFile = file;
	                
	                // Add to dependency if there is different IDL file than the processed.
	                if(!m_scopeFile.equals(m_file))
	                {
	                    m_dependencies.add(m_scopeFile);
	                }
	                
	                //Update the current line.
	                m_currentincludeline = nline - (numline - 1);
    	        }
    	    }
    	}
    	// If there is a direct include file, then insert in direct include dependency array.
    	else if(line.substring(0, 7).equals("include"))
    	{
    	    int index = line.indexOf('"');
    	    String file = line.substring(index + 1, line.indexOf('"', index + 1));
    	    m_directIncludeDependencies.add(file);
    	}
    }
    
    /*!
     * @return True if the object belongs to the processed file.
     */
    public boolean setScopedFileToObject(ScopedObject object)
    {
    	object.setScopeFile(m_scopeFile, m_scopeFile.equals(m_file));
    	return m_scopeFile.equals(m_file);
    }
    
    /*!
     * @return True if current call is in scoped file.
     */
    public boolean isInScopedFile()
    {
    	return m_scopeFile.equals(m_file);
    }

    public String getScope()
    {
        return m_scope;
    }

    public void setSersym(String sersym)
    {
        m_sersym = sersym;
    }

    public String getSersym()
    {
        return m_sersym;
    }

    public void setTypelimitation(String lt)
    {
        m_typelimitation = lt;
    }

    public String getTypelimitation()
    {
        return m_typelimitation;
    }

    /*!
     * @brief This function adds a global typecode to the context.
     */
    public void addTypeCode(String name, TypeCode typecode)
    {
        TypeCode prev = m_types.put(name, typecode);
        
        // TODO: Exception.
        if(prev != null)
        	System.out.println("Warning: Redefined type " + name);
    }
     
    /*!
     * @brief This function tries to retrieve a global typecode.
     */
    public TypeCode getTypeCode(String name)
    {
        int lastIndex = -1;
        TypeCode returnedValue = m_types.get(name);

        // Probar si no tiene scope, con el scope actual.
        if(returnedValue == null && ((lastIndex = name.lastIndexOf("::")) == -1))
        {
            returnedValue = m_types.get(m_scope + name);
        }

        return returnedValue;
    }
    
    /*!
     * @brief This function adds a global exception to the context.
     */
    public void addException(String name, com.eprosima.rpcdds.tree.Exception exception)
    {
    	com.eprosima.rpcdds.tree.Exception prev = m_exceptions.put(name, exception);
        
        // TODO: Exception.
        if(prev != null)
        	System.out.println("Warning: Redefined exception " + name);
    }
     
    /*!
     * @brief This function tries to retrieve a global typecode.
     */
    public com.eprosima.rpcdds.tree.Exception getException(String name)
    {
        int lastIndex = -1;
        com.eprosima.rpcdds.tree.Exception returnedValue = m_exceptions.get(name);

        // Probar si no tiene scope, con el scope actual.
        if(returnedValue == null && ((lastIndex = name.lastIndexOf("::")) == -1))
        {
            returnedValue = m_exceptions.get(m_scope + name);
        }

        return returnedValue;
    }
    
    /*!
     * @brief This function adds a interface to the context.
     * This function is used in the parser.
     */
    public void addInterface(String name, Interface interf)
    {
        // REST block
        String baseUri = getResourceBaseUri();
        
        if(baseUri != null)
            interf.addAnnotation("RESOURCES_BASE_URI", baseUri);
        // End REST block
        
        Interface prev = m_interfaces.put(name, interf);
        
        // TODO: Excepción
        if(prev != null)
            System.out.println("Warning: Redefined interface " + name);
    }
    
    /*!
     * @brief This function returns all interfaces.
     * This function is used in string templates.
     */
    public ArrayList<Interface> getInterfaces()
    {
        return new ArrayList<Interface>(m_interfaces.values());
    }
    
    /*!
     * @brief This function stores a global definition of the IDL file.
     */
    public void addDefinition(Definition definition)
    {
        m_definitions.add(definition);
    }
    
    /*!
     * @brief This function is used to know if a project has to generate the Types.
     */
    public boolean isProjectNeedTypes()
    {
    	com.eprosima.rpcdds.tree.Exception ex = null;;
    	
    	if((ex = getFirstException()) != null)
    		return true;
    	
    	return false;
    }
    
    /*!
     * @brief This function is used in this project to get the first discovered interface.
     */
    public Interface getFirstInterface()
    { 
        for(int count = 0; m_firstinterface == null && count < m_definitions.size(); ++count)
        {
            m_firstinterface = m_definitions.get(count).getFirstInterface(m_scopeFile);
        }
        
        return m_firstinterface;
    }
    
    /*!
     * @brief This function is used in this project to get the first discovered exception.
     */
    public com.eprosima.rpcdds.tree.Exception getFirstException()
    {
    	for(int count = 0; m_firstexception == null && count < m_definitions.size(); ++count)
        {
    		m_firstexception = m_definitions.get(count).getFirstException(m_scopeFile);
        }
        
        return m_firstexception;
    }
    
    /*!
     * @brief This function get the library dependencies of a project.
     */
    public HashSet getDependencies()
    {
    	return m_dependencies;
    }
    
    /*!
     * @brief This function add a new library dependency to the project.
     */
    public void addDependency(String dependency)
    {
    	m_dependencies.add(dependency);
    }
    
    /*!
     * @brief This function add a new include dependency to the project.
     * This dependency will be needed to include our generated file with the types that
     * the DDS middleware doesn't generate (right now only exceptions).
     * The include dependencies are added without the .idl extension.
     */
    public void addIncludeDependency(String dependency)
    {
    	// Remove .idl extension.
        String dep = dependency.substring(0, dependency.length() - 4);
        // Remove directory if it is the same than main IDL file.
        dep = dep.replaceFirst("^" + m_directoryFile, "");
    	m_includedependency.add(dep);
    }
    
    /*!
     * @brief This function is used in the stringtemplates. For these reason this function
     * returns an ArrayList
     */
    public ArrayList<String> getIncludeDependencies()
    {
    	return new ArrayList<String>(m_includedependency);
    }
    
    /*!
     * @brief This function is used in the stringtemplates. For these reason this function
     * returns an ArrayList
     */
    public ArrayList<String> getDirectIncludeDependencies()
    {
        return m_directIncludeDependencies;
    }
    
    /*!
     * @brief This function stores a global annotation in the context
     * @param id Identifier of the annotation.
     * @param value Value of the annotation.
     */
    public void addGlobalAnnotation(String id, String value)
    {
    	String oldValue = m_globalAnnotations.put(id, value);
    	
    	// TODO Lanzar una excepción.
    	if(oldValue != null)
    		System.out.println("Global annotation " + id + " was redefined");
    }
    
    /*!
     * @brief This function returns all global annotations.
     * @return Map with all global annotations.
     */
    public HashMap<String, String>getGlobalAnnotations()
    {
        return m_globalAnnotations;
    }
    
    /*!
     * @brief This function add a temporarily annotation.
     * This annotation will be linked with a future object.
     * @param id Identifier of the annotation.
     * @param value Value of the annotation.
     */
    public void addTmpAnnotation(String id, String value)
    {
    	String oldValue = m_tmpAnnotations.put(id, value);
    	
    	// TODO Lanzar una excepción.
    	if(oldValue != null)
    		System.out.println("Annotation " + id + " was redefined");
    }
    
    /*!
     * @brief This function links the temporarily annotations with an object.
     * @param notebook The object where the temporarily annotations will be stored.
     */
    public void setTmpAnnotations(Notebook notebook)
    {
        notebook.addAnnotations(m_tmpAnnotations);
        m_tmpAnnotations.clear();
    }
    
    public boolean isScopeLimitToAll()
    {
    	return m_scopeLimitToAll;
    }
    
    public void setScopeLimitToAll(boolean scopeLimitToAll)
    {
    	m_scopeLimitToAll = scopeLimitToAll;
    }
    
    public int getCurrentIncludeLine()
    {
    	return m_currentincludeline;
    }
    
    public boolean isClient()
    {
        return m_clientcode;
    }
    
    public boolean isServer()
    {
        return m_servercode;
    }
    
    ////////// RESTful block //////////
    
    public String getResourceCompleteBaseUri()
    {
        String baseUri = m_globalAnnotations.get("RESOURCES_BASE_URI");
        
        if(baseUri != null)
        {
            // Remove http://
            int posInit = baseUri.indexOf("//");
            
            if(posInit == -1)
                posInit = 0;
            else
                posInit += 2;
            
            return baseUri.substring(posInit);
        }
        
        return baseUri;
    }
    
    /*
     * @brief This function return the base URI without the host.
     * Also all spaces are converted to %20.
     */
    public String getResourceBaseUri()
    {
        String baseUri = getResourceCompleteBaseUri();
        
        if(baseUri != null)
        {
            // Remove host
            int posEnd = baseUri.indexOf('/');
            
            if(posEnd == -1)
                return "";
            else
                return baseUri.substring(posEnd).replace(" ", "%20");
        }
        
        return null;
    }
    
    public String getResourceHost() {
    	String path =  m_globalAnnotations.get("RESOURCES_BASE_URI");
    	
    	// Remove http://
    	int posInit = path.indexOf("//");
    	if(posInit == -1)
    		posInit = 0;
    	else
    		posInit += 2;
    	
    	// Remove path
    	int posEnd = path.indexOf('/', posInit);
    	
    	if(posEnd == -1)
    		posEnd = path.length()-1;
    	
    	return path.substring(posInit, posEnd);    	
    }
    
    public String getDeserializeCode() {  
    	PathTree pathTree = new PathTree();
    	for(Interface iface: getInterfaces()) {
    		String path = iface.getPath();
    		
    		pathTree.addInterfaceName(path, iface.getName());
   			for(Operation operation: iface.getOperations()) {
   	   			pathTree.addMethod(operation);
    		}

    		if(iface.getPathHasBrackets()) {
    			// Path has brackets -> embedded parameters
    			int pos = iface.getName().indexOf("Resource");
    			String structName = iface.getName().substring(0, pos);
    			if(getTypeCode(structName) instanceof StructTypeCode) {
    				StructTypeCode struct = (StructTypeCode)getTypeCode(structName);
    				for(Member member: struct.getMembers()) {
    					String type = member.getTypecode().getTypename();
    					String name = "{" + member.getName().substring(0, member.getName().length() - 1) + "}";
    					pos = path.indexOf(name);
    					String variablePath = path.substring(0, pos + name.length());   
    					pathTree.setVariableType(variablePath, type);
    				}
    			}
    		}
    	}    
    	    	
    	return pathTree.getIterationCode();
    }
    
    /////// End of RESTful block //////

    private String m_filename = "";
    private String m_file = "";
    private String m_directoryFile = "";
    private String m_scope = "";
    private String m_scopeFile = "";
    private String m_sersym = ">>";
    private String m_typelimitation = null;
    
    //! Set that contains the library dependencies that were found because there was a line of the preprocessor.
    private HashSet<String> m_dependencies = null;
    //! Set that contains the include dependencies that force to include our type generated file (right now only with exceptions).
    private HashSet<String> m_includedependency = null;
    //! Set that contains the direct include dependencies in the IDL file. Used to regenerate the IDL in a supported form.
    private ArrayList<String> m_directIncludeDependencies = null;
    //! Map that contains all global annotations in the IDL file.
    private HashMap<String, String> m_globalAnnotations = null;
    //! Map that contains temporarily the annotations before to be linked with an element.
    private HashMap<String, String> m_tmpAnnotations = null;
    private boolean m_scopeLimitToAll = false;
    
    //! Store all global definitions.
    private ArrayList<Definition> m_definitions;
    //! Map that contains all types that were found processing the IDL file (after preprocessing).
    private HashMap<String, TypeCode> m_types = null;
    //! Map that contains all global exceptions that were found processing the IDL file (after preprocessing).
    private HashMap<String, com.eprosima.rpcdds.tree.Exception> m_exceptions = null;
    //! Map that contains all interfaces that were found processing the IDL file (after preprocessing):
    private HashMap<String, Interface> m_interfaces = null;
    //! Cache the first interface.
    private Interface m_firstinterface = null;
    //! Cache the first exception.
    private com.eprosima.rpcdds.tree.Exception m_firstexception = null;
    
    private int m_currentincludeline = 0;
    
    // Stores if the user will generate the client source.
    private boolean m_clientcode = true;
    // Stores if the user will generate the server source.
    private boolean m_servercode = true;
   
}
