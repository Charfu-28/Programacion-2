#include <stdio.h>
#include <conio.h>

int enteroscomprendidos (int n)
{
	int cont=2;
	while(cont<=n){
		printf ("%d%\n",cont);
		cont=(cont+2);
	}
	return 0;
}
int main (void)
{
    int n;
    printf ("Ingrese un numero :\n" );
    scanf ("%d", &n);
    enteroscomprendidos(n);
    getch ();
}
