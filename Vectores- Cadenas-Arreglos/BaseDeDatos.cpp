#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
////////////Variables///////////////////////////////////////////////////////////
#define MAXIMOVECTOR 50
int codigo[MAXIMOVECTOR];
char nombre1[MAXIMOVECTOR][50];
char nombre2[MAXIMOVECTOR][50];
char apellido1[MAXIMOVECTOR][50];
char apellido2[MAXIMOVECTOR][50];
int cantidadGuardada;
////////////Funciones auxiliares////////////////////////////////////////////////
int convertirTextoANum (char texto[10])
{
	int numero=0;
	if(texto[0]>48&&texto[0]<58)
	{
		for(int i=1;i<=strlen(texto);i++){
			if(texto[i]>48&&texto[i]<58){
				numero=numero+(texto[i]-48);
			}
			if(i<strlen(texto)){
				numero=numero*10;
			}
		}
	}
	else return 0;
}
////////////Funciones principales///////////////////////////////////////////////
//Esta funcion lee cada uno de los datos del estudiante ingresados por teclado.
int solicitarDatos (int pos)
{
	pos=pos-1;
	printf("\nINGRESE LOS DATOS DE CADA ESTUDIANTE :\n");
	printf("Codigo :");
	scanf("%d",&codigo[pos]);
	printf("Primer nombre :");
	scanf("%s",&nombre1[pos]);
	printf("Segundo nombre:");
	scanf("%s",&nombre2[pos]);
	printf("Primer apellido :");
	scanf("%s",&apellido1[pos]);
	printf("Segundo apellido :");
	scanf("%s",&apellido2[pos]);
}
//Esta funcion muestra en pantalla un dato despues de que ha sido modificado.
int mostrarDato (int pos)
{
	printf(" %3d %10d %10s %10s %10s %10s\n", pos, codigo[pos-1], nombre1[pos-1], nombre2[pos-1], apellido1[pos-1], apellido2[pos-1]);
	return 0;
}
//Esta funcion muestra en pantalla la lista de datos ingresados.
int listarDatos ()
{
	printf("\nLISTA DE DATOS REGISTRADOS.\n");
	printf(" %5s %10s %-43s\n","No.",  "  CODIGO    ",  "  NOMBRES-APELLIDOS\n  ");
    for(int j=0;j<cantidadGuardada;j++){
	    mostrarDato (j+1);
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
			solicitarDatos (posicion);
			printf("\nEl dato guardado fue :\n");
			mostrarDato (posicion);
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
	char temporal[50];
	codigo[posdestino-1]=codigo[posorigen-1];
	strcpy(temporal, nombre1[posorigen-1]);
	strcpy(nombre1[posdestino-1], temporal);
	strcpy(temporal, nombre2[posorigen-1]);
	strcpy(nombre2[posdestino-1], temporal);
	strcpy(temporal, apellido1[posorigen-1]);
	strcpy(apellido1[posdestino-1], temporal);
	strcpy(temporal, apellido2[posorigen-1]);
	strcpy(apellido2[posdestino-1], temporal);
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
/////////////////////Cuerpo/////////////////////////////////////////////////////
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
					solicitarDatos (cantidadGuardada+1);
					cantidadGuardada++;
					printf("Desea almacenar otro dato ? (S/n): ");
					resNuevoDato=getch ();// Si la persona da Enter se recibe un 13,
					// pero se interpreta como que quiere continuar
				}while((resNuevoDato=='s'||resNuevoDato==13)&&cantidadGuardada<MAXIMOVECTOR);
		        break;          
		    case 2:
				listarDatos ();
		        printf("Presiona una tecla para volver al menu.");
				getch ();
		        break;
		    case 3:
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
