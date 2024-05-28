#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int numeroBandejas;
    int x, latas;
    int copos;
    int coposQuebrados = 0;

    printf ("Quantas bandejas? ");
    scanf ("%d", &numeroBandejas);

    for (x = 0; x < numeroBandejas; x++)
    {
        printf ("Quantas latas? ");
        scanf ("%d", &latas);

        printf ("Quantos copos? ");
        scanf ("%d", &copos);

        if (latas > copos)
        {
            coposQuebrados += copos;
        }
    }

    printf ("O garçom quebrou %d copos", coposQuebrados);

    return (0);
}
