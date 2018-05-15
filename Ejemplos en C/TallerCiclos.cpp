#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int CuadradoDigitos (int);
int SumaCubosPares (int , int );
int primo(int);
void opciones (void); 


int CuadradoDigitos (int n)
{
	int res=0, d1=0, d2=0, d3=0;
	if (n>99 && n<1000) {
		d1=n/100;
		d2=(n/10)%10;
		d3=n%10;
		res=d1*d1+d2*d2+d3*d3; 	
        return res;
	}
       return 0;	 
}

int SumaCubosPares (int m, int n)
{
	int res=0;
	if (m<=n) {
       for (;m<=n; m++)
           if ((m%2)==0) {
              res=res+(m*m*m);
			  printf ("resultado %d %d  \n", m, res);         
		  }
	}
    return res;		 
}

int primo(int n)
{
	for (int i=2; i < (sqrt (n) + 1); i++)
	    if ((n%i)==0)
	        return 0;
	return 1;
}
void opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1.  Suma del Cuadrado de los digitos de un número               \n");
     printf ("2.  Suma de los cubos de los pares entre dos números               \n");
     printf ("3.  Evaluar si un número es primo               \n");
     printf ("0.  Salir   \n");
}
     

int main (void)
{
    int opc=-1, x=0, x2=0,  res=-1;
    do {
        system ("cls"); 
        opciones();                                    // se utiliza la librería stdlib.h, sirve para limpiar la pantalla
        printf ("Ingrese la opción seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1: 
                 printf ("\n Ingrese un número entero de tres dígitos :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);
				 if (CuadradoDigitos(x))                                   // usa la libreria stdio.h 
                    printf ("%d", CuadradoDigitos(x));
                 else
                 
                    printf ("El número no es de tres dígitos");
				 getch();                                          // usa la librería conio.h 
                 break;                      
        case 2: 
                 printf ("\n Ingrese el primer límite :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
                 printf ("\n Ahora el segundo límite :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x2);
				 if (x<=x2)                                   // usa la libreria stdio.h 
                     printf ("%d", SumaCubosPares (x,x2));
                 else
                     printf ("%d", SumaCubosPares (x2,x));
                 getch();
                 break;      
        case 3: 
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

