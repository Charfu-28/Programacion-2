//7) Hacer una función que reciba un vector de datos numéricos y retorne el promedio de los datos contenidos en el vector.
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int promedio (int vector1[], int cantnum)
{
	float suma=0;
	if (cantnum==0){
		return 0;
	}
	for (int i=0;i<cantnum;i++){
		suma=suma+vector1[i];
	}
	suma=(suma / cantnum);	
	printf ("%f", suma);
}
int main ()
{
	int vector1[100];
	int cantnum=0;
	float suma=0;
	printf ("CUANTOS VALORES DESEA INGRESAR ? :");
	scanf ("%d",&cantnum);
	for (int i=0;i<cantnum;i++)
	{
		printf ("Ingrese el valor del %d número :", (i+1));
		scanf ("%d",&vector1[i]);
	}
	printf ("\n El promedio de los datos contenidos en el vector es :");
    promedio (vector1, cantnum);
	getch ();
}
