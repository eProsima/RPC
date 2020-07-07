package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

import com.eprosima.idl.parser.tree.Module;
import com.eprosima.fastrpc.idl.tree.Interface;
import com.eprosima.fastrpc.idl.tree.Operation;
import com.eprosima.fastrpc.idl.tree.Param;
import com.eprosima.idl.parser.typecode.Member;
import com.eprosima.idl.parser.typecode.StructTypeCode;
import com.eprosima.idl.parser.typecode.TypeCode;

public class RESTContext extends Context
{
    public RESTContext(String filename, String file, ArrayList<String> includePaths, boolean clientcode, boolean servercode,
            String appProduct, boolean include_include_prefix)
    {
        super(filename, file, includePaths, clientcode, servercode, appProduct, include_include_prefix);
    }

    public boolean isDds()
    {
        return false;
    }

    public boolean isCdr()
    {
        return false;
    }

    public boolean isFastcdr()
    {
        return false;
    }

    public boolean isRtiTypes()
    {
        return false;
    }

    public String getDeserializeCode() {  
    	PathTree pathTree = new PathTree();
    	for(com.eprosima.idl.parser.tree.Interface interf: getInterfaces()) {
            Interface iface = (Interface)interf;
    		String path = iface.getPath();
    		
    		pathTree.addInterfaceName(path, iface.getName());
   			for(com.eprosima.idl.parser.tree.Operation operation: iface.getOperations()) {
   	   			pathTree.addMethod((Operation)operation);
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

    @Override
    public void addModule(Module module)
    {
        super.addModule(module);

        m_currentmodule = module;
    }

    /*!
     * @brief This function gets the current module that is been processed.
     */
    public Module getCurrentModule()
    {
        return m_currentmodule;
    }

    //! Current Module that is been processing.
    private Module m_currentmodule = null;
}
