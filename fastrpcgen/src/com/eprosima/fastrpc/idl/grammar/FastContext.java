package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

public class FastContext extends Context
{
    public FastContext(String filename, String file, ArrayList includePaths, boolean clientcode, boolean servercode,
            String appProduct)
    {
        super(filename, file, includePaths, clientcode, servercode, appProduct);
    }

    public boolean isDds()
    {
        return false;
    }

    public boolean isAnyCdr()
    {
        return true;
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

