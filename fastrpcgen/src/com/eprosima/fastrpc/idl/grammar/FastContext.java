package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

import com.eprosima.fastcdr.idl.util.CdrVersion;

public class FastContext extends Context
{
    public FastContext(String file, ArrayList<String> includePaths, boolean clientcode, boolean servercode,
            String appProduct, boolean include_include_prefix, CdrVersion.Select cdr_version)
    {
        super(file, includePaths, clientcode, servercode, appProduct, include_include_prefix, cdr_version);
    }

    public boolean isDds()
    {
        return false;
    }

    public boolean isCdr()
    {
        return false;
    }

    public boolean isFastcdr()
    {
        return true;
    }

    public boolean isRtiTypes()
    {
        return false;
    }
}
