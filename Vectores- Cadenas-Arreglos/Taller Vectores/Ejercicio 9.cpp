#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//9) Hacer una función que reciba dos vectores y retorne verdadero si son iguales.
int iguales (int vector1[], int vector2[], int cantnum)
{	
	int acu=0;
	if(cantnum==0){
		return 0;
	}
	for(int i=0;i<cantnum;i++){
		if(vector1[i]==vector2[i]){
			acu=acu+1;
		}
	}
	if(acu==cantnum){
		printf("\nLos vectores son iguales");
	}
	else{
	printf("\nLos vectores NO son iguales");
    }
}
int main ()
{
	int vector1[100], vector2[100], cantnum=0;
	printf("CUANTOS VALORES DESEA INGRESAR ? :");
	scanf("%d",&cantnum);
	    printf("\nIngrese valores para el vector[1]:\n");
	for(int i=0;i<cantnum;i++){
		printf("Ingrese el %d valor :", i+1);
		scanf("%d",&vector1[i]);	
	}
	    printf("\nIngrese valores para el vector[2] :\n");
	for(int i=0;i<cantnum;i++){
		printf("Ingrese el %d valor :", i+1);
		scanf("%d",&vector2[i]);
	}
	iguales (vector1, vector2, cantnum);
	getch ();
}
