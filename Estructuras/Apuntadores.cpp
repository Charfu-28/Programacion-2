#include <stdio.h>
int suma(int a, int b, int *r)
{
*r = a + b;
}
int main()
{
int x;
suma(7, 5, &x);
printf("7 + 5 = %d", x);
}
