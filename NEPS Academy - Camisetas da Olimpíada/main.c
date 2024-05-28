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

    printf ("Digite o n�mero de premiados: ");
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

    printf ("Escreva o n�mero de camisas P produzidas: ");
    scanf ("%d", &qtdeP);

    printf ("Escreva o n�mero de camisas M produzidas: ");
    scanf ("%d", &qtdeM);

    if (camisasP == qtdeP && camisasM == qtdeM)
    {
        printf ("Todos poder�o ser atendidos");
    }
    else
    {
        printf ("Nem todos poder�o ser atendidos");
    }

    return (0);

}
