#include <stdio.h>
#include <locale.h>

float vantagem (float candidato[], float concorrente[], int tamanho)
{
    int x;
    float vantagem1[tamanho];
    float maiorVantagem = 0;

    maiorVantagem = vantagem1[0];
    for (x = 0; x < tamanho; x++)
    {
        printf ("Digite os votos do candidato:\n");
        scanf("%f", &candidato[x]);
    }

    for (x = 0; x < tamanho; x++)
    {
        printf ("Digite os votos do concorrente:\n");
        scanf ("%f", &concorrente[x]);
    }

    for (x = 0; x < tamanho; x++)
    {
        printf ("Esta é a diferença entre votos percentuais:\n");
        vantagem1[x] = candidato[x] - concorrente[x];
        printf ("%.2f\n", vantagem1[x]);

        if (vantagem1[x] > maiorVantagem)
        {
            maiorVantagem = vantagem1[x];
        }

    }

    printf ("Maior vantagem: %.1f", maiorVantagem);

    return (vantagem1[x]);
}

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int tamanho;

    printf ("Digite o tamanho dos vetores com os votos: ");
    scanf ("%d", &tamanho);

    float candidato[tamanho];
    float concorrente[tamanho];

    vantagem (candidato, concorrente, tamanho);

    return (0);
}
