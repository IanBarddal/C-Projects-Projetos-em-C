#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int tamanho, x;

    printf ("Digite o tamanho do tabuleiro: ");
    scanf ("%d", &tamanho);

    int mina[tamanho];

    for (x = 0; x < tamanho; x++)
    {
        scanf ("%d", &mina[x]);
    }

    putchar ('\n');

    for (x = 0; x < tamanho; x++)
    {
        if (mina[x] == 0)
        {

            if (mina[x-1] + mina[x] + mina[x+1] == 0)
            {
                printf ("0\n");
            }
            else if (mina[x-1] + mina[x] + mina[x+1] == 1)
            {
                printf ("1\n");
            }

            else if (mina[x-1] + mina[x] + mina[x+1] == 2)
            {
                printf ("2\n");
            }

            else if (mina[x-1] + mina[x] + mina[x+1] == 3)
            {
                printf ("3\n");
            }

            else if (mina[x] + mina[x+1] == 2)
            {
                printf ("2\n");
            }

            else if (mina[x] + mina[x+1] == 2)
            {
                printf ("2\t");
            }

            else if (mina[x] + mina[x+1] == 1)
            {
                printf ("1\n");
            }

            else if (mina[x-1] + mina[x] == 1)
            {
                printf ("1\n");
            }

            else if (mina[x-1] + mina[x] == 0)
            {
                printf ("0\n");
            }

            else if (mina[x-2] + mina[x-1] + mina[x] == 0)
            {
                printf ("0\n");
            }

        }

        if (mina[x] == 1)
        {
            if (mina[x-1] + mina[x] + mina[x+1] == 1)
            {
                printf ("1\n");
            }

            else if (mina[x-1] + mina[x] + mina[x+1] == 2)
            {
                printf ("2\n");
            }

            else if (mina[x-1] + mina[x] + mina[x+1] == 3)
            {
                printf ("3\n");
            }

            else if (mina[x] + mina[x+1] == 1)
            {
                printf ("1\n");
            }

            else if (mina[x] + mina[x+1] == 2)
            {
                printf ("2\n");
            }

            else if (mina[x-1] + mina[x] == 2)
            {
                printf ("2\n");
            }

            else if (mina[x-1] + mina[x] == 1)
            {
                printf ("1\n");
            }
        }
    }

    return (0);
}
