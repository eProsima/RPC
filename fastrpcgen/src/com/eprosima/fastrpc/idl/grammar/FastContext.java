package com.eprosima.fastrpc.idl.grammar;

import java.util.ArrayList;

import com.eprosima.fastcdr.idl.util.CdrVersion;
import com.eprosima.idl.generator.manager.TemplateManager;

public class FastContext extends Context
{
    public FastContext(
            TemplateManager tmanager,
            String file,
            ArrayList<String> includePaths,
            boolean clientcode,
            boolean servercode,
            String appProduct,
            boolean include_include_prefix,
            boolean is_generating_api,
            CdrVersion.Select cdr_version)
    {
        super(tmanager, file, includePaths, clientcode, servercode, appProduct, include_include_prefix, is_generating_api, cdr_version);
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
