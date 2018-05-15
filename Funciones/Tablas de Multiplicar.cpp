#include <stdio.h>
#include <conio.h>
int tablas (int n, int m)
{
	int res, i;
	if(n<m){//Esta condicon evalua si el primer numero ingresado (n) es mayor que el segundo de ser asi entra al ciclo.
	while(n<=m){//Condiicon de finalizada del ciclo
	    for(int i=0;i<15;i++){//"i" se incrementa de uno en uno hasta llegar a 15 que es el numero de multiplicandos
		    res=(n*(i+1));//"res" guarda el resultado de la multiplicacion
		    printf("%2d * %2d = %3d\n", n, (i+1), res);//imprime (n)(i)y(res)por cada vuelta del ciclo
	    }
	    printf("\n\n");
	    n++;//despues de terminar el ciclo incremeta (n) en uno para proceder con la siguiente tabla mientras que (n<m)
    }
    }
    else if(m<n){//Esta condicion se cumple en caso de que el primer numero ingresado sea menor que el segundo, y hace el mismo proceso del primer ciclo.
    while(m<=n){
	    for(int i=0;i<15;i++){
		    res=(m*(i+1));
		    printf("%2d * %2d = %3d\n", m, (i+1), res); 
	    }
	    printf("\n\n");
	    m++;
    }
    }
}
int main ()
{
	int n,m;
	printf ("TABLAS DE MULTIPLICAR\n");
	printf ("Ingrese el primer número :");
	scanf ("%d",&n);
	printf ("Ingrese el segundo número :");
	scanf ("%d",&m);
	tablas (n,m);
	getch ();
}
