#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//12) Hacer una función que reciba una cadena de caracteres y la invierta en ella misma.
char invertida (int cantcar, char cadena1[])
{
	if(cantcar==0){
		return 0;
	}
	for(int i=cantcar;i>=0;i--){
		printf("%c",cadena1[i]);
	}
}
int main ()
{
	char cadena1[100];
	int cantcar=0;
	printf("CUANTOS CARACTERES DESEA INGRESAR ?:");
	scanf("%d",&cantcar);
	for(int i=0;i<cantcar;i++){
		printf("Ingrese el %d caracter :", i+1);
		scanf("%s",&cadena1[i]);
	}
	printf("LA CADENA INVERTIDA ES :\n");
	invertida (cantcar, cadena1);
	getch ();	
} 




