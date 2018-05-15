#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// este programa ilustra los conceptos de arreglo, dirección de memoria (apuntador)
// y contenido de la dirección de memoria (Contenido de la dirección del puntero)

void leerVector (int *);
void cargarVector (int *);

void leerVector (int *vec)
{
	for (int i=0; i<5; i++ )
	    printf ("\n El contenido de la posición %d, es %d y esta en %d", i, vec[i], &vec[i]);
}

void cargarVector (int *vec)
{
	for (int i=0; i<5; i++ )
	    vec[i]=100*i;
}


int main (void)
{
    int x=100, *d1=0, m [5];
    system ("cls");       
	// el contenido de x es cambiado y se muestra su valor                             
	printf ("\n El valor de x es %d y el d1 es %d  ", x, d1 ); 
	d1=&x;// usa la libreria stdio.h 
	printf ("\n El nuevo valor de d1 es %p y el contenido  es %d  ", d1, *d1 ); 
	leerVector(&m [0]);
	cargarVector(&m [0]);
	leerVector(&m [0]);

    getch();                                           // usa la librería conio.h
}
