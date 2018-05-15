#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int mayor (int);

int mayor (int a, int b, int c)
{
    if (a>b)                                      // CONDICIONALES PARA SABER QUE NUMERO ES MAS GRANDE
	{
		if (a>c)
		return a;
		else
		return c;
	}
	else
	{
		if (b>c)
		return b;
		else 
		return c;
	}
         
}

int main (void)
{
    int a, b, c;                                  // VARIABLES LOCALES
	printf ("digite un numero entero:\n");                  
	scanf ("%d",&a);
	printf ("digite un segundo numero entero:\n");
	scanf ("%d",&b);
	printf ("digite un tercer numero entero:\n");
	scanf ("%d",&c);
	printf ("el numero mayor es: ");
	printf ("%d", mayor(a, b, c));
    getch();     
}
