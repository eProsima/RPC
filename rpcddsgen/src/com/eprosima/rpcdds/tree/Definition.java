package com.eprosima.rpcdds.tree;

public interface Definition
{
    void setParent(Object obj);
    
    Object getParent();
    
    /*!
     * This function is used to search the first interface.
     */
    public Interface getFirstInterface(String idlFile);
}
