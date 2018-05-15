#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 20
char arreglo[M];
int acu=0;
////////////////////////////
int tamañocad (char arreglo[])
{
	for(int i=0;i<M;i++){
		arreglo[i];
		acu=acu+1;
		printf("%d", acu);
	}
}
int main ()
{
	tamañocad (arreglo);
	getch ();
}
