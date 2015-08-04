package com.eprosima.fastrpc.solution;

import java.util.ArrayList;
import java.util.LinkedHashSet;

import com.eprosima.solution.GUIDGenerator;

public class Project extends com.eprosima.solution.Project
{
	public Project(String name, String file, LinkedHashSet<String> dependencies)
	{
        super(name, file, dependencies);

		m_clientsrcfiles = new ArrayList<String>();
		m_clientincludefiles = new ArrayList<String>();
		m_serversrcfiles = new ArrayList<String>();
		m_serverincludefiles = new ArrayList<String>();
	}
	
	public void addClientSrcFile(String file)
	{
		m_clientsrcfiles.add(file);
	}
	
	public ArrayList<String> getClientSrcFiles()
	{
		return m_clientsrcfiles;
	}
	
	public void addClientIncludeFile(String file)
	{
		m_clientincludefiles.add(file);
	}
	
	public ArrayList<String> getClientIncludeFiles()
	{
		return m_clientincludefiles;
	}
	
	public void addServerSrcFile(String file)
	{
		m_serversrcfiles.add(file);
	}
	
	public ArrayList<String> getServerSrcFiles()
	{
		return m_serversrcfiles;
	}
	
	public void addServerIncludeFile(String file)
	{
		m_serverincludefiles.add(file);
	}
	
	public ArrayList<String> getServerIncludeFiles()
	{
		return m_serverincludefiles;
	}
	
	public boolean getContainsInterfaces()
	{
		return m_containsInterfaces;
	}
	
	public void setContainsInterfaces(boolean containsInterfaces)
	{
		m_containsInterfaces = containsInterfaces;
	}
	
	/*!
	 * @brief Used in string templates.
	 */
	public String getClientGuid()
	{
		return GUIDGenerator.genGUID(getFile() + "Client");
	}
	
	/*!
	 * @brief Used in string templates.
	 */
	public String getClientExampleGuid()
	{
		return GUIDGenerator.genGUID(getFile() + "ClientExample");
	}
	
	/*!
	 * @brief Used in string templates.
	 */
	public String getServerGuid()
	{
		return GUIDGenerator.genGUID(getFile() + "Server");
	}
	
	/*!
	 * @brief Used in string templates.
	 */
	public String getServerExampleGuid()
	{
		return GUIDGenerator.genGUID(getFile() + "ServerExample");
	}
	
	private boolean m_containsInterfaces = false;
	private ArrayList<String> m_clientsrcfiles = null;
	private ArrayList<String> m_clientincludefiles = null;
	private ArrayList<String> m_serversrcfiles = null;
	private ArrayList<String> m_serverincludefiles = null;
	String m_guid = null;
}
