#include <stdio.h>
#include <locale.h>
#include <math.h>

int distanciaAB (int *a, int *b)
{
    int distanciaTotal, distAB;
    int x1, x2, y1, y2;

    printf ("Digite as coordenadas do ponto A: ");
    scanf ("%d", &x1);
    scanf ("%d", &y1);

    printf ("Digite as coordenadas do ponto B: ");
    scanf ("%d", &x2);
    scanf ("%d", &y2);

    *a = pow(x2 - x1, 2);
    *b = pow(y2 - y1, 2);

    distanciaTotal = *a + *b;

    distAB = sqrt(distanciaTotal);

    printf ("A distância entre A e B é de %d unidades.", distAB);

    return (distAB);
}

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int a,b;

    distanciaAB (&a,&b);

    return (0);
}
