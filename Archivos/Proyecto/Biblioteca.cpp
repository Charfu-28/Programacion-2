#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
////////////////////////////////////////////////
int opciones     (void);
int subopciones  (void);
int subopciones2 (void);
int subopciones3 (void);
////////////////////////////////////////////////
typedef struct{
	int dia;
	int mes;
	int anio;
}Fecha;
////////////////////////////////////////////////
struct Autor{
	char Id[10];
	char Nombre[50];
	char Nacionalidad[15];
	Fecha FechaNac;
	Fecha FechaDef;	
};
////////////////////////////////////////////////
struct editorial{
	char Id[10];
	char Nombre[50];
	char Pais[15];
	Fecha FechaPub;
};
////////////////////////////////////////////////
struct libro{
    char isbn[13];     
    char Titulo[50];
	char Autor[50];
};
typedef struct libro datos_libro;   
datos_libro Vlibro;                 
typedef struct Autor datos_Autor;   
datos_Autor VAutor; 
typedef struct editorial datos_edit;   
datos_edit Vedit;   
FILE *arcLibro;                  
////////////////////////Funciones Principales///////////////////////////
/////////////////////// D A T O S    L I B R O ///////////////////////////
int contarLibros (FILE *arcLibro) 
{//funcion que cuenta los registros en el archivo de libros
	int cont=0;
	arcLibro = fopen("Ejemplo.dat","r+b");
	fseek(arcLibro,0,0);     // posiciona el puntero de archivo en el registro 0
    while(!(feof(arcLibro))){			
       		fread (&Vlibro,sizeof(libro),1,arcLibro);
            cont++;
    }        
   fclose(arcLibro);
   return cont;
}
////////////////////////////////////////////////
void agregarLibro(FILE *arcLibro, datos_libro libroReg){
	char  isbn[13], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
   	do{		
		system("CLS");
		printf ( "\nIndique el ISBN del libro: ");
		scanf ("%s",isbn);
		encontrado=0;
		arcLibro = fopen("Ejemplo.dat","r+b");  
		fseek(arcLibro,0,0);                  
		while(!(feof(arcLibro))){
        	fread (&Vlibro,sizeof(libro),1,arcLibro);  
          	if(strcmp(Vlibro.isbn,isbn)==0){   //verifico que el codigo del producto no exista
             	encontrado=1;     
            }   
       }        
       fclose(arcLibro);      
       if (encontrado!=1){  //sino existe lo creo
           strcpy(Vlibro.isbn,isbn);
           fflush(stdin);                        
           printf("\nTítulo  : ");
           gets(Vlibro.Titulo);
           fflush(stdin);
           printf("\nAutor   : ");
           gets(Vlibro.Autor);
           fflush(stdin);                                // el siguiente código graba los datos en el archivo
           arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
           fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
           fwrite(&Vlibro, sizeof(libro),1,arcLibro); //Escribir  en la posicion donde esta el puntero
           fclose(arcLibro);                         //Cerrar el archivo
    }
    else{ 
		system("CLS");
		printf("Ya existe el libro\n");
    }
    printf("\n Desea agregar otro libro ?  (S/N) ");
    resp=getchar();
    } while((resp=='s')||(resp=='S'));
}
/////////////////////////////////////////////////////////////////////////////////
void listarLibros (FILE *arcLibro){
	datos_libro libroReg;
    int cont=1;
    int cantidad = contarLibros (arcLibro);                    //cuento los libros  que hay
    if (cantidad > 1){
       system("CLS");
       printf( " \n\n Listado de libros existentes:  \n\n ");
       arcLibro = fopen("Ejemplo.dat","r+b");             //abrir el archivo fisico
       fseek(arcLibro,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(arcLibro)))&&(cont<cantidad)){                                                            //mientras no sea fin de archivo hacer
       fread (&Vlibro,sizeof(libro),1,arcLibro);      //lee el archivo registro por registro                         
          printf ("\n Libro  %d ",cont);
          printf ("\n ISBN      : %s ", Vlibro.isbn);
          printf ("\n Título    : %s ", Vlibro.Titulo);
          printf ("\n Autor     : %s ", Vlibro.Autor);
          cont++;
          getch();
       }        
       fclose(arcLibro);                                  //cierro la conexion con el archivo    
   }
   else{		
    	system("CLS");
       	printf( " \n\n NO hay libros en existencia n\n ");
      	getch();}    
}
///////////////////////////////////////////////////////////////////////
void buscarLibro (FILE *arcLibro, datos_libro buscar){
	
	char  isbn[13], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
    do{
      system("CLS");
      printf ( "\nIndique el ISBN del libro: ");
      scanf ("%s",isbn);
      encontrado=0;
      arcLibro = fopen("Ejemplo.dat","r+b");  
      fseek(arcLibro,0,0);                  
      while(!(feof(arcLibro))){
			fread (&Vlibro,sizeof(libro),1,arcLibro);  
	        if(strcmp(Vlibro.isbn,isbn)==0){   //verifico que el codigo del producto no exista
	            encontrado=1;  
				printf("\nLibro Encontrado:\nIsbn: %s\nTitulo: %s\nAutor: %s",Vlibro.isbn,Vlibro.Titulo,Vlibro.Autor);  
				getch (); 
	        }   
      }        
       fclose(arcLibro);
       
		if (encontrado!=1){  //sino existe lo creo
			printf("El libro no existe, se creara en la direccion por defecto.");
			strcpy(Vlibro.isbn,isbn);
			fflush(stdin);                        
			printf("\nTítulo  : ");
			gets(Vlibro.Titulo);
			fflush(stdin);
			printf("\nAutor   : ");
			gets(Vlibro.Autor);
			fflush(stdin);                                // el siguiente código graba los datos en el archivo
			arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
			fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
			fwrite(&Vlibro, sizeof(libro),1,arcLibro); //Escribir  en la posicion donde esta el puntero
			fclose(arcLibro);                         //Cerrar el archivo
        }
	        printf("\n Salir  (S/N) ");
	        resp=getchar();
    }while((resp=='s')||(resp=='S'));
}
////////////////////////////D A T O S     A U T O R/////////////////////////////
int contarAutor (FILE *arcLibro) 
{//funcion que cuenta los registros en el archivo de libros
	int cont=0;
	arcLibro = fopen("Ejemplo.dat","r+b");
	fseek(arcLibro,0,0);     // posiciona el puntero de archivo en el registro 0
    while(!(feof(arcLibro))){			
       		fread (&VAutor,sizeof(Autor),1,arcLibro);
            cont++;
    }        
   fclose(arcLibro);
   return cont;
}
////////////////////////////////////////////////
void agregarAutor(FILE *arcLibro, datos_Autor Autorreg){
	char  Id[10], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
   	do{		
		system("CLS");
		printf ( "\nIndique la Id del autor: ");
		scanf ("%s",Id);
		encontrado=0;
		arcLibro = fopen("Ejemplo.dat","r+b");  
		fseek(arcLibro,0,0);                  
		while(!(feof(arcLibro))){
        	fread (&VAutor,sizeof(Autor),1,arcLibro);  
          	if(strcmp(VAutor.Id,Id)==0){   //verifico que el codigo del producto no exista
             	encontrado=1;     
            }   
       }        
       fclose(arcLibro);      
       if (encontrado!=1){  //sino existe lo creo
           strcpy(VAutor.Id,Id);
           fflush(stdin);                        
           printf("\nNombre Completo : ");
           gets(VAutor.Nombre);
           fflush(stdin);
           printf("\nNacionalidad    : ");
           gets(VAutor.Nacionalidad);
           fflush(stdin);  
		   printf("\nFECHA NACIMIENTO: ");
		   printf("\nDia: ");
           scanf("%d",&VAutor.FechaNac.dia);
           fflush(stdin);  
		   printf("\nMes: ");
           scanf("%d",&VAutor.FechaNac.mes);
           fflush(stdin); 
		   printf("\nAño: ");
           scanf("%d",&VAutor.FechaNac.anio);
           fflush(stdin);
		   printf("\nFECHA DEFUNCION: ");
		   printf("\nDia: ");
           scanf("%d",&VAutor.FechaDef.dia);
           fflush(stdin);  
		   printf("\nMes: ");
           scanf("%d",&VAutor.FechaDef.mes);
           fflush(stdin); 
		   printf("\nAño: ");
           scanf("%d",&VAutor.FechaDef.anio);
           fflush(stdin);                                  // el siguiente código graba los datos en el archivo
           arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
           fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
           fwrite(&VAutor, sizeof(Autor),1,arcLibro); //Escribir  en la posicion donde esta el puntero
           fclose(arcLibro);                         //Cerrar el archivo
    }
    else{ 
		system("CLS");
		printf("Ya existe el Autor\n");
    }
    printf("\n Desea agregar otro Autor. ?  (S/N) ");
    resp=getchar();
    } while((resp=='s')||(resp=='S'));
}
/////////////////////////////////////////////////////////////////////////////////
void listarAutores (FILE *arcLibro){
	datos_Autor Autorreg;
    int cont=1;
    int cantidad = contarAutor (arcLibro);                    //cuento los libros  que hay
    if (cantidad > 1){
       system("CLS");
       printf( " \n\n Listado de Autores existentes:  \n\n ");
       arcLibro = fopen("Ejemplo.dat","r+b");             //abrir el archivo fisico
       fseek(arcLibro,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(arcLibro)))&&(cont<cantidad)){                                                            //mientras no sea fin de archivo hacer
       fread (&VAutor,sizeof(Autor),1,arcLibro);      //lee el archivo registro por registro                         
          printf ("\n Autor %d ",cont);
          printf ("\n Id               : %s ", VAutor.Id);
          printf ("\n Nombre           : %s ", VAutor.Nombre);
          printf ("\n Nacionalidad     : %s ", VAutor.Nacionalidad);
          printf ("\n Fecha Nacimiento : %d/%d/%d", VAutor.FechaNac.dia,VAutor.FechaNac.mes,VAutor.FechaNac.anio);
		  printf ("\n Fecha Defuncion  : %d/%d/%d", VAutor.FechaDef.dia,VAutor.FechaDef.mes,VAutor.FechaDef.anio);
          cont++;
          getch();
       }        
       fclose(arcLibro);                                  //cierro la conexion con el archivo    
   }
   else{		
    	system("CLS");
       	printf( " \n\n NO hay autores en existencia n\n ");
      	getch();}    
}
///////////////////////////////////////////////////////////////////////
void buscarAutor (FILE *arcLibro, datos_Autor buscar){
	
	char  Id[10], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
    do{
      system("CLS");
      printf ( "\nIndique la Id del autor: ");
      scanf ("%s",Id);
      encontrado=0;
      arcLibro = fopen("Ejemplo.dat","r+b");  
      fseek(arcLibro,0,0);                  
      while(!(feof(arcLibro))){
			fread (&VAutor,sizeof(Autor),1,arcLibro);  
	        if(strcmp(VAutor.Id,Id)==0){   //verifico que el codigo del producto no exista
	            encontrado=1;  
				printf("\nLibro Encontrado:\nId: %s\nNombre: %s\nNacionalidad: %s\nFecha Nacimiento : %d/%d/%d\nFecha Defuncion  : %d/%d/%d",VAutor.Id,VAutor.Nombre,VAutor.Nacionalidad,VAutor.FechaNac.dia,VAutor.FechaNac.mes,VAutor.FechaNac.anio,VAutor.FechaDef.dia,VAutor.FechaDef.mes,VAutor.FechaDef.anio);  
				getch (); 
	        }   
      }        
       fclose(arcLibro);
       
		if (encontrado!=1){  //sino existe lo creo
			printf("El Autor no existe, se creara en la direccion por defecto.");
			strcpy(VAutor.Id,Id);
			fflush(stdin);                        
			printf("\nNombre        : ");
			gets(VAutor.Nombre);
			fflush(stdin);
			printf("\nNacionalidad  : ");
			gets(VAutor.Nacionalidad);
			fflush(stdin); 
			printf("\nFECHA NACIMIENTO: ");
		    printf("\nDia: ");
            scanf("%d",&VAutor.FechaNac.dia);
            fflush(stdin);  
		    printf("\nMes: ");
            scanf("%d",&VAutor.FechaNac.mes);
            fflush(stdin); 
		    printf("\nAño: ");
            scanf("%d",&VAutor.FechaNac.anio);
            fflush(stdin);
		    printf("\nFECHA DEFUNCION: ");
		    printf("\nDia: ");
            scanf("%d",&VAutor.FechaDef.dia);
            fflush(stdin);  
		    printf("\nMes: ");
            scanf("%d",&VAutor.FechaDef.mes);
            fflush(stdin); 
		    printf("\nAño: ");
            scanf("%d",&VAutor.FechaDef.anio);
            fflush(stdin);                               // el siguiente código graba los datos en el archivo
			arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
			fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
			fwrite(&VAutor, sizeof(Autor),1,arcLibro); //Escribir  en la posicion donde esta el puntero
			fclose(arcLibro);                         //Cerrar el archivo
        }
	        printf("\n Salir  (S/N) ");
	        resp=getchar();
    }while((resp=='s')||(resp=='S'));
}
////////////////////////////D A T O S   E D I T O R I A L /////////////////////////////
int contarEdit (FILE *arcLibro) 
{//funcion que cuenta los registros en el archivo de libros
	int cont=0;
	arcLibro = fopen("Ejemplo.dat","r+b");
	fseek(arcLibro,0,0);     // posiciona el puntero de archivo en el registro 0
    while(!(feof(arcLibro))){			
       		fread (&Vedit,sizeof(editorial),1,arcLibro);
            cont++;
    }        
   fclose(arcLibro);
   return cont;
}
////////////////////////////////////////////////
void agregarEdit (FILE *arcLibro, datos_edit editreg){
	char  Id[10], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
   	do{		
		system("CLS");
		printf ( "\nIndique la Id de la editorial: ");
		scanf ("%s",Id);
		encontrado=0;
		arcLibro = fopen("Ejemplo.dat","r+b");  
		fseek(arcLibro,0,0);                  
		while(!(feof(arcLibro))){
        	fread (&Vedit,sizeof(editorial),1,arcLibro);  
          	if(strcmp(Vedit.Id,Id)==0){   //verifico que el codigo del producto no exista
             	encontrado=1;     
            }   
       }        
       fclose(arcLibro);      
       if (encontrado!=1){  //sino existe lo creo
           strcpy(Vedit.Id,Id);
           fflush(stdin);                        
           printf("\nNombre  : ");
           gets(Vedit.Nombre);
           fflush(stdin);
           printf("\nPais    : ");
           gets(Vedit.Pais);
           fflush(stdin);  
		   printf("\nFECHA PUBLICACION: ");
		   printf("\nDia: ");
           scanf("%d",&Vedit.FechaPub.dia);
           fflush(stdin);  
		   printf("\nMes: ");
           scanf("%d",&Vedit.FechaPub.mes);
           fflush(stdin); 
		   printf("\nAño: ");
           scanf("%d",&Vedit.FechaPub.anio);
           fflush(stdin);		                        						// el siguiente código graba los datos en el archivo
           arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
           fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
           fwrite(&Vedit, sizeof(editorial),1,arcLibro); //Escribir  en la posicion donde esta el puntero
           fclose(arcLibro);                         //Cerrar el archivo
    }
    else{ 
		system("CLS");
		printf("Ya existe la editorial.\n");
		getch ();
    }
    printf("\n Desea agregar otra editorial. ?  (S/N) ");
    resp=getchar();
    } while((resp=='s')||(resp=='S'));
}
/////////////////////////////////////////////////////////////////////////////////
void listarEdit (FILE *arcLibro){
	datos_edit editreg;
    int cont=1;
    int cantidad = contarEdit (arcLibro);                    //cuento los libros  que hay
    if (cantidad > 1){
       system("CLS");
       printf( " \n\n Listado de editoriales existentes:  \n\n ");
       arcLibro = fopen("Ejemplo.dat","r+b");             //abrir el archivo fisico
       fseek(arcLibro,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(arcLibro)))&&(cont<cantidad)){                                                            //mientras no sea fin de archivo hacer
       fread (&Vedit,sizeof(editorial),1,arcLibro);      //lee el archivo registro por registro                         
          printf ("\n Autor %d ",cont);
          printf ("\n Id                : %s ", Vedit.Id);
          printf ("\n Nombre            : %s ", Vedit.Nombre);
          printf ("\n Pais              : %s ", Vedit.Pais);
          printf ("\n Fecha Publicacion : %d/%d/%d", Vedit.FechaPub.dia,Vedit.FechaPub.mes,Vedit.FechaPub.anio);
          cont++;
          getch();
       }        
       fclose(arcLibro);                                  //cierro la conexion con el archivo    
   }
   else{		
    	system("CLS");
       	printf( " \n\n NO hay editoriales en existencia n\n ");
      	getch();}    
}
///////////////////////////////////////////////////////////////////////
void buscarEdit (FILE *arcLibro, datos_edit buscar){
	
	char  Id[10], resp=' ';
   	int   encontrado=0; //variable logica para verificar si un libro existe o no
    do{
      system("CLS");
      printf ( "\nIndique la Id del autor: ");
      scanf ("%s",Id);
      encontrado=0;
      arcLibro = fopen("Ejemplo.dat","r+b");  
      fseek(arcLibro,0,0);                  
      while(!(feof(arcLibro))){
			fread (&Vedit,sizeof(editorial),1,arcLibro);  
	        if(strcmp(Vedit.Id,Id)==0){   //verifico que el codigo del producto no exista
	            encontrado=1;  
				printf("\nEditorial Encontrada:\nId: %s\nNombre: %s\nPais: %s\nFecha Publicacion : %d/%d/%d",Vedit.Id,Vedit.Nombre,Vedit.Pais,Vedit.FechaPub.dia,Vedit.FechaPub.mes,Vedit.FechaPub.anio);  
				getch (); 
	        }   
      }        
       fclose(arcLibro);
       
		if (encontrado!=1){  //sino existe lo creo
			printf("El Autor no existe, se creara en la direccion por defecto.");
			strcpy(Vedit.Id,Id);
			fflush(stdin);                        
			printf("\nNombre        : ");
			gets(Vedit.Nombre);
			fflush(stdin);
			printf("\nPais  : ");
			gets(Vedit.Pais);
			fflush(stdin); 
			printf("\nFECHA PUBLICACION: ");
		    printf("\nDia: ");
            scanf("%d",&Vedit.FechaPub.dia);
            fflush(stdin);  
		    printf("\nMes: ");
            scanf("%d",&Vedit.FechaPub.mes);
            fflush(stdin); 
		    printf("\nAño: ");
            scanf("%d",&Vedit.FechaPub.anio);
            fflush(stdin);		   						                         // el siguiente código graba los datos en el archivo
			arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
			fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
			fwrite(&Vedit, sizeof(editorial),1,arcLibro); //Escribir  en la posicion donde esta el puntero
			fclose(arcLibro);                         //Cerrar el archivo
        }
	        printf("\n Salir  (S/N) ");
	        resp=getchar();
    }while((resp=='s')||(resp=='S'));
}
//////////////////////////////////////////////////////////////////////////////////////
int opciones (void)
{
     printf (" \n  M E N U     P R I N C I P A L   \n\n");
     printf ("  1. LIBRO    \n");
     printf ("  2. AUTOR    \n");
     printf ("  3. EDITORIAL\n");
     printf ("  0. SALIR    \n");
}
//////////////////////////////////////////////////////////////////////
int subopciones (void)
{
     printf (" \n  S U B M E N U  L I B R O  \n\n");
     printf (" 1. AGREGAR LIBRO  \n");
     printf (" 2. LISTAR LIBRO    \n");
     printf (" 3. BUSCAR LIBRO   \n");
     printf (" 0. SALIR          \n");
}
//////////////////////////////////////////////////////////////////////
int subopciones2 (void)
{
     printf (" \n  S U B M E N U   A U T O R \n\n");
     printf (" 1. AGREGAR AUTOR  \n");
     printf (" 2. LISTAR AUTOR   \n");
     printf (" 3. BUSCAR AUTOR   \n");
     printf (" 0. SALIR          \n");
}
//////////////////////////////////////////////////////////////////////
int subopciones3 (void)
{
     printf (" \n  S U B M E N U   E D I T O R I A L  \n\n");
     printf (" 1. AGREGAR EDITORIAL  \n");
     printf (" 2. LISTAR EDITORIAL   \n");
     printf (" 3. BUSCAR EDITORIAL   \n");
     printf (" 0. SALIR          \n");
}
//////////////////////////////////////////////////////////////////////
int main (void)
{
	int opc=-1,sub=-1,sub2=-1,sub3=-1;
   // En esta área se debe verficar si existe el archivo de lo contrario debe crearlo 
    if ((arcLibro = fopen("Ejemplo.dat","r+"))==NULL){       //Verifica  si existe el archivo de libros, si es asi se conecta
       printf("Archivo no existe, Se creará  en la dirección por defecto \n");
       arcLibro  = fopen("Ejemplo.dat","w+");               //se crea el archivo
      }
      fclose(arcLibro);
    // esta área controla el menú del archivo Libro
    do {
        system ("cls"); 
        opciones();  
        printf ("Escoja una opcion para continuar: "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc){
		    case 1:
		    	 do {
			        system ("cls"); 
			        subopciones();  
			        printf ("Escoja una opcion para continuar: ");  
			        scanf ("%d",&sub);                                    
			        switch (sub)
			        {
				   	    case 1: agregarLibro (arcLibro, Vlibro);
				                break;
				        case 2: listarLibros(arcLibro);
				                getch();
				                break;
				        case 3: buscarLibro (arcLibro, Vlibro); 
				                break;
				        case 0: system("cls");
								opciones ();								
			        			break;
					}		
    				} 
	    while (sub != 0);
	        break;
    {
    case 2:
    	 do {
	        system ("cls"); 
	        subopciones2();  
	        printf ("Escoja una opcion para continuar: ");  
	        scanf ("%d",&sub2);                                    
	        switch (sub2)
	        {
			   	    case 1: agregarAutor (arcLibro, VAutor);
			                break;
			        case 2: listarAutores(arcLibro);
			                getch();
			                break;
			        case 3: buscarAutor (arcLibro, VAutor); 
			                break;
			        case 0: system("cls");
							opciones ();
							getch ();
			        		break;
			}		
    	} 
	    while (sub != 0);
        break;
    }
	{
    case 3:
    	 do {
	        system ("cls"); 
	        subopciones3();  
	        printf ("Escoja una opcion para continuar: ");  
	        scanf ("%d",&sub3);                                    
	        switch (sub3)
	        {
			   	    case 1: agregarEdit (arcLibro, Vedit);
			                break;
			        case 2: listarEdit(arcLibro);
			                getch();
			                break;
			        case 3: buscarEdit (arcLibro, Vedit); 
			                break;
			        case 0: system("cls");
							opciones ();
							getch ();
			        		break;
			}		
    	} 
	    while (sub != 0);
        break;
    }             
		} 
	}
	while (opc != 0);
    printf ("Gracias por utilizar nuestro sistema, Adios  "); // usa la libreria stdio.h 
    getch();                                           // usa la librería conio.h
    return 1;
}
