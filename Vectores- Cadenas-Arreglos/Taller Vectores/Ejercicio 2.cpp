#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
	int vector[100];
	int cantnum=0;
	int mayor=0;
	printf ("\n Cuantos n�meros desea introducir ? : ");
	scanf ("%i", &cantnum);
	for(int i=0;i<cantnum;i++)
	{
		printf ("Digite el valor del %i n�mero :", (i+1));
		scanf ("%i",&vector[i]);
    
	    if (vector[i]>mayor)
	    {
		mayor=vector[i];
        }
	}
	printf ("El mayor n�mero introducido es :%d", mayor);
	getch();
}
