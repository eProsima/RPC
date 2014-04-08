package com.eprosima.fastrpc.wadl.util;

import com.javadude.antxr.RecognitionException;

public class TypeConverter
{
	private static final String BOOLEAN_TRUE = "true";
	private static final String BOOLEAN_FALSE = "false";
	
	public static boolean stringToBoolean(String string) throws RecognitionException
	{
		if(string.equals(BOOLEAN_TRUE))
			return true;
		if(string.equals(BOOLEAN_FALSE))
			return false;
		
		throw new RecognitionException("Bad boolean type \"" + string + "\"");
	}
}
