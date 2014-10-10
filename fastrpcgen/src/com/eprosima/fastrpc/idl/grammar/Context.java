package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;
import java.util.Stack;

import com.eprosima.fastrpc.fastrpcgen;

public abstract class Context extends com.eprosima.idl.context.Context
{
    public Context(String filename, String file, ArrayList includePaths, boolean clientcode, boolean servercode,
            String appProduct)
    {
        super(filename, file, includePaths);
        
        
        m_clientcode = clientcode;
        m_servercode = servercode;
        m_randomGenNames = new Stack<String>();
        m_appProduct = appProduct;
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

    public String getProduct()
    {
        return m_appProduct;
    }

    public abstract boolean isDds();

    public abstract boolean isAnyCdr();

    public abstract boolean isCdr();

    public abstract boolean isFastcdr();

    public abstract boolean isRtiTypes();

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
}
