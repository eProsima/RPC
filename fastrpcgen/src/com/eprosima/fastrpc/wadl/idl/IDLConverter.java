package com.eprosima.fastrpc.wadl.idl;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.HashMap;

import com.eprosima.fastrpc.util.Utils;
import com.eprosima.fastrpc.wadl.tree.Application;
import com.eprosima.fastrpc.wadl.tree.Grammar;
import com.eprosima.fastrpc.wadl.tree.Include;
import com.eprosima.fastrpc.wadl.tree.Method;
import com.eprosima.fastrpc.wadl.tree.Param;
import com.eprosima.fastrpc.wadl.tree.Representation;
import com.eprosima.fastrpc.wadl.tree.Resource;
import com.eprosima.fastrpc.wadl.tree.Resources;
import com.eprosima.fastrpc.wadl.tree.Response;

public class IDLConverter {

	private Application application; // Parsed WADL application
	private PrintWriter writer; // PrintWriter to write on disk
	private int numTabs; // Number of tags to pretty-print the IDL file
	private HashMap<String, String> typesMap;
	
	private String destinationFile;
	
	/*
	 * !
	 * 
	 * @brief Creates the IDL converter.
	 * 
	 * @param application Parsed WADL Application
	 * 
	 * @returns
	 */
	public IDLConverter(Application application, String wadlFileName, String destinationRoute) {
		this.application = application;
		writer = null;
		numTabs = 0;
		
		String idlFileName = Utils.getWADLFileNameOnly(wadlFileName);
		this.destinationFile = destinationRoute + idlFileName + ".idl";
				
		initializeTypesMap();
	}

	/*!
	 * @brief This method initializes a HashMap used to translate webservices types into IDL types.
	 */
	private void initializeTypesMap() {
		// TODO XXX MOAR TYPES
		typesMap = new HashMap<String, String>();

		typesMap.put("xsd:string", "string");
		typesMap.put("xsd:byte", "char");
		typesMap.put("xsd:unsignedByte", "octet");
		typesMap.put("xsd:short", "short");
		typesMap.put("xsd:unsignedShort", "unsigned short");
		typesMap.put("xsd:int", "long");
		typesMap.put("xsd:unsignedInt", "unsigned long");
		typesMap.put("xsd:long", "long long");
		typesMap.put("xsd:unsignedLong", "unsigned long long");
		typesMap.put("xsd:float", "float");
		typesMap.put("xsd:double", "double");
		typesMap.put("xsd:boolean", "boolean");		
		typesMap.put("", "string"); // default
	}

	/*
	 * !
	 * 
	 * @brief Creates a String with a number of concatenated tags to
	 * pretty-print the IDL file
	 * 
	 * @returns The String with the tabs to put in the current line
	 */
	private String getTabs() {
		String tabs = "";

		for (int i = 0; i < numTabs; ++i) {
			tabs += "\t";
		}

		return tabs;
	}

	/*
	 * !
	 * 
	 * @brief Writes a blank line in the file
	 */
	private void writeln() {
		if (writer == null)
			return;

		writer.println();
	}

	/*
	 * !
	 * 
	 * @brief Writes a line in the file with a certain number of tags at the
	 * beginning
	 * 
	 * @param line Line to write
	 */
	private void writeln(String line) {
		if (writer == null)
			return;

		writer.println(getTabs() + line);
	}
	
	private void writeAnnotation(String name) {
		writeln("@Annotation");
		writeln("local interface " + name + " {");
		writeln("\tattribute string value;");
		writeln("};");
		writeln();
	}

	/*
	 * !
	 * 
	 * @brief Changes the extension of a String representing a file
	 * 
	 * @originalName Name of the original file
	 * 
	 * @newExtension Desired extension
	 * 
	 * @returns A String containing the original name with the new extension
	 */
	private String changeExtension(String originalName, String newExtension) {
		int lastDot = originalName.lastIndexOf(".");
		if (lastDot != -1) {
			return originalName.substring(0, lastDot) + newExtension;
		} else {
			return originalName + newExtension;
		}
	}

	private String getFileNameWithoutExtension(String originalName) {
		
		int lastSlash = originalName.lastIndexOf(File.separator);
		if (lastSlash != -1) {
			originalName = originalName.substring(lastSlash + 1);
		}
		
		int lastDot = originalName.lastIndexOf(".");
		if (lastDot != -1) {
			return originalName.substring(0, lastDot);
		} else {
			return originalName;
		}
	}
	
