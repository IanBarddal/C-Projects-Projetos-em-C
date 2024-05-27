#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculaArea (float raio);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float raio1, raio2;

    scanf ("%f", &raio1);
    scanf ("%f", &raio2);

    calculaArea (raio1);
    calculaArea (raio2);

    if (calculaArea (raio1) > calculaArea (raio2))
    {
        printf ("Primeiro círculo");
    }
    else if (calculaArea (raio2) > calculaArea (raio1))
    {
        printf ("Segundo círculo");
    }
    else
    {
        printf ("Iguais");
    }

    return (0);
}

float calculaArea (float raio)
{
    float area;
    area = 3.14 * pow(raio,2);

    return (area);
}
