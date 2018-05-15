//1. Leer un número entero y determinar si es un número terminado en 4.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Math.h>
int main ()
{
	int x;
	printf ("Ingrese un numero:");
	scanf ("%i",&x);
	if((x%10)==4)
	{
	printf ("El numero %i termina en 4.\n",x);
	}
	else{
	printf ("El numero %i no termina en 4.\n",x);
    }
    system ("pause");
}
