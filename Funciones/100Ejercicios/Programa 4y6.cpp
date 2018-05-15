#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
////////////Funciones Prototipo/////////////////////////////////////////////////
void opciones (void);
int sumadigitos (int);
int primo(int); 
//4. Leer un número entero de dos dígitos y determinar a cuánto es igual la suma de sus dígitos.
int sumadigitos (int n)
{
    if ((n>9)&&(n<100))
   	{        
      return ((n%10)+(n/10));
    }
     else
     return 0;
}
//6. Leer un número entero de dos dígitos menor que 20 y determinar si es primo.
int primo(int n)
{
	for (int i=2; i < (sqrt (n) + 1); i++)
	    if (((n>9)&&(n<21))&&((n%i)==0))
	    return 0;
    	return 1;
}
////////////////////Menu////////////////////////////////////////////////////////
void opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1.  Programa 4.               \n");
     printf ("2.  Programa 6.               \n");
     printf ("0.  Salir   \n");
}
/////////////////////Cuerpo/////////////////////////////////////////////////////
int main (void)
{
    int opc=-1, x=0;
    int n=0;
    do {
        system ("cls"); 
        opciones();                                    // se utiliza la librería stdlib.h, sirve para limpiar la pantalla
        printf ("Ingrese la opción seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1: 
                 printf ("\n Ingrese un numero de dos digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("La suma de los digitos de %d es : %d",n,sumadigitos(n));
                 getch();                                         
                 break;                    
        case 2: 
                 printf ("\n Digite el número a evaluar :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
				 if (primo(x))                                   // usa la libreria stdio.h 
                     printf ("%d es primo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                 getch();
                 break;      
        case 0: 
                 getch();
                 break;      

        }
    } while (opc != 0);
    
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
    
    getch();                                           // usa la librería conio.h
    return 1;
}
