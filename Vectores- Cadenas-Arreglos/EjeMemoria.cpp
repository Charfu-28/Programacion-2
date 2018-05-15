#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <mem.h>

int main (void)
{
	int a=0, *p=NULL;
	char b=70, *q=NULL;
	float f=11.0, *r=NULL;
	double d=3.14159, *s=NULL;
	int long l=421563987, *t=NULL;
	int short h=12, *u=NULL;
	printf ("%d",a);
	scanf ("%d",&a);
	printf ("%d",a);
	p=&a;
	q=&b;
	r=&f;
	s=&d;
	t=&l;
	u=&h;
	printf ("\n entero a: %d tamaño de entero %d direccion de puntero %p contenido %d", a, sizeof(a), p, *p);
	printf ("\n caracter b: %c tamaño de caracter %d direccion de puntero %p contenido %c", b, sizeof(b), q, *q);
	printf ("\n Flotante f: %d tamaño de caracter %d direccion de puntero %p contenido %f", f, sizeof(f), r, *r);
	printf ("\n doble d: %g tamaño de caracter %d direccion de puntero %p contenido %g", d, sizeof(d), s, *s);
	printf ("\n Entero largo l: %d tamaño de caracter %d direccion de puntero %p contenido %d", l, sizeof(l), t, *t);
	printf ("\n Entero corto h: %d tamaño de caracter %d direccion de puntero %p contenido %d", h, sizeof(h), u, *u);
	getch ();
}
 
