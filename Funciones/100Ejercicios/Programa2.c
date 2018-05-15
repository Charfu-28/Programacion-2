//2. Leer un número entero y determinar si tiene 3 dígitos.
#include <stdio.h>
int main ()
{
	int x;
	printf ("Ingrese un numero:");
	scanf ("%i",&x);
	if((x>99)&&(x<1000))
	{
		printf ("El numero %i tiene 3 digitos.\n",x);
	}
	else{
		printf ("El numero %i tiene mas, o menos de 3 digitos.\n",x);
	}
}
