#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int numero;
    int maior = 0;

    while (numero != 0)
    {
        scanf ("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
    }

    printf ("%d � o maior n�mero.", maior);

    return (0);
}
