#include <stdio.h>
#include <locale.h>

void maior (int array[], int *maior)
{
    int x;

    *maior = array[0];

    for (x = 0; x < 6; x++)
        {
            if (array[x] > *maior)
            {
                *maior = array[x];
            }
        }

    printf ("%d � o maior n�mero.\n", *maior);
}

void menor (int array[], int *menor)
{
    int x;

    *menor = array[0];

    for (x = 0; x < 6; x++)
        {
            if (array[x] < *menor)
            {
                *menor = array[x];
            }
        }

    printf ("%d � o menor n�mero.\n", *menor);
}

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int array[6];
    int maiorValor, menorValor;
    int x;

    printf("Escreva at� 6 n�meros:");

    for (x = 0; x < 6; x++)
    {
        scanf("%d", &array[x]);
    }

    maior(array, &maiorValor);
    menor(array, &menorValor);

    return 0;
}
