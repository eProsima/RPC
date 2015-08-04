package com.eprosima.fastrpc.util;

import org.antlr.stringtemplate.StringTemplate;

import java.io.*;

public class Utils
{
    
    public static String getWADLFileNameOnly(String wadlFilename)
    {
        int index = -1;
        String auxString = wadlFilename, returnedValue = null;
        
        index = wadlFilename.lastIndexOf(File.separator);
        
        if(index == -1)
            index = wadlFilename.lastIndexOf('/');
        
        if(index != -1)
            auxString = wadlFilename.substring(index + 1);
        
        // Remove '.wadl'
        returnedValue = auxString.substring(0, auxString.length() - 5);
        
        return returnedValue;
    }
    
    public static String getFileNameOnly(String fileName)
    {
        int index = -1;
        String auxString = fileName, returnedValue = null;
        
        index = fileName.lastIndexOf(File.separator);
        
        if(index == -1)
            index = fileName.lastIndexOf('/');
        
        if(index != -1)
            auxString = fileName.substring(index + 1);
        
        // Remove extension
        index = auxString.lastIndexOf('.');
        if(index != -1)
        	auxString = auxString.substring(0, index);
        	
       	returnedValue = auxString;
        
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
    
	public static String getFileExtension(String fileName)
	{
		int lastDot = fileName.lastIndexOf(".");
		
		return fileName.substring(lastDot+1);
	}

    // TODO In a future this function has to be removed, when rtiddsgen2 works successfully.
    public static void addPragma(String file, String tempDir)
    {
        try
        {
            File inFile = new File(file);
            File outFile = new File(tempDir + Utils.getFileNameOnly(file) + "." + getFileExtension(file) + ".tmp");

            FileInputStream fis = new FileInputStream(inFile);
            BufferedReader in = new BufferedReader(new InputStreamReader(fis));

            FileOutputStream fos = new FileOutputStream(outFile);
            PrintWriter out = new PrintWriter(fos);

            // Incluir pragma inicial
            out.println("#ifdef _WIN32");
            out.println("#pragma warning( push )");
            out.println("#pragma warning( disable : 4018 )");
            out.println("#elif defined(__linux)");
            out.println("#pragma GCC diagnostic push");
            out.println("#pragma GCC diagnostic ignored \"-Wnarrowing\"");
            out.println("#endif");

            String thisLine = "";
            while((thisLine = in.readLine()) != null)
            {
                out.println(thisLine);
            }

            // Incluir pragma final
            out.println("#ifdef _WIN32");
            out.println("#pragma warning( pop )");
            out.println("#elif defined(__linux)");
            out.println("#pragma GCC diagnostic pop");
            out.println("#endif");

            out.flush();
            out.close();
            in.close();

            inFile.delete();
            outFile.renameTo(inFile);
        }
        catch(IOException ex)
        {
            System.out.println("WARNING: Cannot add pragma warning to file " + file);
        }
    }

    // TODO In a future this function has to be removed, when we create one executable instead different VS projects.
    public static void declspec(String file, String tempDir)
    {
        try
        {
            File inFile = new File(file);
            File outFile = new File(tempDir + Utils.getFileNameOnly(file) + "." + getFileExtension(file) + ".tmp");

            FileInputStream fis = new FileInputStream(inFile);
            BufferedReader in = new BufferedReader(new InputStreamReader(fis));

            FileOutputStream fos = new FileOutputStream(outFile);
            PrintWriter out = new PrintWriter(fos);

            // Incluir pragma inicial
            out.println("#if defined(_WIN32) && defined(NDDS_USER_DLL_EXPORT)");
            out.println("class __declspec(dllimport) DDSDomainEntity;");
            out.println("class __declspec(dllimport) DDSEntity;");
            out.println("#endif");

            String thisLine = "";
            while((thisLine = in.readLine()) != null)
            {
                out.println(thisLine);
            }

            out.flush();
            out.close();
            in.close();

            inFile.delete();
            outFile.renameTo(inFile);
        }
        catch(IOException ex)
        {
            System.out.println("WARNING: Cannot add pragma warning to file " + file);
        }
    }
}
