#include <stdio.h>
#include <conio.h>
//14)Haga una función que reciba dos cadenas de caracteres y devuelva otra cadena con la concatenación de las dos primeras.
char concatenacion (char cadena1[], char cadena2[], char cadena3[], int tam)
{
	int acu=tam+1;
	if(tam==0){
		return 0;
	}
	for(int i=0;i<tam;i++){
		cadena3[i]=cadena1[i];
		printf("%c",cadena3[i]);
	}
	for(int i=0;i<tam;i++){
		cadena3[i+acu]=cadena2[i];
		printf("%c",cadena3[i+acu]);
	}
}
int main ()
{
    char cadena1[100], cadena2[100], cadena3[100];
    int tam;
	printf("INGRESE EL TAMAÑO DE LA CADENA A INGRESAR ?:");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
		printf("Ingrese el %d caracter :",i+1);
	    scanf("%s",&cadena1[i]);
	}
    printf("\nINGRESE LA SEGUNDA CADENA?:\n");	
    for(int i=0;i<tam;i++){
		printf("Ingrese el %d caracter :",i+1);
	    scanf("%s",&cadena2[i]);	
    }
    printf("\nLa concatenacion de las cadenas es :\n");
    concatenacion (cadena1, cadena2, cadena3, tam);
    getch (); 
}
