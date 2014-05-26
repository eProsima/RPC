package com.eprosima.fastrpc;

import com.eprosima.fastrpc.fastrpcgen;
import com.eprosima.fastrpc.exceptions.BadArgumentException;
import com.eprosima.log.ColorMessage;

public class rpcddsgen extends fastrpcgen
{
    public rpcddsgen(String[] args) throws BadArgumentException
    {
        super(args);
    }

    public static void main(String[] args) throws Exception
    {
        ColorMessage.load();

        if(loadPlatforms())
        {
            try
            {
                rpcddsgen.m_protocol = PROTOCOL.DDS;
                rpcddsgen.m_appName = "rpcddsgen";
                rpcddsgen.m_appProduct = "rpcdds";
                rpcddsgen.m_appEnv = "RPCDDSHOME";
                rpcddsgen main = new rpcddsgen(args);
                if(main.execute())
                	System.exit(0);
            }
            catch(BadArgumentException ex)
            {
                System.out.println(ColorMessage.error("BadArgumentException") + ex.getMessage());
                printHelp();
            }
        }
        
        System.exit(-1);
    }
}