	/*
	 * !
	 * 
	 * @brief Translates a name into an IDL compatible name
	 * 
	 * @param name The name to translate
	 * 
	 * @returns The IDL compatible name
	 */
	private String getCompatibleName(String name) {
		String compatibleName = "";
		for (char c : name.toCharArray()) {
			boolean isCompatible = (c >= 'a' && c <= 'z')
					|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
					|| c == '_';
			boolean isBracket = (c == '{' || c == '}');
			if (isCompatible) {
				compatibleName += c;
			} else if (!isBracket) {
				compatibleName += '_';
			}
		}

		return compatibleName;
	}

	/*
	 * !
	 * 
	 * @brief Creates an IDL interface name for a resource, given its id and its
	 * path
	 * 
	 * @param id A resource ID
	 * 
	 * @param path A resource path
	 * 
	 * @returns The IDL interface name for the resource given
	 */
	private String getInterfaceName(String id, String path) {
		if (id.length() > 0)
			return id;
		return getCompatibleName(path);
	}

	/*
	 * !
	 * 
	 * @brief Translates a WADL type into an IDL type
	 * 
	 * @param type Type to translate
	 * 
	 * @returns The IDL type
	 */
	private String getIDLType(String type) {
		return typesMap.get(type);
	}

	/*
	 * !
	 * 
	 * @brief Creates the IDL response name for a given method
	 * 
	 * @param method
	 * 
	 * @returns IDL response type name
	 */
	private String getResponseType(Method method) {
		if (method.getResponses().size() == 0) {
			return "void";
		}

		String id = getMethodId(method);

		String type = id.substring(0, 1).toUpperCase() + id.substring(1)
				+ "Response";
		return type;
	}

	/*
	 * !
	 * 
	 * @brief Creates the IDL request name for a given method
	 * 
	 * @param method
	 * 
	 * @returns IDL request type name
	 */
	private String getRequestType(Method method) {
		String id = getMethodId(method);

		String type = id.substring(0, 1).toUpperCase() + id.substring(1)
				+ "Request";
		return type;
	}

	/*
	 * !
	 * 
	 * @brief Creates the IDL method name for a given method
	 * 
	 * @param method
	 * 
	 * @returns IDL method name
	 */
	private String getMethodId(Method method) {
		if (method.getId().length() > 0)
			return method.getId();

		return method.getName().toLowerCase();
	}

	/*
	 * !
	 * 
	 * @brief Creates the IDL parameters for a given method, including inherited
	 * ones (ie, embedded parameters)
	 * 
	 * @param method
	 * 
	 * @returns IDL parameters, including inherited ones
	 */
	private String getIDLURLParams(Method method) {
		ArrayList<Param> params = new ArrayList<Param>();

		String embeddedParameters = "";
		String queryParameters = "";
		Resource resource = method.getParentResource();
		while (resource != null) {

			if (resource.getEmbeddedParameters().size() > 0
					&& embeddedParameters.length() == 0) {
				String path = getCompatibleName(resource.getPath());
				embeddedParameters = "in " + path + " " + path + ", ";
			}

			String idlParams = "";
			params = resource.getParameters();
			for (Param param : params) 
			{
				if (param.getStyle().equals("query")) {
					String idlType = getIDLType(param.getType());
					String compatibleName = getCompatibleName(param.getName());
					// Erase spaces and store the real name in an annotation.
					if(!compatibleName.equals(param.getName()))
					{
					    writeln("[" + compatibleName + "(\"" + param.getName() + "\")]");
					}
					idlParams += "in " + idlType + " " + compatibleName + ", ";
				}
			}
			queryParameters = idlParams + queryParameters;

			resource = resource.getParentResource();
		}

		// Local parameters
		String idlParameters = "";
		params.clear();
		if(method.getRequest() != null)
			params = method.getRequest().getParams();
		for (Param param : params) {
			if (param.getStyle().equals("query")) {
				String idlType = getIDLType(param.getType());
				idlParameters += "in " + idlType + " " + param.getName() + ", ";
			}
		}
		idlParameters = embeddedParameters + queryParameters + idlParameters;
		if(idlParameters.length() > 0)
			idlParameters = idlParameters.substring(0, idlParameters.length() - 2); // Final
																				// comma
																				// and
																				// space

		return idlParameters;
	}

