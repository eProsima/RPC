package com.eprosima.rpcdds.typecode;

import org.antlr.stringtemplate.StringTemplate;

import com.eprosima.rpcdds.util.Pair;

public class PrimitiveTypeCode extends TypeCode
{
    public PrimitiveTypeCode(int kind)
    {
        super(kind);
    }

    @Override
    public String getTypename()
    {
        return getTypenameFromStringTemplate().toString();
    }
    
    @Override
    public boolean isPrimitive()
    {
        return true;
    }
    
    @Override
    public String getInitialValue()
    {   
    	if(getKind() != KIND_LONGDOUBLE)
    		return "= 0";
    	
    	return "";
    }
    
    public Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned)
    {
        int size = getSize();
        
        if(size <= lastDataAligned)
        {
            return new Pair<Integer, Integer>(currentSize + size, size);
        }
        else
        {
            int align = (size - (currentSize % size)) & (size - 1);
            return new Pair<Integer, Integer>(currentSize + size + align, size);
        }
    }
    
    public int getMaxSerializedSizeWithoutAlignment(int currentSize)
    {
        return currentSize + getSize();
    }
    
    @Override
    public int getSize()
    {
        switch(getKind())
        {
            case KIND_DOUBLE:
            case KIND_LONGLONG:
            case KIND_ULONGLONG:
                return 8;
            case KIND_LONG:
            case KIND_ULONG:
            case KIND_FLOAT:
            case KIND_WCHAR:
                return 4;         
            case KIND_SHORT:
            case KIND_USHORT:
                return 2;
            case KIND_BOOLEAN:
            case KIND_CHAR:
            case KIND_OCTET:
                return 1;               
        }
        
        return 0;
    }
}
