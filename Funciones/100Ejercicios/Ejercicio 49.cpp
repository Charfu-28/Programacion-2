#include <stdio.h>
#include <conio.h>
/*49. Utilizando ciclos anidados generar las siguientes ternas de números
  1 1 1
  2 1 2
  3 1 3
  4 2 1
  5 2 2
  6 2 3
  7 3 1
  8 3 2
  9 3 3*/
int main ()
{
    int b,c;
		for(int i=1;i<4;i++){
			b=1;
			c=i;
			printf("%2d %2d %2d \n",i,b,c);
		}
		for(int i=4;i<7;i++){
		    b=2;
			c=i-3;
			printf("%2d %2d %2d \n",i,b,c);
		}
		
		for(int i=7;i<10;i++){
			b=3;
			c=i-6;
			printf("%2d %2d %2d \n",i,b,c);
		}		
}
