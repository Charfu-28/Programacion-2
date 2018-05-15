#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// este programa lee hasta 10 números o hasta que se digite el número cero,
// retorna el número más alto y el número de veces que se digitó. 

int NumVal (void);
int LeerNum (void);

int NumVal (void) // función que lee un número y verifica que esté entre 0 y 255
{
	int num=-1;
	printf("Digite el valor del numero ");
	scanf ("%d",&num );
    if (num>=0 && num < 256)
        return num;
    else 
	    printf ("Ese número no sirvió, perdió un intento");
}
int LeerNum (void)
{
    int leidos=10, mayor=0, num=0, cont=0;
    do {
    	num= NumVal();		
    	leidos--;        
		if (mayor < num){
    		mayor=num;
    		cont=1;
    	} 
		else if (mayor == num)
		        cont++;
		printf(" Leidos %d, numero %d, Mayor %d, contador %d \n", leidos, num, mayor, cont );        
    } while ((num!=0) && (leidos!=0) );
    return (cont*256+mayor);
}

int main (void)
{
    int x=0;
    system ("cls");                                     // se utiliza la librería stdlib.h, sirve para limpiar la pantalla
    printf ("Ingrese los valores, con cero termina de leer \n  "); 
	x= LeerNum();// usa la libreria stdio.h 
    printf ("el valor mayor es %d que se digito %d veces ", x%256, x/256 );
    getch();                                           // usa la librería conio.h
}
