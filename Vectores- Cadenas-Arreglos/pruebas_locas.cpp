
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
char cadenas[10][50];
	
// Prueba de copia de cadenas utilizando vectores de cadenas y ciclos
// Conclusion: Se debe utilizar una variable temporal intermedia para que funcione strcpy
main (){
	char temporal[50];
	srand(time(NULL));
	printf("Escriba una cadena que será copiada: ");
	scanf("%s", &cadenas[49]);
	for (int i=0; i<49; i++){
		sprintf(temporal, "%d%d%d%d", rand()%50, rand()%50, rand()%50, rand()%50);
		strcpy(cadenas[i], temporal);
		printf("%d  %s\n", i+1, cadenas[i]);
	}
	printf("Copiando  %s\n en todos los demás", cadenas[49]);
	strcpy(temporal, cadenas[49]);
	for(int i=49;i>0;i--){
		strcpy(cadenas[i-1], temporal);
	}
	for (int i=0; i<49; i++){
		printf("%d  %s\n", i+1, cadenas[i]);
	}
	
	
}
