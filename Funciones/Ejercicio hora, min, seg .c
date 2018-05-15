//Escriba un programa que lea tres numeros: horas, minutos, segundos
 //que devuelva la hora dentro de un segundo,validando que sea una hora correcta
 
 #include <stdio.h>
 
int main ()
{
	int h;
	int min;
	int seg;
	
	printf ("Ingrese el valor de horas:");
	scanf ("%i",&h);
	printf ("Ingrese el valor de minutos:");
	scanf ("%i",&min);
	printf ("Ingrese el valor de segundos:");
	scanf ("%i",&seg);
	
	if(h<=23 && min<=59 && seg<=59)
	{
		seg += 1; 
		if(seg == 60)
		{
			min += 1;
			seg = 0;
		}
		if(min == 60)
		{
			h += 1;
			min= 0;
		}
		if(h == 24)
		{
			h = 0;
		}
		printf ("La hora es : %i:%i:%i.\n",h,min,seg);
	}
	else
	printf ("La hora introducida es incorrecta.\n");
	
	system ("pause");
	return 0;
}

