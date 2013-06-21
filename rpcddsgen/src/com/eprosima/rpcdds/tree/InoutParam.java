package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.typecode.TypeCode;

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
