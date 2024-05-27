#include <stdio.h>
#include <locale.h>

void redutor (float *x, float *y);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float x,y;

    printf ("Digite o primeiro valor: ");
    scanf ("%f", &x);

    printf ("Digite o segundo valor: ");
    scanf ("%f", &y);

    redutor (&x, &y);

    return (0);
}

void redutor (float *x, float *y)
{
    *x = *x - *y;

    printf ("%.2f, %.2f", *x, *y);
}
