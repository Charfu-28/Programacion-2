#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int sumarvector (int vector1[], int vector2[], int vectorR[], int cantnum)
{
	if(cantnum==0){
		return 0;
	}
	for(int i=0;i<cantnum;i++){
		vectorR[i]=vector1[i]+vector2[i];
	}	
}
int main ()
{
	int vector1[100];
	int vector2[100];
	int vectorR[100];
	int cantnum=0;
	printf ("\n Cuantos números desea introducir ? : ");
	scanf ("%i", &cantnum);
	for(int i=0;i<cantnum;i++)
	{
		printf ("Digite el valor del %i número :", (i+1));
		scanf ("%i",&vector1[i]);	
	}
	printf ("\nIngrese valores para el vector 2\n");
	for(int i=0;i<cantnum;i++)
	{
		printf ("Digite el valor del %i número :", (i+1));
		scanf ("%i",&vector2[i]);
    }
    sumarvector (vector1, vector2, vectorR, cantnum);
    printf ("\n El vector suma es:\n");
    for(int i=0;i<cantnum;i++){
		
		printf("\n%2d\n", vectorR[i]);
    }
    
}
