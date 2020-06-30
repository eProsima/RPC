package com.eprosima.fastrpc.idl.grammar;

import com.eprosima.fastrpc.idl.tree.*;
import com.eprosima.idl.parser.typecode.TypeCode;

import java.util.ArrayList;
import java.util.Stack;

import org.antlr.v4.runtime.Token;

public abstract class Context extends com.eprosima.idl.context.Context implements com.eprosima.fastcdr.idl.context.Context
{
    public Context(String filename, String file, ArrayList<String> includePaths, boolean clientcode, boolean servercode,
            String appProduct, boolean include_include_prefix)
    {
        super(filename, file, includePaths);


        m_clientcode = clientcode;
        m_servercode = servercode;
        m_randomGenNames = new Stack<String>();
        m_appProduct = appProduct;
        m_include_include_prefix = include_include_prefix;
    }

    public void setTypelimitation(String lt)
    {
        m_typelimitation = lt;
    }

    public String getTypelimitation()
    {
        return m_typelimitation;
    }

    public boolean isClient()
    {
        return m_clientcode;
    }

    public boolean isServer()
    {
        return m_servercode;
    }

    public abstract boolean isDds();

    public abstract boolean isRtiTypes();

    /*** Functions inherated from FastCDR Context ***/

    public boolean isPrintexception()
    {
        return true;
    }

    public boolean isPrintoperation()
    {
        return true;
    }

    public String getProduct()
    {
        return m_appProduct;
    }

    public String getIncludePrefix()
    {
        if(m_include_include_prefix)
            return m_appProduct + "/";

        return "";
    }

    public String getNamespace()
    {
        return "rpc";
    }

    public abstract boolean isCdr();

    public abstract boolean isFastcdr();

    public boolean isAnyCdr()
    {
        return isCdr() || isFastcdr();
    }


    /*** End ***/

    @Override
    public Interface createInterface(String name, Token token)
    {
        Interface interfaceObject = new Interface(getScopeFile(), isInScopedFile(), getScope(), name, token);
        addInterface(interfaceObject);
        return interfaceObject;
    }

    @Override
    public com.eprosima.fastrpc.idl.tree.Exception createException(String name, Token token)
    {
        com.eprosima.fastrpc.idl.tree.Exception exceptionObject = new com.eprosima.fastrpc.idl.tree.Exception(getScopeFile(), isInScopedFile(), getScope(), name, token);
        addException(exceptionObject);
        return exceptionObject;
    }

    @Override
    public Operation createOperation(String name, Token token)
    {
        Operation operationObject = new Operation(getScopeFile(), isInScopedFile(), null, name, token);
        return operationObject;
    }

    @Override
    public Param createParam(String name, TypeCode typecode, com.eprosima.idl.parser.tree.Param.Kind kind)
    {
        Param paramObject = new Param(name, typecode, kind);
        return paramObject;
    }

    @Override
    public boolean isGenerateTypeObject()
    {
        return false;
    }

    @Override
    public boolean isGenerateTypesC()
    {
        return false;
    }

    @Override
    public boolean isGenerateTypesROS2()
    {
        return false;
    }

    @Override
    public String getHeaderGuardName ()
    {
        return getFilename().toUpperCase();
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getNewRandomName()
    {
        String name = "type_" + ++m_randomGenName;
        m_randomGenNames.push(name);
        return name;
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getLastRandomName()
    {
        return m_randomGenNames.pop();
    }

    private String m_typelimitation = null;

    // TODO Lleva la cuenta de generacion de nuevos nombres.
    private int m_randomGenName = 0;
    private Stack<String> m_randomGenNames = null;
    // TODO Lleva la cuenta del nombre de variables para bucles anidados.
    private char m_loopVarName = 'a';

    // Stores if the user will generate the client source.
    private boolean m_clientcode = true;
    // Stores if the user will generate the server source.
    private boolean m_servercode = true;

    private String m_appProduct = null;
    private boolean m_include_include_prefix = true;
}
