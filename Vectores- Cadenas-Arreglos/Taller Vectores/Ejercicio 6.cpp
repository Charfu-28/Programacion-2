#include <stdio.h>
#include <conio.h>
//6) Hacer una función que reciba un vector y retorne el vector con sus elementos ordenados de mayor a menor.
int ordenado (int vector[], int cantnum)
{
	int guarda, cont=0;
	if(cantnum==0){
		return 0;
	}
	for(int i=0;i<cantnum;i++){
		for(int j=i+1;j<cantnum;j++){
			if(vector[i]==vector[j]){
				cont=cont+1;
				//guarda=vector[i];
				//vector[i]=vector[j];
				//vector[j]=guarda;
			}
			printf("%d \n",vector[i]);
		}
		//printf ("%3d", vector[i]);
	}
	printf("Hay %i datos repetidos.\n",cont);
}
int main ()
{
	int vector[100], cantnum=0;
	printf ("CUANTOS VALORES DESEA INGRESAR :");
	scanf ("%d",&cantnum);
	for(int i=0;i<cantnum;i++){
		printf ("Ingrese el %d valor :", i+1);
		scanf ("%d",&vector[i]);
	}
	printf ("Repeticiones :\n");
	ordenado (vector, cantnum);
	getch ();
}
