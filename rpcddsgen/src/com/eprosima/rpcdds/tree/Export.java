package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.idl.grammar.Context;

public interface Export
{
    void setParent(Object obj);
    
    Object getParent();
    
    public boolean isIsOperation();
    
    public boolean isIsException();
    
    public boolean isIsTypeDeclaration();
    
    // TODO Capturar el error en la gramatica y saltarlo.
    public boolean resolve(Context ctx);
}
