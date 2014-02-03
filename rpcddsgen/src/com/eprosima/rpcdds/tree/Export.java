package com.eprosima.rpcdds.tree;

import com.eprosima.rpcdds.idl.grammar.Context;

public interface Export
{
    void setParent(Object obj);
    
    Object getParent();
    
    public boolean isOperation();
    
    public boolean isException();
    
    public boolean isTypeDeclaration();
    
    // TODO Capturar el error en la gramatica y saltarlo.
    public boolean resolve(Context ctx);
}
