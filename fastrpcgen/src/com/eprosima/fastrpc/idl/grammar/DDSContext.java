package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

import com.eprosima.fastcdr.idl.util.CdrVersion;
import com.eprosima.fastrpc.fastrpcgen;

public class DDSContext extends Context
{
    public DDSContext(String file, ArrayList<String> includePaths, boolean clientcode, boolean servercode,
            String appProduct, boolean include_include_prefix, fastrpcgen.DDS_TYPES ddstypes, CdrVersion.Select cdr_version)
    {
        super(file, includePaths, clientcode, servercode, appProduct, include_include_prefix, cdr_version);

        m_ddstypes = ddstypes;
    }

    public boolean isDds()
    {
        return true;
    }

    public boolean isCdr()
    {
        if(m_ddstypes == fastrpcgen.DDS_TYPES.EPROSIMA)
            return true;

        return false;
    }

    public boolean isFastcdr()
    {
        return false;
    }

    public boolean isRtiTypes()
    {
        return m_ddstypes == fastrpcgen.DDS_TYPES.RTI;
    }

    private fastrpcgen.DDS_TYPES m_ddstypes = fastrpcgen.DDS_TYPES.EPROSIMA;
}
