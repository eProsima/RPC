package com.eprosima.fastrpc.templates;

import com.eprosima.fastrpc.typecode.*;
import com.eprosima.fastrpc.exceptions.ParseException;

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
    
    public static String getUnionDefaultLabel(TypeCode dist_type, List<Member> members, String scopeFile, int line)
    {
        String returnedValue = null;
        // TODO Faltan tipos: short, unsigneds...
        
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
                    throw new ParseException(scopeFile, line, "Bad label to boolean type.");
                }    
            }
        }
        else if(dist_type.getKind() == TypeCode.KIND_ENUM)
        {
            EnumTypeCode enume = (EnumTypeCode)dist_type;
            returnedValue = enume.getInitialValue();
        }
        else
        {
            throw new ParseException(scopeFile, line, "Not supported type discriminator.");
        }
        
        return returnedValue;
    }

    public static String checkUnionLabel(TypeCode dist_type, String label, String scopeFile, int line)
    {
        // TODO Faltan tipos: short, unsigneds...
        
        if(dist_type.getKind() == TypeCode.KIND_ENUM)
        {
            EnumTypeCode enume = (EnumTypeCode)dist_type;

            if(enume.getScope() != null)
            {
                if(label.contains("::"))
                {
                    if(!label.startsWith(enume.getScope()))
                    {
                        throw new ParseException(scopeFile, line, "Cannot find the symbol " + label + "");
                    }
                }
                else
                {
                    return enume.getScope() + "::" + label;
                }
            }
            else
            {
                if(label.contains("::"))
                    throw new ParseException(scopeFile, line, "Cannot find the symbol " + label + "");
            }
        }

        return label;
    }
}
