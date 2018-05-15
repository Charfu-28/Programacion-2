#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50
//Defino la estructura "traductor" que tiene 3 campos 
typedef struct{
	char eng[N];
	char esp[N];
	int lleno;
}traductor;
///////////////
traductor trad[N];
void vacio ();
void agregar ();
void traducir ();
void tradu (int opc);
///////////////////////////
void cambio (char palabra[N]){
	for(int i=0;i<N;i++){
		if(palabra[i]=='\n'){
			palabra[i]='\0';
		}
	}
}
///
void vacio(){
	for(int i=0;i<N;i++){
		trad[i].lleno=0;
	}
}
///////
void agregar(){
	int aux=0;
	for(int i=0;i<N&&aux==0;i++){
		if(trad[i].lleno==0){
			printf("Introduce la palabra en ingles: ");
			fflush(stdin);
			fgets(trad[i].eng,N,stdin);
			cambio(trad[i].eng);
			printf("Introduce la palabra en español: ");
			fflush(stdin);
			fgets(trad[i].esp,N,stdin);
			cambio(trad[i].esp);
			trad[i].lleno=1;
			aux=1;
		}
	}
}
//
void traducir (){
	int opc;
	do{
		printf("Elige que desea hacer:\n");
		printf("[1]. Traducir de Ingles a Español.\n");
		printf("[2]. Traducir de Español a Ingles.\n");
		scanf("%d",&opc);
	}while(opc<1||opc>2);
	
	switch(opc){
		case 1:
			tradu(opc);
			break;
		case 2:
			tradu(opc);
			break;
	}
}
//
void tradu (int opc){
	char aux[N];
	int temp=0,j;
	printf("Introduce la palabra a buscar: ");
	fflush(stdin);
	fgets(aux,N,stdin);
	cambio(aux);
	if(opc==1){
		for(int i=0;i<N&&temp==0;i++){
			j=strcmp(aux,trad[i].eng);
			if(j==0){
				printf("La traduccion de %s es: %s.\n",trad[i].eng,trad[i].esp);
				temp=1;
			}
		}
	}else{
		for(int i=0;i<N;i++){
			j=strcmp(aux,trad[i].esp);
			if(j==0){
				printf("La traduccion de %s es: %s.\n",trad[i].esp,trad[i].eng);
				temp=1;
			}
		}
	}
	
}
/////////
int main (){
	int opc;
	char key;
	do{
		do{
			printf("Elige lo que deses hacer: \n");
			printf("[1]. Añadir palabras al traductor.\n");
			printf("[2]. Buscar traduccion de una palabra.\n");
			scanf("%d",&opc);
		}while(opc<1||opc>2);
		
		switch(opc){
			case 1: 
				agregar ();
				break;
			case 2:
				traducir ();
				break;
		}
		printf("Introduce (S/N) si deseas realizar otra operacion: \n");
		scanf("%c",&key);	
	} while(key=='S'||key=='s');
	system ("pause");
	return 0;
}
