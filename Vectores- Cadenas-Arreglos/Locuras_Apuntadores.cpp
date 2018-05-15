#include <stdio.h>
#include <stdlib.h>
/*int incrementar10 (int *apu){
	*apu+=10;
}
int main (){
	int i=20;
	incrementar10 (&i);
	printf("%d",i);
	return 0;
}*/
void funcion1 (int *p, int num){
	*p=10;
	num=20;
}
int main (){
	int r, b;
	r=15;
	b=24;
	funcion1 (&r,b);
	printf("%d %d",r,b);
}
