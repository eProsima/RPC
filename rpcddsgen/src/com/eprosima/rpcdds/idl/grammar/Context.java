package com.eprosima.rpcdds.idl.grammar;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;

import com.eprosima.rpcdds.tree.Definition;
import com.eprosima.rpcdds.tree.Interface;
import com.eprosima.rpcdds.tree.ScopedObject;
import com.eprosima.rpcdds.typecode.TypeCode;
import com.eprosima.rpcdds.util.Utils;

public class Context
{
    public Context(String filename, String file)
    {
        m_filename = filename;
        m_file = file;
        m_directoryFile = Utils.getIDLFileDirectoryOnly(file);
        m_types = new HashMap<String, TypeCode>();
        m_dependencies = new HashSet<String>();
        m_definitions = new ArrayList<Definition>();
        m_includedependency = new HashSet<String>();
        m_exceptions = new HashMap<String, com.eprosima.rpcdds.tree.Exception>();
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
     * In case the line refering a file, this function sets this file as current scope file.
     * Also this function saves the scope file in the dependecies map.
     */
    public void setScopeFile(String line, int nline)
    {
    	int index = 0;
    	
    	if(line.charAt(0) == ' ' && (index = line.indexOf('"')) > 0)
    	{
    		String file = line.substring(index + 1, line.indexOf('"', index + 1));
    		
    		// Remove the '.'
			if(file.charAt(0) == '.')
				m_scopeFile = file.substring(2, file.length());
		    else
		    	m_scopeFile = file;
    		
    		if(m_scopeFile.charAt(0) != '<' &&
    				!m_scopeFile.equals(m_file))
			{
			    m_dependencies.add(m_scopeFile);
			}
    		
    		m_currentincludeline = nline;
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
     * @brief This function get the library dependecies of a project.
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

    private String m_filename = "";
    private String m_file = "";
    private String m_directoryFile = "";
    private String m_scope = "";
    private String m_scopeFile = "";
    private String m_sersym = ">>";
    private String m_typelimitation = null;
    private HashMap<String, TypeCode> m_types = null;
    private HashMap<String, com.eprosima.rpcdds.tree.Exception> m_exceptions = null;
    private HashSet<String> m_dependencies;
    private HashSet<String> m_includedependency;
    private boolean m_scopeLimitToAll = false;
    
    //! Store all global definitions.
    private ArrayList<Definition> m_definitions;
    //! Cache the first interface.
    private Interface m_firstinterface = null;
  //! Cache the first exception.
    private com.eprosima.rpcdds.tree.Exception m_firstexception = null;
    
    private int m_currentincludeline = 0;
}
