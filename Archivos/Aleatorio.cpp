#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
FILE *arcLibro;
int main ()
{
	char *nombres[]={"Maria Luz","Jose Andres", "Pedro Manuel", "Juan Manuel", "Euler Manuel", "Diana Carolina", "Adriana Jose", "Ricardo Jorge", "Paola Andrea", "Angie Andrea"};
	char *apellidos[]={"Lopez Lopez", "Ruiz Cardona" ,"Carvajal Medina" ,"Gonzales Trejo", "Mejia Londo�o", "Rivera lopez", "Cardona Ceballos", "Betancour Abad", "Mu�oz Guzman", "Toro Ruiz"};
	int No,Noo,ced;
   	char opc=' ';
   	// En esta �rea se debe verficar si existe el archivo de lo contrario debe crearlo 
    if ((arcLibro = fopen("Ejemplo.dat","r"))==NULL){       //Verifica  si existe el archivo de libros, si es asi se conecta
       printf("Archivo no existe, Se crear�  en la direcci�n por defecto \n");
       arcLibro  = fopen("Ejemplo.dat","w+");               //se crea el archivo
      }
      fclose(arcLibro);
      for(int i=0;i<10;i++){
            No=rand() %10;
            Noo=rand() %10-1;
            ced=rand() %100000+1000000;
            printf ("%8d %s %s\n", ced, nombres[No], apellidos[Noo]);
	}
	getch();
}

            
    

