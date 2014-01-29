package com.eprosima.rpcdds.idl.grammar;

import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Scanner;

import com.eprosima.rpcdds.tree.Module;
import com.eprosima.rpcdds.tree.Annotation;
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
    // TODO Remove middleware parameter. It is temporal while cdr and rest don't have async functions.
    public Context(String filename, String file, ArrayList includePaths, boolean clientcode, boolean servercode, String middleware)
    {
        // Detect OS
        m_os = System.getProperty("os.name");
        m_userdir = System.getProperty("user.dir");
        
        m_filename = filename;
        m_directoryFile = Utils.getIDLFileDirectoryOnly(file);
        
        m_file = file;
        // Remove absolute directory where the application was executed
        if(startsWith(m_file, m_userdir))
        {
        	m_file = m_file.substring(m_userdir.length());
        	
        	// Remove possible separator    
            if(startsWith(file, java.io.File.separator))
                file = file.substring(1);
        }
        // Remove relative directory if is equal that where the processed IDL is.
        if(m_directoryFile != null && startsWith(m_file, m_directoryFile))
        	m_file = m_file.substring(m_directoryFile.length());
        
        m_clientcode = clientcode;
        m_servercode = servercode;
        m_types = new HashMap<String, TypeCode>();
        m_dependencies = new HashSet<String>();
        m_definitions = new ArrayList<Definition>();
        m_annotations = new HashMap<String, Annotation>();
        m_includedependency = new HashSet<String>();
        m_directIncludeDependencies = new HashSet<String>();
        m_exceptions = new HashMap<String, com.eprosima.rpcdds.tree.Exception>();
        m_interfaces = new HashMap<String, Interface>();
        m_tmpAnnotations = new HashMap<String, String>();
        
        m_includePaths = new ArrayList<String>();
        
        for(int i = 0; i < includePaths.size(); ++i)
        {
            String include = (String)includePaths.get(i);
            if(startsWith(include, includeFlag))
            	include = include.substring(includeFlag.length());
            if(startsWith(include, m_userdir))
            {
            	include = include.substring(m_userdir.length());
            	
            	// Remove possible separator    
                if(startsWith(file, java.io.File.separator))
                    file = file.substring(1);
            }
            if(m_directoryFile != null && startsWith(include, m_directoryFile))
            	include = include.substring(m_directoryFile.length());
            // Add last separator.
            if(include.charAt(include.length() - 1) != java.io.File.separatorChar)
                include += java.io.File.separator;
            m_includePaths.add(include);
        }
        
        // Reorder include paths;
        int pointer = 0;
        while(pointer < m_includePaths.size())
        {
            int count = pointer + 1;
            
            while(count < m_includePaths.size())
            {
                if(startsWith(m_includePaths.get(count), m_includePaths.get(pointer)))
                {
                    String first = m_includePaths.get(pointer);
                    String second = m_includePaths.get(count);
                    m_includePaths.set(pointer, second);
                    m_includePaths.set(count, first);
                    break;
                }
                ++count;
            }
            
            if(count == m_includePaths.size())
                ++pointer;
        }
        
        // The scope file has to be initialized because could occur the preprocessor
        // is not called (using -ppDisable).
        m_scopeFile = m_file;

        // TODO Remove
        m_middleware = middleware;
    }
    
    private boolean startsWith(String st, String prefix)
    {
    	if(m_os.contains("Windows"))
    	{
    		return st.toLowerCase().startsWith(prefix.toLowerCase());
    	}
    	
    	return st.startsWith(prefix);
    }

    public void setFilename(String filename)
    {
        m_filename = filename;
    }

    public String getFilename()
    {
        return m_filename;
    }

    public String getTrimfilename()
    {
        return Utils.stringTrimAll(m_filename);
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
    	    
    	    if(m_os.contains("Linux"))
    	    {
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
    	    }
    	    
    	    // Only not system files are processed.
    	    if(!systemFile)
    	    {
    	        // Remove "
	            String file = filename.substring(1, filename.length() - 1);
	            
	            // Remove absolute directory where the application was executed
	            if(startsWith(file, m_userdir))
	            {
	            	file = file.substring(m_userdir.length());
	            	
	            	// Remove possible separator    
	                if(startsWith(file, java.io.File.separator))
	                    file = file.substring(1);
	            }
	            // Remove relative ./ directory.
	            if(startsWith(file, currentDirS))
	            	file = file.substring(currentDirS.length());
	            String depfile = file;
	            // Remove relative directory if is equal that where the processed IDL is.
	            if(m_directoryFile != null && startsWith(file, m_directoryFile))
	            	file = file.substring(m_directoryFile.length());
	            // Remove relative directory if is equal to a include path.
	            for(int i = 0; i < m_includePaths.size(); ++i)
	            {   
	            	if(startsWith(file, m_includePaths.get(i)))
	            	{
	            		file = file.substring(m_includePaths.get(i).length());
	                    break;
	                }
	            }
	            // Remove possible separator    
	            if(startsWith(file, java.io.File.separator))
	            	file = file.substring(1);
	            
	            //if it is a idl file.
	            if(file.substring(file.length() - 4, file.length()).equals(".idl"))
	            {
	                m_scopeFile = file;
	                
	                // Add to dependency if there is different IDL file than the processed
	                if(!m_scopeFile.equals(m_file))
	                {
	                    m_dependencies.add(depfile);
	                    
	                    // See if it is a direct dependency.
	                    if(m_lastDirectDependency != null &&
	                            m_lastDirectDependency.equals(m_file))
	                        m_directIncludeDependencies.add(m_scopeFile);
	                }

	                // Update last direct dependency
	                m_lastDirectDependency = m_scopeFile;
	                
	                //Update the current line.
	                m_currentincludeline = nline - (numline - 1);
    	        }
    	    }
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
        Interface prev = m_interfaces.put(name, interf);
        
        // TODO: Excepcion
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
     * @brief This function adds an annotation to the context.
     */
    public void addAnnotation(String name, Annotation annotation)
    {
        Annotation prev = m_annotations.put(name, annotation);
        
        // TODO: Exception.
        if(prev != null)
            System.out.println("Warning: Redefined annotation " + name);
    }
    
    public Annotation getAnnotation(String name)
    {
        int lastIndex = -1;
        Annotation returnedValue = m_annotations.get(name);

        // Probar si no tiene scope, con el scope actual.
        if(returnedValue == null && ((lastIndex = name.lastIndexOf("::")) == -1))
        {
            returnedValue = m_annotations.get(m_scope + name);
        }

        return returnedValue;
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
     * @brief This function sets the current module that is been processed.
     */
    public void setCurrentModule(Module module)
    {
        m_currentmodule = module;
    }
    
    /*!
     * @brief This function gets the current module that is been processed.
     */
    public Module getCurrentModule()
    {
        return m_currentmodule;
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
    	if(m_os.contains("Windows"))
    	{
    		HashSet<String> set = new HashSet<String>();
    		Iterator<String> it = m_dependencies.iterator();
    		
    		while(it.hasNext())
    		{
    			String dep = it.next();
    			
	            // In windows substitute \\ by /
	            int count = 0;
	    		while((count = dep.indexOf("/")) != -1)
	    		{
	    			dep = dep.substring(0, count) + "\\" + dep.substring(count + 1);
	    		}
	    		
	    		set.add(dep);
    		}
    		
    		return set;
    	}
    	
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
        if(m_directoryFile != null && startsWith(dep, m_directoryFile))
        	dep = dep.substring(m_directoryFile.length());
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
        return new ArrayList<String>(m_directIncludeDependencies);
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
    	
    	// TODO Lanzar una excepcion.
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

    // TODO Remove
    public boolean isDds()
    {
        if(m_middleware != null && m_middleware.equals("dds"))
            return true;

        return false;
    }
    
    ////////// RESTful block //////////
    
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
    private ArrayList<String> m_includePaths = null;
    //! Set that contains the direct include dependencies in the IDL file. Used to regenerate the IDL in a supported form.
    private HashSet<String> m_directIncludeDependencies = null;
    private String m_lastDirectDependency = null;
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
  //! Map that contains all annotations that where found processing the IDL file.
    private HashMap<String, Annotation> m_annotations = null;
    //! Current Module that is been processing.
    private Module m_currentmodule = null;
    //! Cache the first interface.
    private Interface m_firstinterface = null;
    //! Cache the first exception.
    private com.eprosima.rpcdds.tree.Exception m_firstexception = null;
    
    private int m_currentincludeline = 0;
    
    // OS
    String m_os = null;
    String m_userdir = null;
    // Stores if the user will generate the client source.
    private boolean m_clientcode = true;
    // Stores if the user will generate the server source.
    private boolean m_servercode = true;
    
    final String includeFlag = "-I";
    final String currentDirS = "." + File.separator;

    // TODO Remove
    private String m_middleware = null;
}
