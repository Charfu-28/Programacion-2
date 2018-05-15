#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
////////////Funciones Prototipo/////////////////////////////////////////////////
int opciones (void);
int subopciones (void);
int subopciones2 (void);
int entero (int);
int enttresdig (int);
int enteronegativo (int);
int sumadigitos (int);
int digitospares (int);
int primo (int);
int primonegativo (int);
int digitosmultiplos (int);
int digitosiguales (int);
int enteromayor (int);
int digitocomun (int);
int numeropar (int);
int sumatodosdigitos (int);
int sumatresdigitos (int);
int digitoiguales3 (int);
int digitomayor (int);
int digitosmultiplos3 (int);
int digitomayord3numeros (int);
int mayordelostres (int);
int dig1igualdig3 (int);
int numerodprimos (int);
///////Ciclos///////////////////////////////////////////////////////////////////
int enteroscomprendidos (int);
int comprendidospares (int);
int comprendidosdivisores (int);
int enteroscomprendidos2 (int);
int terminadosen4 (int);
int enteros1_100 (int);
int pares20_200 (int);
int terminadosen6 (int);
int sumaenteros1_b (int);
int enterosentredigitos (int);
int digitouno (int);
int multiplosde5 (int);
int multiplosde3 (int);
int sumamultiplosde3 (int);
int promediomultiplosde3 (int);
int multiplosde5comprendidos (int);
int numeroprimo (int);
int numeroddigitos (int);
int sumadelosdigitos (int);
//1. Leer un número entero y determinar si es un número terminado en 4.
int entero (int n)
{
    if ((n%10)==4)
    {
     return 1;
    }
    else return 0;
}
//2. Leer un número entero y determinar si tiene 3 dígitos.
int enttresdig (int n)
{
	if (n>99&&n<1000)
	{
	 return n=1;	
	}
	else return n=0;
}
//3. Leer un número entero y determinar si es negativo.
int enteronegativo (int n)
{
	if (n<0)
	return 1;
	return 0;
}
//4. Leer un número entero de dos dígitos y determinar a cuánto es igual la suma de sus dígitos.
int sumadigitos (int n)
{
    if ((n>9)&&(n<100))
   	{        
      return ((n%10)+(n/10));
    }
     else
     return 0;
}
//5. Leer un número entero de dos dígitos y determinar si ambos dígitos son pares.
int digitospares (int n)
{
	if (((n%10)+(n/10))/2==0)
	return n=1;
	return n=0;
}
//6. Leer un número entero de dos dígitos menor que 20 y determinar si es primo.
int primo (int n)
{
	for (int i=2; i < (sqrt (n) + 1); i++)
	    if ((n%i)==0)
	    return 0;
} 	
//7. Leer un número entero de dos dígitos determinar si es primo y negativo.
int primonegativo (int n)
{
    for (int i=2; i < (sqrt (n)+ 1); i++)
	    if (((n%i)==0)&&(n<0))
	    return 0;
}   
//9. Leer un número entero de dos dígitos y determinar si un dígito es múltiplo del otro.
int digitosmultiplos (int n)
{
	int dig1=0, dig2=0;
	dig1=(n%10);
	dig2=(n/10);
	if(n>9&&n<100)
    {	
        if((dig1/dig2==0)||(dig2/dig1==0))
        {
	    return 1;
	    }  	
		else	
		return 0;
	}   
   else
  return opciones();
}
//10. Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales.
int digitosiguales (int n)
{
	int dig1=0, dig2=0;
	dig1=(n%10);
	dig2=(n/10);
	if(n>9&&n<100)
    {	
        if(dig1==dig2)
        {
	    return 1;
	    }  		
	    else{
	    return 0;}
    }
   else
  return opciones();
}
//11. Leer dos números enteros y determinar cuál es el mayor.
int enteromayor (int n, int x)
{
	int dig1=0, dig2=0;
	dig1=(n%10);
	dig2=(x%10);
	if(n>=0&&x>=0)
    {	
        if(dig1>dig2)
        {
			return 1;}
		else if (dig1<dig2)
		{
			return 0;}
    }
   else
   return opciones();
}
//12. Leer dos números enteros de dos dígitos y determinar si tienen dígitos comunes.
int digitocomun (int n, int x)
{
	int dig1n=0, dig2n=0, dig1x=0, dig2x=0;
	dig1n=(n%10);
	dig2n=(n/10);
	dig1x=(x%10);
	dig2x=(x/10);
	
	if((n>9&&n<100)&&(x>9&&x<100))
    {	
        if((dig1n==dig1x)||(dig1n==dig2x)||(dig2n==dig1x)||(dig2n==dig2x))
        {
			return 1;}
		else
			return 0;
    }
   else
   return opciones();
}
//13. Leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un número par.
int numeropar (int n, int x)
{
	if ((n>9&&n<100)&&(x>9&&x<100))
    {	
		int dig1=n, dig2=x, res=0;
		res=((dig1+dig2)%2);
        if (res==0)
        {
			return (dig1+dig2);
			}
		else
		    return 0;	
    }
   else
   return opciones();
}
//14. Leer dos números enteros de dos dígitos y determinar a cuánto es igual la suma de todos los dígitos.
int sumatodosdigitos (int n, int x)
{
	if ((n>9&&n<100)&&(x>9&&x<100))
    {	
		 int dig1n=0, dig2n=0, dig1x=0, dig2x=0;
	     dig1n=(n%10);
	     dig2n=(n/10);
	     dig1x=(x%10);
	     dig2x=(x/10);
	    return (dig1n+dig2n+dig1x+dig2x);	
    }
   else
   return 0;
}
//15. Leer un número entero de tres dígitos y determinar a cuánto es igual la suma de sus dígitos.
int sumatresdigitos (int n)
{
	if (n>99&&n<1000)
	{
	int res1=0, res2=0, res3=0;
	res1=(n%10);
	res2=(n/10);
	res3=((res2/10)+(res2%10));
	
	return (res1+res3);
		}
	else
	    return 0;
}
//16. Leer un número entero de tres dígitos y determinar si al menos dos de sus tres dígitos son iguales.
int digitosiguales3 (int n)
{
	if (n>99&&n<1000)
	{
	int res1=0, res11=0, res2=0, res3=0;
	res1=(n%10);
	res11=(n/10);
	res2=(res11%10);
	res3=(res11/10);
	if((res1==res2)||(res2==res3)||(res1==res3))
	{
	printf ("El numero %d tiene almenos 2 digitos iguales.",n);}
	else{
	printf ("El numero %d No tiene digitos en comun.",n);}
    }
    else 
	printf ("Digite un número de 3 digitos.");
}
//17. Leer un número entero de tres dígitos y determinar en qué posición está el mayor dígito
int digitomayor (int n)
{
	if (n>99&&n<1000)
	{
	int res1=0, res11=0, res2=0, res3=0;
	res1=(n%10);
	res11=(n/10);
	res2=(res11%10);
	res3=(res11/10);
	if((res1>res2)&&(res1>res3))
	{
	printf ("El mayor digito de %d esta en la posicion 3.",n);}
	else{ if ((res2>res1)&&(res2>res3)){
	printf ("El mayor digito de %d esta en la posicion 2.",n);}}
    if ((res3>res1)&&(res3>res2)){
	printf ("El mayor digito de %d esta en la posicion 1.",n);}
	}
    else 
	printf ("Digite un número de 3 digitos.");
}
//18. Leer un número entero de tres dígitos y determinar si algún dígito es múltiplo de los otros.
int digitosmultiplos3 (int n)
{
	if (n>99&&n<1000) //(res1) seráel tercer digito del numero n ingresado.y (res3) será el primer digito.
	{
	int res1=0, res11=0, res2=0, res3=0;
	res1=(n%10);
	res11=(n/10);
	res2=(res11%10);
	res3=(res11/10);
	if (res1%res2==0){
	printf ("El digito 2 es multiplo del digito 3.\n",n);}
	else{ if (res2%res1==0){
	printf ("El digito 3 es multiplo del digito 2.\n",n);}}
    if ((res3%res2)==0){
	printf ("El digito 2 es multiplo del digito 1.\n",n);}
	if ((res2%res3)==0){
	printf ("El digito 1 es multiplo del digito 2.\n",n);}
	if ((res3%res1)==0){
	printf ("El digito 3 es multiplo del digito 1.\n",n);}
	if ((res1%res3)==0){
	printf ("El digito 1 es multiplo del digito 3.\n",n);}
	}         
    else 
	printf ("Digite un número entero de 3 digitos.");
}
//19. Leer tres números enteros y determinar cuál es el mayor. Usar solamente dos variables
int digitomayord3numeros (int a, int b, int c)
{
	int dig1=(a/10), dig2=(a%10), dig3=(b/10), dig4(b%10), dig5=(c/10), dig6=(c%10);
	if (a>9&&a<100&&b>9&&b<100&&c>9&&c<100)
	{
	if (dig1>dig2&&dig1>dig3&&dig1>dig4&&dig1>dig5&&dig1>dig6)
	printf ("El mayor digito de todos los numeros ingresados es %d.", dig1);
	if (dig2>dig1&&dig2>dig3&&dig2>dig4&&dig2>dig5&&dig2>dig6)
	printf ("El mayor digito de todos los numeros ingresados es %d.", dig2);
	if (dig3>dig1&&dig3>dig2&&dig3>dig4&&dig3>dig5&&dig3>dig6)
	printf ("El mayor digito de todos los numeros ingresados es %d.", dig3);
	if (dig4>dig1&&dig4>dig2&&dig4>dig3&&dig4>dig5&&dig4>dig6)
	printf ("El mayor digito de todos los numeros ingresados es %d.", dig4);
	if (dig5>dig1&&dig5>dig2&&dig5>dig3&&dig5>dig4&&dig5>dig6)
	printf ("El mayor digito de todos los numeros ingresados es %d.", dig5);
	if (dig6>dig1&&dig6>dig2&&dig6>dig3&&dig6>dig4&&dig6>dig5)
    printf ("El mayor digito de todos los numeros ingresados es %d.", dig6);
    }
    else
    printf ("Ingrese solo enteros de dos digitos.");
}
//21. Leer tres números enteros de dos dígitos cada uno y determinar en cuál de ellos se encuentra el mayor dígito.
int mayordelostres (int a, int b, int c)
{
	int dig1=(a/10), dig2=(a%10), dig3=(b/10), dig4(b%10), dig5=(c/10), dig6=(c%10);
	if (a>9&&a<100&&b>9&&b<100&&c>9&&c<100)
	{
	if (dig1>dig2&&dig1>dig3&&dig1>dig4&&dig1>dig5&&dig1>dig6)
	printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig1, a);
	if (dig2>dig1&&dig2>dig3&&dig2>dig4&&dig2>dig5&&dig2>dig6)
	printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig2, a);
	if (dig3>dig1&&dig3>dig2&&dig3>dig4&&dig3>dig5&&dig3>dig6)
	printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig3, b);
	if (dig4>dig1&&dig4>dig2&&dig4>dig3&&dig4>dig5&&dig4>dig6)
	printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig4, b);
	if (dig5>dig1&&dig5>dig2&&dig5>dig3&&dig5>dig4&&dig5>dig6)
	printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig5, c);
	if (dig6>dig1&&dig6>dig2&&dig6>dig3&&dig6>dig4&&dig6>dig5)
    printf ("El mayor digito es %d, y se encuentra en el entero %d.", dig6, c);
    }
    else
    printf ("Ingrese solo enteros de dos digitos.");
}
//22. Leer un número entero de tres dígitos y determinar si el primer dígito es igual al último.
int dig1igualdig3 (int n)
{
	if (n>99&&n<1000)
	{
	int dig3=(n%10), dig2=((n/10)%10), dig1=((n/10)/10);
	if (dig3==dig1){
	printf ("El primer digito es igual al ultimo digito.");}
	else {
	printf ("El primer digito es diferente del ultimo digito.");}
    }
	else
	printf ("Solo para enteros de tres digitos.");
}
//23. Leer un número entero de tres dígitos y determinar cuántos dígitos primos tiene.
int numerodprimos (int n)
{int i=1, cont1=0, cont2=0, cont3=0, dig3=(n%10), dig2=((n/10)%10), dig1=((n/10)/10); 
	for (i=1;i<=n;i++)
	{
		if(dig1%i==0)
		cont1++;
		if(dig2%i==0)
		cont2++;
		if(dig3%i==0)
		cont3++;
	}
	if (n>99&&n<1000)
	{
	if(cont1==2&&cont2==2&&cont3==2){
    printf ("Todos los digitos de %d son primos.", n);}
    else { if((cont1==2&&cont2==2)||(cont1==2&&cont3==2)||(cont2==2&&cont1==2)||(cont2==2&&cont3==2)||(cont3==2&&cont1==2)||(cont3==2&&cont2==2)){
    printf ("El entero %d tiene 2 digitos primos.", n);}
    else{ if(cont1==2||cont2==2||cont3==2){
    printf ("El entero %d tiene 1 digito primo.", n);}
    else {
		printf ("El entero %d no tiene digitos primos.", n);}}}}
	else
	printf ("Digite un entero de tres digitos.");
}
/////////////////////////////Funciones principales ciclos////////////////////////
//1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.
int enteroscomprendidos (int n)
{
	int a=0;
	while(a<n){
		if (n>0){
		a++;
		printf ("%d% \n",(a));
		}
		else{
		printf ("Digite un entero mayor que cero.");}
	}
	return a;
}
//2. Leer un número entero y mostrar todos los pares comprendidos entre 1 y el número leído.
int comprendidospares (int n)
{
	int cont=2;
	while(cont<=n){
		printf ("%d% \n",(cont));
		cont=(cont+2);
	    }
	return cont;
}
//3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.
int comprendidosdivisores (int n)
{
	int cont=1;
	while(cont<=n){
		if ((n%cont)==0)
		printf ("%d% \n",(cont));
		cont=(cont+1);
	}
	return cont;
}
//4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.
int enteroscomprendidos2 (int a, int b)
{
	while (a>=0&&b>=0){
		if (a<b){
		a++;
		printf ("%d \n",(a));
	    }
		else if (b<a){
		b++;
		printf ("%d \n",(b));
		}
		else
		return 0;
		}
	return subopciones2 ();
}
//5. Leer dos números y mostrar todos los números terminados en 4 comprendidos entre ellos
int terminadosen4 (int a, int b)
{
	while (a<=b){
		if (a%10==4)
		printf ("%d \n", (a));
		a++;
	}
    if(b<=a){
		if(b%10==4)
		printf ("%d \n", (b));
		b++;
    }
}
//7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100
int enteros1_100 (int a, int b)
{
	while (a<b){
		a++;
		printf ("%d \n",a);	
	}
}
//8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.
int pares20_200 (int a, int b)
{
	while (b>=a){
		printf ("%d \n", a);
		a=a+2;	
	}
}
//9. Mostrar en pantalla todos los números terminados en 6 comprendidos entre 25 y 205.
int terminadosen6 (int a, int b)
{
	while (b>a){
		if (a%10==6)
		printf ("%d \n", a);
		a++;
	}
}
//10. Leer un número entero y determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído.
int sumaenteros1_b (int n)
{
   int res=0;
	while (n>0)
	{
		res=(res+n);
		n--;
	}
	return res;
}
//11. Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros comprendidos entre un dígito y otro.
int enterosentredigitos (int n)
{
	int dig1=(n%10), dig2=(n/10);
	while ((dig1>=dig2)&&(n>9&&n<100)){
		printf ("%d \n", dig2);
		dig2++;
		}
}
//12. Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.
int digitouno (int n)
{
	int dig1=(n/100), dig2=((n%100)/10), dig3=((n%100)%10);
	while (n>99&&n<1000){
		if (dig1==1||dig2==1||dig3==1)
		return 1;
		return 0;
	}
	return subopciones2 ();
}
//13. Leer un entero y mostrar todos los múltiplos de 5 comprendidos entre 1 y el número leído.
int multiplosde5 (int a, int b)
{
	while (b>=a){
		if ((a%5)==0)
		printf ("%d \n", a);
		a++;
	}
}
//14. Mostrar en pantalla los primeros 20 múltiplos de 3.
int multiplosde3 (int n)
{
	int z=1, cont=0, res=0;
	while ((cont<=z)&&cont<=60){  //cont<=60 porque cuando cont=60 se han cumplido los 20 primeros digitos
		if (z%3==0)
			printf ("%d \n", z);
			z++;
			cont++;
	}
	return 0;
}
//15. Escribir en pantalla el resultado de sumar los primeros 20 múltiplos de 3.
int sumamultiplosde3 (int n)
{
	int z=1, cont=0, res=0;
	while (cont<=60){  //cont<=60 porque cuando cont=60 se han cumplido los 20 primeros digitos
		if (z%3==0) 
		    res=(res+z);    
			z++;
			cont++;
	}
	printf ("La suma de los primeros 20 multiplos de 3 es: %d \n", res);
}
//16. Mostrar en pantalla el promedio entero de los n primeros múltiplos de 3 para un número n leído.
int promediomultiplosde3 (int n)
{
	int z=1, pro=0;
	while (z<=n){  
		if (z%3==0) 
			pro=(pro+z);
			z++;
	}
	printf ("El promedio de los multiplos de (3), desde 1 hasta %d es: %d", n, pro);
} 
//18. Leer dos números entero y mostrar todos los múltiplos de 5 comprendidos entre el menor y el mayor.
int multiplosde5comprendidos (int a, int b)
{	
	while (a>=0&&b>=0){
		
		while (a<b){
		    if(a%5==0)
		    printf ("%d es multiplo de 5 \n", a);	
		    a++;
		}
	    while (b<a){
			if(b%5==0)
			printf ("%d es multiplo de 5 \n", b);	
		     b++;
	    }  
	}
	return 0;
}
//19. Leer un número entero y determinar si es primo.
int numeroprimo (int n)
{
	int i=1, cont=0; 
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		cont++;
	}
	if(cont==2)
	return 1;
	else
	return 0;
}
//20. Leer un número entero y determinar cuántos dígitos tiene.
int numeroddigitos (int n)
{
	int acu=0;
	while (n>0)
	{
		n=n/10;
		acu=acu+1;
	}
	printf ("El numero ingresado tiene %d digitos.", acu);
}
//21. Leer un número entero y determinar a cuánto es igual al suma de sus dígitos.
int sumadelosdigitos (int n)
{
	int acu=0;
	while (n>0)
	{
		n=n/10;
		acu=acu+1;
	}
	return ((n%10)+(sumadelosdigitos (n/10)));
}
////////////////////Menu////////////////////////////////////////////////////////
int opciones (void)
{
     printf (" \n  M E N U     P R I N C I P A L   \n\n");
     printf ("1. Menu Condicionales 1_25. \n");
     printf ("2. Menu Ciclos 1_25. \n");
     printf ("0.  Salir   \n");
}
//////////////////Submenu////////////////////////////////////////////////////////
int subopciones (void)
{
     printf ("1 Ejercicio 1.  \n");
     printf ("2 Ejercicio 2.  \n");
     printf ("3 Ejercicio 3.  \n");
     printf ("4 Ejercicio 4.  \n");
     printf ("5 Ejercicio 5.  \n");
     printf ("6 Ejercicio 6.  \n");  
     printf ("7 Ejercicio 7.  \n");
     printf ("9 Ejercicio 9.  \n");
     printf ("10 Ejercicio 10.  \n");
     printf ("11 Ejercicio 11.  \n");
     printf ("12 Ejercicio 12.  \n");
     printf ("13 Ejercicio 13.  \n");
     printf ("14 Ejercicio 14.  \n");
     printf ("15 Ejercicio 15.  \n");
     printf ("16 Ejercicio 16.  \n");
     printf ("17 Ejercicio 17.  \n");
     printf ("18 Ejercicio 18.  \n");
     printf ("19 Ejercicio 19.  \n");
     printf ("21 Ejercicio 21.  \n");
     printf ("22 Ejercicio 22.  \n");
     printf ("23 Ejercicio 23.  \n");
     printf ("0.  Salir   \n");
}
///////////////////////Submenu Ciclos////////////////////////////////////////////
int subopciones2 (void)
{
     printf ("1 Ejercicio 1.  \n");
     printf ("2 Ejercicio 2.  \n");
     printf ("3 Ejercicio 3.  \n");
     printf ("4 Ejercicio 4.  \n");
     printf ("5 Ejercicio 5.  \n");
     printf ("6 Ejercicio 6.  \n");  
     printf ("7 Ejercicio 7.  \n");
     printf ("9 Ejercicio 9.  \n");
     printf ("10 Ejercicio 10.  \n");
     printf ("11 Ejercicio 11.  \n");
     printf ("12 Ejercicio 12.  \n");
     printf ("13 Ejercicio 13.  \n");
     printf ("14 Ejercicio 14.  \n");
     printf ("15 Ejercicio 15.  \n");
     printf ("16 Ejercicio 16.  \n");
     printf ("18 Ejercicio 18.  \n");
     printf ("19 Ejercicio 19.  \n");
     printf ("20 Ejercicio 20.  \n");
     printf ("21 Ejercicio 21.  \n");
     printf ("0.  Salir   \n");
}
/////////////////////Cuerpo/////////////////////////////////////////////////////
int main (void)
{
    int opc=-1, x=0, n=0, sub1_15=-1, subc1_15=-1, a=0, b=0,c=0;
    do {
        system ("cls"); 
        opciones();  
        printf ("Escoja el menu a ejecutar: "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc)
   {
    case 1:
    	 do {
        system ("cls"); 
        subopciones();  
        printf ("Escoja el programa a ejecutar: ");  
        scanf ("%d",&sub1_15);                                    
        switch (sub1_15)
        {
   	    case 1: 
                  printf ("\n Digite el número a evaluar :  ");
                  scanf ("%d",&n);                                  
			      if (entero(n))                                
                  printf ("%d termina en 4 \n", n);
                  else
                  printf ("%d no termina en 4 \n ", n);
                  getch();
                  break; 
        case 2: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&n);                                  
				 if (enttresdig(n))                    
                     printf ("%d tiene tres digitos.", n);
                 else
                 printf ("%d no es de tres digitos. ", n);
                 getch();
                 break;     
		case 3: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&n);                                  
				 if (enteronegativo(n))                    
                     printf ("%d es un entero negativo.", n);
                 else
                     printf ("%d es un entero positivo. ", n);
                 getch();
                 break;       
        case 4: 
                 printf ("\n Ingrese un numero de dos digitos:  ");
                 scanf ("%d",&n);                                 
                 printf ("La suma de los digitos de %d es : %d",n,sumadigitos(n));
                 getch();                                         
                 break;  
        case 5: 
                 printf ("\n Digite un número de dos digitos:  ");
                 scanf ("%d",&n);                                  
				 if (digitospares(x))
                     printf ("Los digitos de %d son pares.", n);
                 else
                     printf ("Los digitos de %d no son pares.", n);     
                 getch();
                 break;         
        case 6: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&x);                                  
				 if (primo(x))                                
                     printf ("%d es primo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                 getch();
                 break; 
        case 7: 
                 printf ("\n Digite el número a evaluar :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
				 if (primonegativo(x))                                  // usa la libreria stdio.h 
                     printf ("%d es primo Negativo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                 getch();
				 break;	
		case 9: 
                 printf ("\n Digite un número de dos digitos :  "); // usa la libreria stdio.h 
                 scanf ("%d",&n);                                   // usa la libreria stdio.h 
				 if (digitosmultiplos(n))                                  // usa la libreria stdio.h 
                     printf ("Ningun digito es múltiplo del otro. \n ");
                 else
                     printf ("Un digito es múltiplo del otro\n ");
                 getch();
				 break;	
		case 10: 
                 printf ("\n Digite un número de dos digitos :  "); 
                 scanf ("%d",&n);                                  
				 if (digitosiguales(n))                                  
                     printf ("Ambos digitos son iguales. \n ");
                 else
                     printf ("Ambos digitos NO son iguales. \n ");
                 getch();
				 break;	
		case 11: 
                 printf ("\n Digite el primer numero:  "); 
                 scanf ("%d",&n);  
				 printf ("\n Digite el segundo numero: "); 
                 scanf ("%d",&x);                                
			     if (enteromayor(n,x)) 
			         printf ("El primer entero es mayor. \n ");
				 else
                     printf ("El segundo entero es mayor. \n "); 
                 getch();
				 break;	
		case 12: 
                 printf ("\n Digite el primer numero:  "); 
                 scanf ("%d",&n);  
				 printf ("\n Digite el segundo numero: "); 
                 scanf ("%d",&x);                                
			     if (digitocomun(n,x)) 
			         printf ("Los enteros tienen digitos en comun. \n ");
				 else
                     printf ("Los enteros no tienen dgitos en comun. \n "); 
                 getch();
				 break;	
		case 13: 
                 printf ("\n Digite el primer numero:  "); 
                 scanf ("%d",&n);  
				 printf ("\n Digite el segundo numero: "); 
                 scanf ("%d",&x);                                
			     if (numeropar(n,x)) 
			         printf ("La suma de los enteros %d y %d origina el numero par : %d \n", n, x, numeropar(n,x));
				 else
                     printf ("La suma de los enteros %d y %d NO origina un numero par. \n "); 
                 getch();
				 break;	
		case 14: 
                 printf ("\n Digite el primer numero:  "); 
                 scanf ("%d",&n);  
				 printf ("\n Digite el segundo numero: "); 
                 scanf ("%d",&x);                                
			     if (sumatodosdigitos(n,x)) 
			         printf ("La suma de los enteros %d y %d es :%d \n ", n, x, sumatodosdigitos(n,x));
				 else
                     printf ("Digite enteros de dos digitos. \n "); 
                 getch();
				 break;	
		case 15: 
                 printf ("\n Digite un número de tres digitos :  ");
                 scanf ("%d",&n);                                  
				 if (sumatresdigitos(n))                                
                     printf ("La suma de los tres digitos es :%d \n", sumatresdigitos(n));
                 else
                     printf ("Digite un entero de tres digitos. \n ", x);
                 getch();
                 break; 
        case 16: 
                 printf ("\n Digite un número de tres digitos :  ");
                 scanf ("%d",&n);                                  
				 digitosiguales3 (n);
                 getch();
                 break;
		case 17: 
                 printf ("\n Digite un número de tres digitos :  ");
                 scanf ("%d",&n);                                  
				 digitomayor (n);
                 getch();
                 break;  
        case 18: 
                 printf ("\n Digite un número de tres digitos :  ");
                 scanf ("%d",&n);                                  
				 digitosmultiplos3 (n);
                 getch();
                 break;  
		case 19:
			     printf ("Digita el primer entero de dos digitos.");
	             scanf ("%d",&a);
	             printf ("Digita el segundo entero de dos digitos.");
               	 scanf ("%d",&b);
	             printf ("Digita el tercer entero de dos digitos.");
	             scanf ("%d",&c);
	             digitomayord3numeros (a,b,c);
	             getch ();  
	             break;
	    case 21:
			     printf ("Digita el primer entero de dos digitos.");
	             scanf ("%d",&a);
	             printf ("Digita el segundo entero de dos digitos.");
               	 scanf ("%d",&b);
	             printf ("Digita el tercer entero de dos digitos.");
	             scanf ("%d",&c);
	             mayordelostres (a,b,c);
	             getch ();  
	             break;
	    case 22: 
                 printf ("Digite un número de tres digitos :  ");
                 scanf ("%d",&n);                                  
				 dig1igualdig3 (n);
                 getch();
                 break; 
        case 23:
			     printf ("Digite un entero de tres digitos.");
	             scanf ("%d",&n);
	             numerodprimos (n);
	             getch ();
	             break;
        case 0: 
                 getch();
                 break;
		}
		
           } 
	 while (sub1_15 != 0);
        case 0: 
                 getch();
                 break;
    {
    case 2:
    	 do {
        system ("cls"); 
        subopciones2();  
        printf ("Escoja el programa a ejecutar: ");  
        scanf ("%d",&subc1_15);                                    
        switch (subc1_15)
        {
   	    case 1: 
                  printf ("\n Digite un entero : ");
                  scanf ("%d",&n);
				  enteroscomprendidos (n);                                  
                  getch();
                  break; 
        case 2: 
                  printf ("\n Digite un entero : ");
                  scanf ("%d",&n);
				  comprendidospares (n);                                  
                  getch();
                  break;   
		case 3: 
                  printf ("\n Digite un entero : ");
                  scanf ("%d",&n);
				  comprendidosdivisores (n);                                  
                  getch();
                  break;      
        case 4: 
                 printf ("Ingrese el primer entero :");
                 scanf ("%d",&a);                                 
                 printf ("Ingrese el segundo entero :");
                 scanf ("%d",&b);
                 enteroscomprendidos2 (a, b);
                 getch();                                         
                 break;  
        case 5: 
                 printf ("Ingrese el primer entero :");
                 scanf ("%d",&a);                                 
                 printf ("Ingrese el segundo entero :");
                 scanf ("%d",&b);
                 terminadosen4 (a, b);
                 getch();                                         
                 break;         
        case 6: 
                 printf ("\n Digite el número a evaluar :  ");
                 scanf ("%d",&x);                                  
				 if (primo(x))                                
                     printf ("%d es primo \n", x);
                 else
                     printf ("%d no es primo \n ", x);
                 getch();
                 break; 
        case 7:  printf ("Digite el numero (1) :");
                 scanf ("%d",&a);                                 
                 printf ("Digite el numero (100) :");
                 scanf ("%d",&b);
                 enteros1_100 (a, b);
                 getch();
			 	 break;	
		case 8:  
                 printf ("Digite el numero (20) :");
                 scanf ("%d",&a);                                 
                 printf ("Digite el numero (200) :");
                 scanf ("%d",&b);
                 pares20_200 (a, b);
                 getch();
			 	 break;		
		case 9: 
                 printf ("Digite el numero (25) :");
                 scanf ("%d",&a);                                 
                 printf ("Digite el numero (205) :");
                 scanf ("%d",&b);
                 terminadosen6 (a, b);
                 getch();
			 	 break;
		case 10: 
                 printf ("Digite un numero entero :");
                 scanf ("%d",&n);                                 
                 printf ("La suma de los digitos de 1 hasta %d es :%d", n, sumaenteros1_b (n));
                 getch();
			 	 break;
		case 11: 
                 printf ("Digite un numero de dos digitos :");
                 scanf ("%d",&n);                                 
                 enterosentredigitos (n);
                 getch();
			 	 break;
	    case 12: 
                 printf ("\n Digite un numero entero de tres digitos : "); 
                 scanf ("%d",&n);                              
			     if (digitouno(n)) 
			         printf ("El numero %d tiene el digito 1. \n ", n);
				 else
                     printf ("El numero %d NO tiene el digito 1. \n ", n); 
                 getch();
				 break;	
		case 13:
			     printf ("Digite el numero (1):");
			     scanf ("%d",&a);
			     printf ("Digite un numero entero :");
			     scanf ("%d",&b);
			     multiplosde5 (a, b);
			     getch ();
			     break;
		case 14:
			    // printf ("Digite un numero entero :");
			   //  scanf ("%d",&n);
			     multiplosde3 (n);
			     getch ();
			     break;	 
		case 15: 
			     sumamultiplosde3 (n);
			     getch (); 
				 break; 
		case 16: 
			     printf ("Digite un numero entero :");
			     scanf ("%d",&n);
			     promediomultiplosde3 (n);
			     getch (); 
				 break;	
		case 18:
				 printf ("Digite el primer entero :");
	             scanf ("%d",&a);
	             printf ("Digite el segundo entero :");
	             scanf ("%d",&b);
	             multiplosde5comprendidos (a,b);
	             getch ();   
		 case 19:
			     printf ("Digite un número entero :");
	             scanf ("%d",&n); 	
				 if (numeroprimo(n)) 
			     printf ("%d es un número primo.", n);
				 else
                 printf ("%d No es un número primo.", n);
		case 20: 
			     printf ("Digite un número entero.");
				 scanf ("%d",&n);
				 numeroddigitos (n);
				 getch ();
				 break;	
	    case 21:
			     printf ("Ingrese un numero entero :");
				 scanf ("%d",&n);
				 sumadelosdigitos (n);
				 getch ();
				 break;	  	 	     
        case 0: 
                 getch();
                 break;
		}
		
           } 
	 while (subc1_15 != 0);
                 getch();
                 break;
	}              
	} 
	
    
      }
	 while (opc != 0);
    
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
    getch();                                           // usa la librería conio.h
    return 1;
}
