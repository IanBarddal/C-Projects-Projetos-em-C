#include <stdio.h>

/* Calculando o fatorial de um número */

int main ()
{
    int x,n;

    scanf ("%d", &n);

    if (n < 0)
    {
        printf ("Digite um numero inteiro:\n");
        printf ("Fatorial: 1");
    }

    else
    {
        for (x = n; n > 1; n--)
        {
            x = x*(n-1);
        }

        printf ("Digite um numero inteiro:\n");
        printf ("Fatorial: %d\n", x);
    }

    return (0);
}
