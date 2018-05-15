#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TAM 5

void leerCad (char *);       //apuntadores a caracteres
void mostrarCad (char *);    //apuntadores a caracteres

int main (void)
{
    char cad[TAM];
    printf ("Ingrese los caracteres \n"); 
    leerCad(&cad[0]);
    printf ("Los caracteres ingresados son: \n"); 
    mostrarCad (&cad[0]);
    getch();
}

void leerCad (char *c)
{
     for (int i=0; i < TAM; i++)     
         scanf ("%c", (c+i));         // C = &cad[5]; c+i recorre toda el vetor y lo llena hasta que cumpla 5 posiciones
}                                     //y luego corta si es mas larga que 5


void mostrarCad (char *c)
{
   for (int i=0; i< TAM; i++)         //muestra en forma descendente los 5 datos ingresados
         printf ("%c \n", *(c+i)); 
}

