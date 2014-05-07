package com.eprosima.fastrpc.idl.grammar;

import java.io.File;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Stack;

import com.eprosima.fastrpc.fastrpcgen;
import com.eprosima.idl.parser.tree.Interface;
import com.eprosima.idl.parser.tree.Operation;
import com.eprosima.idl.parser.typecode.Member;
import com.eprosima.idl.parser.typecode.StructTypeCode;

public class Context extends com.eprosima.idl.context.Context
{
    // TODO Remove middleware parameter. It is temporal while cdr and rest don't have async functions.
    public Context(String filename, String file, ArrayList includePaths, boolean clientcode, boolean servercode,
            String appProduct, fastrpcgen.PROTOCOL protocol, fastrpcgen.DDS_TYPES ddstypes)
    {
        super(filename, file, includePaths);
        
        
        m_clientcode = clientcode;
        m_servercode = servercode;
        m_randomGenNames = new Stack<String>();

        // TODO Remove
        m_appProduct = appProduct;
        m_protocol = protocol;
        m_ddstypes = ddstypes;
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
     * @brief This function is used to know if a project has to generate the Types.
     */
    public boolean isProjectNeedTypes()
    {
    	com.eprosima.idl.parser.tree.Exception ex = null;;
    	
    	if((ex = getFirstException()) != null)
    		return true;
    	
    	return false;
    }
    
    /*!
     * @brief This function is used in this project to get the first discovered interface.
     */
    public Interface getFirstInterface()
    { 
        for(int count = 0; m_firstinterface == null && count < getDefinitions().size(); ++count)
        {
            m_firstinterface = getDefinitions().get(count).getFirstInterface(getScopeFile());
        }
        
        return m_firstinterface;
    }
    
    // TODO Ver si es necesario.
    /*!
     * @brief This function is used in this project to get the first discovered exception.
     */
    public com.eprosima.idl.parser.tree.Exception getFirstException()
    {
    	for(int count = 0; m_firstexception == null && count < getDefinitions().size(); ++count)
        {
    		m_firstexception = getDefinitions().get(count).getFirstException(getScopeFile());
        }
        
        return m_firstexception;
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
    public String getProduct()
    {
        return m_appProduct;
    }

    public boolean isDds()
    {
        if(m_protocol == fastrpcgen.PROTOCOL.DDS)
            return true;

        return false;
    }

    public boolean isAnyCdr()
    {
        if((m_protocol == fastrpcgen.PROTOCOL.DDS &&
                    m_ddstypes == fastrpcgen.DDS_TYPES.EPROSIMA) ||
                m_protocol == fastrpcgen.PROTOCOL.FASTCDR)
            return true;

        return false;
    }

    public boolean isCdr()
    {
        if(m_protocol == fastrpcgen.PROTOCOL.DDS &&
                m_ddstypes == fastrpcgen.DDS_TYPES.EPROSIMA)
            return true;

        return false;
    }

    public boolean isFastcdr()
    {
        if(m_protocol == fastrpcgen.PROTOCOL.FASTCDR)
            return true;

        return false;
    }

    public boolean isRtiTypes()
    {
        return m_ddstypes == fastrpcgen.DDS_TYPES.RTI;
    }

    public boolean isFastrpcProduct()
    {
        return true;
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getNewRandomName()
    {
        String name = "type_" + ++m_randomGenName;
        m_randomGenNames.push(name);
        return name;
    }

    public String getNewLoopVarName()
    {
        m_loopVarName = 'a';
        return Character.toString(m_loopVarName);
    }

    public String getNextLoopVarName()
    {
        return Character.toString(++m_loopVarName);
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getLastRandomName()
    {
        return m_randomGenNames.pop();
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
    					String type = member.getTypecode().getCppTypename();
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

    private String m_typelimitation = null;
    
    //! Cache the first interface.
    private Interface m_firstinterface = null;
    //! Cache the first exception.
    private com.eprosima.idl.parser.tree.Exception m_firstexception = null;

    // TODO Lleva la cuenta de generación de nuevos nombres.
    private int m_randomGenName = 0;
    private Stack<String> m_randomGenNames = null;
    // TODO Lleva la cuenta del nombre de variables para bucles anidados.
    private char m_loopVarName = 'a';
    
    // Stores if the user will generate the client source.
    private boolean m_clientcode = true;
    // Stores if the user will generate the server source.
    private boolean m_servercode = true;

    // TODO Remove
    private String m_appProduct = null;
    private fastrpcgen.PROTOCOL m_protocol = null;
    private fastrpcgen.DDS_TYPES m_ddstypes = fastrpcgen.DDS_TYPES.EPROSIMA;
}
