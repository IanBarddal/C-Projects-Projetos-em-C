#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x;
    char maoEsquerda = 'I';
    char maoDireita = 'I';
    int numero;

    printf ("Digite um número de 1 a 10: ");
    scanf ("%d", &numero);

    if (numero == 0)
    {
        printf ("*\n*");
    }

    if (numero >= 1 && numero <= 5)
    {
        for (x = 0; x < numero; x++)
        {
            printf ("%c", maoEsquerda);
        }

        putchar ('\n');

        for (x = 0; x < 1; x++)
        {
            printf ("*");
        }
    }
    if (numero > 5)
    {
        for (x = 0; x < 5; x++)
        {
            printf ("%c", maoEsquerda);
        }

        putchar ('\n');

        for (x = 0; x < numero - 5; x++)
        {
            printf ("%c", maoDireita);
        }
    }

    return (0);
}
