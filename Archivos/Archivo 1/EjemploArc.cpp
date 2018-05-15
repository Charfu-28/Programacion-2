#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct libro	{
    char isbn[13];     
    char Titulo[50];
	char Autor[50];
};

typedef struct libro datos_libro;   
datos_libro Vlibro;                 
FILE *arcLibro;                     

/*Funciones ************************/

int contarLibros (FILE *arcLibro) 
{      //funcion que cuenta los registros en el archivo de libros
       int cont=0;
        arcLibro = fopen("Ejemplo.dat","r+b");
       fseek(arcLibro,0,0);     // posiciona el puntero de archivo en el registro 0
       while(!(feof(arcLibro)))
       {fread (&Vlibro,sizeof(libro),1,arcLibro);
                 cont++;
       }        
       fclose(arcLibro);
       return cont;
}

void agregarLibro(FILE *arcLibro, datos_libro libroReg)
{
   char  isbn[13], resp=' ';
   int   encontrado=0; //variable logica para verificar si un libro existe o no
  
   do{
      system("CLS");
      printf ( "\nIndique el ISBN del libro: ");
      scanf ("%s",isbn);
      //gets(isbn);  
      encontrado=0;
      arcLibro = fopen("Ejemplo.dat","r+b");  
      fseek(arcLibro,0,0);                  
      while(!(feof(arcLibro)))   
       {fread (&Vlibro,sizeof(libro),1,arcLibro);  
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
           fflush(stdin);
           // el siguiente código graba los datos en el archivo
           arcLibro = fopen("Ejemplo.dat","r+b");       //abrir archivo de Libros
           fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
           fwrite(&Vlibro, sizeof(libro),1,arcLibro); //Escribir  en la posicion donde esta el puntero
           fclose(arcLibro);                           //Cerrar el archivo
           }
       else { 
          system("CLS");
          printf("Ya existe el libro\n");
      }
      printf("\n Desea agregar otro libro ?  (S/N) ");
      resp=getchar();
    } while((resp=='s')||(resp=='S'));

}


void listarLibros (FILE *arcLibro)                       
{
   datos_libro libroReg;
   int cont=1;
   int cantidad = contarLibros (arcLibro);                 //cuento los libros  que hay
   printf ("%d", cantidad);

   if (cantidad > 1) {
       system("CLS");
       printf( " \n\n Listado de libros existentes:  \n\n ");
       
       arcLibro = fopen("Ejemplo.dat","r+b");             //abrir el archivo fisico
       fseek(arcLibro,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(arcLibro)))&&(cont<cantidad))       //mientras no sea fin de archivo hacer
       {fread (&Vlibro,sizeof(libro),1,arcLibro);        //lee el archivo registro por registro         
                       
          printf ("\n Libro  %d ",cont);
          printf ("\n ISBN      : %s ", Vlibro.isbn);
          printf ("\n Título    : %s ", Vlibro.Titulo);
          printf ("\n Autor     : %s ", Vlibro.Autor);
          cont++;
          getch();
       }        
       fclose(arcLibro);                                  //cierro la conexion con el archivo    
   }
   else {
       system("CLS");
       printf( " \n\n NO hay libros en existencia n\n ");
       getch();
   }    
}

void inicializar (datos_libro &Vlibro)//PROCEDIMIENTO INICIALIZAR
{
    strcpy(Vlibro.isbn,"");
    strcpy(Vlibro.Titulo,"");
    strcpy(Vlibro.Autor,"");
}

int main (void)
{
//	system("echo %CWD%");
//	system("pause");
   char opc=' ';
   // En esta área se debe verficar si existe el archivo de lo contrario debe crearlo 
    if ((arcLibro = fopen("Ejemplo.dat","r+"))==NULL){       //Verifica  si existe el archivo de libros, si es asi se conecta
       printf("Archivo no existe, Se creará  en la dirección por defecto \n");
       arcLibro  = fopen("Ejemplo.dat","w+");               //se crea el archivo
      }
      fclose(arcLibro);
    // esta área controla el menú del archivo Libro
    do {
       system("CLS");
       printf( "administrar Libros   \n\n ");
       printf( "\n 1) Agregar Libro ");
       printf( "\n 2) Buscar  Libros ");
       printf( "\n 3) Listar  Libro ");
       printf( "\n 4) Borrar  Libro ");
       printf( "\n 5) Salir ");
    
       opc=getchar();
       inicializar(Vlibro);
       switch (opc) {
        case '1': agregarLibro (arcLibro, Vlibro);
                  break;
        case '2': printf (" \n opcion  no implementada "); 
                  getch();
                  break;
        case '3': listarLibros(arcLibro);
                  break;
        case '4': printf (" \n opcion  no implementada  "); 
                  getch();
                  break;
        case '5':
                  break;
        default: printf( "Verifique la opción seleccionada");//en caso de que se equivoque en el menu, le muestro este mensaje
                  break;
        } 
    } while (opc!='5');
    return 0;   
    
}