	/*
	 * !
	 * 
	 * @brief Writes a struct containing the embedded parameters for a given
	 * Resource
	 * 
	 * @param resource
	 */
	private void toIDLEmbeddedParameters(Resource resource)
			throws IDLConverterException {
		ArrayList<Param> globalParameters = resource.getGlobalParameters();
		ArrayList<Param> parameters = resource.getParameters();

		ArrayList<String> embeddedParameters = resource
				.getCompletePathEmbeddedParameters();

		ArrayList<String> idlParameters = new ArrayList<String>();

		for (String embeddedParameter : embeddedParameters) {

			boolean defined = false;
			String type = "";

			// Look for template parameter that defines the embedded parameter
			for (Param parameter : parameters) {
				if (!parameter.getStyle().equals("template"))
					continue;

				if (embeddedParameter.equals(parameter.getName())) {
					defined = true;
					type = parameter.getType();
					break;
				}
			}

			// Look for template parameter that defines the embedded parameter
			// in the inherited parameters
			if (!defined) {
				for (Param parameter : globalParameters) {
					if (!parameter.getStyle().equals("template"))
						continue;

					if (embeddedParameter.equals(parameter.getName())) {
						defined = true;
						type = parameter.getType();
						break;
					}
				}
			}

			if (!defined) {
				throw new IDLConverterException("Template " + embeddedParameter
						+ " is not defined.");
			}

			idlParameters.add(getIDLType(type) + " " + embeddedParameter + "_");
		}

		if (idlParameters.size() > 0) {
			writeln("struct " + getCompatibleName(resource.getPath()));
			writeln("{");
			++numTabs;

			for (String idlParameter : idlParameters) {
				writeln(idlParameter + ";");
			}

			--numTabs;
			writeln("};");
			writeln();
		}
	}

	/*
	 * !
	 * 
	 * @brief Writes a grammar translation in the file
	 * 
	 * @param grammar
	 */
	private void toIDL(Grammar grammar) {
		if (grammar == null || writer == null)
			return;

		for (Include include : grammar.getIncludes()) {
			writeln("#include \""
					+ changeExtension(include.getHref(), ".idl\""));
		}
		writeln();
	}

	/*
	 * !
	 * 
	 * @brief Writes an IDL struct containing the response types
	 * 
	 * @param response we want to translate
	 * 
	 * @responseType Type for the response computed using getResponseType method
	 * 
	 * @responseIndex Integer to append to the type, as the can be several of
	 * them
	 */
	private void toIDLStruct(Response response, String responseType,
			int responseIndex) {

		String name = responseType + responseIndex;

		writeln("struct " + name);
		writeln("{");
		++numTabs;

		writeln("long status;"); // HTTP status response, always present
		// int indexRepresentation = 0;
		for (Representation representation : response.getRepresentations()) {
			// writeln(getIDLNamespaces(representation.getElement())
			// + " representation" + ++indexRepresentation + ";");
			writeln("string " + getCompatibleName(representation.getElement())
					+ ";");
		}

		--numTabs;
		writeln("};");
		writeln();
	}
	
	private void toIDLStruct(ArrayList<Response> responses, String responseType) throws IDLConverterException {
		
		boolean hasEmptyReturnType = true; // Siempre dejamos la opcion del return type vacio
		boolean hasXMLMediaType = false;
		boolean hasJSONMediaType = false;
		for (Response response : responses) {			
			if(response.getRepresentations().size() == 0) {
				hasEmptyReturnType = true;
				continue;
			}
			
			for(Representation representation: response.getRepresentations()) {
				if(representation.getMediaType().contains("xml"))
					hasXMLMediaType = true;
				else if(representation.getMediaType().contains("json"))
					hasJSONMediaType = true;
				else
					throw new IDLConverterException("Mediatype not supported: '" + representation.getMediaType() + "'");
			}
		}
		
		if(hasEmptyReturnType) {
			writeln("struct Empty" + responseType);
			writeln("{");
			++numTabs;
			
			writeln("long status;");
			
			--numTabs;
			writeln("};");
			writeln();
		}
		
		if(hasXMLMediaType) {
			writeln("struct XML" + responseType);
			writeln("{");
			++numTabs;
			
			writeln("long status;");
			writeln("string xmlRepresentation;");
			
			--numTabs;
			writeln("};");
			writeln();
		}
		
		if(hasJSONMediaType) {
			writeln("struct JSON" + responseType);
			writeln("{");
			++numTabs;
			
			writeln("long status;");
			writeln("string jsonRepresentation;");
			
			--numTabs;
			writeln("};");
			writeln();
		}
		
	}

