#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int portugues, matematica;
    float redacao;
    int aprovado = 0;

    while (portugues > 0)
    {
        scanf ("%d", &portugues);
        scanf ("%d", &matematica);
        scanf ("%f", &redacao);

        if (portugues >= 40 && matematica >= 21 && redacao >= 7)
        {
            aprovado++;
        }
    }

    printf ("Foram aprovados %d candidatos.", aprovado);

    return (0);
}

