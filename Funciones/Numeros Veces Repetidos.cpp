
#include <stdio.h>
#include <stdlib.h>
 
main()
 
{
 
    int numero[10],size,a=0,b=0,contador[10]={};
    printf("Introduzca la cantidad de numeros(hasta un maximo de 10): ");
    scanf("%i",&size);
    for (a=0;a<size;a++)
    {	
     printf("Numero %i: ",a+1);
     scanf("%i",&numero[a]);     
     }
    for (a=0;a<size;a++) 
    { 
     for (b=0;b<size;b++)
     {
      if (numero[a]==numero[b]) 
      contador[a]++;
      }
     printf("%i %i\n",numero[a],contador[a]);
     }
    system("Pause");
 
 
	return 0;
}
 
