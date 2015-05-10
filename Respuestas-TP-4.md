Trabajo Práctico N°4 (Curso K2051)
==================================

Caso de estudio - Promedio de Líneas
------------------------------------

1. La primer expresión del for inicializa las variables nl y nc con el valor 0.  
   La coma es un operador binario, en el que dos expresiones separadas por el operador coma *se evalúan de izquierda a derecha,
   y el tipo y valor del resultado es el tipo y valor del operando derecho*. Los usos más adecuados son en construcciones 
   fuertemente relacionadas.  
   Una expresión equivalente es **nl = nc = 0**

2. Los paréntesis son necesarios en la expresión debido a que el operador **!=** tiene mayor precedencia que el operador **=**
   por lo que en ausencia de los paréntesis la prueba de relación se realizaría antes que la asignación.

3. Desde el punto de vista de la **semántica** la sentencia *if* evalúa a *feof* con *stdin* como argumento y lo niega, si la expresión
   resulta verdadera invoca a la función *perror* con el argumento "Error".  
   Desde la **pragmática** la sentencia se encarga de determinar si terminó con error o no.

4. La función **perror(s)** imprime s y un mensaje de error, como si fuera **fprintf(stderr,..)**. Copia al flujo de salida stderr 
   la cadena "Error".

5. if(*ferror(stdin)*).   
   **ferror** devuleve un valor distinto de cero (verdadero) cuando está activado el indicador de error para el flujo.  
   **feof** devuelve un valor distinto de cero (verdadero) cuando está activado el indicador de fin de archivo para el flujo.  
   Ambas expresiones no son mutuamente excluyentes.  
   La pragmática del programa es determinar si terminó el ingreso de caracteres porque ya no hay flujo de entrada que procesar
   o si terminó debido a algún error.

6. La especificación de conversión comienza con *%*, sigue con el punto (".") que separa el ancho del campo de la precisión.
   El número 1 especifica la cantidad de dígitos luego del punto decimal de un valor de punto flotante. Y por úlitmo el 
   caracter de conversión f que especifica el tipo *double*.

7. En este ejemplo se aplica el casteo para tener mayor precisión en la operación de división. La variable *nl* está definida 
   de tipo *int* y la división de enteros trunca la parte decimal. El casteo modifica el tipo de dato de la expresión (y no de 
   la variable) promoviendo el tipo de dato ,en este caso a un *float*.

8. Adjunto en Git archivo "salida8.txt"

9. Adjunto en Git archivo "estadisticas.txt"

10. El programa no funciona para flujo vacío (no contempla la división por cero).
    Se puede resolver con una expresión condicional (operador ternario "?:") *expresion1?expresion2:expresion3*. Primero se evalúa
    la *expresion1* y si es verdadera entonces se evalúa la *expresion2* y ése es el valor de la expresión condicional, de lo contrario
    se evalúa la *expresion3* y ése es el valor de la expresión condicional.

    Para el caso de estudio sería *printf("Longitud promedio: %.1f\n", ***(nl > 0) ? nc / (float)nl : 0*** );*

11. No cuenta correctamente la cantidad de caracteres ya que también cuenta los caracteres de fin de línea '\n' en la tercer
    expresión del for.
    Una solución puede ser omitir la tercer expresión en el for y agregar un *else* con el incremento de la variable *nc*.

12. Para informar los caracteres y lineas a la entrada se pasa a *stdout* los valores de las variables acumuladoras *nl* y *nc*.

13. Adjunto en git archivo "Promediar2.c".

  