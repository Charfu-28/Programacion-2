//3. Leer un número entero y determinar si es negativo.
#include <stdio.h>
int main ()
{
	int x;
	printf ("Ingrese un numero:");
	scanf ("%i",&x);
	if(x<0)
	{
		printf ("El numero %i es negativo.\n",x);
	}
	else{
		printf ("El numero %i es positivo.\n",x);
	}
}

