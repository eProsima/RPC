package com.eprosima.fastrpc.tree;

import com.eprosima.fastrpc.idl.grammar.Context;

public interface Export
{
    void setParent(Object obj);
    
    Object getParent();
    
    public boolean isIsOperation();
    
    public boolean isIsException();
    
    public boolean isIsTypeDeclaration();

    public boolean isIsConstDeclaration();
    
    // TODO Capturar el error en la gramatica y saltarlo.
    public boolean resolve(Context ctx);
}