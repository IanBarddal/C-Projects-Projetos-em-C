#include <stdio.h>

int contaPares (int a)
{
    int contador, digito;

    contador = 0;

    while (a > 0)
    {
        digito = a % 10;

        a /= 10;

        if (digito % 2 == 0)
        {
            contador++;
        }
    }

    printf ("%d\n", contador);

    return (contador);
}

int main ()
{
    int a;

    scanf ("%d", &a);

    contaPares (a);

    return (0);
}
