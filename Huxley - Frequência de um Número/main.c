#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, N, n;
    int procurado;
    int contador = 0;

    printf ("Determine a quantidade de n�meros: ");
    scanf ("%d", &N);

    printf ("Escreva o n�mero a ser procurado: ");
    scanf ("%d", &procurado);

    for (x = 0; x < N; x++)
    {
        scanf ("%d", &n);

        if (n == procurado)
        {
            contador++;
        }
    }

    printf ("O n�mero %d apareceu %d vezes.", procurado, contador);

    return (0);

}
