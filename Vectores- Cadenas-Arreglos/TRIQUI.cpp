#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//////////////////Funciones Prototipo//////
void loop (char matriz[3][3]);
void LlenarTablero (char matriz[3][3]);
void Tablero (char matriz[3][3]);
void MarcarCelda (char matriz[3][3]);
void Aleatorio (char matriz[3][3]);
int Ganador (char[3][3]);
///////////Cuerpo/////////////////////////
int main (){
	char matriz[3][3];
	loop (matriz);
	system("PAUSE");
	return 0;
}
//////////Funciones Principales///////////
void loop (char matriz[3][3]){//esta funcion me permite llamar las funciones en el orden establecido
	int i,j;
	i=0;
	LlenarTablero (matriz);	
	do{
		system("cls");
		Tablero(matriz);
		if(i%2==0){
			MarcarCelda (matriz);
		}
		else{
			Aleatorio (matriz);
		}
		j=Ganador (matriz);
		i++;
	}while(i<=9&&j==2);
	system("cls");
	Tablero(matriz);
	if(j==0){
		printf("Has ganado\n");
	}
	else if(j==1){
		printf("Has Perdido\n");
	}
	else{
		printf("Empate¡¡ Nadie Gana");
	}
}
//Esta Funcion sirve  para llenar la matriz del 1 al 9
void LlenarTablero (char matriz [3][3]){
	char aux='1';
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=aux++;
		}
	}
}
//Esta funcion me permite sobreescribir la marca en la cailla seleccionada evaluando ciertas condiciones.
void MarcarCelda (char matriz[3][3]){
	int i,j,k;
	char cel;
	do{
		do{
			printf("Marca una celda: ");
			fflush (stdin);
			scanf("%c",&cel);
		}while (cel<'1'||cel>'9');
		k=0;
		switch (cel){
			case '1':{
				i=0;
				j=0;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!.Intentelo con otro numero");
				}
				break;
			}
			case '2':{
				i=0;
				j=1;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro numero");
				}
				break;
			}
			case '3':{
				i=0;
				j=2;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro numero");
				}
				break;
			}
			case '4':{
				i=1;
				j=0;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro numero");
				}
				break;
			}
			case '5':{
				i=1;
				j=1;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro numero");
				}
				break;
			}
			case '6':{
				i=1;
				j=2;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro mnumero");
				}
				break;
			}
			case '7':{
				i=2;
				j=0;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro mnumero");
				}
				break;
			}
			case '8':{
				i=2;
				j=1;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro mnumero");
				}
				break;
			}
			case '9':{
				i=2;
				j=2;
				if(matriz[i][j]=='X'||matriz[i][j]=='O'){
					k=1;
					printf("Casilla ocupada!. Intentelo con otro mnumero");
				}
				break;
			}
			
		}
		
	}while(k==1);
	matriz[i][j]='X';
}
//funcion que permite generar numeros aleatorios por parte del sistema, en esta caso seran las posiciones de la matriz...
void Aleatorio (char matriz[3][3]){//Evaluando si la casilla esta ocupada o no.
	char aux;
	int i,j,k;
	srand (time(NULL));
	do{
		i=rand()%3;
		j=rand()%3;
		k=0;
		if(matriz[i][j]=='X'||matriz[i][j]=='O'){
			k=1;
		}
	}while (k==1);
	matriz[i][j]='O';
}
//Esta funcion me permite mostrar el tablero en pantalla en forma de una matriz, se utilizo simbolos para una mejor presentaciopn
void Tablero (char matriz[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" %c |",matriz[i][j]);	
		}
		printf("\n------------\n");
	}
}
//funcion que permite evaluar el ganador, evalua cada una de las posibles jugadas, dando como resultado numeros.
int Ganador (char matriz[3][3]){//1 significa perdiste,2significa empate y 0 ganaste
	if(matriz[0][0]=='X'||matriz[0][0]=='O'){
		if(matriz[0][0]==matriz[0][1]&&matriz[0][0]==matriz[0][2]){
			if(matriz[0][0]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
		if(matriz[0][0]==matriz[1][0]&&matriz[0][0]==matriz[2][0]){
			if(matriz[0][0]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
	}
	if(matriz[1][1]=='X'||matriz[1][1]=='O'){
		if(matriz[1][1]==matriz[0][0]&&matriz[1][1]==matriz[2][2]){
			if(matriz[1][1]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
		if(matriz[1][1]==matriz[1][0]&&matriz[1][1]==matriz[1][2]){
			if(matriz[1][1]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
		if(matriz[1][1]==matriz[2][0]&&matriz[1][1]==matriz[0][2]){
			if(matriz[1][1]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
		if(matriz[1][1]==matriz[0][1]&&matriz[1][1]==matriz[2][1]){
			if(matriz[1][1]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
	}
	if(matriz[2][2]=='X'||matriz[2][2]=='O'){
		if(matriz[2][2]==matriz[2][0]&&matriz[2][2]==matriz[2][1]){
			if(matriz[2][2]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
		if(matriz[2][2]==matriz[0][2]&&matriz[2][2]==matriz[1][2]){
			if(matriz[2][2]=='X'){
				return 0;
			}
			else{
				return 1;
			}
		}
	}
	return 2;
}

