#include <stdio.h>
#include <locale.h>

void mmm (int array[20], int *maior, int *menor, float *media)
{
    int x;
    *menor = array[0];
    *maior = array[0];

    for (x = 1; x < 20; x++)
    {
        if (array[x] < *menor)
        {
            *menor = array[x];
        }

        if (array[x] > *maior)
        {
            *maior = array[x];
        }
    }

        *media = (*maior + *menor) / 2.0;

        printf ("O maior número é %d\n", *maior);
        printf ("O menor número é %d\n", *menor);
        printf ("A média entre o maior e o menor número é %.2f\n", *media);

}

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int array[20];
    int menor, maior;
    float media;
    int x;

    printf ("Digite 20 números quaisquer:\n");

    for (x = 0; x < 20; x++)
    {
        scanf ("%d", &array[x]);
    }

    mmm (array, &menor, &maior, &media);

    return (0);

}
