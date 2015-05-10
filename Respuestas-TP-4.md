Trabajo Pr�ctico N�4 (Curso K2051)
==================================

Caso de estudio - Promedio de L�neas
------------------------------------

1. La primer expresi�n del for inicializa las variables nl y nc con el valor 0.  
   La coma es un operador binario, en el que dos expresiones separadas por el operador coma *se eval�an de izquierda a derecha,
   y el tipo y valor del resultado es el tipo y valor del operando derecho*. Los usos m�s adecuados son en construcciones 
   fuertemente relacionadas.  
   Una expresi�n equivalente es **nl = nc = 0**

2. Los par�ntesis son necesarios en la expresi�n debido a que el operador **!=** tiene mayor precedencia que el operador **=**
   por lo que en ausencia de los par�ntesis la prueba de relaci�n se realizar�a antes que la asignaci�n.

3. Desde el punto de vista de la **sem�ntica** la sentencia *if* eval�a a *feof* con *stdin* como argumento y lo niega, si la expresi�n
   resulta verdadera invoca a la funci�n *perror* con el argumento "Error".  
   Desde la **pragm�tica** la sentencia se encarga de determinar si termin� con error o no.

4. La funci�n **perror(s)** imprime s y un mensaje de error, como si fuera **fprintf(stderr,..)**. Copia al flujo de salida stderr 
   la cadena "Error".

5. if(*ferror(stdin)*).   
   **ferror** devuleve un valor distinto de cero (verdadero) cuando est� activado el indicador de error para el flujo.  
   **feof** devuelve un valor distinto de cero (verdadero) cuando est� activado el indicador de fin de archivo para el flujo.  
   Ambas expresiones no son mutuamente excluyentes.  
   La pragm�tica del programa es determinar si termin� el ingreso de caracteres porque ya no hay flujo de entrada que procesar
   o si termin� debido a alg�n error.

6. La especificaci�n de conversi�n comienza con *%*, sigue con el punto (".") que separa el ancho del campo de la precisi�n.
   El n�mero 1 especifica la cantidad de d�gitos luego del punto decimal de un valor de punto flotante. Y por �litmo el 
   caracter de conversi�n f que especifica el tipo *double*.

7. En este ejemplo se aplica el casteo para tener mayor precisi�n en la operaci�n de divisi�n. La variable *nl* est� definida 
   de tipo *int* y la divisi�n de enteros trunca la parte decimal. El casteo modifica el tipo de dato de la expresi�n (y no de 
   la variable) promoviendo el tipo de dato ,en este caso a un *float*.

8. Adjunto en Git archivo "salida8.txt"

9. Adjunto en Git archivo "estadisticas.txt"

10. El programa no funciona para flujo vac�o (no contempla la divisi�n por cero).
    Se puede resolver con una expresi�n condicional (operador ternario "?:") *expresion1?expresion2:expresion3*. Primero se eval�a
    la *expresion1* y si es verdadera entonces se eval�a la *expresion2* y �se es el valor de la expresi�n condicional, de lo contrario
    se eval�a la *expresion3* y �se es el valor de la expresi�n condicional.

    Para el caso de estudio ser�a *printf("Longitud promedio: %.1f\n", ***(nl > 0) ? nc / (float)nl : 0*** );*

11. No cuenta correctamente la cantidad de caracteres ya que tambi�n cuenta los caracteres de fin de l�nea '\n' en la tercer
    expresi�n del for.
    Una soluci�n puede ser omitir la tercer expresi�n en el for y agregar un *else* con el incremento de la variable *nc*.

12. Para informar los caracteres y lineas a la entrada se pasa a *stdout* los valores de las variables acumuladoras *nl* y *nc*.

13. Adjunto en git archivo "Promediar2.c".

  