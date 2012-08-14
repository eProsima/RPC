Este proyecto está preparado para la versión RTI DDS 4.5f.

En Windows está compilado contra boost-1.49.0.
Para compilar boost en 32-bits:
   bjam --toolset=msvc-10.0 --build-type=complete stage
Para compilar boost en 64-bits:
   bjam --toolset=msvc-9.0 address-model=64 --build-type=complete stage

Observaciones tenidas en cuenta al decidir si el número de secuencia entra dentro de la clave:
- El número de secuencia está en la clave:
  + Por defecto el historial está a uno, que es el valor adecuado.
- El número de secuencia no está en la clave:
  - Por defecto el historia está a uno, y es necesario que se cambie a que guarde todo.


TODO
Que el numero de secuencia también esté en la clave: el objetivo es poder tener multiples servidores, y al tener
el historial a uno, solo recibirá el último, si los recibe a la vez (pensar en esto).
Registrar la instancia antes de enviar la respuesta (en el servidor)
Support for "long double"
Poner const cuando se pasa datos al usuario para que no los toque.
Crear comentarios al crear el codigo (ejemplo, descripción de parámetros de una función como que parámetros son "in", "inout" o "out".