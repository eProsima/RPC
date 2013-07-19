package com.eprosima.rpcdds.solution;

import java.util.ArrayList;
import java.util.HashSet;

import com.eprosima.rpcdds.util.Utils;

public class Project
{
	public Project(String name, String file, HashSet dependencies)
	{
		m_name = name;
		m_file = file;
		m_dependencies = dependencies;
		m_commonsrcfiles = new ArrayList();
		m_commonincludefiles = new ArrayList();
		m_clientsrcfiles = new ArrayList();
		m_clientincludefiles = new ArrayList();
		m_serversrcfiles = new ArrayList();
		m_serverincludefiles = new ArrayList();
	}
	
	public String getName()
	{
		return m_name;
	}
	
	public String getFile()
	{
		return m_file;
	}
	
	public void addCommonSrcFile(String file)
	{
		m_commonsrcfiles.add(file);
	}
	
	public ArrayList getCommonSrcFiles()
	{
		return m_commonsrcfiles;
	}
	
	public void addCommonIncludeFile(String file)
	{
		m_commonincludefiles.add(file);
	}
	
	public ArrayList getCommonIncludeFiles()
	{
		return m_commonincludefiles;
	}
	
	public void addClientSrcFile(String file)
	{
		m_clientsrcfiles.add(file);
	}
	
	public ArrayList getClientSrcFiles()
	{
		return m_clientsrcfiles;
	}
	
	public void addClientIncludeFile(String file)
	{
		m_clientincludefiles.add(file);
	}
	
	public ArrayList getClientIncludeFiles()
	{
		return m_clientincludefiles;
	}
	
	public void addServerSrcFile(String file)
	{
		m_serversrcfiles.add(file);
	}
	
	public ArrayList getServerSrcFiles()
	{
		return m_serversrcfiles;
	}
	
	public void addServerIncludeFile(String file)
	{
		m_serverincludefiles.add(file);
	}
	
	public ArrayList getServerIncludeFiles()
	{
		return m_serverincludefiles;
	}
	
	public boolean getUnique()
	{
		return m_unique;
	}
	
	public void setUnique(boolean unique)
	{
		m_unique = unique;
	}
	
	/*!
	 * @brief Used in string templates.
	 */
	public ArrayList getDependencies()
	{
		ArrayList array = new ArrayList(m_dependencies);
		
		for(int count = 0; count < array.size(); ++count)
		{
			array.set(count, Utils.getIDLFileNameOnly(array.get(count).toString()));
		}
		
		return array;
	}
	
	public ArrayList getFullDependencies()
	{
		return new ArrayList(m_dependencies);
	}
	
	private String m_name = null;
	private String m_file = null;
	private boolean m_unique = false;
	private ArrayList m_commonsrcfiles = null;
	private ArrayList m_commonincludefiles = null;
	private ArrayList m_clientsrcfiles = null;
	private ArrayList m_clientincludefiles = null;
	private ArrayList m_serversrcfiles = null;
	private ArrayList m_serverincludefiles = null;
	private HashSet m_dependencies = null;
}
