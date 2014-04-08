package com.eprosima.fastrpc.wadl.idl;

public class IDLConverterException extends Exception {
	public IDLConverterException(String what) {
		super("ERROR<IDLConverterException>: "+what);
	}
}