	/*
	 * !
	 * 
	 * @brief Writes an IDL case containing a response type
	 * 
	 * @param response we want to translate
	 * 
	 * @responseType Type for the response computed using getResponseType method
	 * 
	 * @responseIndex Integer to append to the type, as the can be several of
	 * them
	 */
	private void toIDLCase(Response response, String responseType,
			int responseIndex) {
		String name = responseType + responseIndex;
		// writeln("case " + response.getStatus() + ":");
		writeln("case " + responseIndex + ":");
		writeln("\t" + name + " response" + responseIndex + ";");
	}

	/*
	 * !
	 * 
	 * @brief Translates an array of responses into an IDL union
	 * 
	 * @param responses Array of responses we want to translate
	 * 
	 * @responseType Type for the union computed using getResponseType method
	 */
	private void toIDL(ArrayList<Response> responses, String responseType) throws IDLConverterException {
		if (responses.size() == 0)
			return;

		writeln("union " + responseType + " switch(long)");
		writeln("{");
		++numTabs;

		boolean hasEmptyReturnType = true; // Siempre dejamos la opcion del return type vacio
		boolean hasXMLMediaType = false;
		boolean hasJSONMediaType = false;
		for (Response response : responses) {			
			if(response.getRepresentations().size() == 0) {
				hasEmptyReturnType = true;
				continue;
			}
			
			for(Representation representation: response.getRepresentations()) {
				if(representation.getMediaType().contains("xml"))
					hasXMLMediaType = true;
				else if(representation.getMediaType().contains("json"))
					hasJSONMediaType = true;
				else
					throw new IDLConverterException("Mediatype not supported: '" + representation.getMediaType() + "'");
			}
		}
		
		if(hasEmptyReturnType) {
			writeln("case 0:");
			writeln("\tEmpty" + responseType + " empty"+responseType+";");
		}
		if(hasXMLMediaType) {
			writeln("case 1:");
			writeln("\tXML" + responseType + " xml"+responseType+";");
		}
		if(hasJSONMediaType) {
			writeln("case 2:");
			writeln("\tJSON" + responseType + " json"+responseType+";");			
		}
		
		/*
		int responseIndex = 0;
		for (Response response : responses) {
			toIDLCase(response, responseType, ++responseIndex);
		}
		*/

		--numTabs;
		writeln("};");
		writeln();
	}

	/*
	 * !
	 * 
	 * @brief Translates a method to IDL
	 * 
	 * @param resource Resource to translate
	 */
	private void toIDL(Method method) throws IDLConverterException {

		/*
		int responseIndex = 0;
		for (Response response : method.getResponses()) {
			toIDLStruct(response, getResponseType(method), ++responseIndex);
		}
		*/
		toIDLStruct(method.getResponses(), getResponseType(method));
		
		toIDL(method.getResponses(), getResponseType(method));

		toIDLRequestUnion(method);

		//writeln("[METHOD(\"" + method.getName() + "\")]");
		writeln("@METHOD(\"" + method.getName() + "\")");
		toIDLBodyRequestAnnotation(method);

		writeln(getResponseType(method) + " " + getMethodId(method) + "("
				+ getIDLParams(method) + ");");
		writeln();
	}

	/*!
	 * @brief Generates a sequence of IDL parameters separated by commas for a given method
	 * @param method
	 * 
	 * @returns IDL parameters separated by commas
	 */
	private String getIDLParams(Method method) {
		String urlParams = getIDLURLParams(method);
		String bodyParams = getIDLBodyParams(method);

		if (bodyParams.length() == 0)
			return urlParams;
		if (urlParams.length() == 0)
			return bodyParams;
		return urlParams + ", " + bodyParams;
	}

	/*!
	 * @brief If we have, for example, a POST method, some parameters are in the HTTP body. We translate this data as a Union
	 * @param method
	 * 
	 * @returns IDL parameter for body info
	 */
	private String getIDLBodyParams(Method method) {
		if (method == null || method.getRequest() == null
				|| method.getRequest().getRepresentations().size() == 0)
			return "";

		return "in " + getRequestType(method) + " " + getRequestType(method);
	}

	/*!
	 * @brief If we have, for example, a POST method, some parameters are in the HTTP body.
	 * We translate this data as a Union and we have to write an annotation specifying the 
	 * parameter that contains this data
	 * @param method
	 */
	private void toIDLBodyRequestAnnotation(Method method) {
		if (method == null || method.getRequest() == null
				|| method.getRequest().getRepresentations().size() == 0)
			return;

		//writeln("[BODY(\"" + getRequestType(method) + "\")]");
		writeln("@BODY(\"" + getRequestType(method) + "\")");
	}

