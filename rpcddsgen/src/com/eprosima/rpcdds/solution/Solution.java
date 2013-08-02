package com.eprosima.rpcdds.solution;

import java.util.ArrayList;

public class Solution
{
	public Solution(boolean serverside, boolean clientside)
	{
		m_serverside = serverside;
		m_clientside = clientside;
		m_projects = new ArrayList<Project>();
	}
	
	public void addProject(Project project)
	{
		m_projects.add(project);
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
						if(deps.get(count).equals(m_cacheprojects.get(acount).getFile()))
						{
							found = true;
						}
					}
					
					if(!found)
					{
						// Search in the rest of projects to process.
						for(int rcount = 0; !found && rcount < tmpArray.size(); ++rcount)
						{
							if(deps.get(count).equals(tmpArray.get(rcount).getFile()))
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
	
	public boolean getServerside()
	{
		return m_serverside;
	}
	
	public boolean getClientside()
	{
		return m_clientside;
	}
	
	private ArrayList<Project> m_projects = null;
	private ArrayList<Project> m_cacheprojects = null;
	boolean m_serverside = true;
	boolean m_clientside = true;
}
