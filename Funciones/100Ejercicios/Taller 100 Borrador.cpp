#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
////////////Funciones Prototipo/////////////////////////////////////////////////
int opciones (void);
int subopciones (void);
int entero (int);
int enttresdig (int);
int enteronegativo (int);
int sumadigitos (int);
int digitospares (int);
int primo(int);
int primonegativo (int);
int digitosmultiplos (int);
int digitosiguales (int);
//1. Leer un número entero y determinar si es un número terminado en 4.
int entero (int n)
{
    if ((n%10)==4)
   {
    return 1;
   }
    else return 0;
}
//2. Leer un número entero y determinar si tiene 3 dígitos.
int enttresdig (int n)
{
	if (n>99&&n<1000)
	{
	 return n=1;	
	}
	else return n=0;
}
//3. Leer un número entero y determinar si es negativo.
int enteronegativo (int n)
{
	if (n<0)
	return 1;
	return 0;
}
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
//5. Leer un número entero de dos dígitos y determinar si ambos dígitos son pares.
int digitospares (int n)
{
	if (((n%10)+(n/10))/2==0)
	return n=1;
	return n=0;
}
//6. Leer un número entero de dos dígitos menor que 20 y determinar si es primo.
int primo (int n)
{
	for (int i=2; i < (sqrt (n) + 1); i++)
	    if ((n%i)==0)
	    return 0;
} 	
//7. Leer un número entero de dos dígitos determinar si es primo y negativo.
int primonegativo (int n)
{
    for (int i=2; i < (sqrt (n)+ 1); i++)
	    if (((n%i)==0)&&(n<0))
	    return 0;
}   
//9. Leer un número entero de dos dígitos y determinar si un dígito es múltiplo del otro.
int digitosmultiplos (int n)
{
	int dig1=0, dig2=0;
	dig1=(n%10);
	dig2=(n/10);
	if(n>9&&n<100)
    {	
        if((dig1/dig2==0)||(dig2/dig1==0))
        {
	    return 1;
	    }  	
		else	
		return 0;
	}   
   else
  return opciones();
}
//10. Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales.
int digitosiguales (int n)
{
	int dig1=0, dig2=0;
	dig1=(n%10);
	dig2=(n/10);
	if(n>9&&n<100)
    {	
        if(dig1==dig2)
        {
	    return 1;
	    }  		
	    else{
	    return 0;}
    }
   else
  return opciones();
}
////////////////////Menu////////////////////////////////////////////////////////
int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1. EJERCICIOS DEL 1 AL 10     \n");
     printf ("0.  Salir   \n");
}
//////////////////Submenu////////////////////////////////////////////////////////
int subopciones (void)
{
     printf ("11 Ejercicio 1.  \n");
     printf ("12 Ejercicio 2.  \n");
     printf ("13 Ejercicio 3.  \n");
     printf ("14 Ejercicio 4.  \n");
     printf ("15 Ejercicio 5.  \n");
     printf ("16 Ejercicio 6.  \n");  
     printf ("17 Ejercicio 7.  \n");
     printf ("19 Ejercicio 9.  \n");
     printf ("20 Ejercicio 10.  \n");
     printf ("0.  Salir   \n");
}
/////////////////////Cuerpo/////////////////////////////////////////////////////
int main (void)
{
    int opc=-1, x=0, n=0;
    do {
        system ("cls"); 
        opciones();  
        printf ("Ingrese la opción seleccionada: "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1:  	
                 printf ("\n");                       
                 printf ("\n", subopciones());
                 getch();                                          
                 break;  
        case 11: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&n);                                  
				 if (entero(n))                                
                     printf ("%d termina en 4 \n", n);
                 else
                     printf ("%d no termina en 4 \n ", n);
                 getch();
                 break; 
        case 12: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&n);                                  
				 if (enttresdig(n))                    
                     printf ("%d tiene tres digitos.", n);
                 else
                     printf ("%d no es de tres digitos. ", n);
                 getch();
                 break;     
		case 13: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&n);                                  
				 if (enteronegativo(n))                    
                     printf ("%d es un entero negativo.", n);
                 else
                     printf ("%d es un entero positivo. ", n);
                 getch();
                 break;       
        case 14: 
                 printf ("\n Ingrese un numero de dos digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("La suma de los digitos de %d es : %d",n,sumadigitos(n));
                 getch();                                         
                 break;  
        case 15: 
                 printf ("\n Digite un número de dos digitos:  ");
                 scanf ("%d",&n);                                  
				 if (digitospares(x))
                     printf ("Los digitos de %d son pares.", n);
                 else
                     printf ("Los digitos de %d no son pares.", n);     
                 getch();
                 break;         
        case 16: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&x);                                  
				 if (primo(x))                                
                     printf ("%d es primo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                 getch();
                 break; 
        case 17: 
                 printf ("\n Digite el número a evaluar :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
				 if (primo(x))                                  // usa la libreria stdio.h 
                     printf ("%d es primo Negativo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                getch();
				break;	
		case 19: 
                 printf ("\n Digite un número de dos digitos :  "); // usa la libreria stdio.h 
                 scanf ("%d",&n);                                   // usa la libreria stdio.h 
				 if (digitosmultiplos(n))                                  // usa la libreria stdio.h 
                     printf ("Ningun digito es múltiplo del otro. \n ");
                 else
                     printf ("Un digito es múltiplo del otro\n ");
                getch();
				break;	
		case 10: 
                 printf ("\n Digite un número de dos digitos :  "); 
                 scanf ("%d",&n);                                  
				 if (digitosiguales(n))                                  
                     printf ("Ambos digitos son iguales. \n ");
                 else
                     printf ("Ambos digitos NO son iguales. \n ");
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
