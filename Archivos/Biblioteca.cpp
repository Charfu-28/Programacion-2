#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
/***********************/
#define M 5
#define MAX 100
int cantidadGuardada;
/***********************/
typedef struct{
   int dia;
   int mes;
   int anio;
}Fecha;
/**********************/
struct autor{
	char Id;
	char Nombre[50];
	char Pais[15];
	Fecha fechaNac;
	Fecha fechaDef;
}autores[M];

/*********************/
struct editorial{
	char Id[10];
	char Nombre[50];
	char Pais[15];
	Fecha fechaNac;
	Fecha fechaDef;
}editoriales[M];
/********************/
typedef struct libro{
    char isbn[13];     
    char Titulo[50];
	int IdAutor;
	int IdEditorial;
	Fecha fechapub;
}libros[M];
/********************/
void agregarAutor (int pos){
	pos=pos-1;
	printf("\nINGRESE LOS DATOS DE CADA AUTOR :");
	printf ( "\nIndique la Id del autor: ");
    scanf ("%d",&autores[pos].Id);	
	fflush(stdin);                        
	printf("\nNombres Y Apellidos : ");
	gets(autores[pos].Nombre);
	fflush(stdin);
	printf("\nPais : ");
	gets(autores[pos].Pais);
	fflush(stdin);
	printf("\nFecha Nacimiento. ");
	printf("\nDia :"); 
	scanf("%d", &autores[pos].fechaNac.dia);
	fflush(stdin);
	printf("Mes :");
	scanf("%d", &autores[pos].fechaNac.mes);
	fflush(stdin);
	printf("Año :");
	scanf("%d", &autores[pos].fechaNac.anio);
	fflush(stdin);
	printf("\nFecha Defuncion.");
	printf("\nDia :");
	scanf("%d", &autores[pos].fechaDef.dia);
	fflush(stdin);
	printf("Mes :");
	scanf("%d", &autores[pos].fechaDef.mes);
	fflush(stdin);
	printf("Año :");
	scanf("%d", &autores[pos].fechaDef.anio);
	fflush(stdin); 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
int MostrarAutor (int pos)
{
	printf("\nId : %d",autores[pos-1].Id);
	printf("\nNombre : %s",autores[pos-1].Nombre);
	printf("\nPais : %s",autores[pos-1].Pais);
	printf("\nFecha Nacimiento : %d/%d/%d",autores[pos-1].fechaNac.dia,autores[pos-1].fechaNac.mes,autores[pos-1].fechaNac.anio);
	printf("\nFecha Defuncion  : %d/%d/%d",autores[pos-1].fechaDef.dia,autores[pos-1].fechaDef.mes,autores[pos-1].fechaDef.anio);
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
int listarAutor (){
	printf("\nLISTA DE AUTORES REGISTRADOS.");
    for(int j=0;j<cantidadGuardada;j++){
	    MostrarAutor (j+1);
    }
    return 0;
}
////////////////////Menu///////////////////////////////////////////////////////////////////////////////
int opciones (void)
{
     printf (" \n  M E N U     P R I N C I P A L   \n\n");
     printf ("1.AÑADIR AUTOR.\n");
     printf ("2.LISTAR AUTOR.\n");
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
	    printf ("Escoja una opcion para continuar: "); 
	    scanf ("%d",&opc);                                  
	    switch (opc){
			case 1:
				do{
					agregarAutor(cantidadGuardada+1);
					cantidadGuardada++;
					printf("Desea almacenar otro autor ? (S/n): ");
					resNuevoDato=getch ();
				}while((resNuevoDato=='s'||resNuevoDato==13)&&cantidadGuardada<M);
		        break;          
		    case 2:
				listarAutor ();
		        printf("\nPresiona una tecla para volver al menu.");
				getch ();
		        break;
		    case 3:
				//modificar ();
			    break;
			case 4:
				//interfazBorrarDatos ();
				break;	
	    }
    }while (opc != 0);
    printf ("Gracias por utilizar núestro sistema. Adíos  "); 
    getch();                                          
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

            
