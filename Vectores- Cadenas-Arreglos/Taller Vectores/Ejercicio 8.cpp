#include <stdio.h>
#include <conio.h>
#include <mem.h>
//8) Hacer una función que reciba un valor numérico entero y retorne un vector de ese tamaño, con sus elementos leídos por teclado con datos de tipo carácter o cadena.
int vectorreturn (int n, int vector[])
{
	if (n==0){
		return 0;
	}
	for (int i=0;i<n;i++){
		printf ("%3i", vector[i]);
	}
}
main  (void)
{
	int n=0;
	int vector[100];
	printf ("Cuantos valores desea Ingresar:");
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		printf ("Ingrese el valor para la posicion %d :", i+1);
		scanf ("%i",&vector[i]);
	}
	printf ("\nEl vector generado es :\n");
	vectorreturn (n, vector);
	getch ();
}
