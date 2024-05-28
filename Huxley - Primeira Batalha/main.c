#include <stdio.h>

int main ()
{
    int numero1, numero2, numero3;

    scanf ("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 == 0 || numero2 == 0 || numero3 == 0)
    {
        printf ("Nao");
    }

    else if (numero1 > 10 && numero2 % 2 == 0 && numero3 != 0)
    {
        printf ("Sim");
    }

    else if (numero1 > 10 && numero3 % 2 == 0 && numero2 != 0)
    {
        printf ("Sim");
    }

    else if (numero1 % 2 == 0 && numero2 > 10)
    {
        printf ("Sim");
    }
    else if (numero1 % 2 == 0 && numero3 > 10)
    {
        printf ("Sim");
    }
    else if (numero2 > 10 && numero3 % 2 == 0)
    {
        printf ("Sim");
    }

    else if (numero2 % 2 == 0 && numero3 > 10)
    {
        printf ("Sim");
    }

    else
    {
        printf ("Nao");
    }

    return (0);
}
