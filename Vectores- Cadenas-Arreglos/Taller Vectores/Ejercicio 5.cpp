#include <stdio.h>
#include <conio.h>
//5) Hacer una función que reciba dos vectores y retorne un tercer vector con su multiplicación. 
int vectproducto (int vector1[], int vector2[], int vectorP[], int cantnum)
{
	if (cantnum==0){
	  return 0;
	}
	for (int i=0;i<cantnum;i++)
	{
	  vectorP[i]=vector1[i] * vector2[i];
	}	
}
int main ()
{
	int vector1[100];
	int vector2[100];
	int vectorP[100];
	int cantnum=0;
	printf ("CUANTOS VALORES DESEA INGRESAR ? : ");
	scanf ("%i", &cantnum);
	for (int i=0;i<cantnum;i++){
		printf ("Ingrese el valor para el %i número :", (i+1));
		scanf ("%i", &vector1[i]);
	}
	printf ("Ingrese valores para el segundo vector :\n");
	for (int i=0;i<cantnum;i++)
	{
		printf ("Ingrese el valor para el %i número :", (i+1));
		scanf ("%i", &vector2[i]);
	}
	printf ("El producto de vector1 y vector2 es :");
	vectproducto (vector1, vector2, vectorP, cantnum);
	for (int i=0;i<cantnum;i++)
	{
		printf ("\n%d", vectorP[i]);
	}
    getch ();
}
