#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, N, n;
    int procurado;
    int contador = 0;

    printf ("Determine a quantidade de números: ");
    scanf ("%d", &N);

    printf ("Escreva o número a ser procurado: ");
    scanf ("%d", &procurado);

    for (x = 0; x < N; x++)
    {
        scanf ("%d", &n);

        if (n == procurado)
        {
            contador++;
        }
    }

    printf ("O número %d apareceu %d vezes.", procurado, contador);

    return (0);

}
