package com.eprosima.fastrpc.tree;

import java.util.HashMap;

public interface Notebook 
{
    /*!
     * @brief This function links all annotations to the object.
     * @param annotations Annotations to be linked.
     */
    public void addAnnotations(HashMap<String, String> annotations);
    
    /*!
     * @brief This function returns all annotations linked with the object.
     * @return Map with the linked annotations.
     */
    public HashMap<String, String> getAnnotations();
    
    public void addAnnotation(String key, String value);
}
