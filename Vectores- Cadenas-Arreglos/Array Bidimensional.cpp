#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
char matriz[3][3]={'*','*','*','*','*','*','*','*','*'};
int i,j,k,a,b,n,X=88;
//////////Tablero //////////////////
void tablero()
	{
		printf("!!!BIENVENIDO!!!\n");
		printf("  JUEGA TRIKI\n\n");
	    for (i=0; i <3; i++)
	        {
	            matriz[i][0] = '*';
	            printf("| %c |",matriz[i][0]);
	        }
	        printf("\n");
	
	    for (j=0; j<3;j++)
	        {
			    matriz[j][1] = '*';
	            printf("| %c |",matriz[j][1]);
	        }
	        printf("\n");
	    for(k=0; k<3; k++)
	        {
	            matriz[k][2] ='*';
	            printf("| %c |",matriz[k][2]);
	        }
	}
/////Funcion para validar turno 1//////////////////
void Turno1 (int n)
    {
        if ((n>9)or(n<1))
            {
                printf("Error...Ingresa un numero entre 1 y 9:\n");
                printf("Ingresa el numero:");
                scanf("%d",&n);
                Turno1(n);
                getch ();
            }
        else do
            {
				int info2=0;
                for(int a=1; a <4; a++)
                    if (n == a)
                        {
                            if((matriz[a-1][0] == '*')&&(info2==0))
                                {
                                    matriz[a-1][0] ='X';
                                    printf("%c",matriz[a-1][0]);
                                    getch ();
                                }
                            else if ((matriz[a-1][0]=='O')or(matriz[a-1][0] == 'X'))
                                {
                                    info2=1;
                                }
                        }

                for(int a=4; a<7; a++)
                    if (n == a)
                        {
                            if((matriz[a-4][1] == 4)&&(info2==0))
                                {
                                    matriz[a-4][1] = X;
                                }
                            else if ((matriz[a-4][1]=='O')or(matriz[a-4][1] == 'X'))
                                {
                                    info2=1;
                                }
                        }

                for(int a=7; a<10; a++)
                    if (n == a)
                        {
                            if ((matriz[a-7][2] ==7)&&(info2==0))
                                {
                                    matriz[a-7][2] = 'X';
                                }
                            else if ((matriz[a-7][2]=='O')or(matriz[a-7][2] == 'X'))
                                {
                                    info2=1;
                                }
                        }

            }while(!(n<10 && n>=1));
        	 system("cls");
        	 tablero ();	
			 getch ();      
	}
int main ()
{
	tablero ();
	printf("\nTURNO JUGADOR #1\n");	
	printf("Intoduce el número de la casilla a marcar: \n");
	scanf("%d",&n);
	Turno1 (n);
}


