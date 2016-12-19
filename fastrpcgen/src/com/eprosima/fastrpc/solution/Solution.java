package com.eprosima.fastrpc.solution;

import java.util.ArrayList;
import com.eprosima.fastrpc.fastrpcgen;

public class Solution extends com.eprosima.solution.Solution
{
    public Solution(fastrpcgen.PROTOCOL protocol, String example, boolean serverside, boolean clientside)
    {
        super();

        m_serverside = serverside;
        m_clientside = clientside;
        m_example = example;
	m_protocol = protocol;
    }

    public boolean getServerside()
    {
        return m_serverside;
    }

    public boolean getClientside()
    {
        return m_clientside;
    }

    public ArrayList<String> getLibrariesDebug()
    {
        ArrayList<String> libraries = super.getLibraries();
        ArrayList<String> ret = new ArrayList<String>();

        for(int count = 0; count < libraries.size(); ++count)
        {
            ret.add(libraries.get(count) + "d");
        }

        return ret;
    }

    public ArrayList<String> getLibrariesStatic()
    {
        ArrayList<String> libraries = super.getLibraries();
        ArrayList<String> ret = new ArrayList<String>();

        for(int count = 0; count < libraries.size(); ++count)
        {
            if(libraries.get(count).startsWith("ndds"))
                ret.add(libraries.get(count) + "z");
            else
                ret.add("lib" + libraries.get(count));
        }

        return ret;
    }

    public ArrayList<String> getLibrariesStaticDebug()
    {
        ArrayList<String> libraries = super.getLibraries();
        ArrayList<String> ret = new ArrayList<String>();

        for(int count = 0; count < libraries.size(); ++count)
        {
            if(libraries.get(count).startsWith("ndds"))
                ret.add(libraries.get(count) + "zd");
            else
                ret.add("lib" + libraries.get(count) + "d");
        }

        return ret;
    }

    public boolean isIsVS2015()
    {
	    return m_example.substring(8, 14).equals("VS2015");
    }

    public boolean isIsVS2013()
    {
	    return m_example.substring(8, 14).equals("VS2013");
    }
    
    private boolean m_serverside = true;
    private boolean m_clientside = true;
    private String m_example = null;
    private fastrpcgen.PROTOCOL m_protocol = fastrpcgen.PROTOCOL.FASTCDR; // Default protocol -> fastcdr
}
