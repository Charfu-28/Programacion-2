#include <stdio.h>
#include <conio.h>
//15) Hacer una función que reciba una cadena de caracteres y cuente cuantas vocales tiene.
int vocales (char cadena1[], int tam)
{
    int acu=0, a=0, e=0, i=0, o=0, u=0;
	if(tam==0){
		return 0;
	}
	for(int i=0;i<tam;i++){
		if(cadena1[i]=='a'||cadena1[i]=='e'||cadena1[i]=='i'||cadena1[i]=='o'||cadena1[i]=='u'||
		   cadena1[i]=='A'||cadena1[i]=='E'||cadena1[i]=='I'||cadena1[i]=='O'||cadena1[i]=='U'){
		   acu=acu+1;
		}	
	}	
	printf("%d",acu);
}
int main ()
{
	int tam;
	char cadena1[100];
	printf("INGRESE EL TAMAÑO DE LA CADENA A INGRESAR ?:");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
		printf("Ingrese el %d caracter :", i+1);
		scanf("%s",&cadena1[i]);
	}
	printf("\nLA CADENA INGRESADA ES :");
	for(int i=0;i<tam;i++){
		printf("%c",cadena1[i]);
	}
	printf("\nEL NUMERO DE VOCALES DE LA CADENA ES :");
	vocales (cadena1, tam);
	getch ();	
}

