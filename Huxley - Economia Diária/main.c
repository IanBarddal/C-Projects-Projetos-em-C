#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x;
    int metaCumprida = 0;
    float valorAtual[7];
    float total = 0.0;

    for (x = 0; x < 7; x++)
    {
        scanf ("%f", &valorAtual[x]);
        total += valorAtual[x];
    }

    for (x = 0; x < 7; x++)
    {
        if (valorAtual[x+1] - valorAtual[x] >= 0.50)
        {
            metaCumprida++;
        }
    }

    printf ("Poliana depositou R$ %.2f.\n", total);
    printf ("Ela cumpriu a meta durante %d dias.", metaCumprida);

    return (0);
}
