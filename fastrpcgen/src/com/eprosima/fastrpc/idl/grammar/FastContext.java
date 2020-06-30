package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

public class FastContext extends Context
{
    public FastContext(String filename, String file, ArrayList<String> includePaths, boolean clientcode, boolean servercode,
            String appProduct, boolean include_include_prefix)
    {
        super(filename, file, includePaths, clientcode, servercode, appProduct, include_include_prefix);
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

