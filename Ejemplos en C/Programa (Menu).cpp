#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Math.h>

int opciones (void); 
float AreaCirculo (float);
float AreaCuadrado (float);
float VolumenCubo (float);
float VolumenEsfera (float);
float AreaResiRectangulo (float , float , float);
float VolumenResiCuboEsfe (float , float);
float AreaTrepecio (float , float , float);
float VelocidadConst (float , float);
float DisTiroParabolico (float , float , float);
int RaizReal (int , int , int);


//1. Funcion para hallar el Área de un circulo.
float AreaCirculo  (float r)
{
      float circulo=0;
      if (r>0)
         {         
              circulo=(3.1416*(r*r));
              return circulo;
         }
      else
      return opciones();
}

//2. Funcion para hallar el Área de un Cuadrado.
float AreaCuadrado (float l)
{
      float cuad=0;
      if (l>0)
         {
              cuad=(l*l);
              return cuad;
         }
      else 
      return opciones();
}

//3. Funcion para hallar el Volumen de un cubo de lado L.
float VolumenCubo (float L)
{
      float volucub=0;
      if (L>0)
         {
              volucub=(L*L*L);
              return volucub;
         }
      else
      return opciones();     
}

//4. Funcion para hallar el Volumen de una esfera de radio R. 
float VolumenEsfera (float r)
{
      float volumesfe=0;
      if (r>0)
         {    
              volumesfe=(r*r*r*(3.1416*(4/3)));
              return volumesfe;
         }
      else
      return opciones();
}

//5. Funcion para hallar el Área  residual  de  un  rectángulo  de  base  b,  altura  h
//que tiene  inscrito  un cuadrado de lado m con m<b y m<h. 
float AreaResiRectangulo (float b, float h, float m)
{
      float resirect=0;
      if ((m<b)&&(m<h))
      {
         resirect=((b*h)-(m*m));
         return resirect;
         }
      else
      return opciones();
}

//6. Funcion para hallar el Volumen residual de un cubo de lado L, que tiene inscrita una esfera de R con R < L/2
float VolumenResiCuboEsfe (float l, float r)
{
      if (r<(l/2))
      return ((l*l*l)-((4/3)*3.1416*r*r*r));
}

//7. Funcion para hallar el Área de un trapecio con base mayor B, base menor b y altura h.
float AreaTrepecio (float B, float b, float h)
{
      if (B>b)
      return (h*((B-b)/2));
}

//8. Funcion para hallar la Velocidad constante de un cuerpo igual a distancia/ tiempo.
float VelocidadConst (float d, float t)
{
    if ((d>=0)&&(t>=0))
    return (d/t);
}

//9. Funcion para hallar la Distancia  de  un  tiro  parabólico  que  es  igual  a  ½  aceleración *  tiempo2 + velocidad inicial * tiempo.
float DisTiroParabolico (float t, float v, float a)
{
      if (((t>=0)&&(v>=0))&&(a>=0))
      return (((1/2)*a*t*t)+(v*t));
}

//10. Funcion para hallar las Raíces reales de un polinomio ax2 + bx + c 
int RaizReal (int a, int b, int c)
{
          if ((a>0)&&(c<0))
          return ((-b)*(sqrt(4*a*c))/(2*a));
}

 
int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1. Hallar el área de un circulo.        \n");
     printf ("2. hallar el Área de un Cuadrado.        \n");
     printf ("3. hallar el Volumen de un cubo.         \n");
     printf ("4. hallar el Volumen de una esfera.      \n");
     printf ("5. hallar el Área  residual  de  un  rectángulo que tiene  inscrito  un cuadrado.      \n");
     printf ("6. hallar el Volumen residual de un cubo.      \n");
     printf ("7. hallar el Área de un trapecio         \n");
     printf ("8. hallar la Velocidad constante de un cuerpo                \n");
     printf ("9. hallar la Distancia  de  un  tiro  parabólico             \n");
     printf ("10. hallar la Distancia  de  un  tiro  parabólico            \n");
     printf ("0.  Salir   \n");
}


int main (void)
{
    int opc=-1, x=0;
    float r=0;
    do {
        system ("cls"); 
         
        opciones();                                    // se utiliza la librería stdlib.h, sirve para limpiar la pantalla
        printf ("Ingrese la opción seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1: 
                 printf ("\n Ingrese el valor del radio del circulo para hallar su área:  ");
                 scanf ("%f",&r);                                 
                 printf ("%f", AreaCirculo(r));
                 getch();                                         
                 break;                      
        
		case 2: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 3: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 4: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 5: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 6: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 7: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 8: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 9: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break;
        case 10: 
                 printf ("\n Ingrese el valor del número entero que desea calcular su factorial Iterativo :  "); // usa la libreria stdio.h 
               //  scanf ("%d",&x);                       
               //printf ("%d",);
                 getch();
                 break; 
        case 0: 
                 getch();
                 break;     
        }
    } while (opc != 0);
     
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); 
     
    getch();                                     
}
