package com.eprosima.fastrpc.solution;

import java.util.ArrayList;

public class Solution extends com.eprosima.solution.Solution
{
	public Solution(boolean serverside, boolean clientside)
	{
        super();

		m_serverside = serverside;
		m_clientside = clientside;
	}
	
	public boolean getServerside()
	{
		return m_serverside;
	}
	
	public boolean getClientside()
	{
		return m_clientside;
	}
	
	private boolean m_serverside = true;
	private boolean m_clientside = true;
}
