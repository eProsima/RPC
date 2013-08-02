package com.eprosima.rpcdds.typecode;

import java.util.List;

import com.eprosima.rpcdds.util.Pair;

public class StringTypeCode extends TypeCode
{
    public StringTypeCode(int kind, String maxsize)
    {
        super(kind);
        m_maxsize = maxsize;
    }
    @Override
    public String getTypename()
    {
        return getTypenameFromStringTemplate().toString();
    }
    
    @Override
    public String getStTypename()
    {
        return getSTTypenameFromStringTemplate().toString();
    }
    
    @Override
    public String getInitialValue()
    {   
        return "= NULL";
    }
    
    public String getMaxsize()
    {
        return m_maxsize;
    }
    
    public Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned)
    {
        int lcurrentSize = currentSize;
        
        // Length
        if(4 <= lastDataAligned)
        {
            lcurrentSize += 4;
        }
        else
        {
            int align = (4 - (lcurrentSize % 4)) & (4 - 1);
            lcurrentSize += 4 + align;
        }
        
        if(m_maxsize == null)
        {
            return new Pair<Integer, Integer>(lcurrentSize + 255, 1);
        }
        else
        {
            return new Pair<Integer, Integer>(lcurrentSize + Integer.parseInt(m_maxsize), 1);
        }
    }
    
    public int getMaxSerializedSizeWithoutAlignment(int currentSize)
    {
        if(m_maxsize == null)
        {
            return currentSize + 4 + 255;
        }
        else
        {
            return currentSize + 4 + Integer.parseInt(m_maxsize);
        }
    }
    
    @Override
    public boolean isString()
    {
        return true;
    }
    
    private String m_maxsize = null;
}
