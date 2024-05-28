#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int a, b, temp;
    int n, x;

    printf ("Digite o tamanho do array de números: ");
    scanf ("%d", &n);

    int numeros[n];

    printf ("Digite os números:\n");

    for (x = 0; x < n; x++)
    {
        scanf ("%d", &numeros[x]);
    }

    for (a = 0; a < n-1; a++)
        {
            for (b = a + 1; b < n; b++)
            {
                if (numeros[a] > numeros[b])
                {
                    temp = numeros[a];
                    numeros[a] = numeros[b];
                    numeros[b] = temp;
                }
            }
        }

    for (x = 0; x < n; x++)
    {
        printf ("%d\t", numeros[x]);
    }

    return (0);
}
