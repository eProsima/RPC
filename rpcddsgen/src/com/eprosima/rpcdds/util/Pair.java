package com.eprosima.rpcdds.util;

public class Pair<F, S>
{
    public Pair(F first, S second)
    {
        m_first = first;
        m_second = second;
    }
    
    public F first()
    {
        return m_first;
    }
    
    public S second()
    {
        return m_second;
    }
    
    private F m_first = null;
    
    private S m_second = null;
}
