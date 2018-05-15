#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define M 20
#define INI 100

void iniArreglo (int *);
void lisArreglo (int *);


void iniArreglo (int * arr)
{
     for (int i=0; i < M; i++)
         arr[i]= INI+i;
}

void lisArreglo (int * arr)
{
     for (int i=0; i < M; i++)
         printf ("%3d  ", i);
         printf ("\n");    
     for (int i=0; i < M; i++)
         printf ("%3d  ", *(arr +i));
}
int main (void)
{
    int A[M];
    iniArreglo (A);
    lisArreglo (&A[0]);
    getch();
}
