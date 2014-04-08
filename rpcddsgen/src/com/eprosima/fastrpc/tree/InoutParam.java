package com.eprosima.fastrpc.tree;

import com.eprosima.fastrpc.typecode.TypeCode;

public class InoutParam extends Param
{
    public InoutParam(String name, TypeCode typecode)
    {
        super(name, typecode);
    }

    @Override
    public boolean isInput()
    {
        return true;
    }

    @Override
    public boolean isOutput()
    {
        return true;
    }

    @Override
    public String getComment()
    {
        return "inout";
    }

}
