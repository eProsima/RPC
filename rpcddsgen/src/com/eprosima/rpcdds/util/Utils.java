package com.eprosima.rpcdds.util;

import org.antlr.stringtemplate.StringTemplate;

import java.io.*;

public class Utils
{
    public static String getIDLFileNameOnly(String idlFilename)
    {
        int index = -1;
        String auxString = idlFilename, returnedValue = null;
        
        index = idlFilename.lastIndexOf(File.separator);
        
        if(index == -1)
            index = idlFilename.lastIndexOf('/');
        
        if(index != -1)
            auxString = idlFilename.substring(index + 1);
        
        // Remove '.idl'
        returnedValue = auxString.substring(0, auxString.length() - 4);
        
        return returnedValue;
    }
    
    public static String getIDLFileOnly(String idlFileURL)
    {
        int index = -1;
        String returnedValue = null;
        
        index = idlFileURL.lastIndexOf(File.separator);
        
        if(index == -1)
            index = idlFileURL.lastIndexOf('/');
        
        if(index != -1)
            returnedValue = idlFileURL.substring(index + 1);
        else
            returnedValue = idlFileURL;
        
        return returnedValue;
    }
    
    public static String getIDLFileDirectoryOnly(String idlFileURL)
    {
        int index = -1;
        String returnedValue = null;
        
        index = idlFileURL.lastIndexOf(File.separator);
        
        if(index == -1)
            index = idlFileURL.lastIndexOf('/');
        
        if(index != -1)
            returnedValue = idlFileURL.substring(0, index + 1);
        
        return returnedValue;
    }
    
    public static String addFileSeparator(String directory)
    {
        String returnedValue = directory;
        
        if(directory.charAt(directory.length() - 1) != File.separatorChar ||
                directory.charAt(directory.length() - 1) != '/')
            returnedValue = directory + File.separator;
        
        return returnedValue;
    }
    
    public static boolean writeFile(String file, StringTemplate template, boolean replace)
    {
        boolean returnedValue = false;
        
        try
        {
            File handle = new File(file);
            
            if(!handle.exists() || replace)
            {
                FileWriter fw = new FileWriter(file);
                String data = template.toString();
                fw.write(data, 0, data.length());
                fw.close();
            }
            else
            {
                System.out.println("INFO: " + file + " exists. Skipping.");
            }

            returnedValue = true;
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }   

        return returnedValue;
    }
}
