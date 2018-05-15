#include <stdio.h>
#include <conio.h>
//11) Hacer una función que reciba un entero N y devuelva una cadena de longitud N, leyendo por teclado cada uno de los N caracteres de la cadena.
char cadena1 (int tam, char cadena[])
{
	if(tam==0){
		return 0;
	}
	for(int i=0;i<tam;i++){
		printf("%c", cadena[i]);
	}
}
main (void)
{
	char cadena[100];
	int tam=0;
	printf("CUANTOS CARACTERES DESEA INGRESAR? :");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
		printf("Ingrese el %d caracter de la cadena :", i+1);
		scanf("%s",&cadena[i]);
	}
	printf("\nLA CADENA GENERADA ES :\n");
	cadena1 (tam, cadena);
	getch ();
}
