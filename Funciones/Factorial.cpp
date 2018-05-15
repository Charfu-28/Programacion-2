#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
//funciones prototipo
long int fibonachi (long int);
//area de funciones
long int fibonachi (long int n)
{
    if (n<=0)
    return 1; 
    if (n==1)
    return 1;
    return (fibonachi (n-1) + fibonachi (n-2));
}
//funcion principal
int main (void)
{
long int Q;
printf ("Ingrese un numero:");
scanf ("%d",&Q);
printf ("/ n El termino de la posicion es: %d", fibonachi(Q-1));
getch();
}
