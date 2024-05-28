#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int soldadosAliados;
    int tanquesAliados;
    int avioesAliados;
    int lancaMisseisAliados;
    int totalAliados;

    int soldadosInimigos;
    int tanquesInimigos;
    int avioesInimigos;
    int lancaMisseisInimigos;
    int totalInimigos1;

    int reforcosSoldadosInimigos;
    int reforcosTanquesinimigos;
    int reforcosAvioesInimigos;
    int reforcosLancaMisseisInimigos;
    int totalInimigosGeral;

    printf ("Digite a quantidade de soldados aliados: ");
    scanf ("%d", &soldadosAliados);

    printf ("Digite a quantidade de tanques aliados: ");
    scanf ("%d", &tanquesAliados);

    printf ("Digite a quantidade de aviões aliados: ");
    scanf ("%d", &avioesAliados);

    printf ("Digite a quantidade de lança-mísseis aliados: ");
    scanf ("%d", &lancaMisseisAliados);

    totalAliados = soldadosAliados + tanquesAliados + avioesAliados + lancaMisseisAliados;

    putchar ('\n');

    printf ("FORÇAS ALIADAS = %d", totalAliados);

    putchar ('\n');

    printf ("Digite a quantidade de soldados inimigos: ");
    scanf ("%d", &soldadosInimigos);

    printf ("Digite a quantidade de tanques inimigos: ");
    scanf ("%d", &tanquesInimigos);

    printf ("Digite a quantidade de aviões inimigos: ");
    scanf ("%d", &avioesInimigos);

    printf ("Digite a quantidade de lança-mísseis inimigos: ");
    scanf ("%d", &lancaMisseisInimigos);

    totalInimigos1 = soldadosInimigos + tanquesInimigos + avioesInimigos + lancaMisseisInimigos;

    printf ("Digite a quantidade de REFORÇOS de soldados inimigos: ");
    scanf ("%d", &reforcosSoldadosInimigos);

    printf ("Digite a quantidade de REFORÇOS de tanques inimigos: ");
    scanf ("%d", &reforcosTanquesinimigos);

    printf ("Digite a quantidade de REFORÇOS de aviões inimigos: ");
    scanf ("%d", &reforcosAvioesInimigos);

    printf ("Digite a quantidade de REFORÇOS de lança-mísseis inimigos: ");
    scanf ("%d", &reforcosLancaMisseisInimigos);

    totalInimigosGeral = totalInimigos1 + reforcosAvioesInimigos + reforcosLancaMisseisInimigos + reforcosSoldadosInimigos + reforcosTanquesinimigos;

    putchar ('\n');

    printf ("FORÇAS INIMIGAS: %d", totalInimigosGeral);

    printf ("FORÇAS INIMIGAS 50 pc: %lf", totalInimigosGeral*0.50);

    putchar ('\n');

    if (totalAliados > totalInimigosGeral + totalInimigosGeral*0.50 ) /* Está certo */
    {
        printf ("Avançar");
    }
    else if (totalAliados < totalInimigosGeral)
    {
        printf ("Recuar");
    }
    else
    {
        printf ("Permanecer");
    }

    return (0);
}
