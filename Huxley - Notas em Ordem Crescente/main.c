#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, a, b, temp;
    int notas[3];

    for (x = 0; x < 3; x++)
    {
        printf ("Digite a %dª nota: ", x+1);
        scanf ("%d", &notas[x]);
    }

    for (a = 0; a < 3-1; a++)
    {
        for (b = a + 1; b < 3; b++)
        {
            if (notas[a] > notas[b])
            {
                temp = notas[a];
                notas[a] = notas[b];
                notas[b] = temp;
            }
        }
    }

    for (x = 0; x < 3; x++)
    {
        printf ("%d\n", notas[x]);
    }

    return (0);
}
