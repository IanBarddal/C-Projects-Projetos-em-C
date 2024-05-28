#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, numero[10];
    int contador = 0;

    printf ("Escreva 10 números:\n");

    for (x = 0; x < 10; x++)
    {
        scanf ("%d", &numero[x]);
    }

    int apareceu;

    printf ("Digite o número que você quer saber se apareceu: ");
    scanf ("%d", &apareceu);

    for (x = 0; x < 10; x++)
    {
        if (numero[x] == apareceu)
        {
            contador++;
        }
    }

    if (contador > 0)
    {
        printf ("SIM!");
    }
    else
    {
        printf ("NÃO!");
    }

    return (0);
}
