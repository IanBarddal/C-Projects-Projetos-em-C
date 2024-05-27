#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,x,intervalo;

    scanf ("%d %d", &a, &b);

    for (x = a; x <= b; x++)
    {
        intervalo = (pow(a,2)) - 4*a + 5;
        printf ("%d\n", intervalo);
        a= a + 1;
    }

    return (0);
}
