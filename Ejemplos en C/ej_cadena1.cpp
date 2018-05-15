#include <stdio.h>
#include <conio.h>
// #include <stdlib.h>

#define TAM 5

void leerCad (char *);
void mostrarCad (char *);


void leerCad (char *c)
{
     int i=0; 
     char car;
     do {
         car=getchar();
         *(c+i)=car;
         i++;
     } while (car!='\n'); 
     
     
 }
void mostrarCad (char *c)
{
   for (int i=0; i< TAM; i++) 
         printf ("%c \n", *(c+i)); 
}
   
int main (void)
{
 	 int *i=0;
 	
    char cad[TAM];
     *i=&cad[0];
    printf ("Ingrese los caracteres \n"); 
    leerCad(*i);
    printf ("Los caracteres ingresados son: \n"); 
    mostrarCad (&cad[0]);
    getch();
}
