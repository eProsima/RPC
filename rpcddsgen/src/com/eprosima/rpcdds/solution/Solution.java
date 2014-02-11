package com.eprosima.rpcdds.solution;

import java.util.ArrayList;

public class Solution
{
	public Solution(String protocol, boolean serverside, boolean clientside)
	{
        m_protocol = protocol;
		m_serverside = serverside;
		m_clientside = clientside;
		m_projects = new ArrayList<Project>();
		m_libraries = new ArrayList<String>();
		m_includes = new ArrayList<String>();
		
		// Detect OS
        m_os = System.getProperty("os.name");
	}
	
	public void addProject(Project project)
	{
		project.setParent(this);
		m_projects.add(project);
	}
	
	public String getOS()
	{
		return m_os;
	}
	
	/*!
	 * @brief This solution orders projects by dependencies. Used in string templates.
	 */
	public ArrayList getProjects()
	{
		if(m_cacheprojects == null)
		{
			ArrayList<Project> tmpArray = new ArrayList<Project>(m_projects);
			m_cacheprojects = new ArrayList<Project>();
			
			while(tmpArray.size() > 0)
			{
				Project proj = (Project)tmpArray.remove(0);
				
				// Search dependencies in project that was already processed.
				ArrayList deps = proj.getFullDependencies();
				
				boolean candidate = true;
				for(int count = 0; candidate && count < deps.size(); ++count)
				{
					boolean found = false;
					
					for(int acount = 0; !found && acount < m_cacheprojects.size(); ++acount)
					{
						if(compareNames((String)deps.get(count), m_cacheprojects.get(acount).getFile()))
						{
							found = true;
						}
					}
					
					if(!found)
					{
						// Search in the rest of projects to process.
						for(int rcount = 0; !found && rcount < tmpArray.size(); ++rcount)
						{
							if(compareNames((String)deps.get(count), tmpArray.get(rcount).getFile()))
							{
								found = true;
							}
						}
						
						// If found put the project to the end of the tmpArray.
						if(found)
						{
							tmpArray.add(proj);
							candidate = false;
						}
						else
						{
							System.out.println("WARNING: File " + deps.get(count) + " wasn't parsed. The generated example will not work");
						}
					}
				}
				
				if(candidate)
					m_cacheprojects.add(proj);
			}
		}
		
		return m_cacheprojects;
	}
	
	public boolean existsProject(String name)
	{
		boolean ret = false;
		for(int i = 0; i < m_projects.size(); ++i)
		{
			if(compareNames(m_projects.get(i).getFile(), name))
			{
				ret = true;
				break;
			}
		}
		
		return ret;
	}
	
	public boolean compareNames(String dep, String file)
	{
		if(m_os.contains("Windows"))
		{
			return dep.toLowerCase().equals(file.toLowerCase());
		}
		
		return dep.equals(file);
	}
	
	public void addLibrary(String library)
	{
	    m_libraries.add(library);
	}
	
	public ArrayList<String> getLibraries()
	{
	    return m_libraries;
	}
	
	public void addInclude(String include)
	{
	    m_includes.add(include);
	}
	
	public ArrayList<String> getIncludes()
	{
	    return m_includes;
	}
	
	public boolean getServerside()
	{
		return m_serverside;
	}
	
	public boolean getClientside()
	{
		return m_clientside;
	}

    public boolean isIsFastcdr()
    {
        return m_protocol.equals("fastcdr");
    }
	
	private ArrayList<Project> m_projects = null;
	private ArrayList<Project> m_cacheprojects = null;
	private ArrayList<String> m_libraries = null;
	private ArrayList<String> m_includes = null;
	private boolean m_serverside = true;
	private boolean m_clientside = true;
    private String  m_protocol = null;
	
	// OS
    String m_os = null;
}
