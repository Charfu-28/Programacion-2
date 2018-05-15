#include<stdio.h>
#include<conio.h>
#include<math.h>

int primos (int);
float promedio (int);

int primos(int n)
{
    int cont=2;
       while(cont <= sqrt(n))
       {
         if( (n%cont) == 0 )
         return(0);
         else
           cont++;
       }
 return(1);
}

float promedio (int n)
{
      float acum=0;
      float cont=0;
      float res=0;
   do{      
     
            scanf("%d",&n);
            if(primos(n))
            {
              acum+=n;
              cont++;
            }
              
               
      }
            while(n);
            printf("\n %f %f",acum,cont);
           
            res=acum/cont;
            printf("\n %4.2f",res);
            return res;
}
int main (void)
{
    int x;
   printf("\n Digite el numero:   ");
   printf("\n %4.2f",promedio(x));
   getch();
}

                
            
      
  
