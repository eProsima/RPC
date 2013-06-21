package com.eprosima.rpcdds.typecode;

import org.antlr.stringtemplate.StringTemplate;

import com.eprosima.rpcdds.util.Pair;

import java.util.List;
import java.util.ArrayList;

public class UnionTypeCode extends MemberedTypeCode
{
    public UnionTypeCode(String scope, String name, TypeCode discriminatorTypeCode)
    {
        super(TypeCode.KIND_UNION, scope, name);
        m_discriminatorTypeCode = discriminatorTypeCode;
    }
    
    public int addMember(UnionMember member)
    {
        return addMember((Member)member);
    }
    
    @Override
    public String getTypename()
    {
        StringTemplate st = getTypenameFromStringTemplate();
        st.setAttribute("name", getScopedname());
        return st.toString();
    }
    
    @Override
    public String getStTypename()
    {
        StringTemplate st = getSTTypenameFromStringTemplate();
        st.setAttribute("name", getScopedname());
        return st.toString();
    }
    
    public void setDefaultindex(int index)
    {
        if(m_defaultindex != -1)
            ((UnionMember)getMembers().get(m_defaultindex)).setDefault(false);
        
        m_defaultindex = index;
        ((UnionMember)getMembers().get(m_defaultindex)).setDefault(true);
    }
    
    public void setDefaultvalue(String value)
    {
        m_defaultValue = value;
    }
    
    // Used in stringtemplates
    public String getDefaultvalue()
    {
        return m_defaultValue;
    }
    
    // Used in stringtemplates
    public TypeCode getDiscriminator()
    {
        return m_discriminatorTypeCode;
    }
    
    // Used in stringtemplates
    public List<String> getTotallabels()
    {
        List<String> returnList = new ArrayList<String>();
        List<Member> mlist = getMembers();
        List<String> labels = null;
        
        for(int count = 0; count < mlist.size(); ++count)
        {
            if(count != m_defaultindex)
            {
                labels = ((UnionMember)mlist.get(count)).getLabels();
                for(int i = 0; i < labels.size(); ++i)
                    returnList.add(labels.get(i));
            }
        }
        
        return returnList;
    }
    
    public Pair<Integer, Integer> getMaxSerializedSize(int currentSize, int lastDataAligned)
    {
        List<Member> members = getMembers();
        int lcurrentSize = currentSize, lmaxSize = 0;
        int llastDataAligned = 0;
        
        Pair<Integer, Integer> dpair = m_discriminatorTypeCode.getMaxSerializedSize(lcurrentSize, lastDataAligned);
        lcurrentSize = dpair.first();
        
        for(int count = 0; count < members.size(); ++count)
        {
            Pair<Integer, Integer> pair = members.get(count).getTypecode().getMaxSerializedSize(lcurrentSize, dpair.second());

            if(pair.first() > lmaxSize)
            {
                lmaxSize = pair.first();
                llastDataAligned = pair.second();
            }
        }
        
        return new Pair<Integer, Integer>(lmaxSize, llastDataAligned);
    }
    
    public int getMaxSerializedSizeWithoutAlignment(int currentSize)
    {
        List<Member> members = getMembers();
        int lcurrentSize = currentSize, lmaxSize = 0;
        
        lcurrentSize = m_discriminatorTypeCode.getMaxSerializedSizeWithoutAlignment(lcurrentSize);
        
        for(int count = 0; count < members.size(); ++count)
        {
            int aux = members.get(count).getTypecode().getMaxSerializedSizeWithoutAlignment(lcurrentSize);
            
            if(aux > lmaxSize)
            {
                lmaxSize = aux;
            }
        }
        
        return lmaxSize;
    }
    
    public String getMaxSerializedSize()
    {
        Pair<Integer, Integer> pair = getMaxSerializedSize(0, 0);
        return pair.first().toString();
    }
    
    public String getMaxSerializedSizeWithoutAlignment()
    {
        return Integer.toString(getMaxSerializedSizeWithoutAlignment(0));
    }
    
    private TypeCode m_discriminatorTypeCode = null;
    
    private int m_defaultindex = -1;
    
    private String m_defaultValue = null;
}
