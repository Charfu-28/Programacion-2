#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
//funciones prototipo
int cifras (int);
//area de funciones
int cifras (int n)
{
    if (n<10)
    return 1;
    return (1+cifras (n/10));
}
//funcion principal
int main (void)
{
int Q;
printf ("Ingrese un numero:");
scanf ("%d",&Q);
printf ("/ n tiene %d digitos", cifras (Q));
getch();
}
