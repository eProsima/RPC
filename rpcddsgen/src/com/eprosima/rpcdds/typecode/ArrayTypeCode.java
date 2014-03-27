package com.eprosima.rpcdds.typecode;

import java.util.List;
import java.util.ArrayList;

import org.antlr.stringtemplate.StringTemplate;

import com.eprosima.rpcdds.util.Pair;

public class ArrayTypeCode extends ContainerTypeCode
{
    public ArrayTypeCode()
    {
        super(TypeCode.KIND_ARRAY);
        
        m_dimensions = new ArrayList<String>();
    }
    
    @Override
    public boolean isIsType_f(){return true;}
    
    @Override
    public String getCppTypename()
    {
        StringTemplate first = null, second = null, fin = null;
        String prevf = null, prevs = null;
        
        for(int count = 0; count < m_dimensions.size(); ++count)
        {     
            first = cpptypesgr.getInstanceOf("type_" + Integer.toHexString(TypeCode.KIND_ARRAY) + "_first");
            second = cpptypesgr.getInstanceOf("type_" + Integer.toHexString(TypeCode.KIND_ARRAY) + "_second");
            second.setAttribute("size", m_dimensions.get(count));
            
            if(prevf != null)
            {
                first.setAttribute("prev", prevf);
            }
            if(prevs != null)
            {
                second.setAttribute("prev", prevs);
            }
            
            prevf = first.toString();
            prevs = second.toString();
        }
        
        fin = getCppTypenameFromStringTemplate();
        fin.setAttribute("firs", prevf);
        fin.setAttribute("secon", prevs);
        fin.setAttribute("type", getContentTypeCode().getCppTypename());
        
        return fin.toString();
    }
    
    public String getIdlTypename()
    {
        return getContentTypeCode().getIdlTypename();
    }

    public void addDimension(String dimension)
    {
        m_dimensions.add(dimension);
    }

    public List<String> getDimensions()
    {
        return m_dimensions;
    }

    public String getSize()
    {
        String ret = "";

        for(int count = 0; count < m_dimensions.size(); ++count)
        {
            if(ret.isEmpty())
                ret += "(";
            else
                ret += " * ";

            ret += m_dimensions.get(count);
        }

        if(!ret.isEmpty())
            ret += ")";

        return ret;
    }

    // TODO Used in stringtemplate for RTI DDS types.
    public String getArrayExtension()
    {
        String ret = "";

        for(int count = 0; count < m_dimensions.size(); ++count)
        {
            ret += "[" + m_dimensions.get(count) + "]";
        }

        return ret;
    }
    
    /*public Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned)
    {
        int lcontainTypeSize = getContentTypeCode().getSize();
        int lcontainTypeAlign = 0;
        int larraySize = 1;
        
        // Element contained type.
        if(lcontainTypeSize > 4)
        {
            lcontainTypeAlign = (lcontainTypeSize - (currentSize % lcontainTypeSize)) & (lcontainTypeSize - 1);
        }
        
        // Calculate array size.
        for(int count = 0; count < m_dimensions.size(); ++count)
        {     
            larraySize *= Integer.parseInt(m_dimensions.get(count));
        }
        
        return new Pair<Integer, Integer>(currentSize + lcontainTypeAlign + (larraySize *  lcontainTypeSize), lcontainTypeSize);
    }
    
    public int getMaxSerializedSizeWithoutAlignment(int currentSize)
    {
        int lcontainTypeSize = getContentTypeCode().getSize();
        int larraySize = 1;
        
        // Calculate array size.
        for(int count = 0; count < m_dimensions.size(); ++count)
        {     
            larraySize *= Integer.parseInt(m_dimensions.get(count));
        }
        
        return currentSize + (larraySize * lcontainTypeSize);
    }*/
    
    private List<String> m_dimensions;
}
