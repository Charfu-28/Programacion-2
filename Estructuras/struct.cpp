#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define M 3
//Definimos una estructura llamada "datos", que tiene como variable un vector de M posiciones.
struct datos{
	int codigo;
	char nombres[40];
}alumnos[M];
//Esta funcion me permite ingresar por teclado los datos de cada estudiante/////
int SolicitarDatos ()
{
	for(int i=0;i<M;i++){
		printf("Ingrese el codigo del estudiante :");
		scanf("%d",&alumnos[i].codigo);
		fflush(stdin);
		printf("Ingrese el nombre completo:");
		gets(alumnos[i].nombres);
		fflush(stdin);
	}	
}
//Esta Funcion me permite mostrar en pantalla los datos ingresados////////////////////////
int listarDatos ()
{
	printf("\nLISTA DE DATOS REGISTRADOS.\n");
	printf("%5s %10s %-43s\n","No.",  "  CODIGO    ",  "  NOMBRES-APELLIDOS\n ");
    for(int j=0;j<M;j++){
		printf("%2d  %10d    %10s\n",j,alumnos[j].codigo,alumnos[j].nombres);
    }
    return 0;
}
int main (){
	SolicitarDatos ();
	listarDatos ();
	getch ();
}
