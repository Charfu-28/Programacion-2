// Area de librerías
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
// Area de definición de constante de precompilación
#define N 10

// Area de definición de constante globales

//const ypi 3.1415946;

// Area de definición de tipos y variables globales 

typedef struct posn {
	int x;
	int y;
};

// Area de funciones prototipo

float distanciaPosn (posn P1, posn P2);
// Area de funciones 

float distanciaPosn (posn P1, posn P2)
{
	float d;
	d=sqrt(pow((P2.x-P1.x),2)+pow((P2.y-P1.y),2));
	return d;
}

// Función principal

int main (void)
{
    int a;
	posn p1, p2;                                  // VARIABLES LOCALES
	printf ("\n Digite el valor de x en el punto 1 : ");
	scanf ("%d",&p1.x);
	printf ("\n Digite el valor de y en el punto 1 : ");
	scanf ("%d",&p1.y);
	printf ("\n Digite el valor de x en el punto 2 : ");
	scanf ("%d",&p2.x);
	printf ("\n Digite el valor de y en el punto 2 : ");
	scanf ("%d",&p2.y);
	printf ("\n \n \n  El valor de la distancia es %f4.2 : ", distanciaPosn(p1,p2) );
	
 //   getch();     
}
