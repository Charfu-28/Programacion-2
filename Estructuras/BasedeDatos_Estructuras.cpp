#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
////////////Variables///////////////////////////////////////////////////////////
#define M 50
int cantidadGuardada;
struct datos{
	int codigo;
	char nombres[50];
}alumnos[M];
////////////FUNCIONES PRINCIPALES/////////////////////////////////////////////
//Esta funcion me permite ingresar por teclado los datos de cada estudiante/////
int SolicitarDatos (int pos)
{
	pos=pos-1;
	printf("Ingrese el codigo del estudiante :");
	scanf("%d",&alumnos[pos].codigo);
	fflush(stdin);
	printf("Ingrese el nombre completo:");
	gets(alumnos[pos].nombres);
	fflush(stdin);
}
//Esta funcion muestra en pantalla un dato despues de que ha sido modificado.
int MostrarDato (int pos)
{
	printf("%5d  %10d    %-40s\n",pos,alumnos[pos-1].codigo,alumnos[pos-1].nombres);
	return 0;
}
//Esta funcion muestra en pantalla la lista de datos ingresados.
int listarDatos ()
{
	printf("\nLISTA DE DATOS REGISTRADOS.\n");
	printf(" %5s %10s %-40s\n",  "No.",  "  CODIGO    ",  "  NOMBRES-APELLIDOS\n  ");
    for(int j=0;j<cantidadGuardada;j++){
	    MostrarDato (j+1);
    }
    return 0;
}
//Esta funcion me permite modificar cualquier dato ingresado, tomando como parametro la posicion del vector a modificar.
int modificar ()
{
	int posicion=0;
	printf("\nEn que posicion desea hacer la modificacion (escriba 0 para cancelar): ");
	scanf("%d",&posicion);
 	if(posicion!=0){
		if(posicion<=cantidadGuardada){
			SolicitarDatos (posicion);
			printf("\nEl dato guardado fue :\n");
			MostrarDato (posicion);
			printf("Presiona una tecla para volver al menu.");
			getch ();
		}else{
			printf("No ha guardado tantos datos.");
		}
	}else printf("Posicion Invalida.");
	return 0;
}
// Recibe dos  posiciones  y copia los datos de la posicion origen encima de los datos de la posicon destino.
int moverDato (int posorigen, int posdestino){
	struct {
		char temporal[50];
	}tem[M];
	alumnos[posdestino-1].codigo=alumnos[posorigen-1].codigo;
	strcpy(tem[posorigen-1].temporal, alumnos[posorigen-1].nombres);
	strcpy(alumnos[posdestino-1].nombres, tem[posorigen-1].temporal);
}
//Esta funcion sobreescribe en la posicion seleccionada el contenido de la posicion siguiente, por medio de la funcion moverDato.
int borrarDato (int posicion)
{
	for(int i=posicion;i<cantidadGuardada;i++){
		moverDato (i+1, i);
	}
	cantidadGuardada--;
}
//Esta funcion recibe la posicion del dato a borrar y evalua algunas restricciones.
int interfazBorrarDatos ()
{
	int posicion;
	listarDatos ();
	printf("Que posicion desea borrar (0 para cancelar): ");
	scanf("%d",&posicion);
	if(posicion!=0&&posicion<=cantidadGuardada){
		borrarDato (posicion);
	}
}
////////////////////Menu////////////////////////////////////////////////////////
int opciones (void)
{
     printf (" \n  M E N U     P R I N C I P A L   \n\n");
     printf ("1.ALMACENAR DATOS.\n");
     printf ("2.LISTAR DATOS.\n");
     printf ("3.MODIFICAR DATOS.\n");
     printf ("4.BORRAR DATOS.\n");
     printf ("0.SALIR \n");
}
int main (void)
{
	cantidadGuardada=0;
	char resNuevoDato;
	int opc=-1;
	do {
	    system ("cls"); 
	    opciones();  
	    printf ("Escoja una opcion para continuar: "); // usa la libreria stdio.h 
	    scanf ("%d",&opc);                                   // usa la libreria stdio.h 
	    switch (opc){
			case 1:
				do{
					SolicitarDatos (cantidadGuardada+1);
					cantidadGuardada++;
					printf("Desea almacenar otro dato ? (S/n): \n");
					resNuevoDato=getch ();// Si la persona da Enter se recibe un 13,
					// pero se interpreta como que quiere continuar
				}while((resNuevoDato=='s'||resNuevoDato==13)&&cantidadGuardada<M);
		        break;          
		    case 2:
				listarDatos ();
		        printf("Presiona una tecla para volver al menu.");
				getch ();
		        break;
		    case 3:
				listarDatos ();
				modificar ();
			    break;
			case 4:
				interfazBorrarDatos ();
				break;	
	    }
    }while (opc != 0);
    printf ("Gracias por utilizar nuestro sistema. Adios  "); // usa la libreria stdio.h 
    getch();                                           // usa la librería conio.h
    return 0;
}
