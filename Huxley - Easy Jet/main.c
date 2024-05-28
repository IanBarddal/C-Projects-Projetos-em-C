#include <stdio.h>

int main ()
{
    float largura;
    float altura;
    float comprimento;

    scanf ("%f", &largura);
    scanf ("%f", &comprimento);
    scanf ("%f", &altura);

    if (largura <= 45 && altura <= 25 && comprimento <= 56)
    {
        printf ("PERMITIDA");
    }
    else
    {
        printf ("PROIBIDA");
    }

    return (0);
}
