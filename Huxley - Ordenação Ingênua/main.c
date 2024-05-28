#include <stdio.h>

int main ()
{
    int tamanho;
    int inner, outer, aux, x;

    scanf ("%d", &tamanho);

    int array[tamanho];

    for (x = 0; x < tamanho; x++)
    {
        scanf ("%d", &array[x]);
    }

    for (outer = 0; outer < tamanho-1; outer++)
        {
            for (inner = outer + 1; inner < tamanho; inner++)
            {
                if (array[outer] > array[inner])
                {
                    aux = array [outer];
                    array [outer] = array [inner];
                    array [inner] = aux;
                }
            }
        }
    for (x = 0; x < tamanho; x++)
    {
        printf ("[%d]", array[x]);
    }

    return (0);
}
