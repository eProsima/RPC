package com.eprosima.rpcdds.tree;

public interface Definition
{
    void setParent(Object obj);
    
    Object getParent();
    
    /*!
     * This function is used to search the first interface.
     */
    public Interface getFirstInterface(String idlFile);
    
    /*!
     * This function is used to search the first exception.
     */
    public com.eprosima.rpcdds.tree.Exception getFirstException(String idlFile);
    
    public boolean isInterface();
    
    public boolean isException();
}
