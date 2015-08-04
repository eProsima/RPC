package com.eprosima.fastrpc.idl.tree;

import com.eprosima.idl.parser.typecode.TypeCode;
import com.eprosima.idl.parser.tree.Annotation;

public class Param extends com.eprosima.idl.parser.tree.Param
{
    public Param(String name, TypeCode typecode, Kind kind)
    {
        super(name, typecode, kind);
    }

    ////////// RESTful block //////////
    //
    
    /*
     * @brief Get the annotation with the real name of the query parameter.
     * Also substitute the spaces by %20.
     */
    public String getRealname()
    {
        Annotation annotation = ((Operation)getParent()).getAnnotations().get(getName());

        if(annotation != null)
        {
        
            String realname = annotation.getValue("value");

            if(realname != null)
            {
                return realname.replace(" ", "%20");
            }
        }
        
        return getName();
    }
    
    public boolean getBodyParam ()
    {
    	String bodyParam = ((Operation)getParent()).getBody();   	
        return getName().equals(bodyParam);
    }
    
    /////// End of RESTful block //////
    
}
