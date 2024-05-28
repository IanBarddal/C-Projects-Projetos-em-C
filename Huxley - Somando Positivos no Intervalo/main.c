#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int a,b,x;
    int soma = 0;

    printf ("Digite o começo do intervalo: ");
    scanf ("%d", &a);

    printf ("Digite o final do intervalo: ");
    scanf ("%d", &b);

    if (a > b)
    {
        for (x = a; x >= b; x--)
        {
            if (x > 0)
            {
                soma+=x;
            }
        }

        printf ("A soma dos inteiros positivos é %d", soma);
    }

    if (b > a)
    {
        for (x = a; x <= b; x++)
        {
            if (x > 0)
            {
                soma+=x;
            }
        }

        printf ("A soma dos inteiros positivos é %d", soma);
    }


    return (0);
}
