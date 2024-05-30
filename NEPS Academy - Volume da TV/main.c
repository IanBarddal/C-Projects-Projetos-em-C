#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int volumeAtual;
    int pressao, volume;
    int mudancas;
    int x;

    printf ("Digite o volume atual da TV: ");
    scanf ("%d", &volumeAtual);

    printf ("Digite o número de vezes que os botões de volume foram apertados: ");
    scanf ("%d", &mudancas);

    volume = volumeAtual;

    for (x = 0; x < mudancas; x++)
    {
        scanf ("%d", &pressao);
        volume += pressao;

        if (volume > 100)
        {
            volume = 100;
        }

        if (volume < 0)
        {
            volume = 0;
        }

        printf ("O volume atual é %d\n", volume);
    }

    return (0);

}
