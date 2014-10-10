package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

import com.eprosima.fastrpc.fastrpcgen;
import com.eprosima.fastrpc.idl.tree.*;

import com.eprosima.idl.parser.tree.TreeNode;

public class DDSContext extends Context
{
    public DDSContext(String filename, String file, ArrayList includePaths, boolean clientcode, boolean servercode,
            String appProduct, fastrpcgen.DDS_TYPES ddstypes)
    {
        super(filename, file, includePaths, clientcode, servercode, appProduct);
        
        m_ddstypes = ddstypes;
    }

    public Interface createInterface(String name)
    {
        Interface interfaceObject = new Interface(getScopeFile(), isInScopedFile(), getScope(), name);
        addInterface(interfaceObject);
        return interfaceObject;
    }

    public com.eprosima.fastrpc.idl.tree.Exception createException(String name)
    {
        com.eprosima.fastrpc.idl.tree.Exception exceptionObject = new com.eprosima.fastrpc.idl.tree.Exception(getScopeFile(), isInScopedFile(), getScope(), name);
        addException(exceptionObject);
        return exceptionObject;
    }

    public Operation createOperation(String name)
    {
        Operation operationObject = new Operation(getScopeFile(), isInScopedFile(), null, name);
        return operationObject;
    }

    public boolean isDds()
    {
        return true;
    }

    public boolean isAnyCdr()
    {
        if(m_ddstypes == fastrpcgen.DDS_TYPES.EPROSIMA)
            return true;

        return false;
    }

    public boolean isCdr()
    {
        if(m_ddstypes == fastrpcgen.DDS_TYPES.EPROSIMA)
            return true;

        return false;
    }

    public boolean isFastcdr()
    {
        return false;
    }

    public boolean isRtiTypes()
    {
        return m_ddstypes == fastrpcgen.DDS_TYPES.RTI;
    }

    private fastrpcgen.DDS_TYPES m_ddstypes = fastrpcgen.DDS_TYPES.EPROSIMA;
}
