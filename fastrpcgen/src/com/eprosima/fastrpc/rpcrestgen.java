package com.eprosima.fastrpc;

import com.eprosima.fastrpc.fastrpcgen;
import com.eprosima.fastrpc.exceptions.BadArgumentException;
import com.eprosima.log.ColorMessage;

public class rpcrestgen extends fastrpcgen
{
    public rpcrestgen(String[] args) throws BadArgumentException
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
                rpcrestgen.m_protocol = PROTOCOL.REST;
                rpcrestgen.m_appName = "rpcrestgen";
                rpcrestgen.m_appProduct = "rpcrest";
                rpcrestgen.m_appEnv = "RPCRESTHOME";
                rpcrestgen main = new rpcrestgen(args);
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

