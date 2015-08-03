package com.eprosima.fastrpc.idl.tree;

import java.security.MessageDigest;
import com.eprosima.idl.parser.tree.Annotation;
import org.antlr.v4.runtime.Token;

public class Operation extends com.eprosima.idl.parser.tree.Operation
{
    public Operation(String scopeFile, boolean isInScope, String scope, String name, Token tk)
    {
        super(scopeFile, isInScope, scope, name, tk);
    }

    public String getMd5()
    {
        try
        {
            MessageDigest md = MessageDigest.getInstance("MD5");

            if(md != null)
            {
                byte[] md5 = md.digest(getScopedname().getBytes());
                int length = md5.length;
                return String.format("0x%02X%02X%02X%02X", md5[length - 4], md5[length - 3],
                        md5[length - 2], md5[length - 1]);
            }
        }
        catch(java.lang.Exception ex)
        {
            System.out.println("ERROR<Operation::getMd5>: " + ex.getMessage());
        }
        
        return null;
    }

    ////////// RESTful block //////////
    
    public String getMethod() {
        Annotation annotation = getAnnotations().get("METHOD");

        if(annotation != null)
            return annotation.getValue("value");

        return null;
    }
    
    public String getBody() {
        Annotation annotation = getAnnotations().get("BODY");

        if(annotation != null)
            return annotation.getValue("value");

        return null;
    }

    /////// End of RESTful block //////
}
