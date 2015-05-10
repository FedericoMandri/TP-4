/* Informa la longitud promedio de las líneas
* Federico Mandri K2051
* 10-05-2015
*/

#include <stdio.h> /* getchar EOF feof perror printf */

int main(void) 
{
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */

    for(nl = 0, nc = 0; ( c = getchar()) != EOF; )
	{
		if(c == '\n')
			++nl;
		else
			++nc;
	}

	if( !feof(stdin) )
		perror("No se pudo seguir leyendo de la entrada debido a un error");

	printf("La cantidad de caracteres en la entrada es: %d\n",nc);
	printf("La cantidad de lineas en la entrada es: %d\n",nl);	
	printf("Longitud promedio: %.1f\n", (nl > 0) ? nc / (float)nl : 0);
}
