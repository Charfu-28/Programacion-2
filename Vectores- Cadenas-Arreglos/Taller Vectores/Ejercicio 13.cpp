#include <stdio.h>
#include <conio.h>
char *punt;
//13).Hacer una función que reciba una cadena de caracteres y devuelva otra cadena  invirtiendo todos los caracteres de la primera.
char invertida (char cadena1[], char cadenainv[], int tam)
{
	int j=0;
	if(tam==0){
		return 0;
	}
	for(int i=tam;i>=0;i--){
		punt=&cadena1[i];
		cadenainv[j]=*punt;
		printf("%c", cadenainv[j]); 
		j++; 
	}
}
main (void)
{
	char cadena1[100], cadenainv[100];
	int tam;
	printf("CUANTOS CARACTERES DESEA INGRESAR? :");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
		printf("Ingrese el %d caracter de la cadena :", i+1);
		scanf("%s",&cadena1[i]);
	}
	printf("\nLA CADENA GENERADA ES :\n");
	invertida (cadena1, cadenainv, tam);
	getch ();
} 
