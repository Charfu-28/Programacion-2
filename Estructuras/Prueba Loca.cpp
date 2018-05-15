#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int prueba ()
{
	char Id[10];
	for(int i=0;i<10;i++){
		Id[i]=i;
		printf("%d",Id[i]);
	}
}
int main (){
	prueba ();
}
