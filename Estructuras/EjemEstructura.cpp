#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define M 2

typedef struct Tfecha{
       int dia;
       int mes;
       int anio;
       };
       
typedef struct TiPersona {
       int    numero;
       char   nombre[20];
       Tfecha fechaN;
       };

TiPersona * crearEst (TiPersona);
void listarEst (TiPersona); 


TiPersona * crearEst (TiPersona vTP)
{
     printf ("\n digite el número de la persona : ");
     scanf ("%d", &vTP.numero); 
     fflush(stdin);
     printf ("\n digite el nombre de la persona : ");
     gets (vTP.nombre);
     printf ("\n digite el día de la fecha : ");
     scanf ("%d", &vTP.fechaN.dia);
     printf ("\n digite el mes de la fecha :");
     scanf ("%d", &vTP.fechaN.mes);
     printf ("\n digite el año de la fecha :");
     scanf ("%d", &vTP.fechaN.anio); 
     return &vTP;    
}   
void listarEst (TiPersona * dTP)
{
     printf (" \n \n \t \t Lista de Personas \n");
     printf (" \n Número : ");
     printf (" \t %d \t ",dTP->numero);
     printf (" \n Nombre : \t ");
     puts(dTP->nombre);
     printf (" Fecha : ");
     printf (" \t %d \t ",dTP->fechaN.dia);
     printf (" \t %d \t ",dTP->fechaN.mes);
     printf (" \t %d \t ",dTP->fechaN.anio);
}     

int main (void)
{
    TiPersona Est, *e;    
    e=crearEst(Est);
    getch();
    listarEst (e);
    getch();
}
