#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



//int opciones (void); 
int factorialR (int);
int factorialIt (int);


int main (void)
{
    int opc=-1, x=0;
    do {
        system ("cls"); 
        
                                      // se utiliza la librer�a stdlib.h, sirve para limpiar la pantalla
        printf ("Ingrese la opci�n seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1: 
                 printf ("\n Ingrese el valor del n�mero entero que desea calcular su factorial Recursivo :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
                 printf ("%d", factorialR(x));
                 getch();                                          // usa la librer�a conio.h 
                 break;                      
        case 2: 
                 printf ("\n Ingrese el valor del n�mero entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
                 printf ("%d", factorialIt (x));
                 getch();
                 break;      
        case 0: 
                 getch();
                 break;      

        }
    } while (opc != 0);
    
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
    
    getch();                                           // usa la librer�a conio.h
}



int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1.  Funci�n Factorial recursivo de n               \n");
     printf ("2.  Funci�n factorial iterativo de n               \n");
     printf ("0.  Salir   \n");
}
     
int factorialR (int n)
{
    if (n==0)
       return 1;
    else
        return (n * factorialR (n-1));
}

int factorialIt (int n)
{
    int i=1, res=1;
    if (n<1)
        return 1;
    for (int i=1;i<=n ;i++)
        res=res*i;
    return res;
}