	/*!
	 * @brief If we have, for example, a POST method, some parameters are in the HTTP body.
	 * We translate this data as a Union. This method generates this union.
	 * @param method
	 */
	private void toIDLRequestUnion(Method method) throws IDLConverterException {
		if (method == null || method.getRequest() == null
				|| method.getRequest().getRepresentations().size() == 0)
			return;

		writeln("union " + getRequestType(method) + " switch(long)");
		writeln("{");
		++numTabs;

		// Check mediaTypes
		boolean hasXMLMediaType = false;
		boolean hasJSONMediaType = false;
		for (Representation representation : method.getRequest()
				.getRepresentations()) {
			if(representation.getMediaType().contains("xml"))
				hasXMLMediaType = true;
			else if(representation.getMediaType().contains("json"))
				hasJSONMediaType = true;
			else
				throw new IDLConverterException("Mediatype not supported: '" + representation.getMediaType() + "'");
		}
		
		if(hasXMLMediaType) {
			writeln("case 1:");
			writeln("\tstring xmlRepresentation;");			
		}
		
		if(hasJSONMediaType) {
			writeln("case 2:");
			writeln("\tstring jsonRepresentation;");			
		}

		/*
		int representationIndex = 0;
		for (Representation representation : method.getRequest()
				.getRepresentations()) {
			writeln("case " + ++representationIndex + ":");
			writeln("\tstring "
					+ getCompatibleName(representation.getElement()) + ";");
		}
		*/

		--numTabs;
		writeln("};");
		writeln();
	}

	/*
	 * !
	 * 
	 * @brief Translates a resource to IDL
	 * 
	 * @param resource Resource to translate
	 */
	private void toIDL(Resource resource) throws IDLConverterException {
		if (resource == null || writer == null)
			return;

		String completePath = resource.getCompletePath();
		if (completePath.length() > 0) {
			//writeln("[PATH(\"" + completePath + "\")]");
			writeln("@PATH(\"" + completePath + "\")");
		}

		writeln("interface "
				+ getInterfaceName(resource.getId(), resource.getPath())
				+ "Resource");
		writeln("{");
		++numTabs;

		toIDLEmbeddedParameters(resource);
		for (Method method : resource.getMethods()) {
			toIDL(method);
		}

		--numTabs;
		writeln("};");
		writeln();

		for (Resource childResource : resource.getChildResources()) {
			toIDL(childResource);
		}
	}

	/*
	 * !
	 * 
	 * @brief Translates a set of resources to IDL
	 * 
	 * @param resources Resources to translate
	 */
	private void toIDL(Resources resources) throws IDLConverterException {
		if (resources == null || writer == null)
			return;

		/*
		if (resources.getBase().length() > 0) {
			writeln("[[RESOURCES_BASE_URI(\"" + resources.getBase() + "\")]]");
			writeln();
		}
		*/

		for (Resource resource : resources.getResources()) {
			toIDL(resource);
		}
	}
		
	private void toIDLMainModule() throws IDLConverterException {
		if (writer == null)
			return;
		
		writeAnnotation("RESOURCES_BASE_URI");
		
		//
		toIDL(application.getGrammar());
		if (application.getTargetNamespace().length() > 0) {
			writeln("module "
					+ getCompatibleName(application.getTargetNamespace()));
		} else {
			// XXX TODO UN SOLO RESOURCES, NO UN ARRAY
			if(application.getResources().size() > 0) {
				Resources resources = application.getResources().get(0);
				writeln("@RESOURCES_BASE_URI(\"" + resources.getBase() + "\")");
			}
			
			writeln("module "
					+ getFileNameWithoutExtension(destinationFile));
		}
		writeln("{");
		++numTabs;
		
		writeAnnotation("PATH");
		writeAnnotation("METHOD");
		writeAnnotation("BODY");

		for (Resources resources : application.getResources()) {
			toIDL(resources);
		}

		--numTabs;
		writeln("};");
		writeln();
		//
	}

	/*
	 * !
	 * 
	 * @brief Translates a WADL application to IDL and writes it in a file
	 */
	public String toIDL() throws IDLConverterException {
		if (application == null)
			throw new IDLConverterException("No WADL file was parsed.");

		try {
			writer = new PrintWriter(destinationFile, "UTF-8");
		} catch (FileNotFoundException e) {
			throw new IDLConverterException(e.getMessage());
		} catch (UnsupportedEncodingException e) {
			throw new IDLConverterException(e.getMessage());
		}

		toIDLMainModule();

		if (writer != null)
			writer.close();
		
		return destinationFile;
	}

}
