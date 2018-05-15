/*
1. Construir un programa que lea un entero y
 a) si es de 2 dígitos muestre la suma de sus  dígitos, 
 b) si es de 3 dígitos, muestre el mayor, 
 c) si es de cuatro dígitos muestre el menor, 
 d) si  es de cinco dígitos muestre el producto de sus dígitos

2. Construir un programa que lea un entero y 
a) si menor que 10, muestre su ultimo digito,
b) si es menor que 100, muestre sus dos últimos dígitos por separado , 
c) si es menor que 1000  muestre sus tres últimos dígitos por separado,
d) si es menor que 10000 muestre sus cuatro últimos dígitos por separado
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Math.h>
////////////Funciones Prototipo/////////////////////////////////////////////////
int opciones (void); 
int sumadigitos (int);
int DigitoMayor (int);
int DigitoMenor (int);
int Producto (int);
//a. Funcion para sumar los digitos de un numero.
int sumadigitos (int n)
{
   if ((n>9)&&(n<100))
   	 {        
      return ((n%10)+(n/10));
     }
     else
     return opciones();
}

//b. Funcion para obtener el digito mayor///////////////////////////////////////
int DigitoMayor (int n)
{
int digitoMayor;
    if((n < 0)|| (n ==0))
        return 0;
    else
	{
    digitoMayor = n%10;
        if(digitoMayor <DigitoMayor(n/10))
            return DigitoMayor(n/10);
    else
        return digitoMayor;
    }
}

//c. Funcion para obtener el digito menor///////////////////////////////////////
int DigitoMenor (int n)
{
int digitoMenor;
    if((n < 1000)||(n>10000))
        return 0;
    else
	{
    digitoMenor = n%10;
        if(digitoMenor >DigitoMenor(n/10))
            return DigitoMenor(n/10);
    else
        return digitoMenor;
    }
}

//d. Funcion preducto de digitos////////////////////////////////////////////////
int Producto (int n)
{
   if ((n>9999)&&(n<100000))	         
      return ((n%10)*(n/10));
      return 0;

}

////////////////////Menu////////////////////////////////////////////////////////
int opciones (void)
   {
        printf ("   M E N U     P R I N C I P A L   \n\n\n" );
        printf ("1. Programa 1.  \n");
        printf ("2. Programa 2.  \n");
        printf ("3. Programa 3.  \n");
        printf ("4. Programa 4.  \n");
        printf ("0.  Salir   \n");
   }
/////////////////////Cuerpo/////////////////////////////////////////////////////
int main (void)
{
    int opc=-1, x=0;
    int n=0;
    do {
        system ("cls"); 
        opciones();                                   
        printf ("Ingrese la opción seleccionada:  ");
        scanf ("%d",&opc);                                   
        switch (opc) {
        case 1: 
                 printf ("\n Ingrese un numero de dos digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("La suma de los digitos de %d es : %d",n,sumadigitos(n));
                 getch();                                         
                 break;    
        case 2: 
                 printf ("\n Ingrese un numero de tres digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("El mayor digito de %d es : %d",n,DigitoMayor(n));
                 getch();                                         
                 break;
        case 3: 
                 printf ("\n Ingrese un numero de cuatro digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("El menor digito de %d es : %d",n,DigitoMenor(n));
                 getch();                                         
                 break;
        case 4: 
                 printf ("\n Ingrese un numero de 5 digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("El procucto de los digitos de %d es : %d",n,Producto(n));
                 getch();                                         
                 break;         
        case 0: 
                 getch();
                 break;     
        }
    } while (opc != 0);
     
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); 
     
    getch();                                     
}
