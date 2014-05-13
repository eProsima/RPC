package com.eprosima.fastrpc.solution;

import java.util.ArrayList;

public class Solution extends com.eprosima.solution.Solution
{
	public Solution(String version, boolean serverside, boolean clientside)
	{
            super();

            // Detect OS
            m_os = System.getProperty("os.name");

		m_serverside = serverside;
		m_clientside = clientside;
		m_version = version;
	}
	
	public boolean getServerside()
	{
		return m_serverside;
	}
	
	public boolean getClientside()
	{
		return m_clientside;
	}

	@Override
	public ArrayList<String> getLibraries()
	{
        ArrayList<String> libraries = super.getLibraries();
        ArrayList<String> ret = new ArrayList<String>();

        for(int count = 0; count < libraries.size(); ++count)
        {
            if(libraries.get(count).startsWith("rpcdds") ||
                    libraries.get(count).startsWith("rpcrest") ||
                    libraries.get(count).startsWith("fastrpc"))
                ret.add(libraries.get(count) + "-" + m_version);
	    else
                ret.add(libraries.get(count));
        }

        return ret;
	}

	public ArrayList<String> getLibrariesDebug()
	{
        ArrayList<String> libraries = super.getLibraries();
        ArrayList<String> ret = new ArrayList<String>();

        for(int count = 0; count < libraries.size(); ++count)
        {
            if(libraries.get(count).startsWith("rpcdds") ||
                    libraries.get(count).startsWith("rpcrest") ||
                    libraries.get(count).startsWith("fastrpc"))
                ret.add(libraries.get(count) + "d-" + m_version);
	    else
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
            else if(libraries.get(count).startsWith("rpcdds") ||
                    libraries.get(count).startsWith("rpcrest") ||
                    libraries.get(count).startsWith("fastrpc"))
                ret.add("lib" + libraries.get(count) + "-" + m_version);
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
            else if(libraries.get(count).startsWith("rpcdds") ||
                    libraries.get(count).startsWith("rpcrest") ||
                    libraries.get(count).startsWith("fastrpc"))
                ret.add("lib" + libraries.get(count) + "d-" + m_version);
            else
                ret.add("lib" + libraries.get(count) + "d");
        }

        return ret;
	}
	
	private boolean m_serverside = true;
	private boolean m_clientside = true;
	private String m_version = null;
	private String m_os = null;
}
