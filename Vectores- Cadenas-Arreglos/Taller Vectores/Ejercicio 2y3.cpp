#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
///////Funcion que busca el numero menor dentro del vector/////////////
int buscarmenor(int vector[100], int cantnum){
	if(cantnum==0){
		return 0;
	}
	int menor=vector[0];
	for (int i=0;i<cantnum; i++){
		if(vector[i]<menor){
			menor=vector[i];
		}
	}
	return menor;
}
//////Funcion que busca el numero mayor dfentro del vector ////////////
int buscarmayor(int vector[100], int cantnum){
	if(cantnum==0){
		return 0;
}
	int mayor=vector[0];
    for	(int i=0;i<cantnum; i++){
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	return mayor;
}
/////cuerpo//////////
int main ()
{
	int mayor=0;
	int vector[100];
	int cantnum=0;
	int menor=0;
	printf ("\n Cuantos números desea introducir ? : ");
	scanf ("%i", &cantnum);
	for(int i=0;i<cantnum;i++)
	{
		printf ("Digite el valor del %i número :", (i+1));
		scanf ("%i",&vector[i]);
	}
	menor=buscarmenor(vector, cantnum);
	mayor=buscarmayor(vector, cantnum);
	printf ("El menor número introducido es :%d\n\n", menor);
	printf ("El mayor número introducido es :%d", mayor);
	getch();
}


