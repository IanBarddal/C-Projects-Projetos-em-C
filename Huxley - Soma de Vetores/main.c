#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, numeros[10];
    int numeros2[10];

    printf ("Preencha o primeiro vetor:\n");

    for (x = 0; x < 10; x++)
    {
        scanf ("%d", &numeros[x]);
    }

    printf ("Preencha o segundo vetor:\n");

    for (x = 0; x < 10; x++)
    {
        scanf ("%d", &numeros2[x]);
    }

    printf ("Este é o vetor somado!\n");

    for (x = 0; x < 10; x++)
    {
        printf ("%d ", numeros[x] + numeros2[x]);
    }

    return (0);
}
