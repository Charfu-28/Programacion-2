#include <stdio.h>
#include <conio.h>
#include <string.h>
////////////////////////////////////////////////////////////////////////////////////////////
//18) Hacer una función que reciba una cadena de caracteres e indique si es palíndromo...
//......Una cadena de caracteres es palíndromo si se lee igual al derecho que al revés...
int palindrome (char cad[],char cadaux[])
{
	int	tam=strlen(cad);
	for(int i=0;i<tam;i++){
		strncpy (cadaux[i],cad[tam],tam);
		tam--;
		printf("%c",cadaux);
	}
}
int main ()
{
	char cad[100],cadaux[100];
	printf("Ingrese la cadena: ");
	gets(cad);
	//printf("Cadena sin vocales: ");
	palindrome (cad,cadaux);
	getch ();
}
