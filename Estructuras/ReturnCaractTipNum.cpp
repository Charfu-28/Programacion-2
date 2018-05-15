#include <stdio.h>
#include <conio.h>
#include <string.h>
//Hacer un programa quer lea una cadena de caracteres  y me retorne los caracteres de tipó númerico contenidos en ella.
int valint (char *cadena)
{
	int b=0, tam=strlen(cadena);
	for(int i=0;i<tam;i++){
		if((cadena[i]>=48)&&(cadena[i]<=57)){
	      b=cadena[i]-48;
	      printf ("%3d",b);
		}
	}
}
int main ()
{
	char cadena[1000];
	printf("INGRESE LA CADENA :");
	scanf("%s",&cadena);
	printf("LOS CARACTERES NUMERICOS DE LA CADENA SON :\n");
	valint (&cadena [0]);
	getch ();
}
