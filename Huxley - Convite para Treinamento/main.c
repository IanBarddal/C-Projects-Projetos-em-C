#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int nDeCompetidores;

    printf ("Digite o número de competidores: ");
    scanf ("%d", &nDeCompetidores);

    int pontuacaoMinima, pontuacaoTotal[nDeCompetidores];
    int pontuacao1;
    int pontuacao2;
    int x;
    int aprovados = 0;

    printf ("Digite a pontuação mínima: ");
    scanf ("%d", &pontuacaoMinima);

    for (x = 0; x < nDeCompetidores; x++)
    {
        printf ("Digite a primeira pontuação: ");
        scanf ("%d", &pontuacao1);

        printf ("Digite a segunda pontuação: ");
        scanf ("%d", &pontuacao2);

        pontuacaoTotal[x] = pontuacao1 + pontuacao2;

        printf ("Pontuação total = %d\n", pontuacaoTotal[x]);

        if (pontuacao1 == 0 || pontuacao2 == 0)
        {
            pontuacaoTotal[x] = 0;
        }

        if (pontuacaoTotal[x] >= pontuacaoMinima)
        {
            aprovados+=1;
        }
    }

    printf ("%d competidores foram aprovados!\n", aprovados);

    return (0);
}
