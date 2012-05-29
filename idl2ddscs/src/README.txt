GENERACIÓN DEL PARSER
---------------------

Información:
La versión de JavaCC que se ha usado es la 4.1d1

1. Ejecutar JJTree
../../../../../programas/javacc-4.1d1/bin/jjtree -MULTI=true -VISITOR=true -NODE_DEFAULT_VOID=true  idl.jjt

2. Ejecutar JavaCC
../../../../../programas/javacc-4.1d1/bin/javacc -STATIC=false -MULTI=true -VISITOR=true -NODE_DEFAULT_VOID=true idl.jj