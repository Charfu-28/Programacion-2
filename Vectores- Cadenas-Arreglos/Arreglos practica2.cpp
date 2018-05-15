#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int vector[10];

int main ()
{
	vector[0]=2;
	vector[1]=4;
	vector[2]=6;
	vector[3]=8;
	vector[4]=10;
	vector[5]=12;
	vector[6]=14;
	vector[7]=16;
	vector[8]=18;
	vector[9]=20;
	
	for (int tam=0;tam<10;tam++)
	{
		printf ("\n vector[%d]= %d", tam, vector[tam]);
	}
	
}
