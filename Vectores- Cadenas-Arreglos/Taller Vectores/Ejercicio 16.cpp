#include <stdio.h>
#include <conio.h>
#include <string.h>
////////////////////////////////////////////////////////////////////////////////////////////
//16) Hacer una función que reciba una cadena de caracteres y devuelva otra sin las vocales.
int numvocales (char cad[])
{
	int tam,a=97,e=101,i=105,o=111,u=117,A,E,I,O,U;
	tam=strlen(cad);
	for(int j=0;j<tam;j++){
		if(cad[j]==a||cad[j]==e||cad[j]==i||cad[j]==o||cad[j]==u||cad[j]=='A'||cad[j]=='E'||cad[j]=='I'||cad[j]=='O'||cad[j]=='U'){
			cad[j]='.';
		}
		if(cad[j]!='.'){
			printf("%c",cad[j]);
		}
	}	
}
int main ()
{
	char cad[100];
	printf("Ingrese la cadena: ");
	gets(cad);
	printf("Cadena sin vocales: ");
	numvocales (cad);
	getch ();
}

