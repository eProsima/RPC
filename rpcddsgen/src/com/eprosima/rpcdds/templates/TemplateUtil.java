package com.eprosima.rpcdds.templates;

import com.eprosima.rpcdds.typecode.*;

import java.util.List;

public class TemplateUtil
{
    public static String stripType(String type)
    {
        if(type.startsWith("std::array"))
            return "std::array";
        else if(type.startsWith("std::vector"))
            return "std::vector";
        else
            return type;
    }
    
    public static String getUnionDefaultLabel(TypeCode dist_type, List<Member> members)
    {
        String returnedValue = null;
        
        if(dist_type.getKind() == TypeCode.KIND_LONG)
            returnedValue = "-1000";
        else if(dist_type.getKind() == TypeCode.KIND_CHAR)
            returnedValue = "254";
        else if(dist_type.getKind() == TypeCode.KIND_BOOLEAN)
        {
            if(members.size() == 1 && ((UnionMember)members.get(0)).getLabels().size() == 1)
            {
                if(((UnionMember)members.get(0)).getLabels().get(0).equals("true"))
                {
                    returnedValue = "false";
                }
                else if(((UnionMember)members.get(0)).getLabels().get(0).equals("false"))
                {
                    returnedValue = "true";
                }
                else
                {
                    // TODO Exception
                    System.out.println("ERROR: Bad label to boolean type");
                }    
            }
        }
        else
        {
            // TODO Exception
            System.out.println("ERROR: Not supported type in discriminator");
        }
        
        return returnedValue;
    }
}
