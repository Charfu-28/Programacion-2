// Area de librer�as
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Area de definici�n de constante de precompilaci�n
#define N 10

// Area de definici�n de constante globales
//const ypi 3.1415946;

// Area de funciones prototipo

int mayor (int);


// Area de definici�n de tipos y variables globales 



// Area de funciones prototipo

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

// Funci�n principal

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
 //   getch();     
}
