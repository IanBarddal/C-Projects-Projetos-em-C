#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int posicoes;
    int atirar;

    printf ("Digite o n�mero de posi��es: ");
    scanf ("%d", &posicoes);

    int discoVoador;

    printf ("Digite a posi��o do disco voador: ");
    scanf ("%d", &discoVoador);

    int aviao;

    printf ("Digite a posi��o do avi�o: ");
    scanf ("%d", &aviao);

    if (aviao < discoVoador)
    {
        atirar = discoVoador - aviao;
        printf ("%d", atirar);
    }

    if (aviao > discoVoador)
    {
        atirar = (posicoes - aviao) + (discoVoador - 0);
        printf ("%d", atirar);
    }

    if (aviao == discoVoador)
    {
        atirar = discoVoador - aviao;
        printf ("%d", atirar);
    }

    return (0);

}
