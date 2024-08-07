package com.eprosima.fastrpc.idl.grammar;

import com.eprosima.fastcdr.idl.util.CdrVersion;
import com.eprosima.fastrpc.idl.parser.typecode.AliasTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.ArrayTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.BitmaskTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.BitsetTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.EnumTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.MapTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.PrimitiveTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.SequenceTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.SetTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.StringTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.StructTypeCode;
import com.eprosima.fastrpc.idl.parser.typecode.UnionTypeCode;
import com.eprosima.fastrpc.idl.tree.*;
import com.eprosima.idl.generator.manager.TemplateGroup;
import com.eprosima.idl.generator.manager.TemplateManager;
import com.eprosima.idl.parser.typecode.TypeCode;
import com.eprosima.idl.parser.tree.TypeDeclaration;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.AbstractMap;
import java.util.AbstractMap.SimpleEntry;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.Stack;

import org.antlr.v4.runtime.Token;

public abstract class Context extends com.eprosima.idl.context.Context implements com.eprosima.fastcdr.idl.context.Context
{
    public Context(
            TemplateManager tmanager,
            String file,
            ArrayList<String> includePaths,
            boolean clientcode,
            boolean servercode,
            String appProduct,
            boolean include_include_prefix,
            boolean is_generating_api,
            CdrVersion.Select cdr_version)

    {
        super(tmanager, file, includePaths, false);

        m_fileNameUpper = getFilename().toUpperCase();
        m_clientcode = clientcode;
        m_servercode = servercode;
        m_randomGenNames = new Stack<String>();
        m_appProduct = appProduct;
        m_include_include_prefix = include_include_prefix;
        cdr_version_ = cdr_version;
        is_generating_api_ = is_generating_api;
    }

    public void setTypelimitation(String lt)
    {
        m_typelimitation = lt;
    }

    public String getTypelimitation()
    {
        return m_typelimitation;
    }

    public boolean isClient()
    {
        return m_clientcode;
    }

    public boolean isServer()
    {
        return m_servercode;
    }

    public abstract boolean isDds();

    public abstract boolean isRtiTypes();

    /*** Functions inherated from FastCDR Context ***/

    public boolean isPrintexception()
    {
        return true;
    }

    public boolean isPrintoperation()
    {
        return true;
    }

    public String getProduct()
    {
        return m_appProduct;
    }

    public String getIncludePrefix()
    {
        if(m_include_include_prefix)
            return m_appProduct + "/";

        return "";
    }

    public String getNamespace()
    {
        return "rpc";
    }

    public abstract boolean isCdr();

    public abstract boolean isFastcdr();

    public boolean isAnyCdr()
    {
        return isCdr() || isFastcdr();
    }


    /*** End ***/

    @Override
    public Interface createInterface(String name, Token token)
    {
        Interface interfaceObject = new Interface(getScopeFile(), isInScopedFile(), getScope(), name, token);
        addInterface(interfaceObject);
        return interfaceObject;
    }

    @Override
    public com.eprosima.fastrpc.idl.tree.Exception createException(String name, Token token)
    {
        com.eprosima.fastrpc.idl.tree.Exception exceptionObject = new com.eprosima.fastrpc.idl.tree.Exception(getScopeFile(), isInScopedFile(), getScope(), name, token);
        addException(exceptionObject);
        return exceptionObject;
    }

    @Override
    public Operation createOperation(String name, Token token)
    {
        Operation operationObject = new Operation(getScopeFile(), isInScopedFile(), null, name, token);
        return operationObject;
    }

    @Override
    public Param createParam(String name, TypeCode typecode, com.eprosima.idl.parser.tree.Param.Kind kind)
    {
        Param paramObject = new Param(name, typecode, kind);
        return paramObject;
    }

    @Override
    public AliasTypeCode createAliasTypeCode(
            String scope,
            String name)
    {
        return new AliasTypeCode(scope, name);
    }

    @Override
    public ArrayTypeCode createArrayTypeCode()
    {
        return new ArrayTypeCode();
    }

    @Override
    public BitsetTypeCode createBitsetTypeCode(
            String scope,
            String name)
    {
        return new BitsetTypeCode(scope, name);
    }

    @Override
    public BitmaskTypeCode createBitmaskTypeCode(
            String scope,
            String name)
    {
        return new BitmaskTypeCode(scope, name);
    }

    @Override
    public EnumTypeCode createEnumTypeCode(
            String scope,
            String name)
    {
        return new EnumTypeCode(scope, name);
    }

    @Override
    public MapTypeCode createMapTypeCode(
            String maxsize)
    {
        return new MapTypeCode(maxsize, evaluate_literal(maxsize));
    }

    @Override
    public PrimitiveTypeCode createPrimitiveTypeCode(
            int kind)
    {
        return new PrimitiveTypeCode(kind);
    }

    @Override
    public SequenceTypeCode createSequenceTypeCode(
            String maxsize)
    {
        return new SequenceTypeCode(maxsize, evaluate_literal(maxsize));
    }

