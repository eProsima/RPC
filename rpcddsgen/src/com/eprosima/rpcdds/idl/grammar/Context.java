package com.eprosima.rpcdds.idl.grammar;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import com.eprosima.rpcdds.tree.Definition;
import com.eprosima.rpcdds.tree.Interface;
import com.eprosima.rpcdds.typecode.TypeCode;

public class Context
{
    public Context(String filename)
    {
        m_filename = filename;
        m_types = new HashMap<String, TypeCode>();
        m_definitions = new ArrayList<Definition>();
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

    public void addTypeCode(String name, TypeCode typecode)
    {
        m_types.put(name, typecode);
    }

    public TypeCode getTypeCode(String name)
    {
        int lastIndex = -1;
        TypeCode returnedValue = m_types.get(name);

        // Probar si no tiene scope, con el scope acutal.
        if(returnedValue == null && ((lastIndex = name.lastIndexOf("::")) == -1))
        {
            returnedValue = m_types.get(m_scope + name);
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
     * @brief This function is used in this project ot get the first discovered interface.
     */
    public Interface getFirstInterface()
    { 
        for(int count = 0; m_firstinterface == null && count < m_definitions.size(); ++count)
        {
            m_firstinterface = m_definitions.get(count).getFirstInterface();
        }
        
        return m_firstinterface;
    }

    private String m_filename = "";
    private String m_scope = "";
    private String m_sersym = ">>";
    private String m_typelimitation = null;
    private Map<String, TypeCode> m_types = null;
    
    //! Store all global definitions.
    private ArrayList<Definition> m_definitions;
    //! Cache the first interface.
    private Interface m_firstinterface = null;
}
