#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int cifras (int)
//int cifras (int n)
{
	if (N <10)
	return 1;
	return (1 + cifras (n / 10));
}
int main void
{
	int Q;
	printf ("ingrese un numero:");
	scanf ("%d",&Q);
	printf (" /n tiene %d digitos", cifras(Q));
	gatch ();
}
