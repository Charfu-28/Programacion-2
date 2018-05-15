#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main ()
{
	int i,j,arreglo[6];
//	float arreglo [6];
//	char cadena[6];
	
	for(int i=0;i<6;i++){
	printf ("Digite un entero :\n");
	scanf ("%d",&arreglo[i]);
    }
    printf ("Valores de arreglo. \n");
    for (int j=0;j<6;j++){
	printf ("%d \n", arreglo[j]);
		}
	system("pause"); 
}

