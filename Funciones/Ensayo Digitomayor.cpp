#include <stdio.h>
#include <stdlib.h>
 
/*
Programa que entrega el digito mayor de un numero entero mayor a 0 ingresado
ejemplo: 13, el digito mayor es 3 entre 1 y 3
Utilizando recursividad
*/
int fxDigitoMayor(int Num){
int digitoMayor;
    if((Num < 0)|| (Num ==0))
        return 0;
    else{
        digitoMayor = Num % 10;
        if(digitoMayor < fxDigitoMayor(Num / 10))
            return fxDigitoMayor(Num / 10);
        else
            return digitoMayor;
    }
}
int main(){
int Num;
    printf("Ingresa un numero mayor que 0 : ");
    scanf("%d",&Num);
 
    printf("------\n");
    printf("El digito mayor del numero %d es %d\n",Num,fxDigitoMayor(Num));
    system("pause");
}
