#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int nPremiados;
    int camisasP = 0;
    int camisasM = 0;
    int qtdeP, qtdeM;
    int x;

    printf ("Digite o número de premiados: ");
    scanf ("%d", &nPremiados);

    int camisetas[nPremiados];

    printf ("Digite os tamanhos solicitados pelos premiados:\n");

    for (x = 0; x < nPremiados; x++)
    {
        scanf ("%d", &camisetas[x]);

        if (camisetas[x] == 1)
        {
            camisasP++;
        }

        if (camisetas[x] == 2)
        {
            camisasM++;
        }
    }

    printf ("Escreva o número de camisas P produzidas: ");
    scanf ("%d", &qtdeP);

    printf ("Escreva o número de camisas M produzidas: ");
    scanf ("%d", &qtdeM);

    if (camisasP == qtdeP && camisasM == qtdeM)
    {
        printf ("Todos poderão ser atendidos");
    }
    else
    {
        printf ("Nem todos poderão ser atendidos");
    }

    return (0);

}
