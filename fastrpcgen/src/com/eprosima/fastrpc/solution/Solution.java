package com.eprosima.fastrpc.solution;

import com.eprosima.fastrpc.fastrpcgen;
import java.util.ArrayList;

public class Solution extends com.eprosima.solution.Solution
{
	public Solution(fastrpcgen.PROTOCOL protocol, fastrpcgen.DDS_TYPES types, boolean serverside, boolean clientside)
	{
        super();

        m_protocol = protocol;
        m_types = types;
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

    public boolean getNeedsFastcdr()
    {
        return ((m_protocol == fastrpcgen.PROTOCOL.DDS && m_types == fastrpcgen.DDS_TYPES.EPROSIMA) || m_protocol == fastrpcgen.PROTOCOL.FASTCDR);
    }

    public boolean getNeedsRTI()
    {
        return (m_protocol == fastrpcgen.PROTOCOL.DDS);
    }
	
	private boolean m_serverside = true;
	private boolean m_clientside = true;
    private fastrpcgen.PROTOCOL m_protocol;
    private fastrpcgen.DDS_TYPES m_types;
}
