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

    printf ("Digite a quantidade de avi�es aliados: ");
    scanf ("%d", &avioesAliados);

    printf ("Digite a quantidade de lan�a-m�sseis aliados: ");
    scanf ("%d", &lancaMisseisAliados);

    totalAliados = soldadosAliados + tanquesAliados + avioesAliados + lancaMisseisAliados;

    putchar ('\n');

    printf ("FOR�AS ALIADAS = %d", totalAliados);

    putchar ('\n');

    printf ("Digite a quantidade de soldados inimigos: ");
    scanf ("%d", &soldadosInimigos);

    printf ("Digite a quantidade de tanques inimigos: ");
    scanf ("%d", &tanquesInimigos);

    printf ("Digite a quantidade de avi�es inimigos: ");
    scanf ("%d", &avioesInimigos);

    printf ("Digite a quantidade de lan�a-m�sseis inimigos: ");
    scanf ("%d", &lancaMisseisInimigos);

    totalInimigos1 = soldadosInimigos + tanquesInimigos + avioesInimigos + lancaMisseisInimigos;

    printf ("Digite a quantidade de REFOR�OS de soldados inimigos: ");
    scanf ("%d", &reforcosSoldadosInimigos);

    printf ("Digite a quantidade de REFOR�OS de tanques inimigos: ");
    scanf ("%d", &reforcosTanquesinimigos);

    printf ("Digite a quantidade de REFOR�OS de avi�es inimigos: ");
    scanf ("%d", &reforcosAvioesInimigos);

    printf ("Digite a quantidade de REFOR�OS de lan�a-m�sseis inimigos: ");
    scanf ("%d", &reforcosLancaMisseisInimigos);

    totalInimigosGeral = totalInimigos1 + reforcosAvioesInimigos + reforcosLancaMisseisInimigos + reforcosSoldadosInimigos + reforcosTanquesinimigos;

    putchar ('\n');

    printf ("FOR�AS INIMIGAS: %d", totalInimigosGeral);

    printf ("FOR�AS INIMIGAS 50 pc: %lf", totalInimigosGeral*0.50);

    putchar ('\n');

    if (totalAliados > totalInimigosGeral + totalInimigosGeral*0.50 ) /* Est� certo */
    {
        printf ("Avan�ar");
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