    @Override
    public SetTypeCode createSetTypeCode(
            String maxsize)
    {
        return new SetTypeCode(maxsize, evaluate_literal(maxsize));
    }

    @Override
    public StringTypeCode createStringTypeCode(
            int kind,
            String maxsize)
    {
        return new StringTypeCode(kind, maxsize, evaluate_literal(maxsize));
    }

    @Override
    public StructTypeCode createStructTypeCode(
            String name)
    {
        return new StructTypeCode(getScope(), name);
    }

    @Override
    public UnionTypeCode createUnionTypeCode(
            String scope,
            String name)
    {
        return new UnionTypeCode(scope, name);
    }

    @Override
    public UnionTypeCode createUnionTypeCode(
            String scope,
            String name,
            TypeCode discriminatorTypeCode)
    {
        return new UnionTypeCode(scope, name, discriminatorTypeCode);
    }

    @Override
    public boolean isGenerateTypeObject()
    {
        return false;
    }

    @Override
    public boolean isGenerateTypesC()
    {
        return false;
    }

    @Override
    public boolean isGenerateTypesROS2()
    {
        return false;
    }

    @Override
    public String getHeaderGuardName ()
    {
        return getFilename().toUpperCase();
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getNewRandomName()
    {
        String name = "type_" + ++m_randomGenName;
        m_randomGenNames.push(name);
        return name;
    }

    // TODO Para stringtemplate TopicsPlugin de nuestros tipos DDS.
    public String getLastRandomName()
    {
        return m_randomGenNames.pop();
    }

    public String getFileNameUpper()
    {
        return m_fileNameUpper;
    }

    public boolean isThereIsStructOrUnionOrException()
    {
        if (0 < getExceptions().size())
        {
            return true;
        }

        for (TypeDeclaration type : getTypes())
        {
            if (type.getTypeCode() instanceof StructTypeCode ||
                    type.getTypeCode() instanceof UnionTypeCode)
            {
                return true;
            }
        }

        return false;
    }

    @Override
    public TemplateGroup addModule(
            com.eprosima.idl.parser.tree.Module module)
    {
        if (!is_generating_api_)
        {
            return super.addModule(module);
        }
        else
        {
            List<String> new_modules = modules_conversion.get(module.getName());

            if (null ==  new_modules)
            {
                return super.addModule(module);
            }
            else
            {
                com.eprosima.idl.parser.tree.Module last_module = null;
                TemplateGroup module_template = null;
                ArrayList<com.eprosima.idl.parser.tree.Module> module_list = new ArrayList<com.eprosima.idl.parser.tree.Module>();
                for(String new_module : new_modules)
                {
                    if (null == last_module)
                    {
                        last_module = createModule(module.getScopeFile(), module.isInScope(),
                                module.getScope(), new_module, module.getToken());
                    }
                    else
                    {
                        last_module = createModule(last_module.getScopeFile(), last_module.isInScope(), last_module.getScope(),
                                new_module, last_module.getToken());
                    }

                    super.addModule(last_module);
                    module_list.add(last_module);
                }

                if(isInScopedFile() || isScopeLimitToAll()) {
                    if(tmanager_ != null) {
                        module_template = tmanager_.createTemplateGroup("module_conversion");
                        module_template.setAttribute("ctx", this);
                        // Set the module object to the TemplateGroup of the module.
                        module_template.setAttribute("modules", module_list);
                    }
                }

                return module_template;
            }
        }
    }

    @Override
    public boolean isCdr_both()
    {
        return CdrVersion.Select.BOTH == cdr_version_;
    }

    @Override
    public void isSetCdrv1Templates()
    {
        cdr_v1_templates = true;
    }

    @Override
    public void isUnsetCdrv1Templates()
    {
        cdr_v1_templates = false;
    }

    @Override
    public boolean isCdrv1TemplatesEnabled()
    {
        return cdr_v1_templates;
    }

    private String m_typelimitation = null;

    // TODO Lleva la cuenta de generacion de nuevos nombres.
    private int m_randomGenName = 0;
    private Stack<String> m_randomGenNames = null;
    // TODO Lleva la cuenta del nombre de variables para bucles anidados.
    private char m_loopVarName = 'a';

    // Stores if the user will generate the client source.
    private boolean m_clientcode = true;
    // Stores if the user will generate the server source.
    private boolean m_servercode = true;

    private String m_appProduct = null;
    private boolean m_include_include_prefix = true;

    private boolean is_generating_api_ = false;

    private Map<String, List<String>> modules_conversion = Stream.of(
        new AbstractMap.SimpleEntry<>("dds", Arrays.asList("eprosima", "rpc", "protocol", "dds")))
        .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue));

    private CdrVersion.Select cdr_version_ = CdrVersion.Select.V2;

    private String m_fileNameUpper = null;

    private boolean cdr_v1_templates = false;
}
