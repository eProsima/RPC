package com.eprosima.fastrpc.idl.tree;

import com.eprosima.fastrpc.idl.parser.typecode.TypeCode;
import com.eprosima.idl.parser.typecode.Member;

import java.security.MessageDigest;
import org.antlr.v4.runtime.Token;

public class Exception extends com.eprosima.idl.parser.tree.Exception
{
    public Exception(String scopeFile, boolean isInScope, String scope, String name, Token tk)
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

    public String getMaxSerializedSize()
    {
        return Long.toString(maxSerializedSize(0));
    }

    private long maxSerializedSize(
            long current_alignment)
    {
        long initial_alignment = current_alignment;

        for (Member member : getMembers())
        {
            current_alignment += ((TypeCode)member.getTypecode()).maxSerializedSize(current_alignment);
        }

        return current_alignment - initial_alignment;
    }
}
